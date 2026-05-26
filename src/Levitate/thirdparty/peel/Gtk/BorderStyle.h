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
enum class BorderStyle : std::underlying_type<::GtkBorderStyle>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::BorderStyle>
{
  typedef Gtk::BorderStyle UnownedType;

  static Gtk::BorderStyle
  get (const ::GValue *value)
  {
    return static_cast<Gtk::BorderStyle> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::BorderStyle m)
  {
    g_value_set_enum (value, static_cast<::GtkBorderStyle> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::BorderStyle m)
  {
    set (value, m);
  }

  static Gtk::BorderStyle
  cast_for_create (Gtk::BorderStyle m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::BorderStyle> ()
{
  return gtk_border_style_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::BorderStyle>
{
  Gtk::BorderStyle default_value;

  constexpr PspecTraits (Gtk::BorderStyle default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_border_style_get_type (),
                              static_cast<::GtkBorderStyle> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class BorderStyle : std::underlying_type<::GtkBorderStyle>::type
{
  NONE = GTK_BORDER_STYLE_NONE,
  HIDDEN = GTK_BORDER_STYLE_HIDDEN,
  SOLID = GTK_BORDER_STYLE_SOLID,
  INSET = GTK_BORDER_STYLE_INSET,
  OUTSET = GTK_BORDER_STYLE_OUTSET,
  DOTTED = GTK_BORDER_STYLE_DOTTED,
  DASHED = GTK_BORDER_STYLE_DASHED,
  DOUBLE = GTK_BORDER_STYLE_DOUBLE,
  GROOVE = GTK_BORDER_STYLE_GROOVE,
  RIDGE = GTK_BORDER_STYLE_RIDGE,
}; /* enum BorderStyle */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
