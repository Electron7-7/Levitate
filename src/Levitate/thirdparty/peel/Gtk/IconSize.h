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
enum class IconSize : std::underlying_type<::GtkIconSize>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::IconSize>
{
  typedef Gtk::IconSize UnownedType;

  static Gtk::IconSize
  get (const ::GValue *value)
  {
    return static_cast<Gtk::IconSize> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::IconSize m)
  {
    g_value_set_enum (value, static_cast<::GtkIconSize> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::IconSize m)
  {
    set (value, m);
  }

  static Gtk::IconSize
  cast_for_create (Gtk::IconSize m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::IconSize> ()
{
  return gtk_icon_size_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::IconSize>
{
  Gtk::IconSize default_value;

  constexpr PspecTraits (Gtk::IconSize default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_icon_size_get_type (),
                              static_cast<::GtkIconSize> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class IconSize : std::underlying_type<::GtkIconSize>::type
{
  INHERIT = GTK_ICON_SIZE_INHERIT,
  NORMAL = GTK_ICON_SIZE_NORMAL,
  LARGE = GTK_ICON_SIZE_LARGE,
}; /* enum IconSize */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
