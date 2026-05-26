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
enum class SymbolicColor : std::underlying_type<::GtkSymbolicColor>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::SymbolicColor>
{
  typedef Gtk::SymbolicColor UnownedType;

  static Gtk::SymbolicColor
  get (const ::GValue *value)
  {
    return static_cast<Gtk::SymbolicColor> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::SymbolicColor m)
  {
    g_value_set_enum (value, static_cast<::GtkSymbolicColor> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::SymbolicColor m)
  {
    set (value, m);
  }

  static Gtk::SymbolicColor
  cast_for_create (Gtk::SymbolicColor m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::SymbolicColor> ()
{
  return gtk_symbolic_color_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::SymbolicColor>
{
  Gtk::SymbolicColor default_value;

  constexpr PspecTraits (Gtk::SymbolicColor default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_symbolic_color_get_type (),
                              static_cast<::GtkSymbolicColor> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class SymbolicColor : std::underlying_type<::GtkSymbolicColor>::type
{
  FOREGROUND = GTK_SYMBOLIC_COLOR_FOREGROUND,
  ERROR_ = GTK_SYMBOLIC_COLOR_ERROR,
  WARNING = GTK_SYMBOLIC_COLOR_WARNING,
  SUCCESS = GTK_SYMBOLIC_COLOR_SUCCESS,
  ACCENT = GTK_SYMBOLIC_COLOR_ACCENT,
}; /* enum SymbolicColor */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
