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
struct ByteArray;
class /* record */ Bytes;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::ByteArray> ()
{
  return g_byte_array_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::ByteArray>
{
  typedef RefPtr<GLib::ByteArray> OwnedType;
  typedef GLib::ByteArray * UnownedType;

  static GLib::ByteArray *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::ByteArray *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::ByteArray * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::ByteArray>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::ByteArray>::adopt_ref (reinterpret_cast<GLib::ByteArray *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::ByteArray> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::ByteArray *
  cast_for_create (GLib::ByteArray * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::ByteArray>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::ByteArray> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::ByteArray, void>
{
  static void
  ref (GLib::ByteArray *ptr)
  {
    g_byte_array_ref (reinterpret_cast<::GByteArray *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::ByteArray *ptr)
  {
    g_byte_array_unref (reinterpret_cast<::GByteArray *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
struct ByteArray
{
private:
  ByteArray () = delete;
  ByteArray (const ByteArray &) = delete;
  ByteArray (ByteArray &&) = delete;
  ~ByteArray ();

public:
  uint8_t *data;
  unsigned len;

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static ByteArray *
  append (ByteArray *array, peel::ArrayRef<const uint8_t> data) noexcept
  {
    guint _peel_len;
    ::GByteArray *_peel_array = reinterpret_cast<::GByteArray *> (array);
    const guint8 *_peel_data = (_peel_len = data.size (), reinterpret_cast<const guint8 *> (data.data ()));
    ::GByteArray *_peel_return = g_byte_array_append (_peel_array, _peel_data, _peel_len);
    peel_assume (_peel_return);
    return reinterpret_cast<ByteArray *> (_peel_return);
  }

  /* Unsupported for now: free: Complex array */

  static peel::RefPtr<Bytes>
  free_to_bytes (peel::RefPtr<ByteArray> array) noexcept
  {
    ::GByteArray *_peel_array = reinterpret_cast<::GByteArray *> (std::move (array).release_ref ());
    ::GBytes *_peel_return = g_byte_array_free_to_bytes (_peel_array);
    peel_assume (_peel_return);
    return peel::RefPtr<Bytes>::adopt_ref (reinterpret_cast<Bytes *> (_peel_return));
  }

  static peel::RefPtr<ByteArray>
  new_ () noexcept
  {
    ::GByteArray *_peel_return = g_byte_array_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<ByteArray>::adopt_ref (reinterpret_cast<ByteArray *> (_peel_return));
  }

  static peel::RefPtr<ByteArray>
  new_take (peel::UniquePtr<uint8_t[]> data) noexcept
  {
    gsize _peel_len;
    guint8 *_peel_data = (_peel_len = data.size (), reinterpret_cast<guint8 *> (std::move (data).release_ref ()));
    ::GByteArray *_peel_return = g_byte_array_new_take (_peel_data, _peel_len);
    peel_assume (_peel_return);
    return peel::RefPtr<ByteArray>::adopt_ref (reinterpret_cast<ByteArray *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static ByteArray *
  prepend (ByteArray *array, peel::ArrayRef<const uint8_t> data) noexcept
  {
    guint _peel_len;
    ::GByteArray *_peel_array = reinterpret_cast<::GByteArray *> (array);
    const guint8 *_peel_data = (_peel_len = data.size (), reinterpret_cast<const guint8 *> (data.data ()));
    ::GByteArray *_peel_return = g_byte_array_prepend (_peel_array, _peel_data, _peel_len);
    peel_assume (_peel_return);
    return reinterpret_cast<ByteArray *> (_peel_return);
  }

  /* ref bound as RefTraits */

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static ByteArray *
  remove_index (ByteArray *array, unsigned index_) noexcept
  {
    ::GByteArray *_peel_array = reinterpret_cast<::GByteArray *> (array);
    ::GByteArray *_peel_return = g_byte_array_remove_index (_peel_array, index_);
    peel_assume (_peel_return);
    return reinterpret_cast<ByteArray *> (_peel_return);
  }

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static ByteArray *
  remove_index_fast (ByteArray *array, unsigned index_) noexcept
  {
    ::GByteArray *_peel_array = reinterpret_cast<::GByteArray *> (array);
    ::GByteArray *_peel_return = g_byte_array_remove_index_fast (_peel_array, index_);
    peel_assume (_peel_return);
    return reinterpret_cast<ByteArray *> (_peel_return);
  }

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static ByteArray *
  remove_range (ByteArray *array, unsigned index_, unsigned length) noexcept
  {
    ::GByteArray *_peel_array = reinterpret_cast<::GByteArray *> (array);
    ::GByteArray *_peel_return = g_byte_array_remove_range (_peel_array, index_, length);
    peel_assume (_peel_return);
    return reinterpret_cast<ByteArray *> (_peel_return);
  }

  peel_arg_in (1) peel_nonnull_args (1) peel_returns_nonnull
  static ByteArray *
  set_size (ByteArray *array, unsigned length) noexcept
  {
    ::GByteArray *_peel_array = reinterpret_cast<::GByteArray *> (array);
    ::GByteArray *_peel_return = g_byte_array_set_size (_peel_array, length);
    peel_assume (_peel_return);
    return reinterpret_cast<ByteArray *> (_peel_return);
  }

  static peel::RefPtr<ByteArray>
  sized_new (unsigned reserved_size) noexcept
  {
    ::GByteArray *_peel_return = g_byte_array_sized_new (reserved_size);
    peel_assume (_peel_return);
    return peel::RefPtr<ByteArray>::adopt_ref (reinterpret_cast<ByteArray *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  sort (ByteArray *array, ::GCompareFunc compare_func) noexcept
  {
    ::GByteArray *_peel_array = reinterpret_cast<::GByteArray *> (array);
    g_byte_array_sort (_peel_array, compare_func);
  }

  template<typename CompareDataFunc>
  peel_arg_in (1) peel_nonnull_args (1)
  static void
  sort_with_data (ByteArray *array, CompareDataFunc &&compare_func) noexcept
  {
    gpointer _peel_user_data;
    ::GByteArray *_peel_array = reinterpret_cast<::GByteArray *> (array);
    ::GCompareDataFunc _peel_compare_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (compare_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_compare_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_compare_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_byte_array_sort_with_data (_peel_array, _peel_compare_func, _peel_user_data);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::UniquePtr<uint8_t[]>
  steal (ByteArray *array) noexcept
  {
    gsize _peel_len;
    ::GByteArray *_peel_array = reinterpret_cast<::GByteArray *> (array);
    guint8 *_peel_return = g_byte_array_steal (_peel_array, &_peel_len);
    peel_assume (_peel_return);
    return peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_return), _peel_len);
  }

  /* unref bound as RefTraits */
}; /* record ByteArray */

static_assert (sizeof (ByteArray) == sizeof (::GByteArray),
               "ByteArray size mismatch");
static_assert (alignof (ByteArray) == alignof (::GByteArray),
               "ByteArray align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
