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
enum class Unit : std::underlying_type<::GtkUnit>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Unit>
{
  typedef Gtk::Unit UnownedType;

  static Gtk::Unit
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Unit> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Unit m)
  {
    g_value_set_enum (value, static_cast<::GtkUnit> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Unit m)
  {
    set (value, m);
  }

  static Gtk::Unit
  cast_for_create (Gtk::Unit m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Unit> ()
{
  return gtk_unit_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Unit>
{
  Gtk::Unit default_value;

  constexpr PspecTraits (Gtk::Unit default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_unit_get_type (),
                              static_cast<::GtkUnit> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Unit : std::underlying_type<::GtkUnit>::type
{
  NONE = GTK_UNIT_NONE,
  POINTS = GTK_UNIT_POINTS,
  INCH = GTK_UNIT_INCH,
  MM = GTK_UNIT_MM,
}; /* enum Unit */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
