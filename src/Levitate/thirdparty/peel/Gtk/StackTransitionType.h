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
#include <peel/Gtk/Stack.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Stack::TransitionType>
{
  typedef Gtk::Stack::TransitionType UnownedType;

  static Gtk::Stack::TransitionType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Stack::TransitionType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Stack::TransitionType m)
  {
    g_value_set_enum (value, static_cast<::GtkStackTransitionType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Stack::TransitionType m)
  {
    set (value, m);
  }

  static Gtk::Stack::TransitionType
  cast_for_create (Gtk::Stack::TransitionType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Stack::TransitionType> ()
{
  return gtk_stack_transition_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Stack::TransitionType>
{
  Gtk::Stack::TransitionType default_value;

  constexpr PspecTraits (Gtk::Stack::TransitionType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_stack_transition_type_get_type (),
                              static_cast<::GtkStackTransitionType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Stack::TransitionType : std::underlying_type<::GtkStackTransitionType>::type
{
  NONE = GTK_STACK_TRANSITION_TYPE_NONE,
  CROSSFADE = GTK_STACK_TRANSITION_TYPE_CROSSFADE,
  SLIDE_RIGHT = GTK_STACK_TRANSITION_TYPE_SLIDE_RIGHT,
  SLIDE_LEFT = GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT,
  SLIDE_UP = GTK_STACK_TRANSITION_TYPE_SLIDE_UP,
  SLIDE_DOWN = GTK_STACK_TRANSITION_TYPE_SLIDE_DOWN,
  SLIDE_LEFT_RIGHT = GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT_RIGHT,
  SLIDE_UP_DOWN = GTK_STACK_TRANSITION_TYPE_SLIDE_UP_DOWN,
  OVER_UP = GTK_STACK_TRANSITION_TYPE_OVER_UP,
  OVER_DOWN = GTK_STACK_TRANSITION_TYPE_OVER_DOWN,
  OVER_LEFT = GTK_STACK_TRANSITION_TYPE_OVER_LEFT,
  OVER_RIGHT = GTK_STACK_TRANSITION_TYPE_OVER_RIGHT,
  UNDER_UP = GTK_STACK_TRANSITION_TYPE_UNDER_UP,
  UNDER_DOWN = GTK_STACK_TRANSITION_TYPE_UNDER_DOWN,
  UNDER_LEFT = GTK_STACK_TRANSITION_TYPE_UNDER_LEFT,
  UNDER_RIGHT = GTK_STACK_TRANSITION_TYPE_UNDER_RIGHT,
  OVER_UP_DOWN = GTK_STACK_TRANSITION_TYPE_OVER_UP_DOWN,
  OVER_DOWN_UP = GTK_STACK_TRANSITION_TYPE_OVER_DOWN_UP,
  OVER_LEFT_RIGHT = GTK_STACK_TRANSITION_TYPE_OVER_LEFT_RIGHT,
  OVER_RIGHT_LEFT = GTK_STACK_TRANSITION_TYPE_OVER_RIGHT_LEFT,
  ROTATE_LEFT = GTK_STACK_TRANSITION_TYPE_ROTATE_LEFT,
  ROTATE_RIGHT = GTK_STACK_TRANSITION_TYPE_ROTATE_RIGHT,
  ROTATE_LEFT_RIGHT = GTK_STACK_TRANSITION_TYPE_ROTATE_LEFT_RIGHT,
}; /* enum Stack::TransitionType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
