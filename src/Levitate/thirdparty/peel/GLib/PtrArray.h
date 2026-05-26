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
struct PtrArray;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::PtrArray> ()
{
  return g_ptr_array_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::PtrArray>
{
  typedef RefPtr<GLib::PtrArray> OwnedType;
  typedef GLib::PtrArray * UnownedType;

  static GLib::PtrArray *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::PtrArray *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::PtrArray * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::PtrArray>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::PtrArray>::adopt_ref (reinterpret_cast<GLib::PtrArray *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::PtrArray> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::PtrArray *
  cast_for_create (GLib::PtrArray * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::PtrArray>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::PtrArray> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::PtrArray, void>
{
  static void
  ref (GLib::PtrArray *ptr)
  {
    g_ptr_array_ref (reinterpret_cast<::GPtrArray *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::PtrArray *ptr)
  {
    g_ptr_array_unref (reinterpret_cast<::GPtrArray *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
struct PtrArray
{
private:
  PtrArray () = delete;
  PtrArray (const PtrArray &) = delete;
  PtrArray (PtrArray &&) = delete;
  ~PtrArray ();

public:
  gpointer **pdata;
  unsigned len;

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  add (PtrArray *array, void *data) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    g_ptr_array_add (_peel_array, data);
  }

  template<typename CopyFunc>
  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<PtrArray>
  copy (PtrArray *array, CopyFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    ::GCopyFunc _peel_func = peel::internals::CallbackHelper<gpointer, gconstpointer>::wrap_call_callback (
      static_cast<CopyFunc &&> (func),
      [] (gconstpointer src, gpointer data) -> gpointer
      {
        CopyFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<CopyFunc>::type *> (data);
        return peel::internals::invoke_if_nonnull<void *> (_peel_captured_func) (src);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CopyFunc, void, const void *>::value);
    ::GPtrArray *_peel_return = g_ptr_array_copy (_peel_array, _peel_func, _peel_user_data);
    peel_assume (_peel_return);
    return peel::RefPtr<PtrArray>::adopt_ref (reinterpret_cast<PtrArray *> (_peel_return));
  }

  template<typename CopyFunc>
  peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
  static void
  extend (PtrArray *array_to_extend, PtrArray *array, CopyFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GPtrArray *_peel_array_to_extend = reinterpret_cast<::GPtrArray *> (array_to_extend);
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    ::GCopyFunc _peel_func = peel::internals::CallbackHelper<gpointer, gconstpointer>::wrap_call_callback (
      static_cast<CopyFunc &&> (func),
      [] (gconstpointer src, gpointer data) -> gpointer
      {
        CopyFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<CopyFunc>::type *> (data);
        return peel::internals::invoke_if_nonnull<void *> (_peel_captured_func) (src);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CopyFunc, void, const void *>::value);
    g_ptr_array_extend (_peel_array_to_extend, _peel_array, _peel_func, _peel_user_data);
  }

  /* Unsupported for now: extend_and_steal: transfer container, but not an array or a list */

  peel_arg_in (1) peel_arg_out (3) peel_nonnull_args (1)
  static bool
  find (PtrArray *haystack, const void *needle, unsigned *index_) noexcept
  {
    ::GPtrArray *_peel_haystack = reinterpret_cast<::GPtrArray *> (haystack);
    guint *_peel_index_ = reinterpret_cast<guint *> (index_);
    gboolean _peel_return = g_ptr_array_find (_peel_haystack, needle, _peel_index_);
    return !!_peel_return;
  }

  peel_arg_in (1) peel_arg_out (4) peel_nonnull_args (1)
  static bool
  find_with_equal_func (PtrArray *haystack, const void *needle, ::GEqualFunc equal_func, unsigned *index_) noexcept
  {
    ::GPtrArray *_peel_haystack = reinterpret_cast<::GPtrArray *> (haystack);
    guint *_peel_index_ = reinterpret_cast<guint *> (index_);
    gboolean _peel_return = g_ptr_array_find_with_equal_func (_peel_haystack, needle, equal_func, _peel_index_);
    return !!_peel_return;
  }

  template<typename Func>
  peel_arg_in (1) peel_nonnull_args (1)
  static void
  foreach (PtrArray *array, Func &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    ::GFunc _peel_func = peel::internals::CallbackHelper<void, gpointer>::wrap_call_callback (
      static_cast<Func &&> (func),
      [] (gpointer data, gpointer user_data) -> void
      {
        Func &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<Func>::type *> (user_data);
        _peel_captured_func (data);
      },
      &_peel_user_data, peel::internals::is_const_invocable<Func, void, void *>::value);
    g_ptr_array_foreach (_peel_array, _peel_func, _peel_user_data);
  }

  /* Unsupported for now: free: Complex array */

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  insert (PtrArray *array, int index_, void *data) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    g_ptr_array_insert (_peel_array, index_, data);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static bool
  is_null_terminated (PtrArray *array) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    gboolean _peel_return = g_ptr_array_is_null_terminated (_peel_array);
    return !!_peel_return;
  }

  static peel::RefPtr<PtrArray>
  new_ () noexcept
  {
    ::GPtrArray *_peel_return = g_ptr_array_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<PtrArray>::adopt_ref (reinterpret_cast<PtrArray *> (_peel_return));
  }

  template<typename CopyFunc>
  static peel::RefPtr<PtrArray>
  new_from_array (peel::ArrayRef<void *> data, CopyFunc &&copy_func) noexcept
  {
    gsize _peel_len;
    gpointer _peel_copy_func_user_data;
    ::GDestroyNotify _peel_element_free_func;
    gpointer *_peel_data = (_peel_len = data.size (), reinterpret_cast<gpointer *> (data.data ()));
    ::GCopyFunc _peel_copy_func = peel::internals::CallbackHelper<gpointer, gconstpointer>::wrap_notified_callback (
      static_cast<CopyFunc &&> (copy_func),
      [] (gconstpointer src, gpointer data) -> gpointer
      {
        CopyFunc &_peel_captured_copy_func = *reinterpret_cast<typename std::remove_reference<CopyFunc>::type *> (data);
        return peel::internals::invoke_if_nonnull<void *> (_peel_captured_copy_func) (src);
      },
      &_peel_copy_func_user_data, &_peel_element_free_func, peel::internals::is_const_invocable<CopyFunc, void, const void *>::value);
    ::GPtrArray *_peel_return = g_ptr_array_new_from_array (_peel_data, _peel_len, _peel_copy_func, _peel_copy_func_user_data, _peel_element_free_func);
    peel_assume (_peel_return);
    return peel::RefPtr<PtrArray>::adopt_ref (reinterpret_cast<PtrArray *> (_peel_return));
  }

  /* Unsupported for now: new_from_null_terminated_array: array parameter not marked as such */

  static peel::RefPtr<PtrArray>
  new_full (unsigned reserved_size, ::GDestroyNotify element_free_func) noexcept
  {
    ::GPtrArray *_peel_return = g_ptr_array_new_full (reserved_size, element_free_func);
    peel_assume (_peel_return);
    return peel::RefPtr<PtrArray>::adopt_ref (reinterpret_cast<PtrArray *> (_peel_return));
  }

  static peel::RefPtr<PtrArray>
  new_null_terminated (unsigned reserved_size, ::GDestroyNotify element_free_func, bool null_terminated) noexcept
  {
    gboolean _peel_null_terminated = static_cast<gboolean> (null_terminated);
    ::GPtrArray *_peel_return = g_ptr_array_new_null_terminated (reserved_size, element_free_func, _peel_null_terminated);
    peel_assume (_peel_return);
    return peel::RefPtr<PtrArray>::adopt_ref (reinterpret_cast<PtrArray *> (_peel_return));
  }

  static peel::RefPtr<PtrArray>
  new_take (peel::UniquePtr<void *[]> data, ::GDestroyNotify element_free_func) noexcept
  {
    gsize _peel_len;
    gpointer *_peel_data = (_peel_len = data.size (), reinterpret_cast<gpointer *> (std::move (data).release_ref ()));
    ::GPtrArray *_peel_return = g_ptr_array_new_take (_peel_data, _peel_len, element_free_func);
    peel_assume (_peel_return);
    return peel::RefPtr<PtrArray>::adopt_ref (reinterpret_cast<PtrArray *> (_peel_return));
  }

  static peel::RefPtr<PtrArray>
  new_take_null_terminated (peel::ZTUniquePtr<void *[]> data, ::GDestroyNotify element_free_func) noexcept
  {
    gpointer *_peel_data = reinterpret_cast<gpointer *> (std::move (data).release_ref ());
    ::GPtrArray *_peel_return = g_ptr_array_new_take_null_terminated (_peel_data, element_free_func);
    peel_assume (_peel_return);
    return peel::RefPtr<PtrArray>::adopt_ref (reinterpret_cast<PtrArray *> (_peel_return));
  }

  static peel::RefPtr<PtrArray>
  new_with_free_func (::GDestroyNotify element_free_func) noexcept
  {
    ::GPtrArray *_peel_return = g_ptr_array_new_with_free_func (element_free_func);
    peel_assume (_peel_return);
    return peel::RefPtr<PtrArray>::adopt_ref (reinterpret_cast<PtrArray *> (_peel_return));
  }

  /* ref bound as RefTraits */

  peel_arg_in (1) peel_nonnull_args (1)
  static bool
  remove (PtrArray *array, void *data) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    gboolean _peel_return = g_ptr_array_remove (_peel_array, data);
    return !!_peel_return;
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static bool
  remove_fast (PtrArray *array, void *data) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    gboolean _peel_return = g_ptr_array_remove_fast (_peel_array, data);
    return !!_peel_return;
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void *
  remove_index (PtrArray *array, unsigned index_) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    return g_ptr_array_remove_index (_peel_array, index_);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void *
  remove_index_fast (PtrArray *array, unsigned index_) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    return g_ptr_array_remove_index_fast (_peel_array, index_);
  }

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static PtrArray *
  remove_range (PtrArray *array, unsigned index_, unsigned length) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    ::GPtrArray *_peel_return = g_ptr_array_remove_range (_peel_array, index_, length);
    peel_assume (_peel_return);
    return reinterpret_cast<PtrArray *> (_peel_return);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  set_free_func (PtrArray *array, ::GDestroyNotify element_free_func) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    g_ptr_array_set_free_func (_peel_array, element_free_func);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  set_size (PtrArray *array, int length) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    g_ptr_array_set_size (_peel_array, length);
  }

  static peel::RefPtr<PtrArray>
  sized_new (unsigned reserved_size) noexcept
  {
    ::GPtrArray *_peel_return = g_ptr_array_sized_new (reserved_size);
    peel_assume (_peel_return);
    return peel::RefPtr<PtrArray>::adopt_ref (reinterpret_cast<PtrArray *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  sort (PtrArray *array, ::GCompareFunc compare_func) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    g_ptr_array_sort (_peel_array, compare_func);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  sort_values (PtrArray *array, ::GCompareFunc compare_func) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    g_ptr_array_sort_values (_peel_array, compare_func);
  }

  template<typename CompareDataFunc>
  peel_arg_in (1) peel_nonnull_args (1)
  static void
  sort_values_with_data (PtrArray *array, CompareDataFunc &&compare_func) noexcept
  {
    gpointer _peel_user_data;
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    ::GCompareDataFunc _peel_compare_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (compare_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_compare_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_compare_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_ptr_array_sort_values_with_data (_peel_array, _peel_compare_func, _peel_user_data);
  }

  template<typename CompareDataFunc>
  peel_arg_in (1) peel_nonnull_args (1)
  static void
  sort_with_data (PtrArray *array, CompareDataFunc &&compare_func) noexcept
  {
    gpointer _peel_user_data;
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    ::GCompareDataFunc _peel_compare_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (compare_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_compare_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_compare_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_ptr_array_sort_with_data (_peel_array, _peel_compare_func, _peel_user_data);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::UniquePtr<void *[]>
  steal (PtrArray *array) noexcept
  {
    gsize _peel_len;
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    gpointer *_peel_return = g_ptr_array_steal (_peel_array, &_peel_len);
    return peel::UniquePtr<void *[]>::adopt_ref (reinterpret_cast<void **> (_peel_return), _peel_len);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void *
  steal_index (PtrArray *array, unsigned index_) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    return g_ptr_array_steal_index (_peel_array, index_);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void *
  steal_index_fast (PtrArray *array, unsigned index_) noexcept
  {
    ::GPtrArray *_peel_array = reinterpret_cast<::GPtrArray *> (array);
    return g_ptr_array_steal_index_fast (_peel_array, index_);
  }

  /* unref bound as RefTraits */
}; /* record PtrArray */

static_assert (sizeof (PtrArray) == sizeof (::GPtrArray),
               "PtrArray size mismatch");
static_assert (alignof (PtrArray) == alignof (::GPtrArray),
               "PtrArray align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
