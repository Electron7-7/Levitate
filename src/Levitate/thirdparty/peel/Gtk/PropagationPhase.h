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
enum class PropagationPhase : std::underlying_type<::GtkPropagationPhase>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PropagationPhase>
{
  typedef Gtk::PropagationPhase UnownedType;

  static Gtk::PropagationPhase
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PropagationPhase> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PropagationPhase m)
  {
    g_value_set_enum (value, static_cast<::GtkPropagationPhase> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PropagationPhase m)
  {
    set (value, m);
  }

  static Gtk::PropagationPhase
  cast_for_create (Gtk::PropagationPhase m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PropagationPhase> ()
{
  return gtk_propagation_phase_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PropagationPhase>
{
  Gtk::PropagationPhase default_value;

  constexpr PspecTraits (Gtk::PropagationPhase default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_propagation_phase_get_type (),
                              static_cast<::GtkPropagationPhase> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PropagationPhase : std::underlying_type<::GtkPropagationPhase>::type
{
  NONE = GTK_PHASE_NONE,
  CAPTURE = GTK_PHASE_CAPTURE,
  BUBBLE = GTK_PHASE_BUBBLE,
  TARGET = GTK_PHASE_TARGET,
}; /* enum PropagationPhase */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
