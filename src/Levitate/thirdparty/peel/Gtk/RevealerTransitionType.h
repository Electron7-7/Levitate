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
#include <peel/Gtk/Revealer.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Revealer::TransitionType>
{
  typedef Gtk::Revealer::TransitionType UnownedType;

  static Gtk::Revealer::TransitionType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Revealer::TransitionType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Revealer::TransitionType m)
  {
    g_value_set_enum (value, static_cast<::GtkRevealerTransitionType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Revealer::TransitionType m)
  {
    set (value, m);
  }

  static Gtk::Revealer::TransitionType
  cast_for_create (Gtk::Revealer::TransitionType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Revealer::TransitionType> ()
{
  return gtk_revealer_transition_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Revealer::TransitionType>
{
  Gtk::Revealer::TransitionType default_value;

  constexpr PspecTraits (Gtk::Revealer::TransitionType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_revealer_transition_type_get_type (),
                              static_cast<::GtkRevealerTransitionType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Revealer::TransitionType : std::underlying_type<::GtkRevealerTransitionType>::type
{
  NONE = GTK_REVEALER_TRANSITION_TYPE_NONE,
  CROSSFADE = GTK_REVEALER_TRANSITION_TYPE_CROSSFADE,
  SLIDE_RIGHT = GTK_REVEALER_TRANSITION_TYPE_SLIDE_RIGHT,
  SLIDE_LEFT = GTK_REVEALER_TRANSITION_TYPE_SLIDE_LEFT,
  SLIDE_UP = GTK_REVEALER_TRANSITION_TYPE_SLIDE_UP,
  SLIDE_DOWN = GTK_REVEALER_TRANSITION_TYPE_SLIDE_DOWN,
  SWING_RIGHT = GTK_REVEALER_TRANSITION_TYPE_SWING_RIGHT,
  SWING_LEFT = GTK_REVEALER_TRANSITION_TYPE_SWING_LEFT,
  SWING_UP = GTK_REVEALER_TRANSITION_TYPE_SWING_UP,
  SWING_DOWN = GTK_REVEALER_TRANSITION_TYPE_SWING_DOWN,
  FADE_SLIDE_RIGHT = GTK_REVEALER_TRANSITION_TYPE_FADE_SLIDE_RIGHT,
  FADE_SLIDE_LEFT = GTK_REVEALER_TRANSITION_TYPE_FADE_SLIDE_LEFT,
  FADE_SLIDE_UP = GTK_REVEALER_TRANSITION_TYPE_FADE_SLIDE_UP,
  FADE_SLIDE_DOWN = GTK_REVEALER_TRANSITION_TYPE_FADE_SLIDE_DOWN,
}; /* enum Revealer::TransitionType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
