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
struct GObject::Value::Traits<Gtk::PrintOperation::Action>
{
  typedef Gtk::PrintOperation::Action UnownedType;

  static Gtk::PrintOperation::Action
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PrintOperation::Action> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PrintOperation::Action m)
  {
    g_value_set_enum (value, static_cast<::GtkPrintOperationAction> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PrintOperation::Action m)
  {
    set (value, m);
  }

  static Gtk::PrintOperation::Action
  cast_for_create (Gtk::PrintOperation::Action m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintOperation::Action> ()
{
  return gtk_print_operation_action_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PrintOperation::Action>
{
  Gtk::PrintOperation::Action default_value;

  constexpr PspecTraits (Gtk::PrintOperation::Action default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_print_operation_action_get_type (),
                              static_cast<::GtkPrintOperationAction> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PrintOperation::Action : std::underlying_type<::GtkPrintOperationAction>::type
{
  PRINT_DIALOG = GTK_PRINT_OPERATION_ACTION_PRINT_DIALOG,
  PRINT = GTK_PRINT_OPERATION_ACTION_PRINT,
  PREVIEW = GTK_PRINT_OPERATION_ACTION_PREVIEW,
  EXPORT_ = GTK_PRINT_OPERATION_ACTION_EXPORT,
}; /* enum PrintOperation::Action */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
