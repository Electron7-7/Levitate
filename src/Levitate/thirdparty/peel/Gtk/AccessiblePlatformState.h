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
struct GObject::Value::Traits<Gtk::Accessible::PlatformState>
{
  typedef Gtk::Accessible::PlatformState UnownedType;

  static Gtk::Accessible::PlatformState
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Accessible::PlatformState> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Accessible::PlatformState m)
  {
    g_value_set_enum (value, static_cast<::GtkAccessiblePlatformState> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Accessible::PlatformState m)
  {
    set (value, m);
  }

  static Gtk::Accessible::PlatformState
  cast_for_create (Gtk::Accessible::PlatformState m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Accessible::PlatformState> ()
{
  return gtk_accessible_platform_state_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Accessible::PlatformState>
{
  Gtk::Accessible::PlatformState default_value;

  constexpr PspecTraits (Gtk::Accessible::PlatformState default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_accessible_platform_state_get_type (),
                              static_cast<::GtkAccessiblePlatformState> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Accessible::PlatformState : std::underlying_type<::GtkAccessiblePlatformState>::type
{
  FOCUSABLE = GTK_ACCESSIBLE_PLATFORM_STATE_FOCUSABLE,
  FOCUSED = GTK_ACCESSIBLE_PLATFORM_STATE_FOCUSED,
  ACTIVE = GTK_ACCESSIBLE_PLATFORM_STATE_ACTIVE,
}; /* enum Accessible::PlatformState */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
