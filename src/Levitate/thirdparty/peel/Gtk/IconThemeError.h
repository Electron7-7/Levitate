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
#include <peel/GLib/Quark.h>
#include <peel/Gtk/IconTheme.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::IconTheme::Error>
{
  typedef Gtk::IconTheme::Error UnownedType;

  static Gtk::IconTheme::Error
  get (const ::GValue *value)
  {
    return static_cast<Gtk::IconTheme::Error> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::IconTheme::Error m)
  {
    g_value_set_enum (value, static_cast<::GtkIconThemeError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::IconTheme::Error m)
  {
    set (value, m);
  }

  static Gtk::IconTheme::Error
  cast_for_create (Gtk::IconTheme::Error m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::IconTheme::Error> ()
{
  return gtk_icon_theme_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::IconTheme::Error>
{
  Gtk::IconTheme::Error default_value;

  constexpr PspecTraits (Gtk::IconTheme::Error default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_icon_theme_error_get_type (),
                              static_cast<::GtkIconThemeError> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class IconTheme::Error : std::underlying_type<::GtkIconThemeError>::type
{
  NOT_FOUND = GTK_ICON_THEME_NOT_FOUND,
  FAILED = GTK_ICON_THEME_FAILED,
}; /* enum IconTheme::Error */

peel_no_warn_unused
static GLib::Quark
icon_theme_error_quark () noexcept
{
  ::GQuark _peel_return = gtk_icon_theme_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
