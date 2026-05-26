#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

#include <peel/GObject/Type.h>
#include <peel/RefPtr.h>
#include <peel/FloatPtr.h>
#include <peel/UniquePtr.h>
#include <peel/ArrayRef.h>
#include <peel/String.h>
#include <peel/signal.h>
#include <peel/callback.h>
#include <peel/property.h>
#include <peel/lang.h>
#include <cstdint>
#include <utility>
#include <gdk/gdk.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
} /* namespace GLib */

namespace GObject
{
class Object;
struct Value;
} /* namespace GObject */

namespace Gdk
{
class Clipboard;
class /* record */ ContentFormats;
class ContentProvider;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class OutputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gdk::ContentProvider> ()
{
  return gdk_content_provider_get_type ();
}


namespace Gdk
{
class ContentProvider : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ContentProvider () = delete;
  ContentProvider (const ContentProvider &) = delete;
  ContentProvider (ContentProvider &&) = delete;
  ContentProvider &
  operator = (const ContentProvider &) = delete;
  ContentProvider &
  operator = (ContentProvider &&) = delete;
protected:
  ~ContentProvider () = default;
public:

  peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::RefPtr<ContentProvider>
  create_for_bytes (const char *mime_type, GLib::Bytes *bytes) noexcept
  {
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GdkContentProvider *_peel_return = gdk_content_provider_new_for_bytes (mime_type, _peel_bytes);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentProvider>::adopt_ref (reinterpret_cast<ContentProvider *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<ContentProvider>
  create_for_value (const GObject::Value *value) noexcept
  {
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    ::GdkContentProvider *_peel_return = gdk_content_provider_new_for_value (_peel_value);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentProvider>::adopt_ref (reinterpret_cast<ContentProvider *> (_peel_return));
  }

  template<typename T>
  static peel::RefPtr<ContentProvider>
  create_typed (typename GObject::Value::Traits<T>::UnownedType value) noexcept
  {
    GObject::Value _peel_value { GObject::Type::of<T> () };
    _peel_value.set<T> (value);
    ::GValue *_peel_value_ref = reinterpret_cast<::GValue *> (&_peel_value);
    ::GdkContentProvider *_peel_return = gdk_content_provider_new_for_value (_peel_value_ref);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentProvider>::adopt_ref (reinterpret_cast<ContentProvider *> (_peel_return));
  }

  static peel::RefPtr<ContentProvider>
  create_union (peel::UniquePtr<peel::RefPtr<ContentProvider>[]> providers) noexcept
  {
    gsize _peel_n_providers;
    ::GdkContentProvider **_peel_providers = (_peel_n_providers = providers.size (), reinterpret_cast<::GdkContentProvider **> (std::move (providers).release_ref ()));
    ::GdkContentProvider *_peel_return = gdk_content_provider_new_union (_peel_providers, _peel_n_providers);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentProvider>::adopt_ref (reinterpret_cast<ContentProvider *> (_peel_return));
  }

  void
  content_changed () noexcept
  {
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    gdk_content_provider_content_changed (_peel_this);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_value (GObject::Value *value, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_content_provider_get_value (_peel_this, _peel_value, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<ContentFormats>
  ref_formats () noexcept
  {
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    ::GdkContentFormats *_peel_return = gdk_content_provider_ref_formats (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  peel::RefPtr<ContentFormats>
  ref_storable_formats () noexcept
  {
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    ::GdkContentFormats *_peel_return = gdk_content_provider_ref_storable_formats (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2, 3)
  void
  write_mime_type_async (const char *mime_type, Gio::OutputStream *stream, int io_priority, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    ::GOutputStream *_peel_stream = reinterpret_cast<::GOutputStream *> (stream);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    gdk_content_provider_write_mime_type_async (_peel_this, mime_type, _peel_stream, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  write_mime_type_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_content_provider_write_mime_type_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_content_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ContentProvider, void ()>::_peel_connect_by_name (this, "content-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_content_changed (HandlerObject *object, void (HandlerObject::*handler_method) (ContentProvider *), bool after = false) noexcept
  {
    return Signal<ContentProvider, void ()>::_peel_connect_by_name (this, "content-changed", object, handler_method, after);
  }

  static peel::Property<ContentFormats>
  prop_formats ()
  {
    return peel::Property<ContentFormats> { "formats" };
  }

  static peel::Property<ContentFormats>
  prop_storable_formats ()
  {
    return peel::Property<ContentFormats> { "storable-formats" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<ContentProvider> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_attach_clipboard (Clipboard *clipboard) noexcept
  {
    ::GdkContentProviderClass *_peel_class = reinterpret_cast<::GdkContentProviderClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    ::GdkClipboard *_peel_clipboard = reinterpret_cast<::GdkClipboard *> (clipboard);
    _peel_class->attach_clipboard (_peel_this, _peel_clipboard);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_content_changed () noexcept
  {
    ::GdkContentProviderClass *_peel_class = reinterpret_cast<::GdkContentProviderClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    _peel_class->content_changed (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_detach_clipboard (Clipboard *clipboard) noexcept
  {
    ::GdkContentProviderClass *_peel_class = reinterpret_cast<::GdkContentProviderClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    ::GdkClipboard *_peel_clipboard = reinterpret_cast<::GdkClipboard *> (clipboard);
    _peel_class->detach_clipboard (_peel_this, _peel_clipboard);
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_nonnull_args (2)
  bool
  parent_vfunc_get_value (GObject::Value *value, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkContentProviderClass *_peel_class = reinterpret_cast<::GdkContentProviderClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->get_value (_peel_this, _peel_value, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<ContentFormats>
  parent_vfunc_ref_formats () noexcept
  {
    ::GdkContentProviderClass *_peel_class = reinterpret_cast<::GdkContentProviderClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    ::GdkContentFormats *_peel_return = _peel_class->ref_formats (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<ContentFormats>
  parent_vfunc_ref_storable_formats () noexcept
  {
    ::GdkContentProviderClass *_peel_class = reinterpret_cast<::GdkContentProviderClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    ::GdkContentFormats *_peel_return = _peel_class->ref_storable_formats (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_write_mime_type_async (const char *mime_type, Gio::OutputStream *stream, int io_priority, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GdkContentProviderClass *_peel_class = reinterpret_cast<::GdkContentProviderClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    ::GOutputStream *_peel_stream = reinterpret_cast<::GOutputStream *> (stream);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    _peel_class->write_mime_type_async (_peel_this, mime_type, _peel_stream, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_write_mime_type_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkContentProviderClass *_peel_class = reinterpret_cast<::GdkContentProviderClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkContentProvider *_peel_this = reinterpret_cast<::GdkContentProvider *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->write_mime_type_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GdkContentProviderClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_attach_clipboard ()
    {
      ::GdkContentProviderClass *klass = reinterpret_cast<::GdkContentProviderClass *> (this);
      klass->attach_clipboard = +[] (::GdkContentProvider *provider, ::GdkClipboard *clipboard) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (provider);
        Clipboard *_peel_clipboard = reinterpret_cast<Clipboard *> (clipboard);
        _peel_this->DerivedClass::vfunc_attach_clipboard (_peel_clipboard);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_content_changed ()
    {
      ::GdkContentProviderClass *klass = reinterpret_cast<::GdkContentProviderClass *> (this);
      klass->content_changed = +[] (::GdkContentProvider *provider) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (provider);
        _peel_this->DerivedClass::vfunc_content_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_detach_clipboard ()
    {
      ::GdkContentProviderClass *klass = reinterpret_cast<::GdkContentProviderClass *> (this);
      klass->detach_clipboard = +[] (::GdkContentProvider *provider, ::GdkClipboard *clipboard) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (provider);
        Clipboard *_peel_clipboard = reinterpret_cast<Clipboard *> (clipboard);
        _peel_this->DerivedClass::vfunc_detach_clipboard (_peel_clipboard);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_value ()
    {
      ::GdkContentProviderClass *klass = reinterpret_cast<::GdkContentProviderClass *> (this);
      klass->get_value = +[] (::GdkContentProvider *provider, ::GValue *value, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (provider);
        GObject::Value *_peel_value = reinterpret_cast<GObject::Value *> (value);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_value (_peel_value, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_ref_formats ()
    {
      ::GdkContentProviderClass *klass = reinterpret_cast<::GdkContentProviderClass *> (this);
      klass->ref_formats = +[] (::GdkContentProvider *provider) -> ::GdkContentFormats *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (provider);
        peel::RefPtr<ContentFormats> _peel_return = _peel_this->DerivedClass::vfunc_ref_formats ();
        return reinterpret_cast<::GdkContentFormats *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_ref_storable_formats ()
    {
      ::GdkContentProviderClass *klass = reinterpret_cast<::GdkContentProviderClass *> (this);
      klass->ref_storable_formats = +[] (::GdkContentProvider *provider) -> ::GdkContentFormats *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (provider);
        peel::RefPtr<ContentFormats> _peel_return = _peel_this->DerivedClass::vfunc_ref_storable_formats ();
        return reinterpret_cast<::GdkContentFormats *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: write_mime_type_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_write_mime_type_finish ()
    {
      ::GdkContentProviderClass *klass = reinterpret_cast<::GdkContentProviderClass *> (this);
      klass->write_mime_type_finish = +[] (::GdkContentProvider *provider, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (provider);
        Gio::AsyncResult *_peel_result = reinterpret_cast<Gio::AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_write_mime_type_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GdkContentProviderClass),
                 "ContentProvider::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GdkContentProviderClass),
                 "ContentProvider::Class align mismatch");
}; /* class ContentProvider */

static_assert (sizeof (ContentProvider) == sizeof (::GdkContentProvider),
               "ContentProvider size mismatch");
static_assert (alignof (ContentProvider) == alignof (::GdkContentProvider),
               "ContentProvider align mismatch");

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gdk/ContentFormats.h>
