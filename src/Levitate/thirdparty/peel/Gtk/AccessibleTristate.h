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
#include <peel/Gtk/Accessible.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Accessible::Tristate>
{
  typedef Gtk::Accessible::Tristate UnownedType;

  static Gtk::Accessible::Tristate
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Accessible::Tristate> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Accessible::Tristate m)
  {
    g_value_set_enum (value, static_cast<::GtkAccessibleTristate> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Accessible::Tristate m)
  {
    set (value, m);
  }

  static Gtk::Accessible::Tristate
  cast_for_create (Gtk::Accessible::Tristate m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Accessible::Tristate> ()
{
  return gtk_accessible_tristate_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Accessible::Tristate>
{
  Gtk::Accessible::Tristate default_value;

  constexpr PspecTraits (Gtk::Accessible::Tristate default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_accessible_tristate_get_type (),
                              static_cast<::GtkAccessibleTristate> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Accessible::Tristate : std::underlying_type<::GtkAccessibleTristate>::type
{
  FALSE_ = GTK_ACCESSIBLE_TRISTATE_FALSE,
  TRUE_ = GTK_ACCESSIBLE_TRISTATE_TRUE,
  MIXED = GTK_ACCESSIBLE_TRISTATE_MIXED,
}; /* enum Accessible::Tristate */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
