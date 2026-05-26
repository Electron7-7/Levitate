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
#include <peel/Gdk/FrameClock.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::FrameClock::Phase>
{
  typedef Gdk::FrameClock::Phase UnownedType;

  static Gdk::FrameClock::Phase
  get (const ::GValue *value)
  {
    return static_cast<Gdk::FrameClock::Phase> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gdk::FrameClock::Phase flags)
  {
    g_value_set_flags (value, static_cast<::GdkFrameClockPhase> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::FrameClock::Phase flags)
  {
    set (value, flags);
  }

  static Gdk::FrameClock::Phase
  cast_for_create (Gdk::FrameClock::Phase flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::FrameClock::Phase> ()
{
  return gdk_frame_clock_phase_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::FrameClock::Phase>
{
  Gdk::FrameClock::Phase default_value;

  constexpr PspecTraits (Gdk::FrameClock::Phase default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gdk_frame_clock_phase_get_type (),
                               static_cast<::GdkFrameClockPhase> (default_value),
                               basics.flags);
  }
};


namespace Gdk
{
enum class /* bitfield */ FrameClock::Phase : std::underlying_type<::GdkFrameClockPhase>::type
{
  NONE = GDK_FRAME_CLOCK_PHASE_NONE,
  FLUSH_EVENTS = GDK_FRAME_CLOCK_PHASE_FLUSH_EVENTS,
  BEFORE_PAINT = GDK_FRAME_CLOCK_PHASE_BEFORE_PAINT,
  UPDATE = GDK_FRAME_CLOCK_PHASE_UPDATE,
  LAYOUT = GDK_FRAME_CLOCK_PHASE_LAYOUT,
  PAINT = GDK_FRAME_CLOCK_PHASE_PAINT,
  RESUME_EVENTS = GDK_FRAME_CLOCK_PHASE_RESUME_EVENTS,
  AFTER_PAINT = GDK_FRAME_CLOCK_PHASE_AFTER_PAINT,
}; /* bitfield FrameClock::Phase */

static constexpr inline FrameClock::Phase
operator | (FrameClock::Phase lhs, FrameClock::Phase rhs)
{
  return FrameClock::Phase (static_cast<::GdkFrameClockPhase> (lhs) | static_cast<::GdkFrameClockPhase> (rhs));
}

static constexpr inline FrameClock::Phase
operator & (FrameClock::Phase lhs, FrameClock::Phase rhs)
{
  return FrameClock::Phase (static_cast<::GdkFrameClockPhase> (lhs) & static_cast<::GdkFrameClockPhase> (rhs));
}

static constexpr inline FrameClock::Phase
operator ^ (FrameClock::Phase lhs, FrameClock::Phase rhs)
{
  return FrameClock::Phase (static_cast<::GdkFrameClockPhase> (lhs) ^ static_cast<::GdkFrameClockPhase> (rhs));
}

static constexpr inline FrameClock::Phase
operator ~ (FrameClock::Phase lhs)
{
  return FrameClock::Phase (~static_cast<::GdkFrameClockPhase> (lhs));
}

static inline FrameClock::Phase &
operator |= (FrameClock::Phase &lhs, FrameClock::Phase rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline FrameClock::Phase &
operator &= (FrameClock::Phase &lhs, FrameClock::Phase rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline FrameClock::Phase &
operator ^= (FrameClock::Phase &lhs, FrameClock::Phase rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (FrameClock::Phase lhs)
{
  return !static_cast<::GdkFrameClockPhase> (lhs);
}

static constexpr inline bool
operator + (FrameClock::Phase lhs)
{
  return !!static_cast<::GdkFrameClockPhase> (lhs);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
