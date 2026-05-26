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
class /* record */ MainContext;
struct Quark;
struct Source;
} /* namespace GLib */

namespace GObject
{
class Object;
struct Value;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class Task;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Task> ()
{
  return g_task_get_type ();
}


namespace Gio
{
class Task : public AsyncResult
/* non-derivable */
/* extends GObject::Object */
/* implements AsyncResult */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Task () = delete;
  Task (const Task &) = delete;
  Task (Task &&) = delete;
  Task &
  operator = (const Task &) = delete;
  Task &
  operator = (Task &&) = delete;
  ~Task () = delete;
public:

  template<typename AsyncReadyCallback>
  static peel::RefPtr<Task>
  create (GObject::Object *source_object, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_callback_data;
    ::gpointer _peel_source_object = reinterpret_cast<::gpointer> (source_object);
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
      &_peel_callback_data);
    ::GTask *_peel_return = g_task_new (_peel_source_object, _peel_cancellable, _peel_callback, _peel_callback_data);
    peel_assume (_peel_return);
    return peel::RefPtr<Task>::adopt_ref (reinterpret_cast<Task *> (_peel_return));
  }

  peel_nonnull_args (1)
  static bool
  is_valid (AsyncResult *result, GObject::Object *source_object) noexcept
  {
    ::gpointer _peel_result = reinterpret_cast<::gpointer> (result);
    ::gpointer _peel_source_object = reinterpret_cast<::gpointer> (source_object);
    gboolean _peel_return = g_task_is_valid (_peel_result, _peel_source_object);
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  static void
  report_error (GObject::Object *source_object, AsyncReadyCallback &&callback, void *source_tag, peel::UniquePtr<GLib::Error> error) noexcept
  {
    gpointer _peel_callback_data;
    ::gpointer _peel_source_object = reinterpret_cast<::gpointer> (source_object);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_callback_data);
    ::GError *_peel_error = reinterpret_cast<::GError *> (std::move (error).release_ref ());
    g_task_report_error (_peel_source_object, _peel_callback, _peel_callback_data, source_tag, _peel_error);
  }

  template<typename AsyncReadyCallback, typename... Args>
  peel_nonnull_args (6)
  static void
  report_new_error (GObject::Object *source_object, AsyncReadyCallback &&callback, void *source_tag, GLib::Quark domain, int code, const char *format, Args ...args) noexcept
  {
    gpointer _peel_callback_data;
    ::gpointer _peel_source_object = reinterpret_cast<::gpointer> (source_object);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_callback_data);
    g_task_report_new_error (_peel_source_object, _peel_callback, _peel_callback_data, source_tag, domain, code, format, args...);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  attach_source (GLib::Source *source, ::GSourceFunc callback) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::GSource *_peel_source = reinterpret_cast<::GSource *> (source);
    g_task_attach_source (_peel_this, _peel_source, callback);
  }

  Cancellable *
  get_cancellable () noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::GCancellable *_peel_return = g_task_get_cancellable (_peel_this);
    return reinterpret_cast<Cancellable *> (_peel_return);
  }

  bool
  get_check_cancellable () noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    gboolean _peel_return = g_task_get_check_cancellable (_peel_this);
    return !!_peel_return;
  }

  bool
  get_completed () noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    gboolean _peel_return = g_task_get_completed (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  GLib::MainContext *
  get_context () noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::GMainContext *_peel_return = g_task_get_context (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GLib::MainContext *> (_peel_return);
  }

  const char *
  get_name () noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    return g_task_get_name (_peel_this);
  }

  int
  get_priority () noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    return g_task_get_priority (_peel_this);
  }

  bool
  get_return_on_cancel () noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    gboolean _peel_return = g_task_get_return_on_cancel (_peel_this);
    return !!_peel_return;
  }

  GObject::Object *
  get_source_object () noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::gpointer _peel_return = g_task_get_source_object (_peel_this);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  void *
  get_source_tag () noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    return g_task_get_source_tag (_peel_this);
  }

  void *
  get_task_data () noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    return g_task_get_task_data (_peel_this);
  }

  bool
  had_error () noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    gboolean _peel_return = g_task_had_error (_peel_this);
    return !!_peel_return;
  }

  bool
  propagate_boolean (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_task_propagate_boolean (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  gssize
  propagate_int (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_task_propagate_int (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  void *
  propagate_pointer (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::GError *_peel_error = nullptr;
    gpointer _peel_return = g_task_propagate_pointer (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  propagate_value (GObject::Value *value, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_task_propagate_value (_peel_this, _peel_value, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  return_boolean (bool result) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    gboolean _peel_result = static_cast<gboolean> (result);
    g_task_return_boolean (_peel_this, _peel_result);
  }

  void
  return_error (peel::UniquePtr<GLib::Error> error) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::GError *_peel_error = reinterpret_cast<::GError *> (std::move (error).release_ref ());
    g_task_return_error (_peel_this, _peel_error);
  }

  bool
  return_error_if_cancelled () noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    gboolean _peel_return = g_task_return_error_if_cancelled (_peel_this);
    return !!_peel_return;
  }

  void
  return_int (gssize result) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    g_task_return_int (_peel_this, result);
  }

  template<typename... Args>
  peel_nonnull_args (4)
  void
  return_new_error (GLib::Quark domain, int code, const char *format, Args ...args) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    g_task_return_new_error (_peel_this, domain, code, format, args...);
  }

  peel_nonnull_args (4)
  void
  return_new_error_literal (GLib::Quark domain, int code, const char *message) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    g_task_return_new_error_literal (_peel_this, domain, code, message);
  }

  void
  return_pointer (void *result, ::GDestroyNotify result_destroy) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    g_task_return_pointer (_peel_this, result, result_destroy);
  }

  template<typename... Args>
  peel_nonnull_args (3)
  void
  return_prefixed_error (peel::UniquePtr<GLib::Error> error, const char *format, Args ...args) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::GError *_peel_error = reinterpret_cast<::GError *> (std::move (error).release_ref ());
    g_task_return_prefixed_error (_peel_this, _peel_error, format, args...);
  }

  peel_arg_in (2)
  void
  return_value (GObject::Value *result) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::GValue *_peel_result = reinterpret_cast<::GValue *> (result);
    g_task_return_value (_peel_this, _peel_result);
  }

  template<typename TaskThreadFunc>
  void
  run_in_thread (TaskThreadFunc task_func) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::GTaskThreadFunc _peel_task_func = ((void) task_func, +[] (::GTask *task, ::gpointer source_object, gpointer task_data, ::GCancellable *cancellable) -> void
      {
        static_assert (std::is_empty<TaskThreadFunc>::value, "Use a captureless lambda");
#ifdef peel_cpp_20
        TaskThreadFunc _peel_task_func;
#else
        TaskThreadFunc &_peel_task_func = *reinterpret_cast<TaskThreadFunc *> (0x123456);
#endif
        Task *_peel_task = reinterpret_cast<Task *> (task);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        _peel_task_func (_peel_task, _peel_source_object, task_data, _peel_cancellable);
      });
    g_task_run_in_thread (_peel_this, _peel_task_func);
  }

  template<typename TaskThreadFunc>
  void
  run_in_thread_sync (TaskThreadFunc task_func) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    ::GTaskThreadFunc _peel_task_func = ((void) task_func, +[] (::GTask *task, ::gpointer source_object, gpointer task_data, ::GCancellable *cancellable) -> void
      {
        static_assert (std::is_empty<TaskThreadFunc>::value, "Use a captureless lambda");
#ifdef peel_cpp_20
        TaskThreadFunc _peel_task_func;
#else
        TaskThreadFunc &_peel_task_func = *reinterpret_cast<TaskThreadFunc *> (0x123456);
#endif
        Task *_peel_task = reinterpret_cast<Task *> (task);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        _peel_task_func (_peel_task, _peel_source_object, task_data, _peel_cancellable);
      });
    g_task_run_in_thread_sync (_peel_this, _peel_task_func);
  }

  void
  set_check_cancellable (bool check_cancellable) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    gboolean _peel_check_cancellable = static_cast<gboolean> (check_cancellable);
    g_task_set_check_cancellable (_peel_this, _peel_check_cancellable);
  }

  void
  set_name (const char *name) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    g_task_set_name (_peel_this, name);
  }

  void
  set_priority (int priority) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    g_task_set_priority (_peel_this, priority);
  }

  bool
  set_return_on_cancel (bool return_on_cancel) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    gboolean _peel_return_on_cancel = static_cast<gboolean> (return_on_cancel);
    gboolean _peel_return = g_task_set_return_on_cancel (_peel_this, _peel_return_on_cancel);
    return !!_peel_return;
  }

  void
  set_source_tag (void *source_tag) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    g_task_set_source_tag (_peel_this, source_tag);
  }

  void
  set_static_name (const char *name) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    g_task_set_static_name (_peel_this, name);
  }

  void
  set_task_data (void *task_data, ::GDestroyNotify task_data_destroy) noexcept
  {
    ::GTask *_peel_this = reinterpret_cast<::GTask *> (this);
    g_task_set_task_data (_peel_this, task_data, task_data_destroy);
  }

  static peel::Property<bool>
  prop_completed ()
  {
    return peel::Property<bool> { "completed" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class Task */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
