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
#include <peel/Gdk/Event.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class TouchpadEvent;
enum class TouchpadGesturePhase : std::underlying_type<::GdkTouchpadGesturePhase>::type;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::TouchpadEvent> ()
{
  return gdk_touchpad_event_get_type ();
}


namespace Gdk
{
class TouchpadEvent : public Event
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TouchpadEvent () = delete;
  TouchpadEvent (const TouchpadEvent &) = delete;
  TouchpadEvent (TouchpadEvent &&) = delete;
  TouchpadEvent &
  operator = (const TouchpadEvent &) = delete;
  TouchpadEvent &
  operator = (TouchpadEvent &&) = delete;
  ~TouchpadEvent () = delete;
public:

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_deltas (double *dx, double *dy) noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    gdk_touchpad_event_get_deltas (_peel_this, dx, dy);
  }

  TouchpadGesturePhase
  get_gesture_phase () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkTouchpadGesturePhase _peel_return = gdk_touchpad_event_get_gesture_phase (_peel_this);
    return static_cast<TouchpadGesturePhase> (_peel_return);
  }

  unsigned
  get_n_fingers () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    return gdk_touchpad_event_get_n_fingers (_peel_this);
  }

  double
  get_pinch_angle_delta () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    return gdk_touchpad_event_get_pinch_angle_delta (_peel_this);
  }

  double
  get_pinch_scale () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    return gdk_touchpad_event_get_pinch_scale (_peel_this);
  }
}; /* class TouchpadEvent */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
