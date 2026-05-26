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
class Display;
class Texture;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class InputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Clipboard> ()
{
  return gdk_clipboard_get_type ();
}


namespace Gdk
{
class Clipboard : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Clipboard () = delete;
  Clipboard (const Clipboard &) = delete;
  Clipboard (Clipboard &&) = delete;
  Clipboard &
  operator = (const Clipboard &) = delete;
  Clipboard &
  operator = (Clipboard &&) = delete;
  ~Clipboard () = delete;
public:

  ContentProvider *
  get_content () noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    ::GdkContentProvider *_peel_return = gdk_clipboard_get_content (_peel_this);
    return reinterpret_cast<ContentProvider *> (_peel_return);
  }

  peel_returns_nonnull
  Display *
  get_display () noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    ::GdkDisplay *_peel_return = gdk_clipboard_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Display *> (_peel_return);
  }

  peel_returns_nonnull
  ContentFormats *
  get_formats () noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    ::GdkContentFormats *_peel_return = gdk_clipboard_get_formats (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<ContentFormats *> (_peel_return);
  }

  bool
  is_local () noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    gboolean _peel_return = gdk_clipboard_is_local (_peel_this);
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  read_async (peel::StrvRef mime_types, int io_priority, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    const char **_peel_mime_types = const_cast<const char **> (mime_types.data ());
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
    gdk_clipboard_read_async (_peel_this, _peel_mime_types, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  peel::RefPtr<Gio::InputStream>
  read_finish (Gio::AsyncResult *result, const char **out_mime_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GInputStream *_peel_return = gdk_clipboard_read_finish (_peel_this, _peel_result, out_mime_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Gio::InputStream>::adopt_ref (reinterpret_cast<Gio::InputStream *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  read_text_async (Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
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
    gdk_clipboard_read_text_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::String
  read_text_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    char *_peel_return = gdk_clipboard_read_text_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  template<typename AsyncReadyCallback>
  void
  read_texture_async (Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
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
    gdk_clipboard_read_texture_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Texture>
  read_texture_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GdkTexture *_peel_return = gdk_clipboard_read_texture_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Texture>::adopt_ref (reinterpret_cast<Texture *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  read_value_async (GObject::Type type, int io_priority, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
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
    gdk_clipboard_read_value_async (_peel_this, type, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  const GObject::Value *
  read_value_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    const ::GValue *_peel_return = gdk_clipboard_read_value_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return reinterpret_cast<const GObject::Value *> (_peel_return);
  }

  template<typename T>
  void
  set (typename GObject::Value::Traits<T>::UnownedType value) noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    GObject::Value _peel_value { GObject::Type::of<T> () };
    _peel_value.set<T> (value);
    ::GValue *_peel_value_ref = reinterpret_cast<::GValue *> (&_peel_value);
    gdk_clipboard_set_value (_peel_this, _peel_value_ref);
  }

  bool
  set_content (ContentProvider *provider) noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    ::GdkContentProvider *_peel_provider = reinterpret_cast<::GdkContentProvider *> (provider);
    gboolean _peel_return = gdk_clipboard_set_content (_peel_this, _peel_provider);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set_text (const char *text) noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    gdk_clipboard_set_text (_peel_this, text);
  }

  peel_nonnull_args (2)
  void
  set_texture (Texture *texture) noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
    gdk_clipboard_set_texture (_peel_this, _peel_texture);
  }

  void
  set_valist (GObject::Type type, va_list args) noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    gdk_clipboard_set_valist (_peel_this, type, args);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_value (const GObject::Value *value) noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    gdk_clipboard_set_value (_peel_this, _peel_value);
  }

  template<typename AsyncReadyCallback>
  void
  store_async (int io_priority, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
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
    gdk_clipboard_store_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  store_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkClipboard *_peel_this = reinterpret_cast<::GdkClipboard *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_clipboard_store_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Clipboard, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Clipboard *), bool after = false) noexcept
  {
    return Signal<Clipboard, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  static peel::Property<ContentProvider>
  prop_content ()
  {
    return peel::Property<ContentProvider> { "content" };
  }

  static peel::Property<Display>
  prop_display ()
  {
    return peel::Property<Display> { "display" };
  }

  static peel::Property<ContentFormats>
  prop_formats ()
  {
    return peel::Property<ContentFormats> { "formats" };
  }

  static peel::Property<bool>
  prop_local ()
  {
    return peel::Property<bool> { "local" };
  }
}; /* class Clipboard */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gdk/Texture.h>
#include <peel/Gio/InputStream.h>
