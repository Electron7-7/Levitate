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
enum class PrintQuality : std::underlying_type<::GtkPrintQuality>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PrintQuality>
{
  typedef Gtk::PrintQuality UnownedType;

  static Gtk::PrintQuality
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PrintQuality> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PrintQuality m)
  {
    g_value_set_enum (value, static_cast<::GtkPrintQuality> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PrintQuality m)
  {
    set (value, m);
  }

  static Gtk::PrintQuality
  cast_for_create (Gtk::PrintQuality m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintQuality> ()
{
  return gtk_print_quality_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PrintQuality>
{
  Gtk::PrintQuality default_value;

  constexpr PspecTraits (Gtk::PrintQuality default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_print_quality_get_type (),
                              static_cast<::GtkPrintQuality> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PrintQuality : std::underlying_type<::GtkPrintQuality>::type
{
  LOW = GTK_PRINT_QUALITY_LOW,
  NORMAL = GTK_PRINT_QUALITY_NORMAL,
  HIGH = GTK_PRINT_QUALITY_HIGH,
  DRAFT = GTK_PRINT_QUALITY_DRAFT,
}; /* enum PrintQuality */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
