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
enum class InputPurpose : std::underlying_type<::GtkInputPurpose>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::InputPurpose>
{
  typedef Gtk::InputPurpose UnownedType;

  static Gtk::InputPurpose
  get (const ::GValue *value)
  {
    return static_cast<Gtk::InputPurpose> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::InputPurpose m)
  {
    g_value_set_enum (value, static_cast<::GtkInputPurpose> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::InputPurpose m)
  {
    set (value, m);
  }

  static Gtk::InputPurpose
  cast_for_create (Gtk::InputPurpose m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::InputPurpose> ()
{
  return gtk_input_purpose_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::InputPurpose>
{
  Gtk::InputPurpose default_value;

  constexpr PspecTraits (Gtk::InputPurpose default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_input_purpose_get_type (),
                              static_cast<::GtkInputPurpose> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class InputPurpose : std::underlying_type<::GtkInputPurpose>::type
{
  FREE_FORM = GTK_INPUT_PURPOSE_FREE_FORM,
  ALPHA = GTK_INPUT_PURPOSE_ALPHA,
  DIGITS = GTK_INPUT_PURPOSE_DIGITS,
  NUMBER = GTK_INPUT_PURPOSE_NUMBER,
  PHONE = GTK_INPUT_PURPOSE_PHONE,
  URL = GTK_INPUT_PURPOSE_URL,
  EMAIL = GTK_INPUT_PURPOSE_EMAIL,
  NAME = GTK_INPUT_PURPOSE_NAME,
  PASSWORD = GTK_INPUT_PURPOSE_PASSWORD,
  PIN = GTK_INPUT_PURPOSE_PIN,
  TERMINAL = GTK_INPUT_PURPOSE_TERMINAL,
}; /* enum InputPurpose */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
