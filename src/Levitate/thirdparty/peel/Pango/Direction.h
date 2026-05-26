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
enum class Direction : std::underlying_type<::PangoDirection>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::Direction>
{
  typedef Pango::Direction UnownedType;

  static Pango::Direction
  get (const ::GValue *value)
  {
    return static_cast<Pango::Direction> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::Direction m)
  {
    g_value_set_enum (value, static_cast<::PangoDirection> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::Direction m)
  {
    set (value, m);
  }

  static Pango::Direction
  cast_for_create (Pango::Direction m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::Direction> ()
{
  return pango_direction_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::Direction>
{
  Pango::Direction default_value;

  constexpr PspecTraits (Pango::Direction default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_direction_get_type (),
                              static_cast<::PangoDirection> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class Direction : std::underlying_type<::PangoDirection>::type
{
  LTR = PANGO_DIRECTION_LTR,
  RTL = PANGO_DIRECTION_RTL,
  TTB_LTR = PANGO_DIRECTION_TTB_LTR,
  TTB_RTL = PANGO_DIRECTION_TTB_RTL,
  WEAK_LTR = PANGO_DIRECTION_WEAK_LTR,
  WEAK_RTL = PANGO_DIRECTION_WEAK_RTL,
  NEUTRAL = PANGO_DIRECTION_NEUTRAL,
}; /* enum Direction */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
