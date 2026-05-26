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
enum class AxisFlags : std::underlying_type<::GdkAxisFlags>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::AxisFlags>
{
  typedef Gdk::AxisFlags UnownedType;

  static Gdk::AxisFlags
  get (const ::GValue *value)
  {
    return static_cast<Gdk::AxisFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gdk::AxisFlags flags)
  {
    g_value_set_flags (value, static_cast<::GdkAxisFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::AxisFlags flags)
  {
    set (value, flags);
  }

  static Gdk::AxisFlags
  cast_for_create (Gdk::AxisFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::AxisFlags> ()
{
  return gdk_axis_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::AxisFlags>
{
  Gdk::AxisFlags default_value;

  constexpr PspecTraits (Gdk::AxisFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gdk_axis_flags_get_type (),
                               static_cast<::GdkAxisFlags> (default_value),
                               basics.flags);
  }
};


namespace Gdk
{
enum class /* bitfield */ AxisFlags : std::underlying_type<::GdkAxisFlags>::type
{
  X = GDK_AXIS_FLAG_X,
  Y = GDK_AXIS_FLAG_Y,
  DELTA_X = GDK_AXIS_FLAG_DELTA_X,
  DELTA_Y = GDK_AXIS_FLAG_DELTA_Y,
  PRESSURE = GDK_AXIS_FLAG_PRESSURE,
  XTILT = GDK_AXIS_FLAG_XTILT,
  YTILT = GDK_AXIS_FLAG_YTILT,
  WHEEL = GDK_AXIS_FLAG_WHEEL,
  DISTANCE = GDK_AXIS_FLAG_DISTANCE,
  ROTATION = GDK_AXIS_FLAG_ROTATION,
  SLIDER = GDK_AXIS_FLAG_SLIDER,
}; /* bitfield AxisFlags */

static constexpr inline AxisFlags
operator | (AxisFlags lhs, AxisFlags rhs)
{
  return AxisFlags (static_cast<::GdkAxisFlags> (lhs) | static_cast<::GdkAxisFlags> (rhs));
}

static constexpr inline AxisFlags
operator & (AxisFlags lhs, AxisFlags rhs)
{
  return AxisFlags (static_cast<::GdkAxisFlags> (lhs) & static_cast<::GdkAxisFlags> (rhs));
}

static constexpr inline AxisFlags
operator ^ (AxisFlags lhs, AxisFlags rhs)
{
  return AxisFlags (static_cast<::GdkAxisFlags> (lhs) ^ static_cast<::GdkAxisFlags> (rhs));
}

static constexpr inline AxisFlags
operator ~ (AxisFlags lhs)
{
  return AxisFlags (~static_cast<::GdkAxisFlags> (lhs));
}

static inline AxisFlags &
operator |= (AxisFlags &lhs, AxisFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline AxisFlags &
operator &= (AxisFlags &lhs, AxisFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline AxisFlags &
operator ^= (AxisFlags &lhs, AxisFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (AxisFlags lhs)
{
  return !static_cast<::GdkAxisFlags> (lhs);
}

static constexpr inline bool
operator + (AxisFlags lhs)
{
  return !!static_cast<::GdkAxisFlags> (lhs);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
