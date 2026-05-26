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
enum class TouchpadGesturePhase : std::underlying_type<::GdkTouchpadGesturePhase>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::TouchpadGesturePhase>
{
  typedef Gdk::TouchpadGesturePhase UnownedType;

  static Gdk::TouchpadGesturePhase
  get (const ::GValue *value)
  {
    return static_cast<Gdk::TouchpadGesturePhase> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::TouchpadGesturePhase m)
  {
    g_value_set_enum (value, static_cast<::GdkTouchpadGesturePhase> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::TouchpadGesturePhase m)
  {
    set (value, m);
  }

  static Gdk::TouchpadGesturePhase
  cast_for_create (Gdk::TouchpadGesturePhase m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::TouchpadGesturePhase> ()
{
  return gdk_touchpad_gesture_phase_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::TouchpadGesturePhase>
{
  Gdk::TouchpadGesturePhase default_value;

  constexpr PspecTraits (Gdk::TouchpadGesturePhase default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_touchpad_gesture_phase_get_type (),
                              static_cast<::GdkTouchpadGesturePhase> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class TouchpadGesturePhase : std::underlying_type<::GdkTouchpadGesturePhase>::type
{
  BEGIN = GDK_TOUCHPAD_GESTURE_PHASE_BEGIN,
  UPDATE = GDK_TOUCHPAD_GESTURE_PHASE_UPDATE,
  END = GDK_TOUCHPAD_GESTURE_PHASE_END,
  CANCEL = GDK_TOUCHPAD_GESTURE_PHASE_CANCEL,
}; /* enum TouchpadGesturePhase */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
