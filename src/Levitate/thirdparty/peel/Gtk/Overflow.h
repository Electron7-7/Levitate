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
enum class Overflow : std::underlying_type<::GtkOverflow>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Overflow>
{
  typedef Gtk::Overflow UnownedType;

  static Gtk::Overflow
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Overflow> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Overflow m)
  {
    g_value_set_enum (value, static_cast<::GtkOverflow> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Overflow m)
  {
    set (value, m);
  }

  static Gtk::Overflow
  cast_for_create (Gtk::Overflow m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Overflow> ()
{
  return gtk_overflow_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Overflow>
{
  Gtk::Overflow default_value;

  constexpr PspecTraits (Gtk::Overflow default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_overflow_get_type (),
                              static_cast<::GtkOverflow> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Overflow : std::underlying_type<::GtkOverflow>::type
{
  VISIBLE = GTK_OVERFLOW_VISIBLE,
  HIDDEN = GTK_OVERFLOW_HIDDEN,
}; /* enum Overflow */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
