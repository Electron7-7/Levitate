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
enum class PropagationLimit : std::underlying_type<::GtkPropagationLimit>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PropagationLimit>
{
  typedef Gtk::PropagationLimit UnownedType;

  static Gtk::PropagationLimit
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PropagationLimit> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PropagationLimit m)
  {
    g_value_set_enum (value, static_cast<::GtkPropagationLimit> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PropagationLimit m)
  {
    set (value, m);
  }

  static Gtk::PropagationLimit
  cast_for_create (Gtk::PropagationLimit m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PropagationLimit> ()
{
  return gtk_propagation_limit_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PropagationLimit>
{
  Gtk::PropagationLimit default_value;

  constexpr PspecTraits (Gtk::PropagationLimit default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_propagation_limit_get_type (),
                              static_cast<::GtkPropagationLimit> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PropagationLimit : std::underlying_type<::GtkPropagationLimit>::type
{
  NONE = GTK_LIMIT_NONE,
  SAME_NATIVE = GTK_LIMIT_SAME_NATIVE,
}; /* enum PropagationLimit */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
