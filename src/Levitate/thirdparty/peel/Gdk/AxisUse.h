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
enum class AxisUse : std::underlying_type<::GdkAxisUse>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::AxisUse>
{
  typedef Gdk::AxisUse UnownedType;

  static Gdk::AxisUse
  get (const ::GValue *value)
  {
    return static_cast<Gdk::AxisUse> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::AxisUse m)
  {
    g_value_set_enum (value, static_cast<::GdkAxisUse> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::AxisUse m)
  {
    set (value, m);
  }

  static Gdk::AxisUse
  cast_for_create (Gdk::AxisUse m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::AxisUse> ()
{
  return gdk_axis_use_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::AxisUse>
{
  Gdk::AxisUse default_value;

  constexpr PspecTraits (Gdk::AxisUse default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_axis_use_get_type (),
                              static_cast<::GdkAxisUse> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class AxisUse : std::underlying_type<::GdkAxisUse>::type
{
  IGNORE_ = GDK_AXIS_IGNORE,
  X = GDK_AXIS_X,
  Y = GDK_AXIS_Y,
  DELTA_X = GDK_AXIS_DELTA_X,
  DELTA_Y = GDK_AXIS_DELTA_Y,
  PRESSURE = GDK_AXIS_PRESSURE,
  XTILT = GDK_AXIS_XTILT,
  YTILT = GDK_AXIS_YTILT,
  WHEEL = GDK_AXIS_WHEEL,
  DISTANCE = GDK_AXIS_DISTANCE,
  ROTATION = GDK_AXIS_ROTATION,
  SLIDER = GDK_AXIS_SLIDER,
  LAST = GDK_AXIS_LAST,
}; /* enum AxisUse */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
