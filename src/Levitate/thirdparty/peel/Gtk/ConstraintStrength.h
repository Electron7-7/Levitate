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
#include <peel/Gtk/Constraint.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Constraint::Strength>
{
  typedef Gtk::Constraint::Strength UnownedType;

  static Gtk::Constraint::Strength
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Constraint::Strength> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Constraint::Strength m)
  {
    g_value_set_enum (value, static_cast<::GtkConstraintStrength> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Constraint::Strength m)
  {
    set (value, m);
  }

  static Gtk::Constraint::Strength
  cast_for_create (Gtk::Constraint::Strength m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Constraint::Strength> ()
{
  return gtk_constraint_strength_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Constraint::Strength>
{
  Gtk::Constraint::Strength default_value;

  constexpr PspecTraits (Gtk::Constraint::Strength default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_constraint_strength_get_type (),
                              static_cast<::GtkConstraintStrength> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Constraint::Strength : std::underlying_type<::GtkConstraintStrength>::type
{
  REQUIRED = GTK_CONSTRAINT_STRENGTH_REQUIRED,
  STRONG = GTK_CONSTRAINT_STRENGTH_STRONG,
  MEDIUM = GTK_CONSTRAINT_STRENGTH_MEDIUM,
  WEAK = GTK_CONSTRAINT_STRENGTH_WEAK,
}; /* enum Constraint::Strength */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
