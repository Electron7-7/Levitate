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
struct Array;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Array> ()
{
  return g_array_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Array>
{
  typedef RefPtr<GLib::Array> OwnedType;
  typedef GLib::Array * UnownedType;

  static GLib::Array *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::Array *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::Array * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::Array>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::Array>::adopt_ref (reinterpret_cast<GLib::Array *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::Array> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::Array *
  cast_for_create (GLib::Array * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Array>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Array> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::Array, void>
{
  static void
  ref (GLib::Array *ptr)
  {
    g_array_ref (reinterpret_cast<::GArray *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::Array *ptr)
  {
    g_array_unref (reinterpret_cast<::GArray *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
struct Array
{
private:
  Array () = delete;
  Array (const Array &) = delete;
  Array (Array &&) = delete;
  ~Array ();

public:
  const char *data;
  unsigned len;

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static Array *
  append_vals (Array *array, const void *data, unsigned len) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    ::GArray *_peel_return = g_array_append_vals (_peel_array, data, len);
    peel_assume (_peel_return);
    return reinterpret_cast<Array *> (_peel_return);
  }

  peel_arg_in (1) peel_arg_out (4) peel_nonnull_args (1)
  static bool
  binary_search (Array *array, const void *target, ::GCompareFunc compare_func, unsigned *out_match_index) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    guint *_peel_out_match_index = reinterpret_cast<guint *> (out_match_index);
    gboolean _peel_return = g_array_binary_search (_peel_array, target, compare_func, _peel_out_match_index);
    return !!_peel_return;
  }

  /* Unsupported for now: copy: transfer container, but not an array or a list */

  static peel::String
  free (peel::RefPtr<Array> array, bool free_segment) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (std::move (array).release_ref ());
    gboolean _peel_free_segment = static_cast<gboolean> (free_segment);
    gchar *_peel_return = g_array_free (_peel_array, _peel_free_segment);
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static unsigned
  get_element_size (Array *array) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    return g_array_get_element_size (_peel_array);
  }

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static Array *
  insert_vals (Array *array, unsigned index_, const void *data, unsigned len) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    ::GArray *_peel_return = g_array_insert_vals (_peel_array, index_, data, len);
    peel_assume (_peel_return);
    return reinterpret_cast<Array *> (_peel_return);
  }

  static peel::RefPtr<Array>
  new_ (bool zero_terminated, bool clear_, unsigned element_size) noexcept
  {
    gboolean _peel_zero_terminated = static_cast<gboolean> (zero_terminated);
    gboolean _peel_clear_ = static_cast<gboolean> (clear_);
    ::GArray *_peel_return = g_array_new (_peel_zero_terminated, _peel_clear_, element_size);
    peel_assume (_peel_return);
    return peel::RefPtr<Array>::adopt_ref (reinterpret_cast<Array *> (_peel_return));
  }

  static peel::RefPtr<Array>
  new_take (peel::UniquePtr<void *[]> data, bool clear, size_t element_size) noexcept
  {
    gsize _peel_len;
    gpointer _peel_data = (_peel_len = data.size (), reinterpret_cast<gpointer> (std::move (data).release_ref ()));
    gboolean _peel_clear = static_cast<gboolean> (clear);
    ::GArray *_peel_return = g_array_new_take (_peel_data, _peel_len, _peel_clear, element_size);
    peel_assume (_peel_return);
    return peel::RefPtr<Array>::adopt_ref (reinterpret_cast<Array *> (_peel_return));
  }

  static peel::RefPtr<Array>
  new_take_zero_terminated (peel::ZTUniquePtr<void *[]> data, bool clear, size_t element_size) noexcept
  {
    gpointer _peel_data = reinterpret_cast<gpointer> (std::move (data).release_ref ());
    gboolean _peel_clear = static_cast<gboolean> (clear);
    ::GArray *_peel_return = g_array_new_take_zero_terminated (_peel_data, _peel_clear, element_size);
    peel_assume (_peel_return);
    return peel::RefPtr<Array>::adopt_ref (reinterpret_cast<Array *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static Array *
  prepend_vals (Array *array, const void *data, unsigned len) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    ::GArray *_peel_return = g_array_prepend_vals (_peel_array, data, len);
    peel_assume (_peel_return);
    return reinterpret_cast<Array *> (_peel_return);
  }

  /* ref bound as RefTraits */

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static Array *
  remove_index (Array *array, unsigned index_) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    ::GArray *_peel_return = g_array_remove_index (_peel_array, index_);
    peel_assume (_peel_return);
    return reinterpret_cast<Array *> (_peel_return);
  }

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static Array *
  remove_index_fast (Array *array, unsigned index_) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    ::GArray *_peel_return = g_array_remove_index_fast (_peel_array, index_);
    peel_assume (_peel_return);
    return reinterpret_cast<Array *> (_peel_return);
  }

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static Array *
  remove_range (Array *array, unsigned index_, unsigned length) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    ::GArray *_peel_return = g_array_remove_range (_peel_array, index_, length);
    peel_assume (_peel_return);
    return reinterpret_cast<Array *> (_peel_return);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  set_clear_func (Array *array, ::GDestroyNotify clear_func) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    g_array_set_clear_func (_peel_array, clear_func);
  }

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static Array *
  set_size (Array *array, unsigned length) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    ::GArray *_peel_return = g_array_set_size (_peel_array, length);
    peel_assume (_peel_return);
    return reinterpret_cast<Array *> (_peel_return);
  }

  static peel::RefPtr<Array>
  sized_new (bool zero_terminated, bool clear_, unsigned element_size, unsigned reserved_size) noexcept
  {
    gboolean _peel_zero_terminated = static_cast<gboolean> (zero_terminated);
    gboolean _peel_clear_ = static_cast<gboolean> (clear_);
    ::GArray *_peel_return = g_array_sized_new (_peel_zero_terminated, _peel_clear_, element_size, reserved_size);
    peel_assume (_peel_return);
    return peel::RefPtr<Array>::adopt_ref (reinterpret_cast<Array *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  sort (Array *array, ::GCompareFunc compare_func) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    g_array_sort (_peel_array, compare_func);
  }

  template<typename CompareDataFunc>
  peel_arg_in (1) peel_nonnull_args (1)
  static void
  sort_with_data (Array *array, CompareDataFunc &&compare_func) noexcept
  {
    gpointer _peel_user_data;
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    ::GCompareDataFunc _peel_compare_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (compare_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_compare_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_compare_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_array_sort_with_data (_peel_array, _peel_compare_func, _peel_user_data);
  }

  peel_arg_in (1) peel_arg_out (2) peel_nonnull_args (1)
  static void *
  steal (Array *array, size_t *len) noexcept
  {
    ::GArray *_peel_array = reinterpret_cast<::GArray *> (array);
    gsize *_peel_len = reinterpret_cast<gsize *> (len);
    return g_array_steal (_peel_array, _peel_len);
  }

  /* unref bound as RefTraits */
}; /* record Array */

static_assert (sizeof (Array) == sizeof (::GArray),
               "Array size mismatch");
static_assert (alignof (Array) == alignof (::GArray),
               "Array align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
