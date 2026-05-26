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
class /* record */ Checksum;
enum class ChecksumType : std::underlying_type<::GChecksumType>::type;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Checksum> ()
{
  return g_checksum_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Checksum>
{
  typedef UniquePtr<GLib::Checksum> OwnedType;
  typedef const GLib::Checksum * UnownedType;

  static const GLib::Checksum *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const GLib::Checksum *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const GLib::Checksum * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<GLib::Checksum>
  dup (const ::GValue *value)
  {
    return UniquePtr<GLib::Checksum>::adopt_ref (reinterpret_cast<GLib::Checksum *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<GLib::Checksum> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const GLib::Checksum *
  cast_for_create (const GLib::Checksum * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Checksum>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Checksum> (), basics.flags);
  }
};

template<>
struct UniqueTraits<GLib::Checksum>
{
  static void
  free (GLib::Checksum *ptr)
  {
    g_checksum_free (reinterpret_cast<::GChecksum *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
class /* record */ Checksum
{
private:
  Checksum () = delete;
  Checksum (const Checksum &) = delete;
  Checksum (Checksum &&) = delete;
  ~Checksum ();

public:
  static peel::UniquePtr<Checksum>
  create (ChecksumType checksum_type) noexcept
  {
    ::GChecksumType _peel_checksum_type = static_cast<::GChecksumType> (checksum_type);
    ::GChecksum *_peel_return = g_checksum_new (_peel_checksum_type);
    return peel::UniquePtr<Checksum>::adopt_ref (reinterpret_cast<Checksum *> (_peel_return));
  }

  peel::UniquePtr<Checksum>
  copy () const noexcept
  {
    const ::GChecksum *_peel_this = reinterpret_cast<const ::GChecksum *> (this);
    ::GChecksum *_peel_return = g_checksum_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<Checksum>::adopt_ref (reinterpret_cast<Checksum *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  /* Unsupported for now: get_digest: inout array length */

  peel_returns_nonnull
  const char *
  get_string () noexcept
  {
    ::GChecksum *_peel_this = reinterpret_cast<::GChecksum *> (this);
    return g_checksum_get_string (_peel_this);
  }

  void
  reset () noexcept
  {
    ::GChecksum *_peel_this = reinterpret_cast<::GChecksum *> (this);
    g_checksum_reset (_peel_this);
  }

  void
  update (peel::ArrayRef<const uint8_t> data) noexcept
  {
    gssize _peel_length;
    ::GChecksum *_peel_this = reinterpret_cast<::GChecksum *> (this);
    const guchar *_peel_data = (_peel_length = data.size (), reinterpret_cast<const guchar *> (data.data ()));
    g_checksum_update (_peel_this, _peel_data, _peel_length);
  }

  static gssize
  type_get_length (ChecksumType checksum_type) noexcept
  {
    ::GChecksumType _peel_checksum_type = static_cast<::GChecksumType> (checksum_type);
    return g_checksum_type_get_length (_peel_checksum_type);
  }
}; /* record Checksum */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
