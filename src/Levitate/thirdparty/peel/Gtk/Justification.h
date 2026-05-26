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
enum class Justification : std::underlying_type<::GtkJustification>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Justification>
{
  typedef Gtk::Justification UnownedType;

  static Gtk::Justification
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Justification> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Justification m)
  {
    g_value_set_enum (value, static_cast<::GtkJustification> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Justification m)
  {
    set (value, m);
  }

  static Gtk::Justification
  cast_for_create (Gtk::Justification m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Justification> ()
{
  return gtk_justification_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Justification>
{
  Gtk::Justification default_value;

  constexpr PspecTraits (Gtk::Justification default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_justification_get_type (),
                              static_cast<::GtkJustification> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Justification : std::underlying_type<::GtkJustification>::type
{
  LEFT = GTK_JUSTIFY_LEFT,
  RIGHT = GTK_JUSTIFY_RIGHT,
  CENTER = GTK_JUSTIFY_CENTER,
  FILL = GTK_JUSTIFY_FILL,
}; /* enum Justification */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
