#pragma once

/* Auto-generated, do not modify */
/* Package pango */

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
#include <pango/pango.h>

peel_begin_header

namespace peel
{
namespace Pango
{
enum class GravityHint : std::underlying_type<::PangoGravityHint>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::GravityHint>
{
  typedef Pango::GravityHint UnownedType;

  static Pango::GravityHint
  get (const ::GValue *value)
  {
    return static_cast<Pango::GravityHint> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::GravityHint m)
  {
    g_value_set_enum (value, static_cast<::PangoGravityHint> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::GravityHint m)
  {
    set (value, m);
  }

  static Pango::GravityHint
  cast_for_create (Pango::GravityHint m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::GravityHint> ()
{
  return pango_gravity_hint_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::GravityHint>
{
  Pango::GravityHint default_value;

  constexpr PspecTraits (Pango::GravityHint default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_gravity_hint_get_type (),
                              static_cast<::PangoGravityHint> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class GravityHint : std::underlying_type<::PangoGravityHint>::type
{
  NATURAL = PANGO_GRAVITY_HINT_NATURAL,
  STRONG = PANGO_GRAVITY_HINT_STRONG,
  LINE = PANGO_GRAVITY_HINT_LINE,
}; /* enum GravityHint */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
