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
#include <peel/Gtk/LevelBar.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::LevelBar::Mode>
{
  typedef Gtk::LevelBar::Mode UnownedType;

  static Gtk::LevelBar::Mode
  get (const ::GValue *value)
  {
    return static_cast<Gtk::LevelBar::Mode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::LevelBar::Mode m)
  {
    g_value_set_enum (value, static_cast<::GtkLevelBarMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::LevelBar::Mode m)
  {
    set (value, m);
  }

  static Gtk::LevelBar::Mode
  cast_for_create (Gtk::LevelBar::Mode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::LevelBar::Mode> ()
{
  return gtk_level_bar_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::LevelBar::Mode>
{
  Gtk::LevelBar::Mode default_value;

  constexpr PspecTraits (Gtk::LevelBar::Mode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_level_bar_mode_get_type (),
                              static_cast<::GtkLevelBarMode> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class LevelBar::Mode : std::underlying_type<::GtkLevelBarMode>::type
{
  CONTINUOUS = GTK_LEVEL_BAR_MODE_CONTINUOUS,
  DISCRETE = GTK_LEVEL_BAR_MODE_DISCRETE,
}; /* enum LevelBar::Mode */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
