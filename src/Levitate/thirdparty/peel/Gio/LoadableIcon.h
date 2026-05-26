#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/GObject/TypeInterface.h>
#include <peel/Gio/Icon.h>

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
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class InputStream;
class /* interface */ LoadableIcon;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::LoadableIcon> ()
{
  return g_loadable_icon_get_type ();
}


namespace Gio
{
class /* interface */ LoadableIcon : public Icon
/* requires Icon */
{
private:
  LoadableIcon () = delete;
  LoadableIcon (const LoadableIcon &) = delete;
  LoadableIcon (LoadableIcon &&) = delete;

  LoadableIcon &
  operator = (const LoadableIcon &) = delete;
  LoadableIcon &
  operator = (LoadableIcon &&) = delete;

protected:
  ~LoadableIcon () = default;

public:

  peel_arg_out (3)
  peel::RefPtr<InputStream>
  load (int size, peel::String *type, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GLoadableIcon *_peel_this = reinterpret_cast<::GLoadableIcon *> (this);
    char *_peel_type;
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GInputStream *_peel_return = g_loadable_icon_load (_peel_this, size, type ? &_peel_type : nullptr, _peel_cancellable, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (type)
          *type = peel::String::adopt_string (_peel_type);
      }
    return peel::RefPtr<InputStream>::adopt_ref (reinterpret_cast<InputStream *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  load_async (int size, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GLoadableIcon *_peel_this = reinterpret_cast<::GLoadableIcon *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_loadable_icon_load_async (_peel_this, size, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  peel::RefPtr<InputStream>
  load_finish (AsyncResult *res, peel::String *type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GLoadableIcon *_peel_this = reinterpret_cast<::GLoadableIcon *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    char *_peel_type;
    ::GError *_peel_error = nullptr;
    ::GInputStream *_peel_return = g_loadable_icon_load_finish (_peel_this, _peel_res, type ? &_peel_type : nullptr, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (type)
          *type = peel::String::adopt_string (_peel_type);
      }
    return peel::RefPtr<InputStream>::adopt_ref (reinterpret_cast<InputStream *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_out (3)
  peel::RefPtr<InputStream>
  parent_vfunc_load (int size, peel::String *type, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GLoadableIconIface *_peel_iface = reinterpret_cast<::GLoadableIconIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<LoadableIcon> ())->peek_parent ());
    ::GLoadableIcon *_peel_this = reinterpret_cast<::GLoadableIcon *> (this);
    char *_peel_type;
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GInputStream *_peel_return = _peel_iface->load (_peel_this, size, type ? &_peel_type : nullptr, _peel_cancellable, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (type)
          *type = peel::String::adopt_string (_peel_type);
      }
    return peel::RefPtr<InputStream>::adopt_ref (reinterpret_cast<InputStream *> (_peel_return));
  }

  peel_arg_out (3)
  peel::RefPtr<InputStream>
  default_vfunc_load (int size, peel::String *type, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GLoadableIconIface *_peel_iface = reinterpret_cast<::GLoadableIconIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<LoadableIcon> ()));
    ::GLoadableIcon *_peel_this = reinterpret_cast<::GLoadableIcon *> (this);
    char *_peel_type;
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GInputStream *_peel_return = _peel_iface->load (_peel_this, size, type ? &_peel_type : nullptr, _peel_cancellable, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (type)
          *type = peel::String::adopt_string (_peel_type);
      }
    return peel::RefPtr<InputStream>::adopt_ref (reinterpret_cast<InputStream *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_load_async (int size, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GLoadableIconIface *_peel_iface = reinterpret_cast<::GLoadableIconIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<LoadableIcon> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GLoadableIcon *_peel_this = reinterpret_cast<::GLoadableIcon *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    _peel_iface->load_async (_peel_this, size, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_load_async (int size, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GLoadableIconIface *_peel_iface = reinterpret_cast<::GLoadableIconIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<LoadableIcon> ()));
    gpointer _peel_user_data;
    ::GLoadableIcon *_peel_this = reinterpret_cast<::GLoadableIcon *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    _peel_iface->load_async (_peel_this, size, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_nonnull_args (2)
  peel::RefPtr<InputStream>
  parent_vfunc_load_finish (AsyncResult *res, peel::String *type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GLoadableIconIface *_peel_iface = reinterpret_cast<::GLoadableIconIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<LoadableIcon> ())->peek_parent ());
    ::GLoadableIcon *_peel_this = reinterpret_cast<::GLoadableIcon *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    char *_peel_type;
    ::GError *_peel_error = nullptr;
    ::GInputStream *_peel_return = _peel_iface->load_finish (_peel_this, _peel_res, type ? &_peel_type : nullptr, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (type)
          *type = peel::String::adopt_string (_peel_type);
      }
    return peel::RefPtr<InputStream>::adopt_ref (reinterpret_cast<InputStream *> (_peel_return));
  }

  peel_arg_out (3) peel_nonnull_args (2)
  peel::RefPtr<InputStream>
  default_vfunc_load_finish (AsyncResult *res, peel::String *type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GLoadableIconIface *_peel_iface = reinterpret_cast<::GLoadableIconIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<LoadableIcon> ()));
    ::GLoadableIcon *_peel_this = reinterpret_cast<::GLoadableIcon *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    char *_peel_type;
    ::GError *_peel_error = nullptr;
    ::GInputStream *_peel_return = _peel_iface->load_finish (_peel_this, _peel_res, type ? &_peel_type : nullptr, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (type)
          *type = peel::String::adopt_string (_peel_type);
      }
    return peel::RefPtr<InputStream>::adopt_ref (reinterpret_cast<InputStream *> (_peel_return));
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GLoadableIconIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_load ()
    {
      ::GLoadableIconIface *klass = reinterpret_cast<::GLoadableIconIface *> (this);
      klass->load = +[] (::GLoadableIcon *icon, int size, char **type, ::GCancellable *cancellable, ::GError **error) -> ::GInputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (icon);
        peel::String _peel_type;
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<InputStream> _peel_return = _peel_this->DerivedClass::vfunc_load (size, type ? &_peel_type : nullptr, _peel_cancellable, &_peel_error);
        if (_peel_error)
          {
            if (error)
              *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
          }
        else
          {
            if (type)
              *type = std::move (_peel_type).release_string ();
          }
        return reinterpret_cast<::GInputStream *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: load_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_load_finish ()
    {
      ::GLoadableIconIface *klass = reinterpret_cast<::GLoadableIconIface *> (this);
      klass->load_finish = +[] (::GLoadableIcon *icon, ::GAsyncResult *res, char **type, ::GError **error) -> ::GInputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (icon);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::String _peel_type;
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<InputStream> _peel_return = _peel_this->DerivedClass::vfunc_load_finish (_peel_res, type ? &_peel_type : nullptr, &_peel_error);
        if (_peel_error)
          {
            if (error)
              *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
          }
        else
          {
            if (type)
              *type = std::move (_peel_type).release_string ();
          }
        return reinterpret_cast<::GInputStream *> (std::move (_peel_return).release_ref ());
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GLoadableIconIface),
                 "LoadableIcon::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GLoadableIconIface),
                 "LoadableIcon::Iface align mismatch");
}; /* interface LoadableIcon */
static_assert (sizeof (LoadableIcon) == sizeof (Icon),
               "LoadableIcon size mismatch");
static_assert (alignof (LoadableIcon) == alignof (Icon),
               "LoadableIcon align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/InputStream.h>
