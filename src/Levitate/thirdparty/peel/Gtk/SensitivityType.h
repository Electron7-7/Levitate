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
enum class SensitivityType : std::underlying_type<::GtkSensitivityType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::SensitivityType>
{
  typedef Gtk::SensitivityType UnownedType;

  static Gtk::SensitivityType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::SensitivityType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::SensitivityType m)
  {
    g_value_set_enum (value, static_cast<::GtkSensitivityType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::SensitivityType m)
  {
    set (value, m);
  }

  static Gtk::SensitivityType
  cast_for_create (Gtk::SensitivityType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::SensitivityType> ()
{
  return gtk_sensitivity_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::SensitivityType>
{
  Gtk::SensitivityType default_value;

  constexpr PspecTraits (Gtk::SensitivityType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_sensitivity_type_get_type (),
                              static_cast<::GtkSensitivityType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class SensitivityType : std::underlying_type<::GtkSensitivityType>::type
{
  AUTO = GTK_SENSITIVITY_AUTO,
  ON = GTK_SENSITIVITY_ON,
  OFF = GTK_SENSITIVITY_OFF,
}; /* enum SensitivityType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
