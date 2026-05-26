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
enum class BaselinePosition : std::underlying_type<::GtkBaselinePosition>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::BaselinePosition>
{
  typedef Gtk::BaselinePosition UnownedType;

  static Gtk::BaselinePosition
  get (const ::GValue *value)
  {
    return static_cast<Gtk::BaselinePosition> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::BaselinePosition m)
  {
    g_value_set_enum (value, static_cast<::GtkBaselinePosition> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::BaselinePosition m)
  {
    set (value, m);
  }

  static Gtk::BaselinePosition
  cast_for_create (Gtk::BaselinePosition m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::BaselinePosition> ()
{
  return gtk_baseline_position_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::BaselinePosition>
{
  Gtk::BaselinePosition default_value;

  constexpr PspecTraits (Gtk::BaselinePosition default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_baseline_position_get_type (),
                              static_cast<::GtkBaselinePosition> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class BaselinePosition : std::underlying_type<::GtkBaselinePosition>::type
{
  TOP = GTK_BASELINE_POSITION_TOP,
  CENTER = GTK_BASELINE_POSITION_CENTER,
  BOTTOM = GTK_BASELINE_POSITION_BOTTOM,
}; /* enum BaselinePosition */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
