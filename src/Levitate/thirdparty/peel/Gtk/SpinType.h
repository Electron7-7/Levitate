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
enum class SpinType : std::underlying_type<::GtkSpinType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::SpinType>
{
  typedef Gtk::SpinType UnownedType;

  static Gtk::SpinType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::SpinType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::SpinType m)
  {
    g_value_set_enum (value, static_cast<::GtkSpinType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::SpinType m)
  {
    set (value, m);
  }

  static Gtk::SpinType
  cast_for_create (Gtk::SpinType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::SpinType> ()
{
  return gtk_spin_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::SpinType>
{
  Gtk::SpinType default_value;

  constexpr PspecTraits (Gtk::SpinType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_spin_type_get_type (),
                              static_cast<::GtkSpinType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class SpinType : std::underlying_type<::GtkSpinType>::type
{
  STEP_FORWARD = GTK_SPIN_STEP_FORWARD,
  STEP_BACKWARD = GTK_SPIN_STEP_BACKWARD,
  PAGE_FORWARD = GTK_SPIN_PAGE_FORWARD,
  PAGE_BACKWARD = GTK_SPIN_PAGE_BACKWARD,
  HOME = GTK_SPIN_HOME,
  END = GTK_SPIN_END,
  USER_DEFINED = GTK_SPIN_USER_DEFINED,
}; /* enum SpinType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
