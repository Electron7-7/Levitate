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
#include <peel/Gtk/Constraint.h>

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
struct GObject::Value::Traits<Gtk::Constraint::VflParserError>
{
  typedef Gtk::Constraint::VflParserError UnownedType;

  static Gtk::Constraint::VflParserError
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Constraint::VflParserError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Constraint::VflParserError m)
  {
    g_value_set_enum (value, static_cast<::GtkConstraintVflParserError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Constraint::VflParserError m)
  {
    set (value, m);
  }

  static Gtk::Constraint::VflParserError
  cast_for_create (Gtk::Constraint::VflParserError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Constraint::VflParserError> ()
{
  return gtk_constraint_vfl_parser_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Constraint::VflParserError>
{
  Gtk::Constraint::VflParserError default_value;

  constexpr PspecTraits (Gtk::Constraint::VflParserError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_constraint_vfl_parser_error_get_type (),
                              static_cast<::GtkConstraintVflParserError> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Constraint::VflParserError : std::underlying_type<::GtkConstraintVflParserError>::type
{
  INVALID_SYMBOL = GTK_CONSTRAINT_VFL_PARSER_ERROR_INVALID_SYMBOL,
  INVALID_ATTRIBUTE = GTK_CONSTRAINT_VFL_PARSER_ERROR_INVALID_ATTRIBUTE,
  INVALID_VIEW = GTK_CONSTRAINT_VFL_PARSER_ERROR_INVALID_VIEW,
  INVALID_METRIC = GTK_CONSTRAINT_VFL_PARSER_ERROR_INVALID_METRIC,
  INVALID_PRIORITY = GTK_CONSTRAINT_VFL_PARSER_ERROR_INVALID_PRIORITY,
  INVALID_RELATION = GTK_CONSTRAINT_VFL_PARSER_ERROR_INVALID_RELATION,
}; /* enum Constraint::VflParserError */

peel_no_warn_unused
static GLib::Quark
constraint_vfl_parser_error_quark () noexcept
{
  ::GQuark _peel_return = gtk_constraint_vfl_parser_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
