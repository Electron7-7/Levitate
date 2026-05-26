#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
struct ThreadPool;
} /* namespace GLib */


namespace GLib
{
struct ThreadPool
{
private:
  ThreadPool () = delete;
  ThreadPool (const ThreadPool &) = delete;
  ThreadPool (ThreadPool &&) = delete;
  ~ThreadPool ();

  ::GFunc func;
public:
  void *user_data;
  gboolean exclusive;

  void
  free (bool immediate, bool wait_) noexcept
  {
    ::GThreadPool *_peel_this = reinterpret_cast<::GThreadPool *> (this);
    gboolean _peel_immediate = static_cast<gboolean> (immediate);
    gboolean _peel_wait_ = static_cast<gboolean> (wait_);
    g_thread_pool_free (_peel_this, _peel_immediate, _peel_wait_);
  }

  int
  get_max_threads () noexcept
  {
    ::GThreadPool *_peel_this = reinterpret_cast<::GThreadPool *> (this);
    return g_thread_pool_get_max_threads (_peel_this);
  }

  unsigned
  get_num_threads () noexcept
  {
    ::GThreadPool *_peel_this = reinterpret_cast<::GThreadPool *> (this);
    return g_thread_pool_get_num_threads (_peel_this);
  }

  bool
  move_to_front (void *data) noexcept
  {
    ::GThreadPool *_peel_this = reinterpret_cast<::GThreadPool *> (this);
    gboolean _peel_return = g_thread_pool_move_to_front (_peel_this, data);
    return !!_peel_return;
  }

  bool
  push (void *data, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GThreadPool *_peel_this = reinterpret_cast<::GThreadPool *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_thread_pool_push (_peel_this, data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  set_max_threads (int max_threads, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GThreadPool *_peel_this = reinterpret_cast<::GThreadPool *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_thread_pool_set_max_threads (_peel_this, max_threads, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename CompareDataFunc>
  void
  set_sort_function (CompareDataFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GThreadPool *_peel_this = reinterpret_cast<::GThreadPool *> (this);
    ::GCompareDataFunc _peel_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_thread_pool_set_sort_function (_peel_this, _peel_func, _peel_user_data);
  }

  unsigned
  unprocessed () noexcept
  {
    ::GThreadPool *_peel_this = reinterpret_cast<::GThreadPool *> (this);
    return g_thread_pool_unprocessed (_peel_this);
  }

  static unsigned
  get_max_idle_time () noexcept
  {
    return g_thread_pool_get_max_idle_time ();
  }

  static int
  get_max_unused_threads () noexcept
  {
    return g_thread_pool_get_max_unused_threads ();
  }

  static unsigned
  get_num_unused_threads () noexcept
  {
    return g_thread_pool_get_num_unused_threads ();
  }

  template<typename Func>
  static ThreadPool *
  new_ (Func &&func, int max_threads, bool exclusive, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gpointer _peel_user_data;
    ::GFunc _peel_func = peel::internals::CallbackHelper<void, gpointer>::wrap_call_callback (
      static_cast<Func &&> (func),
      [] (gpointer data, gpointer user_data) -> void
      {
        Func &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<Func>::type *> (user_data);
        _peel_captured_func (data);
      },
      &_peel_user_data, peel::internals::is_const_invocable<Func, void, void *>::value);
    gboolean _peel_exclusive = static_cast<gboolean> (exclusive);
    ::GError *_peel_error = nullptr;
    ::GThreadPool *_peel_return = g_thread_pool_new (_peel_func, _peel_user_data, max_threads, _peel_exclusive, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return reinterpret_cast<ThreadPool *> (_peel_return);
  }

  /* Unsupported for now: new_full: no idea about ownership semantics */

  static void
  set_max_idle_time (unsigned interval) noexcept
  {
    g_thread_pool_set_max_idle_time (interval);
  }

  static void
  set_max_unused_threads (int max_threads) noexcept
  {
    g_thread_pool_set_max_unused_threads (max_threads);
  }

  static void
  stop_unused_threads () noexcept
  {
    g_thread_pool_stop_unused_threads ();
  }
}; /* record ThreadPool */

static_assert (sizeof (ThreadPool) == sizeof (::GThreadPool),
               "ThreadPool size mismatch");
static_assert (alignof (ThreadPool) == alignof (::GThreadPool),
               "ThreadPool align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
