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
struct GObject::Value::Traits<Gtk::Constraint::Relation>
{
  typedef Gtk::Constraint::Relation UnownedType;

  static Gtk::Constraint::Relation
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Constraint::Relation> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Constraint::Relation m)
  {
    g_value_set_enum (value, static_cast<::GtkConstraintRelation> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Constraint::Relation m)
  {
    set (value, m);
  }

  static Gtk::Constraint::Relation
  cast_for_create (Gtk::Constraint::Relation m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Constraint::Relation> ()
{
  return gtk_constraint_relation_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Constraint::Relation>
{
  Gtk::Constraint::Relation default_value;

  constexpr PspecTraits (Gtk::Constraint::Relation default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_constraint_relation_get_type (),
                              static_cast<::GtkConstraintRelation> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Constraint::Relation : std::underlying_type<::GtkConstraintRelation>::type
{
  LE = GTK_CONSTRAINT_RELATION_LE,
  EQ = GTK_CONSTRAINT_RELATION_EQ,
  GE = GTK_CONSTRAINT_RELATION_GE,
}; /* enum Constraint::Relation */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
