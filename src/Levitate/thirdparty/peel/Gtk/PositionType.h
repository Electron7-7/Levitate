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
enum class PositionType : std::underlying_type<::GtkPositionType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PositionType>
{
  typedef Gtk::PositionType UnownedType;

  static Gtk::PositionType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PositionType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PositionType m)
  {
    g_value_set_enum (value, static_cast<::GtkPositionType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PositionType m)
  {
    set (value, m);
  }

  static Gtk::PositionType
  cast_for_create (Gtk::PositionType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PositionType> ()
{
  return gtk_position_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PositionType>
{
  Gtk::PositionType default_value;

  constexpr PspecTraits (Gtk::PositionType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_position_type_get_type (),
                              static_cast<::GtkPositionType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PositionType : std::underlying_type<::GtkPositionType>::type
{
  LEFT = GTK_POS_LEFT,
  RIGHT = GTK_POS_RIGHT,
  TOP = GTK_POS_TOP,
  BOTTOM = GTK_POS_BOTTOM,
}; /* enum PositionType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
