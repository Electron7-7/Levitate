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
enum class FontLevel : std::underlying_type<::GtkFontLevel>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::FontLevel>
{
  typedef Gtk::FontLevel UnownedType;

  static Gtk::FontLevel
  get (const ::GValue *value)
  {
    return static_cast<Gtk::FontLevel> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::FontLevel m)
  {
    g_value_set_enum (value, static_cast<::GtkFontLevel> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::FontLevel m)
  {
    set (value, m);
  }

  static Gtk::FontLevel
  cast_for_create (Gtk::FontLevel m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::FontLevel> ()
{
  return gtk_font_level_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::FontLevel>
{
  Gtk::FontLevel default_value;

  constexpr PspecTraits (Gtk::FontLevel default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_font_level_get_type (),
                              static_cast<::GtkFontLevel> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class FontLevel : std::underlying_type<::GtkFontLevel>::type
{
  FAMILY = GTK_FONT_LEVEL_FAMILY,
  FACE = GTK_FONT_LEVEL_FACE,
  FONT = GTK_FONT_LEVEL_FONT,
  FEATURES = GTK_FONT_LEVEL_FEATURES,
}; /* enum FontLevel */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
