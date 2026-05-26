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
enum class EventSequenceState : std::underlying_type<::GtkEventSequenceState>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::EventSequenceState>
{
  typedef Gtk::EventSequenceState UnownedType;

  static Gtk::EventSequenceState
  get (const ::GValue *value)
  {
    return static_cast<Gtk::EventSequenceState> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::EventSequenceState m)
  {
    g_value_set_enum (value, static_cast<::GtkEventSequenceState> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::EventSequenceState m)
  {
    set (value, m);
  }

  static Gtk::EventSequenceState
  cast_for_create (Gtk::EventSequenceState m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::EventSequenceState> ()
{
  return gtk_event_sequence_state_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::EventSequenceState>
{
  Gtk::EventSequenceState default_value;

  constexpr PspecTraits (Gtk::EventSequenceState default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_event_sequence_state_get_type (),
                              static_cast<::GtkEventSequenceState> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class EventSequenceState : std::underlying_type<::GtkEventSequenceState>::type
{
  NONE = GTK_EVENT_SEQUENCE_NONE,
  CLAIMED = GTK_EVENT_SEQUENCE_CLAIMED,
  DENIED = GTK_EVENT_SEQUENCE_DENIED,
}; /* enum EventSequenceState */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
