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
enum class ButtonsType : std::underlying_type<::GtkButtonsType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::ButtonsType>
{
  typedef Gtk::ButtonsType UnownedType;

  static Gtk::ButtonsType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::ButtonsType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::ButtonsType m)
  {
    g_value_set_enum (value, static_cast<::GtkButtonsType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::ButtonsType m)
  {
    set (value, m);
  }

  static Gtk::ButtonsType
  cast_for_create (Gtk::ButtonsType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::ButtonsType> ()
{
  return gtk_buttons_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::ButtonsType>
{
  Gtk::ButtonsType default_value;

  constexpr PspecTraits (Gtk::ButtonsType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_buttons_type_get_type (),
                              static_cast<::GtkButtonsType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class ButtonsType : std::underlying_type<::GtkButtonsType>::type
{
  NONE = GTK_BUTTONS_NONE,
  OK = GTK_BUTTONS_OK,
  CLOSE = GTK_BUTTONS_CLOSE,
  CANCEL = GTK_BUTTONS_CANCEL,
  YES_NO = GTK_BUTTONS_YES_NO,
  OK_CANCEL = GTK_BUTTONS_OK_CANCEL,
}; /* enum ButtonsType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
