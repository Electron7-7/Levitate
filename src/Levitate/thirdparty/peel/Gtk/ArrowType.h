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
enum class ArrowType : std::underlying_type<::GtkArrowType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::ArrowType>
{
  typedef Gtk::ArrowType UnownedType;

  static Gtk::ArrowType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::ArrowType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::ArrowType m)
  {
    g_value_set_enum (value, static_cast<::GtkArrowType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::ArrowType m)
  {
    set (value, m);
  }

  static Gtk::ArrowType
  cast_for_create (Gtk::ArrowType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::ArrowType> ()
{
  return gtk_arrow_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::ArrowType>
{
  Gtk::ArrowType default_value;

  constexpr PspecTraits (Gtk::ArrowType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_arrow_type_get_type (),
                              static_cast<::GtkArrowType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class ArrowType : std::underlying_type<::GtkArrowType>::type
{
  UP = GTK_ARROW_UP,
  DOWN = GTK_ARROW_DOWN,
  LEFT = GTK_ARROW_LEFT,
  RIGHT = GTK_ARROW_RIGHT,
  NONE = GTK_ARROW_NONE,
}; /* enum ArrowType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
