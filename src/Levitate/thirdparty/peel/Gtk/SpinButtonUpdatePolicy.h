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
#include <peel/Gtk/SpinButton.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::SpinButton::UpdatePolicy>
{
  typedef Gtk::SpinButton::UpdatePolicy UnownedType;

  static Gtk::SpinButton::UpdatePolicy
  get (const ::GValue *value)
  {
    return static_cast<Gtk::SpinButton::UpdatePolicy> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::SpinButton::UpdatePolicy m)
  {
    g_value_set_enum (value, static_cast<::GtkSpinButtonUpdatePolicy> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::SpinButton::UpdatePolicy m)
  {
    set (value, m);
  }

  static Gtk::SpinButton::UpdatePolicy
  cast_for_create (Gtk::SpinButton::UpdatePolicy m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::SpinButton::UpdatePolicy> ()
{
  return gtk_spin_button_update_policy_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::SpinButton::UpdatePolicy>
{
  Gtk::SpinButton::UpdatePolicy default_value;

  constexpr PspecTraits (Gtk::SpinButton::UpdatePolicy default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_spin_button_update_policy_get_type (),
                              static_cast<::GtkSpinButtonUpdatePolicy> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class SpinButton::UpdatePolicy : std::underlying_type<::GtkSpinButtonUpdatePolicy>::type
{
  ALWAYS = GTK_UPDATE_ALWAYS,
  IF_VALID = GTK_UPDATE_IF_VALID,
}; /* enum SpinButton::UpdatePolicy */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
