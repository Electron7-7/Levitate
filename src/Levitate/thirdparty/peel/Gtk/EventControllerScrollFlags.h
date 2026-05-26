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
#include <gtk/gtk.h>
#include <peel/Gtk/EventControllerScroll.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::EventControllerScroll::Flags>
{
  typedef Gtk::EventControllerScroll::Flags UnownedType;

  static Gtk::EventControllerScroll::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::EventControllerScroll::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::EventControllerScroll::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GtkEventControllerScrollFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::EventControllerScroll::Flags flags)
  {
    set (value, flags);
  }

  static Gtk::EventControllerScroll::Flags
  cast_for_create (Gtk::EventControllerScroll::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::EventControllerScroll::Flags> ()
{
  return gtk_event_controller_scroll_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::EventControllerScroll::Flags>
{
  Gtk::EventControllerScroll::Flags default_value;

  constexpr PspecTraits (Gtk::EventControllerScroll::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_event_controller_scroll_flags_get_type (),
                               static_cast<::GtkEventControllerScrollFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ EventControllerScroll::Flags : std::underlying_type<::GtkEventControllerScrollFlags>::type
{
  NONE = GTK_EVENT_CONTROLLER_SCROLL_NONE,
  VERTICAL = GTK_EVENT_CONTROLLER_SCROLL_VERTICAL,
  HORIZONTAL = GTK_EVENT_CONTROLLER_SCROLL_HORIZONTAL,
  DISCRETE = GTK_EVENT_CONTROLLER_SCROLL_DISCRETE,
  KINETIC = GTK_EVENT_CONTROLLER_SCROLL_KINETIC,
  PHYSICAL_DIRECTION = GTK_EVENT_CONTROLLER_SCROLL_PHYSICAL_DIRECTION,
  BOTH_AXES = GTK_EVENT_CONTROLLER_SCROLL_BOTH_AXES,
}; /* bitfield EventControllerScroll::Flags */

static constexpr inline EventControllerScroll::Flags
operator | (EventControllerScroll::Flags lhs, EventControllerScroll::Flags rhs)
{
  return EventControllerScroll::Flags (static_cast<::GtkEventControllerScrollFlags> (lhs) | static_cast<::GtkEventControllerScrollFlags> (rhs));
}

static constexpr inline EventControllerScroll::Flags
operator & (EventControllerScroll::Flags lhs, EventControllerScroll::Flags rhs)
{
  return EventControllerScroll::Flags (static_cast<::GtkEventControllerScrollFlags> (lhs) & static_cast<::GtkEventControllerScrollFlags> (rhs));
}

static constexpr inline EventControllerScroll::Flags
operator ^ (EventControllerScroll::Flags lhs, EventControllerScroll::Flags rhs)
{
  return EventControllerScroll::Flags (static_cast<::GtkEventControllerScrollFlags> (lhs) ^ static_cast<::GtkEventControllerScrollFlags> (rhs));
}

static constexpr inline EventControllerScroll::Flags
operator ~ (EventControllerScroll::Flags lhs)
{
  return EventControllerScroll::Flags (~static_cast<::GtkEventControllerScrollFlags> (lhs));
}

static inline EventControllerScroll::Flags &
operator |= (EventControllerScroll::Flags &lhs, EventControllerScroll::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline EventControllerScroll::Flags &
operator &= (EventControllerScroll::Flags &lhs, EventControllerScroll::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline EventControllerScroll::Flags &
operator ^= (EventControllerScroll::Flags &lhs, EventControllerScroll::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (EventControllerScroll::Flags lhs)
{
  return !static_cast<::GtkEventControllerScrollFlags> (lhs);
}

static constexpr inline bool
operator + (EventControllerScroll::Flags lhs)
{
  return !!static_cast<::GtkEventControllerScrollFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
