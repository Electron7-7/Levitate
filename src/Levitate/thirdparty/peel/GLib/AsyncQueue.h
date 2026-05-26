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
class /* record */ AsyncQueue;
struct TimeVal;
} /* namespace GLib */



template<>
struct RefTraits<GLib::AsyncQueue, void>
{
  static void
  ref (GLib::AsyncQueue *ptr)
  {
    g_async_queue_ref (reinterpret_cast<::GAsyncQueue *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::AsyncQueue *ptr)
  {
    g_async_queue_unref (reinterpret_cast<::GAsyncQueue *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ AsyncQueue
{
private:
  AsyncQueue () = delete;
  AsyncQueue (const AsyncQueue &) = delete;
  AsyncQueue (AsyncQueue &&) = delete;
  ~AsyncQueue ();

public:
  int
  length () noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    return g_async_queue_length (_peel_this);
  }

  int
  length_unlocked () noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    return g_async_queue_length_unlocked (_peel_this);
  }

  void
  lock () noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    g_async_queue_lock (_peel_this);
  }

  void *
  pop () noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    return g_async_queue_pop (_peel_this);
  }

  void *
  pop_unlocked () noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    return g_async_queue_pop_unlocked (_peel_this);
  }

  void
  push (void *data) noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    g_async_queue_push (_peel_this, data);
  }

  void
  push_front (void *item) noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    g_async_queue_push_front (_peel_this, item);
  }

  void
  push_front_unlocked (void *item) noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    g_async_queue_push_front_unlocked (_peel_this, item);
  }

  template<typename CompareDataFunc>
  void
  push_sorted (void *data, CompareDataFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    ::GCompareDataFunc _peel_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_async_queue_push_sorted (_peel_this, data, _peel_func, _peel_user_data);
  }

  template<typename CompareDataFunc>
  void
  push_sorted_unlocked (void *data, CompareDataFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    ::GCompareDataFunc _peel_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_async_queue_push_sorted_unlocked (_peel_this, data, _peel_func, _peel_user_data);
  }

  void
  push_unlocked (void *data) noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    g_async_queue_push_unlocked (_peel_this, data);
  }

  /* ref bound as RefTraits */

  void
  ref_unlocked () noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    g_async_queue_ref_unlocked (_peel_this);
  }

  bool
  remove (void *item) noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    gboolean _peel_return = g_async_queue_remove (_peel_this, item);
    return !!_peel_return;
  }

  bool
  remove_unlocked (void *item) noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    gboolean _peel_return = g_async_queue_remove_unlocked (_peel_this, item);
    return !!_peel_return;
  }

  template<typename CompareDataFunc>
  void
  sort (CompareDataFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    ::GCompareDataFunc _peel_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_async_queue_sort (_peel_this, _peel_func, _peel_user_data);
  }

  template<typename CompareDataFunc>
  void
  sort_unlocked (CompareDataFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    ::GCompareDataFunc _peel_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_async_queue_sort_unlocked (_peel_this, _peel_func, _peel_user_data);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void *
  timed_pop (TimeVal *end_time) noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    ::GTimeVal *_peel_end_time = reinterpret_cast<::GTimeVal *> (end_time);
    return g_async_queue_timed_pop (_peel_this, _peel_end_time);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void *
  timed_pop_unlocked (TimeVal *end_time) noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    ::GTimeVal *_peel_end_time = reinterpret_cast<::GTimeVal *> (end_time);
    return g_async_queue_timed_pop_unlocked (_peel_this, _peel_end_time);
  }

  void *
  timeout_pop (uint64_t timeout) noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    return g_async_queue_timeout_pop (_peel_this, timeout);
  }

  void *
  timeout_pop_unlocked (uint64_t timeout) noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    return g_async_queue_timeout_pop_unlocked (_peel_this, timeout);
  }

  void *
  try_pop () noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    return g_async_queue_try_pop (_peel_this);
  }

  void *
  try_pop_unlocked () noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    return g_async_queue_try_pop_unlocked (_peel_this);
  }

  void
  unlock () noexcept
  {
    ::GAsyncQueue *_peel_this = reinterpret_cast<::GAsyncQueue *> (this);
    g_async_queue_unlock (_peel_this);
  }

  /* unref bound as RefTraits */

  static void
  unref_and_unlock (peel::RefPtr<AsyncQueue> queue) noexcept
  {
    ::GAsyncQueue *_peel_queue = reinterpret_cast<::GAsyncQueue *> (std::move (queue).release_ref ());
    g_async_queue_unref_and_unlock (_peel_queue);
  }

  static peel::RefPtr<AsyncQueue>
  new_ () noexcept
  {
    ::GAsyncQueue *_peel_return = g_async_queue_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<AsyncQueue>::adopt_ref (reinterpret_cast<AsyncQueue *> (_peel_return));
  }

  static peel::RefPtr<AsyncQueue>
  new_full (::GDestroyNotify item_free_func) noexcept
  {
    ::GAsyncQueue *_peel_return = g_async_queue_new_full (item_free_func);
    peel_assume (_peel_return);
    return peel::RefPtr<AsyncQueue>::adopt_ref (reinterpret_cast<AsyncQueue *> (_peel_return));
  }
}; /* record AsyncQueue */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
