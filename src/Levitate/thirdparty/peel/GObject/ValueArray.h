#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct Value;
struct ValueArray;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ValueArray> ()
{
  return g_value_array_get_type ();
}
template<>
struct GObject::Value::Traits<GObject::ValueArray>
{
  typedef UniquePtr<GObject::ValueArray> OwnedType;
  typedef const GObject::ValueArray * UnownedType;

  static const GObject::ValueArray *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const GObject::ValueArray *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const GObject::ValueArray * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<GObject::ValueArray>
  dup (const ::GValue *value)
  {
    return UniquePtr<GObject::ValueArray>::adopt_ref (reinterpret_cast<GObject::ValueArray *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<GObject::ValueArray> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const GObject::ValueArray *
  cast_for_create (const GObject::ValueArray * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GObject::ValueArray>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GObject::ValueArray> (), basics.flags);
  }
};

template<>
struct UniqueTraits<GObject::ValueArray>
{
  static void
  free (GObject::ValueArray *ptr)
  {
    g_value_array_free (reinterpret_cast<::GValueArray *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GObject
{
struct ValueArray
{
private:
  ValueArray () = delete;
  ValueArray (const ValueArray &) = delete;
  ValueArray (ValueArray &&) = delete;
  ~ValueArray ();

public:
  unsigned n_values;
  Value *values;
private:
  guint n_prealloced;

public:
  static peel::UniquePtr<ValueArray>
  create (unsigned n_prealloced) noexcept
  {
    ::GValueArray *_peel_return = g_value_array_new (n_prealloced);
    peel_assume (_peel_return);
    return peel::UniquePtr<ValueArray>::adopt_ref (reinterpret_cast<ValueArray *> (_peel_return));
  }

  peel_arg_in (2) peel_returns_nonnull
  ValueArray *
  append (const Value *value) noexcept
  {
    ::GValueArray *_peel_this = reinterpret_cast<::GValueArray *> (this);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    ::GValueArray *_peel_return = g_value_array_append (_peel_this, _peel_value);
    peel_assume (_peel_return);
    return reinterpret_cast<ValueArray *> (_peel_return);
  }

  peel::UniquePtr<ValueArray>
  copy () const noexcept
  {
    const ::GValueArray *_peel_this = reinterpret_cast<const ::GValueArray *> (this);
    ::GValueArray *_peel_return = g_value_array_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<ValueArray>::adopt_ref (reinterpret_cast<ValueArray *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  peel_returns_nonnull
  Value *
  get_nth (unsigned index_) noexcept
  {
    ::GValueArray *_peel_this = reinterpret_cast<::GValueArray *> (this);
    ::GValue *_peel_return = g_value_array_get_nth (_peel_this, index_);
    peel_assume (_peel_return);
    return reinterpret_cast<Value *> (_peel_return);
  }

  peel_arg_in (3) peel_returns_nonnull
  ValueArray *
  insert (unsigned index_, const Value *value) noexcept
  {
    ::GValueArray *_peel_this = reinterpret_cast<::GValueArray *> (this);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    ::GValueArray *_peel_return = g_value_array_insert (_peel_this, index_, _peel_value);
    peel_assume (_peel_return);
    return reinterpret_cast<ValueArray *> (_peel_return);
  }

  peel_arg_in (2) peel_returns_nonnull
  ValueArray *
  prepend (const Value *value) noexcept
  {
    ::GValueArray *_peel_this = reinterpret_cast<::GValueArray *> (this);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    ::GValueArray *_peel_return = g_value_array_prepend (_peel_this, _peel_value);
    peel_assume (_peel_return);
    return reinterpret_cast<ValueArray *> (_peel_return);
  }

  peel_returns_nonnull
  ValueArray *
  remove (unsigned index_) noexcept
  {
    ::GValueArray *_peel_this = reinterpret_cast<::GValueArray *> (this);
    ::GValueArray *_peel_return = g_value_array_remove (_peel_this, index_);
    peel_assume (_peel_return);
    return reinterpret_cast<ValueArray *> (_peel_return);
  }

  peel_returns_nonnull
  ValueArray *
  sort (::GCompareFunc compare_func) noexcept
  {
    ::GValueArray *_peel_this = reinterpret_cast<::GValueArray *> (this);
    ::GValueArray *_peel_return = g_value_array_sort (_peel_this, compare_func);
    peel_assume (_peel_return);
    return reinterpret_cast<ValueArray *> (_peel_return);
  }

  template<typename CompareDataFunc>
  peel_returns_nonnull
  ValueArray *
  sort_with_data (CompareDataFunc &&compare_func) noexcept
  {
    gpointer _peel_user_data;
    ::GValueArray *_peel_this = reinterpret_cast<::GValueArray *> (this);
    ::GCompareDataFunc _peel_compare_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (compare_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_compare_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_compare_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    ::GValueArray *_peel_return = g_value_array_sort_with_data (_peel_this, _peel_compare_func, _peel_user_data);
    peel_assume (_peel_return);
    return reinterpret_cast<ValueArray *> (_peel_return);
  }
}; /* record ValueArray */

static_assert (sizeof (ValueArray) == sizeof (::GValueArray),
               "ValueArray size mismatch");
static_assert (alignof (ValueArray) == alignof (::GValueArray),
               "ValueArray align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
