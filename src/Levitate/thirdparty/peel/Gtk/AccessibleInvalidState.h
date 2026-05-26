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
struct GObject::Value::Traits<Gtk::Accessible::InvalidState>
{
  typedef Gtk::Accessible::InvalidState UnownedType;

  static Gtk::Accessible::InvalidState
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Accessible::InvalidState> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Accessible::InvalidState m)
  {
    g_value_set_enum (value, static_cast<::GtkAccessibleInvalidState> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Accessible::InvalidState m)
  {
    set (value, m);
  }

  static Gtk::Accessible::InvalidState
  cast_for_create (Gtk::Accessible::InvalidState m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Accessible::InvalidState> ()
{
  return gtk_accessible_invalid_state_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Accessible::InvalidState>
{
  Gtk::Accessible::InvalidState default_value;

  constexpr PspecTraits (Gtk::Accessible::InvalidState default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_accessible_invalid_state_get_type (),
                              static_cast<::GtkAccessibleInvalidState> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Accessible::InvalidState : std::underlying_type<::GtkAccessibleInvalidState>::type
{
  FALSE_ = GTK_ACCESSIBLE_INVALID_FALSE,
  TRUE_ = GTK_ACCESSIBLE_INVALID_TRUE,
  GRAMMAR = GTK_ACCESSIBLE_INVALID_GRAMMAR,
  SPELLING = GTK_ACCESSIBLE_INVALID_SPELLING,
}; /* enum Accessible::InvalidState */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
