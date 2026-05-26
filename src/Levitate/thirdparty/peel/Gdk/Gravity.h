#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gdk/gdk.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class Gravity : std::underlying_type<::GdkGravity>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::Gravity>
{
  typedef Gdk::Gravity UnownedType;

  static Gdk::Gravity
  get (const ::GValue *value)
  {
    return static_cast<Gdk::Gravity> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::Gravity m)
  {
    g_value_set_enum (value, static_cast<::GdkGravity> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::Gravity m)
  {
    set (value, m);
  }

  static Gdk::Gravity
  cast_for_create (Gdk::Gravity m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::Gravity> ()
{
  return gdk_gravity_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::Gravity>
{
  Gdk::Gravity default_value;

  constexpr PspecTraits (Gdk::Gravity default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_gravity_get_type (),
                              static_cast<::GdkGravity> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class Gravity : std::underlying_type<::GdkGravity>::type
{
  NORTH_WEST = GDK_GRAVITY_NORTH_WEST,
  NORTH = GDK_GRAVITY_NORTH,
  NORTH_EAST = GDK_GRAVITY_NORTH_EAST,
  WEST = GDK_GRAVITY_WEST,
  CENTER = GDK_GRAVITY_CENTER,
  EAST = GDK_GRAVITY_EAST,
  SOUTH_WEST = GDK_GRAVITY_SOUTH_WEST,
  SOUTH = GDK_GRAVITY_SOUTH,
  SOUTH_EAST = GDK_GRAVITY_SOUTH_EAST,
  STATIC = GDK_GRAVITY_STATIC,
}; /* enum Gravity */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
