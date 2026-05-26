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

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class PanDirection : std::underlying_type<::GtkPanDirection>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PanDirection>
{
  typedef Gtk::PanDirection UnownedType;

  static Gtk::PanDirection
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PanDirection> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PanDirection m)
  {
    g_value_set_enum (value, static_cast<::GtkPanDirection> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PanDirection m)
  {
    set (value, m);
  }

  static Gtk::PanDirection
  cast_for_create (Gtk::PanDirection m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PanDirection> ()
{
  return gtk_pan_direction_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PanDirection>
{
  Gtk::PanDirection default_value;

  constexpr PspecTraits (Gtk::PanDirection default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_pan_direction_get_type (),
                              static_cast<::GtkPanDirection> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PanDirection : std::underlying_type<::GtkPanDirection>::type
{
  LEFT = GTK_PAN_DIRECTION_LEFT,
  RIGHT = GTK_PAN_DIRECTION_RIGHT,
  UP = GTK_PAN_DIRECTION_UP,
  DOWN = GTK_PAN_DIRECTION_DOWN,
}; /* enum PanDirection */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
