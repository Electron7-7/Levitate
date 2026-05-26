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
#include <peel/Gtk/PrintOperation.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PrintOperation::Result>
{
  typedef Gtk::PrintOperation::Result UnownedType;

  static Gtk::PrintOperation::Result
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PrintOperation::Result> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PrintOperation::Result m)
  {
    g_value_set_enum (value, static_cast<::GtkPrintOperationResult> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PrintOperation::Result m)
  {
    set (value, m);
  }

  static Gtk::PrintOperation::Result
  cast_for_create (Gtk::PrintOperation::Result m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintOperation::Result> ()
{
  return gtk_print_operation_result_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PrintOperation::Result>
{
  Gtk::PrintOperation::Result default_value;

  constexpr PspecTraits (Gtk::PrintOperation::Result default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_print_operation_result_get_type (),
                              static_cast<::GtkPrintOperationResult> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PrintOperation::Result : std::underlying_type<::GtkPrintOperationResult>::type
{
  ERROR_ = GTK_PRINT_OPERATION_RESULT_ERROR,
  APPLY = GTK_PRINT_OPERATION_RESULT_APPLY,
  CANCEL = GTK_PRINT_OPERATION_RESULT_CANCEL,
  IN_PROGRESS = GTK_PRINT_OPERATION_RESULT_IN_PROGRESS,
}; /* enum PrintOperation::Result */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
