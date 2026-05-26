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
enum class CornerType : std::underlying_type<::GtkCornerType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::CornerType>
{
  typedef Gtk::CornerType UnownedType;

  static Gtk::CornerType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::CornerType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::CornerType m)
  {
    g_value_set_enum (value, static_cast<::GtkCornerType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::CornerType m)
  {
    set (value, m);
  }

  static Gtk::CornerType
  cast_for_create (Gtk::CornerType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::CornerType> ()
{
  return gtk_corner_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::CornerType>
{
  Gtk::CornerType default_value;

  constexpr PspecTraits (Gtk::CornerType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_corner_type_get_type (),
                              static_cast<::GtkCornerType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class CornerType : std::underlying_type<::GtkCornerType>::type
{
  TOP_LEFT = GTK_CORNER_TOP_LEFT,
  BOTTOM_LEFT = GTK_CORNER_BOTTOM_LEFT,
  TOP_RIGHT = GTK_CORNER_TOP_RIGHT,
  BOTTOM_RIGHT = GTK_CORNER_BOTTOM_RIGHT,
}; /* enum CornerType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
