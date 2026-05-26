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
#include <peel/GLib/Quark.h>
#include <peel/Gio/AsyncResult.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
struct Quark;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class SimpleAsyncResult;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SimpleAsyncResult> ()
{
  return g_simple_async_result_get_type ();
}


namespace Gio
{
class SimpleAsyncResult : public AsyncResult
/* non-derivable */
/* extends GObject::Object */
/* implements AsyncResult */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SimpleAsyncResult () = delete;
  SimpleAsyncResult (const SimpleAsyncResult &) = delete;
  SimpleAsyncResult (SimpleAsyncResult &&) = delete;
  SimpleAsyncResult &
  operator = (const SimpleAsyncResult &) = delete;
  SimpleAsyncResult &
  operator = (SimpleAsyncResult &&) = delete;
  ~SimpleAsyncResult () = delete;
public:

  template<typename AsyncReadyCallback>
  static peel::RefPtr<SimpleAsyncResult>
  create (GObject::Object *source_object, AsyncReadyCallback &&callback, void *source_tag) noexcept
  {
    gpointer _peel_user_data;
    ::GObject *_peel_source_object = reinterpret_cast<::GObject *> (source_object);
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
    ::GSimpleAsyncResult *_peel_return = g_simple_async_result_new (_peel_source_object, _peel_callback, _peel_user_data, source_tag);
    peel_assume (_peel_return);
    return peel::RefPtr<SimpleAsyncResult>::adopt_ref (reinterpret_cast<SimpleAsyncResult *> (_peel_return));
  }

  template<typename AsyncReadyCallback, typename... Args>
  peel_nonnull_args (5)
  static peel::RefPtr<SimpleAsyncResult>
  create_error (GObject::Object *source_object, AsyncReadyCallback &&callback, GLib::Quark domain, int code, const char *format, Args ...args) noexcept
  {
    gpointer _peel_user_data;
    ::GObject *_peel_source_object = reinterpret_cast<::GObject *> (source_object);
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
    ::GSimpleAsyncResult *_peel_return = g_simple_async_result_new_error (_peel_source_object, _peel_callback, _peel_user_data, domain, code, format, args...);
    peel_assume (_peel_return);
    return peel::RefPtr<SimpleAsyncResult>::adopt_ref (reinterpret_cast<SimpleAsyncResult *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (3) peel_nonnull_args (3)
  static peel::RefPtr<SimpleAsyncResult>
  create_from_error (GObject::Object *source_object, AsyncReadyCallback &&callback, const GLib::Error *error) noexcept
  {
    gpointer _peel_user_data;
    ::GObject *_peel_source_object = reinterpret_cast<::GObject *> (source_object);
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
    const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
    ::GSimpleAsyncResult *_peel_return = g_simple_async_result_new_from_error (_peel_source_object, _peel_callback, _peel_user_data, _peel_error);
    peel_assume (_peel_return);
    return peel::RefPtr<SimpleAsyncResult>::adopt_ref (reinterpret_cast<SimpleAsyncResult *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  static peel::RefPtr<SimpleAsyncResult>
  create_take_error (GObject::Object *source_object, AsyncReadyCallback &&callback, peel::UniquePtr<GLib::Error> error) noexcept
  {
    gpointer _peel_user_data;
    ::GObject *_peel_source_object = reinterpret_cast<::GObject *> (source_object);
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
    ::GError *_peel_error = reinterpret_cast<::GError *> (std::move (error).release_ref ());
    ::GSimpleAsyncResult *_peel_return = g_simple_async_result_new_take_error (_peel_source_object, _peel_callback, _peel_user_data, _peel_error);
    peel_assume (_peel_return);
    return peel::RefPtr<SimpleAsyncResult>::adopt_ref (reinterpret_cast<SimpleAsyncResult *> (_peel_return));
  }

  peel_nonnull_args (1)
  static bool
  is_valid (AsyncResult *result, GObject::Object *source, void *source_tag) noexcept
  {
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GObject *_peel_source = reinterpret_cast<::GObject *> (source);
    gboolean _peel_return = g_simple_async_result_is_valid (_peel_result, _peel_source, source_tag);
    return !!_peel_return;
  }

  void
  complete () noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    g_simple_async_result_complete (_peel_this);
  }

  void
  complete_in_idle () noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    g_simple_async_result_complete_in_idle (_peel_this);
  }

  bool
  get_op_res_gboolean () noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    gboolean _peel_return = g_simple_async_result_get_op_res_gboolean (_peel_this);
    return !!_peel_return;
  }

  void *
  get_op_res_gpointer () noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    return g_simple_async_result_get_op_res_gpointer (_peel_this);
  }

  gssize
  get_op_res_gssize () noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    return g_simple_async_result_get_op_res_gssize (_peel_this);
  }

  void *
  get_source_tag () noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    return g_simple_async_result_get_source_tag (_peel_this);
  }

  bool
  propagate_error (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_simple_async_result_propagate_error (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  run_in_thread (::GSimpleAsyncThreadFunc func, int io_priority, Cancellable *cancellable) noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    g_simple_async_result_run_in_thread (_peel_this, func, io_priority, _peel_cancellable);
  }

  void
  set_check_cancellable (Cancellable *check_cancellable) noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    ::GCancellable *_peel_check_cancellable = reinterpret_cast<::GCancellable *> (check_cancellable);
    g_simple_async_result_set_check_cancellable (_peel_this, _peel_check_cancellable);
  }

  template<typename... Args>
  peel_nonnull_args (4)
  void
  set_error (GLib::Quark domain, int code, const char *format, Args ...args) noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    g_simple_async_result_set_error (_peel_this, domain, code, format, args...);
  }

  peel_nonnull_args (4)
  void
  set_error_va (GLib::Quark domain, int code, const char *format, va_list args) noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    g_simple_async_result_set_error_va (_peel_this, domain, code, format, args);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_from_error (const GLib::Error *error) noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
    g_simple_async_result_set_from_error (_peel_this, _peel_error);
  }

  void
  set_handle_cancellation (bool handle_cancellation) noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    gboolean _peel_handle_cancellation = static_cast<gboolean> (handle_cancellation);
    g_simple_async_result_set_handle_cancellation (_peel_this, _peel_handle_cancellation);
  }

  void
  set_op_res_gboolean (bool op_res) noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    gboolean _peel_op_res = static_cast<gboolean> (op_res);
    g_simple_async_result_set_op_res_gboolean (_peel_this, _peel_op_res);
  }

  void
  set_op_res_gpointer (void *op_res, ::GDestroyNotify destroy_op_res) noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    g_simple_async_result_set_op_res_gpointer (_peel_this, op_res, destroy_op_res);
  }

  void
  set_op_res_gssize (gssize op_res) noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    g_simple_async_result_set_op_res_gssize (_peel_this, op_res);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  take_error (GLib::Error *error) noexcept
  {
    ::GSimpleAsyncResult *_peel_this = reinterpret_cast<::GSimpleAsyncResult *> (this);
    ::GError *_peel_error = reinterpret_cast<::GError *> (error);
    g_simple_async_result_take_error (_peel_this, _peel_error);
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class SimpleAsyncResult */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
