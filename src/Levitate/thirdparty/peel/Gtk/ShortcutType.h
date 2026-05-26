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
enum class ShortcutType : std::underlying_type<::GtkShortcutType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::ShortcutType>
{
  typedef Gtk::ShortcutType UnownedType;

  static Gtk::ShortcutType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::ShortcutType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::ShortcutType m)
  {
    g_value_set_enum (value, static_cast<::GtkShortcutType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::ShortcutType m)
  {
    set (value, m);
  }

  static Gtk::ShortcutType
  cast_for_create (Gtk::ShortcutType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::ShortcutType> ()
{
  return gtk_shortcut_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::ShortcutType>
{
  Gtk::ShortcutType default_value;

  constexpr PspecTraits (Gtk::ShortcutType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_shortcut_type_get_type (),
                              static_cast<::GtkShortcutType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class ShortcutType : std::underlying_type<::GtkShortcutType>::type
{
  ACCELERATOR = GTK_SHORTCUT_ACCELERATOR,
  GESTURE_PINCH = GTK_SHORTCUT_GESTURE_PINCH,
  GESTURE_STRETCH = GTK_SHORTCUT_GESTURE_STRETCH,
  GESTURE_ROTATE_CLOCKWISE = GTK_SHORTCUT_GESTURE_ROTATE_CLOCKWISE,
  GESTURE_ROTATE_COUNTERCLOCKWISE = GTK_SHORTCUT_GESTURE_ROTATE_COUNTERCLOCKWISE,
  GESTURE_TWO_FINGER_SWIPE_LEFT = GTK_SHORTCUT_GESTURE_TWO_FINGER_SWIPE_LEFT,
  GESTURE_TWO_FINGER_SWIPE_RIGHT = GTK_SHORTCUT_GESTURE_TWO_FINGER_SWIPE_RIGHT,
  GESTURE = GTK_SHORTCUT_GESTURE,
  GESTURE_SWIPE_LEFT = GTK_SHORTCUT_GESTURE_SWIPE_LEFT,
  GESTURE_SWIPE_RIGHT = GTK_SHORTCUT_GESTURE_SWIPE_RIGHT,
}; /* enum ShortcutType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
