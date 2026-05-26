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
#include <peel/Gtk/Window.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Window::Gravity>
{
  typedef Gtk::Window::Gravity UnownedType;

  static Gtk::Window::Gravity
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Window::Gravity> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Window::Gravity m)
  {
    g_value_set_enum (value, static_cast<::GtkWindowGravity> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Window::Gravity m)
  {
    set (value, m);
  }

  static Gtk::Window::Gravity
  cast_for_create (Gtk::Window::Gravity m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Window::Gravity> ()
{
  return gtk_window_gravity_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Window::Gravity>
{
  Gtk::Window::Gravity default_value;

  constexpr PspecTraits (Gtk::Window::Gravity default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_window_gravity_get_type (),
                              static_cast<::GtkWindowGravity> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Window::Gravity : std::underlying_type<::GtkWindowGravity>::type
{
  TOP_LEFT = GTK_WINDOW_GRAVITY_TOP_LEFT,
  TOP = GTK_WINDOW_GRAVITY_TOP,
  TOP_RIGHT = GTK_WINDOW_GRAVITY_TOP_RIGHT,
  LEFT = GTK_WINDOW_GRAVITY_LEFT,
  CENTER = GTK_WINDOW_GRAVITY_CENTER,
  RIGHT = GTK_WINDOW_GRAVITY_RIGHT,
  BOTTOM_LEFT = GTK_WINDOW_GRAVITY_BOTTOM_LEFT,
  BOTTOM = GTK_WINDOW_GRAVITY_BOTTOM,
  BOTTOM_RIGHT = GTK_WINDOW_GRAVITY_BOTTOM_RIGHT,
  TOP_START = GTK_WINDOW_GRAVITY_TOP_START,
  TOP_END = GTK_WINDOW_GRAVITY_TOP_END,
  START = GTK_WINDOW_GRAVITY_START,
  END = GTK_WINDOW_GRAVITY_END,
  BOTTOM_START = GTK_WINDOW_GRAVITY_BOTTOM_START,
  BOTTOM_END = GTK_WINDOW_GRAVITY_BOTTOM_END,
}; /* enum Window::Gravity */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
