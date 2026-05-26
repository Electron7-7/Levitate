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
enum class ReducedMotion : std::underlying_type<::GtkReducedMotion>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::ReducedMotion>
{
  typedef Gtk::ReducedMotion UnownedType;

  static Gtk::ReducedMotion
  get (const ::GValue *value)
  {
    return static_cast<Gtk::ReducedMotion> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::ReducedMotion m)
  {
    g_value_set_enum (value, static_cast<::GtkReducedMotion> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::ReducedMotion m)
  {
    set (value, m);
  }

  static Gtk::ReducedMotion
  cast_for_create (Gtk::ReducedMotion m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::ReducedMotion> ()
{
  return gtk_reduced_motion_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::ReducedMotion>
{
  Gtk::ReducedMotion default_value;

  constexpr PspecTraits (Gtk::ReducedMotion default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_reduced_motion_get_type (),
                              static_cast<::GtkReducedMotion> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class ReducedMotion : std::underlying_type<::GtkReducedMotion>::type
{
  NO_PREFERENCE = GTK_REDUCED_MOTION_NO_PREFERENCE,
  REDUCE = GTK_REDUCED_MOTION_REDUCE,
}; /* enum ReducedMotion */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
