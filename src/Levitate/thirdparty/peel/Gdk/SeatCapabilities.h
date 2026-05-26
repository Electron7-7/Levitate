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
#include <peel/Gdk/Seat.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::Seat::Capabilities>
{
  typedef Gdk::Seat::Capabilities UnownedType;

  static Gdk::Seat::Capabilities
  get (const ::GValue *value)
  {
    return static_cast<Gdk::Seat::Capabilities> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gdk::Seat::Capabilities flags)
  {
    g_value_set_flags (value, static_cast<::GdkSeatCapabilities> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::Seat::Capabilities flags)
  {
    set (value, flags);
  }

  static Gdk::Seat::Capabilities
  cast_for_create (Gdk::Seat::Capabilities flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::Seat::Capabilities> ()
{
  return gdk_seat_capabilities_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::Seat::Capabilities>
{
  Gdk::Seat::Capabilities default_value;

  constexpr PspecTraits (Gdk::Seat::Capabilities default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gdk_seat_capabilities_get_type (),
                               static_cast<::GdkSeatCapabilities> (default_value),
                               basics.flags);
  }
};


namespace Gdk
{
enum class /* bitfield */ Seat::Capabilities : std::underlying_type<::GdkSeatCapabilities>::type
{
  NONE = GDK_SEAT_CAPABILITY_NONE,
  POINTER = GDK_SEAT_CAPABILITY_POINTER,
  TOUCH = GDK_SEAT_CAPABILITY_TOUCH,
  TABLET_STYLUS = GDK_SEAT_CAPABILITY_TABLET_STYLUS,
  KEYBOARD = GDK_SEAT_CAPABILITY_KEYBOARD,
  TABLET_PAD = GDK_SEAT_CAPABILITY_TABLET_PAD,
  ALL_POINTING = GDK_SEAT_CAPABILITY_ALL_POINTING,
  ALL = GDK_SEAT_CAPABILITY_ALL,
}; /* bitfield Seat::Capabilities */

static constexpr inline Seat::Capabilities
operator | (Seat::Capabilities lhs, Seat::Capabilities rhs)
{
  return Seat::Capabilities (static_cast<::GdkSeatCapabilities> (lhs) | static_cast<::GdkSeatCapabilities> (rhs));
}

static constexpr inline Seat::Capabilities
operator & (Seat::Capabilities lhs, Seat::Capabilities rhs)
{
  return Seat::Capabilities (static_cast<::GdkSeatCapabilities> (lhs) & static_cast<::GdkSeatCapabilities> (rhs));
}

static constexpr inline Seat::Capabilities
operator ^ (Seat::Capabilities lhs, Seat::Capabilities rhs)
{
  return Seat::Capabilities (static_cast<::GdkSeatCapabilities> (lhs) ^ static_cast<::GdkSeatCapabilities> (rhs));
}

static constexpr inline Seat::Capabilities
operator ~ (Seat::Capabilities lhs)
{
  return Seat::Capabilities (~static_cast<::GdkSeatCapabilities> (lhs));
}

static inline Seat::Capabilities &
operator |= (Seat::Capabilities &lhs, Seat::Capabilities rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Seat::Capabilities &
operator &= (Seat::Capabilities &lhs, Seat::Capabilities rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Seat::Capabilities &
operator ^= (Seat::Capabilities &lhs, Seat::Capabilities rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Seat::Capabilities lhs)
{
  return !static_cast<::GdkSeatCapabilities> (lhs);
}

static constexpr inline bool
operator + (Seat::Capabilities lhs)
{
  return !!static_cast<::GdkSeatCapabilities> (lhs);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
