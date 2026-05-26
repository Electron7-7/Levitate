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
enum class Gravity : std::underlying_type<::PangoGravity>::type;
enum class GravityHint : std::underlying_type<::PangoGravityHint>::type;
struct Matrix;
enum class Script : std::underlying_type<::PangoScript>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::Gravity>
{
  typedef Pango::Gravity UnownedType;

  static Pango::Gravity
  get (const ::GValue *value)
  {
    return static_cast<Pango::Gravity> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::Gravity m)
  {
    g_value_set_enum (value, static_cast<::PangoGravity> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::Gravity m)
  {
    set (value, m);
  }

  static Pango::Gravity
  cast_for_create (Pango::Gravity m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::Gravity> ()
{
  return pango_gravity_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::Gravity>
{
  Pango::Gravity default_value;

  constexpr PspecTraits (Pango::Gravity default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_gravity_get_type (),
                              static_cast<::PangoGravity> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class Gravity : std::underlying_type<::PangoGravity>::type
{
  SOUTH = PANGO_GRAVITY_SOUTH,
  EAST = PANGO_GRAVITY_EAST,
  NORTH = PANGO_GRAVITY_NORTH,
  WEST = PANGO_GRAVITY_WEST,
  AUTO = PANGO_GRAVITY_AUTO,
}; /* enum Gravity */

peel_no_warn_unused peel_arg_in (1)
static Gravity
gravity_get_for_matrix (const Matrix *matrix) noexcept
{
  const ::PangoMatrix *_peel_matrix = reinterpret_cast<const ::PangoMatrix *> (matrix);
  ::PangoGravity _peel_return = pango_gravity_get_for_matrix (_peel_matrix);
  return static_cast<Gravity> (_peel_return);
}

peel_no_warn_unused
static Gravity
gravity_get_for_script (Script script, Gravity base_gravity, GravityHint hint) noexcept
{
  ::PangoScript _peel_script = static_cast<::PangoScript> (script);
  ::PangoGravity _peel_base_gravity = static_cast<::PangoGravity> (base_gravity);
  ::PangoGravityHint _peel_hint = static_cast<::PangoGravityHint> (hint);
  ::PangoGravity _peel_return = pango_gravity_get_for_script (_peel_script, _peel_base_gravity, _peel_hint);
  return static_cast<Gravity> (_peel_return);
}

peel_no_warn_unused
static Gravity
gravity_get_for_script_and_width (Script script, bool wide, Gravity base_gravity, GravityHint hint) noexcept
{
  ::PangoScript _peel_script = static_cast<::PangoScript> (script);
  gboolean _peel_wide = static_cast<gboolean> (wide);
  ::PangoGravity _peel_base_gravity = static_cast<::PangoGravity> (base_gravity);
  ::PangoGravityHint _peel_hint = static_cast<::PangoGravityHint> (hint);
  ::PangoGravity _peel_return = pango_gravity_get_for_script_and_width (_peel_script, _peel_wide, _peel_base_gravity, _peel_hint);
  return static_cast<Gravity> (_peel_return);
}

peel_no_warn_unused
static double
gravity_to_rotation (Gravity gravity) noexcept
{
  ::PangoGravity _peel_gravity = static_cast<::PangoGravity> (gravity);
  return pango_gravity_to_rotation (_peel_gravity);
}


} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/Pango/GravityHint.h>
#include <peel/Pango/Matrix.h>
#include <peel/Pango/Script.h>
