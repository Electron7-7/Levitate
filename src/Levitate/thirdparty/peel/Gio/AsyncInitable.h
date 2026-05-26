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
#include <peel/GObject/Object.h>
#include <peel/GObject/TypeInterface.h>

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
struct Parameter;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncInitable;
class /* interface */ AsyncResult;
class Cancellable;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::AsyncInitable> ()
{
  return g_async_initable_get_type ();
}


namespace Gio
{
class /* interface */ AsyncInitable : public GObject::Object
/* requires GObject::Object */
{
private:
  AsyncInitable () = delete;
  AsyncInitable (const AsyncInitable &) = delete;
  AsyncInitable (AsyncInitable &&) = delete;

  AsyncInitable &
  operator = (const AsyncInitable &) = delete;
  AsyncInitable &
  operator = (AsyncInitable &&) = delete;

protected:
  ~AsyncInitable () = default;

public:

  template<typename AsyncReadyCallback, typename... Args>
  static void
  create_async (GObject::Type object_type, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback, Args &&...args) noexcept
  {
    gpointer _peel_user_data;
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
    peel::internals::ObjectCreateHelper<Args...>::template invoke<void, decltype (g_async_initable_new_async) *, GType, int, ::GCancellable *, ::GAsyncReadyCallback, gpointer> (g_async_initable_new_async, object_type, io_priority, _peel_cancellable, _peel_callback, _peel_user_data, std::forward<Args> (args)...);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  static void
  create_valist_async (GObject::Type object_type, const char *first_property_name, va_list var_args, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
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
    g_async_initable_new_valist_async (object_type, first_property_name, var_args, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<AsyncInitable>
  create_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncInitable *_peel_this = reinterpret_cast<::GAsyncInitable *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GObject *_peel_return = g_async_initable_new_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<AsyncInitable>::adopt_ref (reinterpret_cast<AsyncInitable *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (3) peel_nonnull_args (3)
  static void
  newv_async (GObject::Type object_type, unsigned n_parameters, GObject::Parameter *parameters, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GParameter *_peel_parameters = reinterpret_cast<::GParameter *> (parameters);
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
    g_async_initable_newv_async (object_type, n_parameters, _peel_parameters, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  init_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GAsyncInitable *_peel_this = reinterpret_cast<::GAsyncInitable *> (this);
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
    g_async_initable_init_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  init_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncInitable *_peel_this = reinterpret_cast<::GAsyncInitable *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_async_initable_init_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_init_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GAsyncInitableIface *_peel_iface = reinterpret_cast<::GAsyncInitableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AsyncInitable> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GAsyncInitable *_peel_this = reinterpret_cast<::GAsyncInitable *> (this);
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
    _peel_iface->init_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_init_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GAsyncInitableIface *_peel_iface = reinterpret_cast<::GAsyncInitableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AsyncInitable> ()));
    gpointer _peel_user_data;
    ::GAsyncInitable *_peel_this = reinterpret_cast<::GAsyncInitable *> (this);
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
    _peel_iface->init_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_init_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncInitableIface *_peel_iface = reinterpret_cast<::GAsyncInitableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AsyncInitable> ())->peek_parent ());
    ::GAsyncInitable *_peel_this = reinterpret_cast<::GAsyncInitable *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->init_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_init_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncInitableIface *_peel_iface = reinterpret_cast<::GAsyncInitableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AsyncInitable> ()));
    ::GAsyncInitable *_peel_this = reinterpret_cast<::GAsyncInitable *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->init_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GAsyncInitableIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    /* Unsupported for now: init_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_init_finish ()
    {
      ::GAsyncInitableIface *klass = reinterpret_cast<::GAsyncInitableIface *> (this);
      klass->init_finish = +[] (::GAsyncInitable *initable, ::GAsyncResult *res, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (initable);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_init_finish (_peel_res, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GAsyncInitableIface),
                 "AsyncInitable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GAsyncInitableIface),
                 "AsyncInitable::Iface align mismatch");
}; /* interface AsyncInitable */
static_assert (sizeof (AsyncInitable) == sizeof (GObject::Object),
               "AsyncInitable size mismatch");
static_assert (alignof (AsyncInitable) == alignof (GObject::Object),
               "AsyncInitable align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
