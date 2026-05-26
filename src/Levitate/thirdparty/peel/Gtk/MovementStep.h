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
enum class MovementStep : std::underlying_type<::GtkMovementStep>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::MovementStep>
{
  typedef Gtk::MovementStep UnownedType;

  static Gtk::MovementStep
  get (const ::GValue *value)
  {
    return static_cast<Gtk::MovementStep> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::MovementStep m)
  {
    g_value_set_enum (value, static_cast<::GtkMovementStep> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::MovementStep m)
  {
    set (value, m);
  }

  static Gtk::MovementStep
  cast_for_create (Gtk::MovementStep m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::MovementStep> ()
{
  return gtk_movement_step_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::MovementStep>
{
  Gtk::MovementStep default_value;

  constexpr PspecTraits (Gtk::MovementStep default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_movement_step_get_type (),
                              static_cast<::GtkMovementStep> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class MovementStep : std::underlying_type<::GtkMovementStep>::type
{
  LOGICAL_POSITIONS = GTK_MOVEMENT_LOGICAL_POSITIONS,
  VISUAL_POSITIONS = GTK_MOVEMENT_VISUAL_POSITIONS,
  WORDS = GTK_MOVEMENT_WORDS,
  DISPLAY_LINES = GTK_MOVEMENT_DISPLAY_LINES,
  DISPLAY_LINE_ENDS = GTK_MOVEMENT_DISPLAY_LINE_ENDS,
  PARAGRAPHS = GTK_MOVEMENT_PARAGRAPHS,
  PARAGRAPH_ENDS = GTK_MOVEMENT_PARAGRAPH_ENDS,
  PAGES = GTK_MOVEMENT_PAGES,
  BUFFER_ENDS = GTK_MOVEMENT_BUFFER_ENDS,
  HORIZONTAL_PAGES = GTK_MOVEMENT_HORIZONTAL_PAGES,
}; /* enum MovementStep */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
