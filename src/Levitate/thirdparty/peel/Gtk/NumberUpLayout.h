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
enum class NumberUpLayout : std::underlying_type<::GtkNumberUpLayout>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::NumberUpLayout>
{
  typedef Gtk::NumberUpLayout UnownedType;

  static Gtk::NumberUpLayout
  get (const ::GValue *value)
  {
    return static_cast<Gtk::NumberUpLayout> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::NumberUpLayout m)
  {
    g_value_set_enum (value, static_cast<::GtkNumberUpLayout> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::NumberUpLayout m)
  {
    set (value, m);
  }

  static Gtk::NumberUpLayout
  cast_for_create (Gtk::NumberUpLayout m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::NumberUpLayout> ()
{
  return gtk_number_up_layout_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::NumberUpLayout>
{
  Gtk::NumberUpLayout default_value;

  constexpr PspecTraits (Gtk::NumberUpLayout default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_number_up_layout_get_type (),
                              static_cast<::GtkNumberUpLayout> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class NumberUpLayout : std::underlying_type<::GtkNumberUpLayout>::type
{
  LRTB = GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_TOP_TO_BOTTOM,
  LRBT = GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_BOTTOM_TO_TOP,
  RLTB = GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_TOP_TO_BOTTOM,
  RLBT = GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_BOTTOM_TO_TOP,
  TBLR = GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_LEFT_TO_RIGHT,
  TBRL = GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_RIGHT_TO_LEFT,
  BTLR = GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_LEFT_TO_RIGHT,
  BTRL = GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_RIGHT_TO_LEFT,
}; /* enum NumberUpLayout */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
