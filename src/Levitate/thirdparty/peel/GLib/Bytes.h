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
GObject::Type::of<GLib::Bytes> ()
{
  return g_bytes_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Bytes>
{
  typedef RefPtr<GLib::Bytes> OwnedType;
  typedef GLib::Bytes * UnownedType;

  static GLib::Bytes *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::Bytes *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::Bytes * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::Bytes>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::Bytes> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::Bytes *
  cast_for_create (GLib::Bytes * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Bytes>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Bytes> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::Bytes, void>
{
  static void
  ref (GLib::Bytes *ptr)
  {
    g_bytes_ref (reinterpret_cast<::GBytes *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::Bytes *ptr)
  {
    g_bytes_unref (reinterpret_cast<::GBytes *> (ptr));
  }

  constexpr static
  bool can_unref_null = true;
};


namespace GLib
{
class /* record */ Bytes
{
private:
  Bytes () = delete;
  Bytes (const Bytes &) = delete;
  Bytes (Bytes &&) = delete;
  ~Bytes ();

public:
  static peel::RefPtr<Bytes>
  create (peel::ArrayRef<const uint8_t> data) noexcept
  {
    gsize _peel_size;
    gconstpointer _peel_data = (_peel_size = data.size (), reinterpret_cast<gconstpointer> (data.data ()));
    ::GBytes *_peel_return = g_bytes_new (_peel_data, _peel_size);
    peel_assume (_peel_return);
    return peel::RefPtr<Bytes>::adopt_ref (reinterpret_cast<Bytes *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<Bytes>
  create_from_bytes (Bytes *bytes, size_t offset, size_t length) noexcept
  {
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GBytes *_peel_return = g_bytes_new_from_bytes (_peel_bytes, offset, length);
    peel_assume (_peel_return);
    return peel::RefPtr<Bytes>::adopt_ref (reinterpret_cast<Bytes *> (_peel_return));
  }

  static peel::RefPtr<Bytes>
  create_static (peel::ArrayRef<const uint8_t> data) noexcept
  {
    gsize _peel_size;
    gconstpointer _peel_data = (_peel_size = data.size (), reinterpret_cast<gconstpointer> (data.data ()));
    ::GBytes *_peel_return = g_bytes_new_static (_peel_data, _peel_size);
    peel_assume (_peel_return);
    return peel::RefPtr<Bytes>::adopt_ref (reinterpret_cast<Bytes *> (_peel_return));
  }

  static peel::RefPtr<Bytes>
  create_take (peel::UniquePtr<uint8_t[]> data) noexcept
  {
    gsize _peel_size;
    gpointer _peel_data = (_peel_size = data.size (), reinterpret_cast<gpointer> (std::move (data).release_ref ()));
    ::GBytes *_peel_return = g_bytes_new_take (_peel_data, _peel_size);
    peel_assume (_peel_return);
    return peel::RefPtr<Bytes>::adopt_ref (reinterpret_cast<Bytes *> (_peel_return));
  }

  static peel::RefPtr<Bytes>
  create_with_free_func (peel::ArrayRef<const uint8_t> data, ::GDestroyNotify free_func, void *user_data) noexcept
  {
    gsize _peel_size;
    gconstpointer _peel_data = (_peel_size = data.size (), reinterpret_cast<gconstpointer> (data.data ()));
    ::GBytes *_peel_return = g_bytes_new_with_free_func (_peel_data, _peel_size, free_func, user_data);
    peel_assume (_peel_return);
    return peel::RefPtr<Bytes>::adopt_ref (reinterpret_cast<Bytes *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  int
  compare (const Bytes *bytes2) const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    ::gconstpointer _peel_bytes2 = reinterpret_cast<::gconstpointer> (bytes2);
    return g_bytes_compare (_peel_this, _peel_bytes2);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Bytes *bytes2) const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    ::gconstpointer _peel_bytes2 = reinterpret_cast<::gconstpointer> (bytes2);
    gboolean _peel_return = g_bytes_equal (_peel_this, _peel_bytes2);
    return !!_peel_return;
  }

  peel::ArrayRef<const uint8_t>
  get_data () noexcept
  {
    gsize _peel_size;
    ::GBytes *_peel_this = reinterpret_cast<::GBytes *> (this);
    gconstpointer _peel_return = g_bytes_get_data (_peel_this, &_peel_size);
    return peel::ArrayRef<const uint8_t> (reinterpret_cast<const uint8_t *> (_peel_return), _peel_size);
  }

  const void *
  get_region (size_t element_size, size_t offset, size_t n_elements) noexcept
  {
    ::GBytes *_peel_this = reinterpret_cast<::GBytes *> (this);
    return g_bytes_get_region (_peel_this, element_size, offset, n_elements);
  }

  size_t
  get_size () noexcept
  {
    ::GBytes *_peel_this = reinterpret_cast<::GBytes *> (this);
    return g_bytes_get_size (_peel_this);
  }

  unsigned
  hash () const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    return g_bytes_hash (_peel_this);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */

  static peel::RefPtr<ByteArray>
  unref_to_array (peel::RefPtr<Bytes> bytes) noexcept
  {
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (std::move (bytes).release_ref ());
    ::GByteArray *_peel_return = g_bytes_unref_to_array (_peel_bytes);
    peel_assume (_peel_return);
    return peel::RefPtr<ByteArray>::adopt_ref (reinterpret_cast<ByteArray *> (_peel_return));
  }

  static peel::UniquePtr<uint8_t[]>
  unref_to_data (peel::RefPtr<Bytes> bytes) noexcept
  {
    gsize _peel_size;
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (std::move (bytes).release_ref ());
    gpointer _peel_return = g_bytes_unref_to_data (_peel_bytes, &_peel_size);
    peel_assume (_peel_return);
    return peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_return), _peel_size);
  }
}; /* record Bytes */

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/ByteArray.h>
