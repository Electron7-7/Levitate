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
#include <peel/Gtk/Scrollable.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Scrollable::Policy>
{
  typedef Gtk::Scrollable::Policy UnownedType;

  static Gtk::Scrollable::Policy
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Scrollable::Policy> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Scrollable::Policy m)
  {
    g_value_set_enum (value, static_cast<::GtkScrollablePolicy> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Scrollable::Policy m)
  {
    set (value, m);
  }

  static Gtk::Scrollable::Policy
  cast_for_create (Gtk::Scrollable::Policy m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Scrollable::Policy> ()
{
  return gtk_scrollable_policy_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Scrollable::Policy>
{
  Gtk::Scrollable::Policy default_value;

  constexpr PspecTraits (Gtk::Scrollable::Policy default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_scrollable_policy_get_type (),
                              static_cast<::GtkScrollablePolicy> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Scrollable::Policy : std::underlying_type<::GtkScrollablePolicy>::type
{
  MINIMUM = GTK_SCROLL_MINIMUM,
  NATURAL = GTK_SCROLL_NATURAL,
}; /* enum Scrollable::Policy */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
