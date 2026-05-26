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
enum class PrintPages : std::underlying_type<::GtkPrintPages>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PrintPages>
{
  typedef Gtk::PrintPages UnownedType;

  static Gtk::PrintPages
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PrintPages> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PrintPages m)
  {
    g_value_set_enum (value, static_cast<::GtkPrintPages> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PrintPages m)
  {
    set (value, m);
  }

  static Gtk::PrintPages
  cast_for_create (Gtk::PrintPages m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintPages> ()
{
  return gtk_print_pages_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PrintPages>
{
  Gtk::PrintPages default_value;

  constexpr PspecTraits (Gtk::PrintPages default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_print_pages_get_type (),
                              static_cast<::GtkPrintPages> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PrintPages : std::underlying_type<::GtkPrintPages>::type
{
  ALL = GTK_PRINT_PAGES_ALL,
  CURRENT = GTK_PRINT_PAGES_CURRENT,
  RANGES = GTK_PRINT_PAGES_RANGES,
  SELECTION = GTK_PRINT_PAGES_SELECTION,
}; /* enum PrintPages */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
