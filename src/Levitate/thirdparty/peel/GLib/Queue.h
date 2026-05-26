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
#include <peel/GLib/List.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Queue;
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::Queue>
{
  static void
  free (GLib::Queue *ptr)
  {
    g_queue_free (reinterpret_cast<::GQueue *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
struct Queue
{
private:
  Queue () = delete;
  Queue (const Queue &) = delete;
  Queue (Queue &&) = delete;
  ~Queue ();

public:
  ListRef<void * const> head;
  ListRef<void * const> tail;
  unsigned length;

  void
  clear () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    g_queue_clear (_peel_this);
  }

  void
  clear_full (::GDestroyNotify free_func) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    g_queue_clear_full (_peel_this, free_func);
  }

  peel_returns_nonnull
  Queue *
  copy () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    ::GQueue *_peel_return = g_queue_copy (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Queue *> (_peel_return);
  }

  void
  delete_link (ListRef<void * const> link_) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_link_ = link_.raw_list ();
    g_queue_delete_link (_peel_this, _peel_link_);
  }

  ListRef<void * const>
  find (const void *data) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_return = g_queue_find (_peel_this, data);
    return ListRef<void * const>::from_raw_list (_peel_return);
  }

  ListRef<void * const>
  find_custom (const void *data, ::GCompareFunc func) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_return = g_queue_find_custom (_peel_this, data, func);
    return ListRef<void * const>::from_raw_list (_peel_return);
  }

  template<typename Func>
  void
  foreach (Func &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    ::GFunc _peel_func = peel::internals::CallbackHelper<void, gpointer>::wrap_call_callback (
      static_cast<Func &&> (func),
      [] (gpointer data, gpointer user_data) -> void
      {
        Func &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<Func>::type *> (user_data);
        _peel_captured_func (data);
      },
      &_peel_user_data, peel::internals::is_const_invocable<Func, void, void *>::value);
    g_queue_foreach (_peel_this, _peel_func, _peel_user_data);
  }

  /* free bound as UniqueTraits */

  void
  free_full (::GDestroyNotify free_func) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    g_queue_free_full (_peel_this, free_func);
  }

  unsigned
  get_length () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    return g_queue_get_length (_peel_this);
  }

  int
  index (const void *data) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    return g_queue_index (_peel_this, data);
  }

  void
  init () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    g_queue_init (_peel_this);
  }

  void
  insert_after (ListRef<void * const> sibling, void *data) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_sibling = sibling.raw_list ();
    g_queue_insert_after (_peel_this, _peel_sibling, data);
  }

  void
  insert_after_link (ListRef<void * const> sibling, ListRef<void * const> link_) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_sibling = sibling.raw_list ();
    GList *_peel_link_ = link_.raw_list ();
    g_queue_insert_after_link (_peel_this, _peel_sibling, _peel_link_);
  }

  void
  insert_before (ListRef<void * const> sibling, void *data) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_sibling = sibling.raw_list ();
    g_queue_insert_before (_peel_this, _peel_sibling, data);
  }

  void
  insert_before_link (ListRef<void * const> sibling, ListRef<void * const> link_) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_sibling = sibling.raw_list ();
    GList *_peel_link_ = link_.raw_list ();
    g_queue_insert_before_link (_peel_this, _peel_sibling, _peel_link_);
  }

  template<typename CompareDataFunc>
  void
  insert_sorted (void *data, CompareDataFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    ::GCompareDataFunc _peel_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_queue_insert_sorted (_peel_this, data, _peel_func, _peel_user_data);
  }

  bool
  is_empty () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    gboolean _peel_return = g_queue_is_empty (_peel_this);
    return !!_peel_return;
  }

  int
  link_index (ListRef<void * const> link_) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_link_ = link_.raw_list ();
    return g_queue_link_index (_peel_this, _peel_link_);
  }

  void *
  peek_head () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    return g_queue_peek_head (_peel_this);
  }

  ListRef<void * const>
  peek_head_link () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_return = g_queue_peek_head_link (_peel_this);
    return ListRef<void * const>::from_raw_list (_peel_return);
  }

  void *
  peek_nth (unsigned n) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    return g_queue_peek_nth (_peel_this, n);
  }

  ListRef<void * const>
  peek_nth_link (unsigned n) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_return = g_queue_peek_nth_link (_peel_this, n);
    return ListRef<void * const>::from_raw_list (_peel_return);
  }

  void *
  peek_tail () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    return g_queue_peek_tail (_peel_this);
  }

  ListRef<void * const>
  peek_tail_link () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_return = g_queue_peek_tail_link (_peel_this);
    return ListRef<void * const>::from_raw_list (_peel_return);
  }

  void *
  pop_head () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    return g_queue_pop_head (_peel_this);
  }

  ListRef<void * const>
  pop_head_link () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_return = g_queue_pop_head_link (_peel_this);
    return ListRef<void * const>::from_raw_list (_peel_return);
  }

  void *
  pop_nth (unsigned n) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    return g_queue_pop_nth (_peel_this, n);
  }

  ListRef<void * const>
  pop_nth_link (unsigned n) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_return = g_queue_pop_nth_link (_peel_this, n);
    return ListRef<void * const>::from_raw_list (_peel_return);
  }

  void *
  pop_tail () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    return g_queue_pop_tail (_peel_this);
  }

  ListRef<void * const>
  pop_tail_link () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_return = g_queue_pop_tail_link (_peel_this);
    return ListRef<void * const>::from_raw_list (_peel_return);
  }

  void
  push_head (void *data) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    g_queue_push_head (_peel_this, data);
  }

  void
  push_head_link (ListRef<void * const> link_) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_link_ = link_.raw_list ();
    g_queue_push_head_link (_peel_this, _peel_link_);
  }

  void
  push_nth (void *data, int n) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    g_queue_push_nth (_peel_this, data, n);
  }

  void
  push_nth_link (int n, ListRef<void * const> link_) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_link_ = link_.raw_list ();
    g_queue_push_nth_link (_peel_this, n, _peel_link_);
  }

  void
  push_tail (void *data) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    g_queue_push_tail (_peel_this, data);
  }

  void
  push_tail_link (ListRef<void * const> link_) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_link_ = link_.raw_list ();
    g_queue_push_tail_link (_peel_this, _peel_link_);
  }

  bool
  remove (const void *data) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    gboolean _peel_return = g_queue_remove (_peel_this, data);
    return !!_peel_return;
  }

  unsigned
  remove_all (const void *data) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    return g_queue_remove_all (_peel_this, data);
  }

  void
  reverse () noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    g_queue_reverse (_peel_this);
  }

  template<typename CompareDataFunc>
  void
  sort (CompareDataFunc &&compare_func) noexcept
  {
    gpointer _peel_user_data;
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    ::GCompareDataFunc _peel_compare_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (compare_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_compare_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_compare_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_queue_sort (_peel_this, _peel_compare_func, _peel_user_data);
  }

  void
  unlink (ListRef<void * const> link_) noexcept
  {
    ::GQueue *_peel_this = reinterpret_cast<::GQueue *> (this);
    GList *_peel_link_ = link_.raw_list ();
    g_queue_unlink (_peel_this, _peel_link_);
  }

  peel_returns_nonnull
  static Queue *
  new_ () noexcept
  {
    ::GQueue *_peel_return = g_queue_new ();
    peel_assume (_peel_return);
    return reinterpret_cast<Queue *> (_peel_return);
  }
}; /* record Queue */

static_assert (sizeof (Queue) == sizeof (::GQueue),
               "Queue size mismatch");
static_assert (alignof (Queue) == alignof (::GQueue),
               "Queue align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
