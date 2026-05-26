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
enum class PrintDuplex : std::underlying_type<::GtkPrintDuplex>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PrintDuplex>
{
  typedef Gtk::PrintDuplex UnownedType;

  static Gtk::PrintDuplex
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PrintDuplex> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PrintDuplex m)
  {
    g_value_set_enum (value, static_cast<::GtkPrintDuplex> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PrintDuplex m)
  {
    set (value, m);
  }

  static Gtk::PrintDuplex
  cast_for_create (Gtk::PrintDuplex m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintDuplex> ()
{
  return gtk_print_duplex_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PrintDuplex>
{
  Gtk::PrintDuplex default_value;

  constexpr PspecTraits (Gtk::PrintDuplex default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_print_duplex_get_type (),
                              static_cast<::GtkPrintDuplex> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PrintDuplex : std::underlying_type<::GtkPrintDuplex>::type
{
  SIMPLEX = GTK_PRINT_DUPLEX_SIMPLEX,
  HORIZONTAL = GTK_PRINT_DUPLEX_HORIZONTAL,
  VERTICAL = GTK_PRINT_DUPLEX_VERTICAL,
}; /* enum PrintDuplex */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
