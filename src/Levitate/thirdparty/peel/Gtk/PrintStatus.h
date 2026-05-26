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
enum class PrintStatus : std::underlying_type<::GtkPrintStatus>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PrintStatus>
{
  typedef Gtk::PrintStatus UnownedType;

  static Gtk::PrintStatus
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PrintStatus> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PrintStatus m)
  {
    g_value_set_enum (value, static_cast<::GtkPrintStatus> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PrintStatus m)
  {
    set (value, m);
  }

  static Gtk::PrintStatus
  cast_for_create (Gtk::PrintStatus m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintStatus> ()
{
  return gtk_print_status_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PrintStatus>
{
  Gtk::PrintStatus default_value;

  constexpr PspecTraits (Gtk::PrintStatus default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_print_status_get_type (),
                              static_cast<::GtkPrintStatus> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PrintStatus : std::underlying_type<::GtkPrintStatus>::type
{
  INITIAL = GTK_PRINT_STATUS_INITIAL,
  PREPARING = GTK_PRINT_STATUS_PREPARING,
  GENERATING_DATA = GTK_PRINT_STATUS_GENERATING_DATA,
  SENDING_DATA = GTK_PRINT_STATUS_SENDING_DATA,
  PENDING = GTK_PRINT_STATUS_PENDING,
  PENDING_ISSUE = GTK_PRINT_STATUS_PENDING_ISSUE,
  PRINTING = GTK_PRINT_STATUS_PRINTING,
  FINISHED = GTK_PRINT_STATUS_FINISHED,
  FINISHED_ABORTED = GTK_PRINT_STATUS_FINISHED_ABORTED,
}; /* enum PrintStatus */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
