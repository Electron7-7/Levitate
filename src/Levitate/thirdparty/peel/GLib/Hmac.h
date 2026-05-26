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
enum class ChecksumType : std::underlying_type<::GChecksumType>::type;
class /* record */ Hmac;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Hmac> ()
{
  return g_hmac_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Hmac>
{
  typedef RefPtr<GLib::Hmac> OwnedType;
  typedef GLib::Hmac * UnownedType;

  static GLib::Hmac *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::Hmac *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::Hmac * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::Hmac>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::Hmac>::adopt_ref (reinterpret_cast<GLib::Hmac *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::Hmac> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::Hmac *
  cast_for_create (GLib::Hmac * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Hmac>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Hmac> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::Hmac, void>
{
  static void
  ref (GLib::Hmac *ptr)
  {
    g_hmac_ref (reinterpret_cast<::GHmac *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::Hmac *ptr)
  {
    g_hmac_unref (reinterpret_cast<::GHmac *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ Hmac
{
private:
  Hmac () = delete;
  Hmac (const Hmac &) = delete;
  Hmac (Hmac &&) = delete;
  ~Hmac ();

public:
  /* Unsupported for now: new: explicitly skipped */

  peel::RefPtr<Hmac>
  copy () const noexcept
  {
    const ::GHmac *_peel_this = reinterpret_cast<const ::GHmac *> (this);
    ::GHmac *_peel_return = g_hmac_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Hmac>::adopt_ref (reinterpret_cast<Hmac *> (_peel_return));
  }

  /* Unsupported for now: get_digest: explicitly skipped */

  peel_returns_nonnull
  const char *
  get_string () noexcept
  {
    ::GHmac *_peel_this = reinterpret_cast<::GHmac *> (this);
    return g_hmac_get_string (_peel_this);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */

  /* Unsupported for now: update: explicitly skipped */
}; /* record Hmac */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
