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
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::Event::Type>
{
  typedef Gdk::Event::Type UnownedType;

  static Gdk::Event::Type
  get (const ::GValue *value)
  {
    return static_cast<Gdk::Event::Type> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::Event::Type m)
  {
    g_value_set_enum (value, static_cast<::GdkEventType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::Event::Type m)
  {
    set (value, m);
  }

  static Gdk::Event::Type
  cast_for_create (Gdk::Event::Type m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::Event::Type> ()
{
  return gdk_event_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::Event::Type>
{
  Gdk::Event::Type default_value;

  constexpr PspecTraits (Gdk::Event::Type default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_event_type_get_type (),
                              static_cast<::GdkEventType> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class Event::Type : std::underlying_type<::GdkEventType>::type
{
  DELETE = GDK_DELETE,
  MOTION_NOTIFY = GDK_MOTION_NOTIFY,
  BUTTON_PRESS = GDK_BUTTON_PRESS,
  BUTTON_RELEASE = GDK_BUTTON_RELEASE,
  KEY_PRESS = GDK_KEY_PRESS,
  KEY_RELEASE = GDK_KEY_RELEASE,
  ENTER_NOTIFY = GDK_ENTER_NOTIFY,
  LEAVE_NOTIFY = GDK_LEAVE_NOTIFY,
  FOCUS_CHANGE = GDK_FOCUS_CHANGE,
  PROXIMITY_IN = GDK_PROXIMITY_IN,
  PROXIMITY_OUT = GDK_PROXIMITY_OUT,
  DRAG_ENTER = GDK_DRAG_ENTER,
  DRAG_LEAVE = GDK_DRAG_LEAVE,
  DRAG_MOTION = GDK_DRAG_MOTION,
  DROP_START = GDK_DROP_START,
  SCROLL = GDK_SCROLL,
  GRAB_BROKEN = GDK_GRAB_BROKEN,
  TOUCH_BEGIN = GDK_TOUCH_BEGIN,
  TOUCH_UPDATE = GDK_TOUCH_UPDATE,
  TOUCH_END = GDK_TOUCH_END,
  TOUCH_CANCEL = GDK_TOUCH_CANCEL,
  TOUCHPAD_SWIPE = GDK_TOUCHPAD_SWIPE,
  TOUCHPAD_PINCH = GDK_TOUCHPAD_PINCH,
  PAD_BUTTON_PRESS = GDK_PAD_BUTTON_PRESS,
  PAD_BUTTON_RELEASE = GDK_PAD_BUTTON_RELEASE,
  PAD_RING = GDK_PAD_RING,
  PAD_STRIP = GDK_PAD_STRIP,
  PAD_GROUP_MODE = GDK_PAD_GROUP_MODE,
  TOUCHPAD_HOLD = GDK_TOUCHPAD_HOLD,
  PAD_DIAL = GDK_PAD_DIAL,
  EVENT_LAST = GDK_EVENT_LAST,
}; /* enum Event::Type */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
