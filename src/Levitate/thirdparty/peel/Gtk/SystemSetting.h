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
enum class SystemSetting : std::underlying_type<::GtkSystemSetting>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::SystemSetting>
{
  typedef Gtk::SystemSetting UnownedType;

  static Gtk::SystemSetting
  get (const ::GValue *value)
  {
    return static_cast<Gtk::SystemSetting> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::SystemSetting m)
  {
    g_value_set_enum (value, static_cast<::GtkSystemSetting> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::SystemSetting m)
  {
    set (value, m);
  }

  static Gtk::SystemSetting
  cast_for_create (Gtk::SystemSetting m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::SystemSetting> ()
{
  return gtk_system_setting_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::SystemSetting>
{
  Gtk::SystemSetting default_value;

  constexpr PspecTraits (Gtk::SystemSetting default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_system_setting_get_type (),
                              static_cast<::GtkSystemSetting> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class SystemSetting : std::underlying_type<::GtkSystemSetting>::type
{
  DPI = GTK_SYSTEM_SETTING_DPI,
  FONT_NAME = GTK_SYSTEM_SETTING_FONT_NAME,
  FONT_CONFIG = GTK_SYSTEM_SETTING_FONT_CONFIG,
  DISPLAY = GTK_SYSTEM_SETTING_DISPLAY,
  ICON_THEME = GTK_SYSTEM_SETTING_ICON_THEME,
}; /* enum SystemSetting */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
