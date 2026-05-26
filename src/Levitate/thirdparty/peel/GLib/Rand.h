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
class /* record */ Rand;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Rand> ()
{
  return g_rand_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Rand>
{
  typedef UniquePtr<GLib::Rand> OwnedType;
  typedef const GLib::Rand * UnownedType;

  static const GLib::Rand *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const GLib::Rand *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const GLib::Rand * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<GLib::Rand>
  dup (const ::GValue *value)
  {
    return UniquePtr<GLib::Rand>::adopt_ref (reinterpret_cast<GLib::Rand *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<GLib::Rand> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const GLib::Rand *
  cast_for_create (const GLib::Rand * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Rand>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Rand> (), basics.flags);
  }
};

template<>
struct UniqueTraits<GLib::Rand>
{
  static void
  free (GLib::Rand *ptr)
  {
    g_rand_free (reinterpret_cast<::GRand *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
class /* record */ Rand
{
private:
  Rand () = delete;
  Rand (const Rand &) = delete;
  Rand (Rand &&) = delete;
  ~Rand ();

public:
  static peel::UniquePtr<Rand>
  create () noexcept
  {
    ::GRand *_peel_return = g_rand_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Rand>::adopt_ref (reinterpret_cast<Rand *> (_peel_return));
  }

  static peel::UniquePtr<Rand>
  create_with_seed (uint32_t seed) noexcept
  {
    ::GRand *_peel_return = g_rand_new_with_seed (seed);
    peel_assume (_peel_return);
    return peel::UniquePtr<Rand>::adopt_ref (reinterpret_cast<Rand *> (_peel_return));
  }

  /* Unsupported for now: new_with_seed_array: explicitly skipped */

  peel::UniquePtr<Rand>
  copy () noexcept
  {
    ::GRand *_peel_this = reinterpret_cast<::GRand *> (this);
    ::GRand *_peel_return = g_rand_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<Rand>::adopt_ref (reinterpret_cast<Rand *> (_peel_return));
  }

  double
  double_ () noexcept
  {
    ::GRand *_peel_this = reinterpret_cast<::GRand *> (this);
    return g_rand_double (_peel_this);
  }

  double
  double_range (double begin, double end) noexcept
  {
    ::GRand *_peel_this = reinterpret_cast<::GRand *> (this);
    return g_rand_double_range (_peel_this, begin, end);
  }

  /* free bound as UniqueTraits */

  uint32_t
  int_ () noexcept
  {
    ::GRand *_peel_this = reinterpret_cast<::GRand *> (this);
    return g_rand_int (_peel_this);
  }

  int32_t
  int_range (int32_t begin, int32_t end) noexcept
  {
    ::GRand *_peel_this = reinterpret_cast<::GRand *> (this);
    return g_rand_int_range (_peel_this, begin, end);
  }

  void
  set_seed (uint32_t seed) noexcept
  {
    ::GRand *_peel_this = reinterpret_cast<::GRand *> (this);
    g_rand_set_seed (_peel_this, seed);
  }

  /* Unsupported for now: set_seed_array: explicitly skipped */
}; /* record Rand */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
