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
class /* record */ Sequence;
class /* record */ SequenceIter;
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::Sequence>
{
  static void
  free (GLib::Sequence *ptr)
  {
    g_sequence_free (reinterpret_cast<::GSequence *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
class /* record */ Sequence
{
private:
  Sequence () = delete;
  Sequence (const Sequence &) = delete;
  Sequence (Sequence &&) = delete;
  ~Sequence ();

public:
  peel_returns_nonnull
  SequenceIter *
  append (void *data) noexcept
  {
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GSequenceIter *_peel_return = g_sequence_append (_peel_this, data);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  template<typename Func>
  void
  foreach (Func &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GFunc _peel_func = peel::internals::CallbackHelper<void, gpointer>::wrap_call_callback (
      static_cast<Func &&> (func),
      [] (gpointer data, gpointer user_data) -> void
      {
        Func &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<Func>::type *> (user_data);
        _peel_captured_func (data);
      },
      &_peel_user_data, peel::internals::is_const_invocable<Func, void, void *>::value);
    g_sequence_foreach (_peel_this, _peel_func, _peel_user_data);
  }

  /* free bound as UniqueTraits */

  peel_returns_nonnull
  SequenceIter *
  get_begin_iter () noexcept
  {
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GSequenceIter *_peel_return = g_sequence_get_begin_iter (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  peel_returns_nonnull
  SequenceIter *
  get_end_iter () noexcept
  {
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GSequenceIter *_peel_return = g_sequence_get_end_iter (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  peel_returns_nonnull
  SequenceIter *
  get_iter_at_pos (int pos) noexcept
  {
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GSequenceIter *_peel_return = g_sequence_get_iter_at_pos (_peel_this, pos);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  int
  get_length () noexcept
  {
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    return g_sequence_get_length (_peel_this);
  }

  template<typename CompareDataFunc>
  peel_returns_nonnull
  SequenceIter *
  insert_sorted (void *data, CompareDataFunc &&cmp_func) noexcept
  {
    gpointer _peel_cmp_data;
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GCompareDataFunc _peel_cmp_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (cmp_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_cmp_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_cmp_func (a, b);
      },
      &_peel_cmp_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    ::GSequenceIter *_peel_return = g_sequence_insert_sorted (_peel_this, data, _peel_cmp_func, _peel_cmp_data);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  template<typename SequenceIterCompareFunc>
  peel_returns_nonnull
  SequenceIter *
  insert_sorted_iter (void *data, SequenceIterCompareFunc &&iter_cmp) noexcept
  {
    gpointer _peel_cmp_data;
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GSequenceIterCompareFunc _peel_iter_cmp = peel::internals::CallbackHelper<gint, ::GSequenceIter *, ::GSequenceIter *>::wrap_call_callback (
      static_cast<SequenceIterCompareFunc &&> (iter_cmp),
      [] (::GSequenceIter *a, ::GSequenceIter *b, gpointer data) -> gint
      {
        SequenceIterCompareFunc &_peel_captured_iter_cmp = *reinterpret_cast<typename std::remove_reference<SequenceIterCompareFunc>::type *> (data);
        SequenceIter *_peel_a = reinterpret_cast<SequenceIter *> (a);
        SequenceIter *_peel_b = reinterpret_cast<SequenceIter *> (b);
        return _peel_captured_iter_cmp (_peel_a, _peel_b);
      },
      &_peel_cmp_data, peel::internals::is_const_invocable<SequenceIterCompareFunc, void, SequenceIter *, SequenceIter *>::value);
    ::GSequenceIter *_peel_return = g_sequence_insert_sorted_iter (_peel_this, data, _peel_iter_cmp, _peel_cmp_data);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  bool
  is_empty () noexcept
  {
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    gboolean _peel_return = g_sequence_is_empty (_peel_this);
    return !!_peel_return;
  }

  template<typename CompareDataFunc>
  SequenceIter *
  lookup (void *data, CompareDataFunc &&cmp_func) noexcept
  {
    gpointer _peel_cmp_data;
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GCompareDataFunc _peel_cmp_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (cmp_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_cmp_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_cmp_func (a, b);
      },
      &_peel_cmp_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    ::GSequenceIter *_peel_return = g_sequence_lookup (_peel_this, data, _peel_cmp_func, _peel_cmp_data);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  template<typename SequenceIterCompareFunc>
  SequenceIter *
  lookup_iter (void *data, SequenceIterCompareFunc &&iter_cmp) noexcept
  {
    gpointer _peel_cmp_data;
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GSequenceIterCompareFunc _peel_iter_cmp = peel::internals::CallbackHelper<gint, ::GSequenceIter *, ::GSequenceIter *>::wrap_call_callback (
      static_cast<SequenceIterCompareFunc &&> (iter_cmp),
      [] (::GSequenceIter *a, ::GSequenceIter *b, gpointer data) -> gint
      {
        SequenceIterCompareFunc &_peel_captured_iter_cmp = *reinterpret_cast<typename std::remove_reference<SequenceIterCompareFunc>::type *> (data);
        SequenceIter *_peel_a = reinterpret_cast<SequenceIter *> (a);
        SequenceIter *_peel_b = reinterpret_cast<SequenceIter *> (b);
        return _peel_captured_iter_cmp (_peel_a, _peel_b);
      },
      &_peel_cmp_data, peel::internals::is_const_invocable<SequenceIterCompareFunc, void, SequenceIter *, SequenceIter *>::value);
    ::GSequenceIter *_peel_return = g_sequence_lookup_iter (_peel_this, data, _peel_iter_cmp, _peel_cmp_data);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  peel_returns_nonnull
  SequenceIter *
  prepend (void *data) noexcept
  {
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GSequenceIter *_peel_return = g_sequence_prepend (_peel_this, data);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  template<typename CompareDataFunc>
  peel_returns_nonnull
  SequenceIter *
  search (void *data, CompareDataFunc &&cmp_func) noexcept
  {
    gpointer _peel_cmp_data;
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GCompareDataFunc _peel_cmp_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (cmp_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_cmp_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_cmp_func (a, b);
      },
      &_peel_cmp_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    ::GSequenceIter *_peel_return = g_sequence_search (_peel_this, data, _peel_cmp_func, _peel_cmp_data);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  template<typename SequenceIterCompareFunc>
  peel_returns_nonnull
  SequenceIter *
  search_iter (void *data, SequenceIterCompareFunc &&iter_cmp) noexcept
  {
    gpointer _peel_cmp_data;
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GSequenceIterCompareFunc _peel_iter_cmp = peel::internals::CallbackHelper<gint, ::GSequenceIter *, ::GSequenceIter *>::wrap_call_callback (
      static_cast<SequenceIterCompareFunc &&> (iter_cmp),
      [] (::GSequenceIter *a, ::GSequenceIter *b, gpointer data) -> gint
      {
        SequenceIterCompareFunc &_peel_captured_iter_cmp = *reinterpret_cast<typename std::remove_reference<SequenceIterCompareFunc>::type *> (data);
        SequenceIter *_peel_a = reinterpret_cast<SequenceIter *> (a);
        SequenceIter *_peel_b = reinterpret_cast<SequenceIter *> (b);
        return _peel_captured_iter_cmp (_peel_a, _peel_b);
      },
      &_peel_cmp_data, peel::internals::is_const_invocable<SequenceIterCompareFunc, void, SequenceIter *, SequenceIter *>::value);
    ::GSequenceIter *_peel_return = g_sequence_search_iter (_peel_this, data, _peel_iter_cmp, _peel_cmp_data);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  template<typename CompareDataFunc>
  void
  sort (CompareDataFunc &&cmp_func) noexcept
  {
    gpointer _peel_cmp_data;
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GCompareDataFunc _peel_cmp_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (cmp_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_cmp_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_cmp_func (a, b);
      },
      &_peel_cmp_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_sequence_sort (_peel_this, _peel_cmp_func, _peel_cmp_data);
  }

  template<typename SequenceIterCompareFunc>
  void
  sort_iter (SequenceIterCompareFunc &&cmp_func) noexcept
  {
    gpointer _peel_cmp_data;
    ::GSequence *_peel_this = reinterpret_cast<::GSequence *> (this);
    ::GSequenceIterCompareFunc _peel_cmp_func = peel::internals::CallbackHelper<gint, ::GSequenceIter *, ::GSequenceIter *>::wrap_call_callback (
      static_cast<SequenceIterCompareFunc &&> (cmp_func),
      [] (::GSequenceIter *a, ::GSequenceIter *b, gpointer data) -> gint
      {
        SequenceIterCompareFunc &_peel_captured_cmp_func = *reinterpret_cast<typename std::remove_reference<SequenceIterCompareFunc>::type *> (data);
        SequenceIter *_peel_a = reinterpret_cast<SequenceIter *> (a);
        SequenceIter *_peel_b = reinterpret_cast<SequenceIter *> (b);
        return _peel_captured_cmp_func (_peel_a, _peel_b);
      },
      &_peel_cmp_data, peel::internals::is_const_invocable<SequenceIterCompareFunc, void, SequenceIter *, SequenceIter *>::value);
    g_sequence_sort_iter (_peel_this, _peel_cmp_func, _peel_cmp_data);
  }

  template<typename Func>
  peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
  static void
  foreach_range (SequenceIter *begin, SequenceIter *end, Func &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GSequenceIter *_peel_begin = reinterpret_cast<::GSequenceIter *> (begin);
    ::GSequenceIter *_peel_end = reinterpret_cast<::GSequenceIter *> (end);
    ::GFunc _peel_func = peel::internals::CallbackHelper<void, gpointer>::wrap_call_callback (
      static_cast<Func &&> (func),
      [] (gpointer data, gpointer user_data) -> void
      {
        Func &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<Func>::type *> (user_data);
        _peel_captured_func (data);
      },
      &_peel_user_data, peel::internals::is_const_invocable<Func, void, void *>::value);
    g_sequence_foreach_range (_peel_begin, _peel_end, _peel_func, _peel_user_data);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void *
  get (SequenceIter *iter) noexcept
  {
    ::GSequenceIter *_peel_iter = reinterpret_cast<::GSequenceIter *> (iter);
    return g_sequence_get (_peel_iter);
  }

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static SequenceIter *
  insert_before (SequenceIter *iter, void *data) noexcept
  {
    ::GSequenceIter *_peel_iter = reinterpret_cast<::GSequenceIter *> (iter);
    ::GSequenceIter *_peel_return = g_sequence_insert_before (_peel_iter, data);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
  static void
  move (SequenceIter *src, SequenceIter *dest) noexcept
  {
    ::GSequenceIter *_peel_src = reinterpret_cast<::GSequenceIter *> (src);
    ::GSequenceIter *_peel_dest = reinterpret_cast<::GSequenceIter *> (dest);
    g_sequence_move (_peel_src, _peel_dest);
  }

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 2, 3)
  static void
  move_range (SequenceIter *dest, SequenceIter *begin, SequenceIter *end) noexcept
  {
    ::GSequenceIter *_peel_dest = reinterpret_cast<::GSequenceIter *> (dest);
    ::GSequenceIter *_peel_begin = reinterpret_cast<::GSequenceIter *> (begin);
    ::GSequenceIter *_peel_end = reinterpret_cast<::GSequenceIter *> (end);
    g_sequence_move_range (_peel_dest, _peel_begin, _peel_end);
  }

  static peel::UniquePtr<Sequence>
  new_ (::GDestroyNotify data_destroy) noexcept
  {
    ::GSequence *_peel_return = g_sequence_new (data_destroy);
    peel_assume (_peel_return);
    return peel::UniquePtr<Sequence>::adopt_ref (reinterpret_cast<Sequence *> (_peel_return));
  }

  peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2) peel_returns_nonnull
  static SequenceIter *
  range_get_midpoint (SequenceIter *begin, SequenceIter *end) noexcept
  {
    ::GSequenceIter *_peel_begin = reinterpret_cast<::GSequenceIter *> (begin);
    ::GSequenceIter *_peel_end = reinterpret_cast<::GSequenceIter *> (end);
    ::GSequenceIter *_peel_return = g_sequence_range_get_midpoint (_peel_begin, _peel_end);
    peel_assume (_peel_return);
    return reinterpret_cast<SequenceIter *> (_peel_return);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  remove (SequenceIter *iter) noexcept
  {
    ::GSequenceIter *_peel_iter = reinterpret_cast<::GSequenceIter *> (iter);
    g_sequence_remove (_peel_iter);
  }

  peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
  static void
  remove_range (SequenceIter *begin, SequenceIter *end) noexcept
  {
    ::GSequenceIter *_peel_begin = reinterpret_cast<::GSequenceIter *> (begin);
    ::GSequenceIter *_peel_end = reinterpret_cast<::GSequenceIter *> (end);
    g_sequence_remove_range (_peel_begin, _peel_end);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  set (SequenceIter *iter, void *data) noexcept
  {
    ::GSequenceIter *_peel_iter = reinterpret_cast<::GSequenceIter *> (iter);
    g_sequence_set (_peel_iter, data);
  }

  template<typename CompareDataFunc>
  peel_arg_in (1) peel_nonnull_args (1)
  static void
  sort_changed (SequenceIter *iter, CompareDataFunc &&cmp_func) noexcept
  {
    gpointer _peel_cmp_data;
    ::GSequenceIter *_peel_iter = reinterpret_cast<::GSequenceIter *> (iter);
    ::GCompareDataFunc _peel_cmp_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (cmp_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_cmp_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_cmp_func (a, b);
      },
      &_peel_cmp_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_sequence_sort_changed (_peel_iter, _peel_cmp_func, _peel_cmp_data);
  }

  template<typename SequenceIterCompareFunc>
  peel_arg_in (1) peel_nonnull_args (1)
  static void
  sort_changed_iter (SequenceIter *iter, SequenceIterCompareFunc &&iter_cmp) noexcept
  {
    gpointer _peel_cmp_data;
    ::GSequenceIter *_peel_iter = reinterpret_cast<::GSequenceIter *> (iter);
    ::GSequenceIterCompareFunc _peel_iter_cmp = peel::internals::CallbackHelper<gint, ::GSequenceIter *, ::GSequenceIter *>::wrap_call_callback (
      static_cast<SequenceIterCompareFunc &&> (iter_cmp),
      [] (::GSequenceIter *a, ::GSequenceIter *b, gpointer data) -> gint
      {
        SequenceIterCompareFunc &_peel_captured_iter_cmp = *reinterpret_cast<typename std::remove_reference<SequenceIterCompareFunc>::type *> (data);
        SequenceIter *_peel_a = reinterpret_cast<SequenceIter *> (a);
        SequenceIter *_peel_b = reinterpret_cast<SequenceIter *> (b);
        return _peel_captured_iter_cmp (_peel_a, _peel_b);
      },
      &_peel_cmp_data, peel::internals::is_const_invocable<SequenceIterCompareFunc, void, SequenceIter *, SequenceIter *>::value);
    g_sequence_sort_changed_iter (_peel_iter, _peel_iter_cmp, _peel_cmp_data);
  }

  peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
  static void
  swap (SequenceIter *a, SequenceIter *b) noexcept
  {
    ::GSequenceIter *_peel_a = reinterpret_cast<::GSequenceIter *> (a);
    ::GSequenceIter *_peel_b = reinterpret_cast<::GSequenceIter *> (b);
    g_sequence_swap (_peel_a, _peel_b);
  }
}; /* record Sequence */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
