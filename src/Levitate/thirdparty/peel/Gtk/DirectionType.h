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
enum class DirectionType : std::underlying_type<::GtkDirectionType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::DirectionType>
{
  typedef Gtk::DirectionType UnownedType;

  static Gtk::DirectionType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::DirectionType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::DirectionType m)
  {
    g_value_set_enum (value, static_cast<::GtkDirectionType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::DirectionType m)
  {
    set (value, m);
  }

  static Gtk::DirectionType
  cast_for_create (Gtk::DirectionType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::DirectionType> ()
{
  return gtk_direction_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::DirectionType>
{
  Gtk::DirectionType default_value;

  constexpr PspecTraits (Gtk::DirectionType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_direction_type_get_type (),
                              static_cast<::GtkDirectionType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class DirectionType : std::underlying_type<::GtkDirectionType>::type
{
  TAB_FORWARD = GTK_DIR_TAB_FORWARD,
  TAB_BACKWARD = GTK_DIR_TAB_BACKWARD,
  UP = GTK_DIR_UP,
  DOWN = GTK_DIR_DOWN,
  LEFT = GTK_DIR_LEFT,
  RIGHT = GTK_DIR_RIGHT,
}; /* enum DirectionType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
