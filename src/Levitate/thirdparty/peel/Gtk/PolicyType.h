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
enum class PolicyType : std::underlying_type<::GtkPolicyType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PolicyType>
{
  typedef Gtk::PolicyType UnownedType;

  static Gtk::PolicyType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PolicyType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PolicyType m)
  {
    g_value_set_enum (value, static_cast<::GtkPolicyType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PolicyType m)
  {
    set (value, m);
  }

  static Gtk::PolicyType
  cast_for_create (Gtk::PolicyType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PolicyType> ()
{
  return gtk_policy_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PolicyType>
{
  Gtk::PolicyType default_value;

  constexpr PspecTraits (Gtk::PolicyType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_policy_type_get_type (),
                              static_cast<::GtkPolicyType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PolicyType : std::underlying_type<::GtkPolicyType>::type
{
  ALWAYS = GTK_POLICY_ALWAYS,
  AUTOMATIC = GTK_POLICY_AUTOMATIC,
  NEVER = GTK_POLICY_NEVER,
  EXTERNAL = GTK_POLICY_EXTERNAL,
}; /* enum PolicyType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
