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
enum class InterfaceColorScheme : std::underlying_type<::GtkInterfaceColorScheme>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::InterfaceColorScheme>
{
  typedef Gtk::InterfaceColorScheme UnownedType;

  static Gtk::InterfaceColorScheme
  get (const ::GValue *value)
  {
    return static_cast<Gtk::InterfaceColorScheme> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::InterfaceColorScheme m)
  {
    g_value_set_enum (value, static_cast<::GtkInterfaceColorScheme> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::InterfaceColorScheme m)
  {
    set (value, m);
  }

  static Gtk::InterfaceColorScheme
  cast_for_create (Gtk::InterfaceColorScheme m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::InterfaceColorScheme> ()
{
  return gtk_interface_color_scheme_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::InterfaceColorScheme>
{
  Gtk::InterfaceColorScheme default_value;

  constexpr PspecTraits (Gtk::InterfaceColorScheme default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_interface_color_scheme_get_type (),
                              static_cast<::GtkInterfaceColorScheme> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class InterfaceColorScheme : std::underlying_type<::GtkInterfaceColorScheme>::type
{
  UNSUPPORTED = GTK_INTERFACE_COLOR_SCHEME_UNSUPPORTED,
  DEFAULT = GTK_INTERFACE_COLOR_SCHEME_DEFAULT,
  DARK = GTK_INTERFACE_COLOR_SCHEME_DARK,
  LIGHT = GTK_INTERFACE_COLOR_SCHEME_LIGHT,
}; /* enum InterfaceColorScheme */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
