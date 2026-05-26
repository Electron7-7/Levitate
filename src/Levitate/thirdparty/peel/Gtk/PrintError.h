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

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Gtk
{
enum class PrintError : std::underlying_type<::GtkPrintError>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PrintError>
{
  typedef Gtk::PrintError UnownedType;

  static Gtk::PrintError
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PrintError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PrintError m)
  {
    g_value_set_enum (value, static_cast<::GtkPrintError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PrintError m)
  {
    set (value, m);
  }

  static Gtk::PrintError
  cast_for_create (Gtk::PrintError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintError> ()
{
  return gtk_print_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PrintError>
{
  Gtk::PrintError default_value;

  constexpr PspecTraits (Gtk::PrintError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_print_error_get_type (),
                              static_cast<::GtkPrintError> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PrintError : std::underlying_type<::GtkPrintError>::type
{
  GENERAL = GTK_PRINT_ERROR_GENERAL,
  INTERNAL_ERROR = GTK_PRINT_ERROR_INTERNAL_ERROR,
  NOMEM = GTK_PRINT_ERROR_NOMEM,
  INVALID_FILE = GTK_PRINT_ERROR_INVALID_FILE,
}; /* enum PrintError */

peel_no_warn_unused
static GLib::Quark
print_error_quark () noexcept
{
  ::GQuark _peel_return = gtk_print_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
