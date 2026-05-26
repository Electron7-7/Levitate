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
enum class FontRendering : std::underlying_type<::GtkFontRendering>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::FontRendering>
{
  typedef Gtk::FontRendering UnownedType;

  static Gtk::FontRendering
  get (const ::GValue *value)
  {
    return static_cast<Gtk::FontRendering> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::FontRendering m)
  {
    g_value_set_enum (value, static_cast<::GtkFontRendering> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::FontRendering m)
  {
    set (value, m);
  }

  static Gtk::FontRendering
  cast_for_create (Gtk::FontRendering m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::FontRendering> ()
{
  return gtk_font_rendering_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::FontRendering>
{
  Gtk::FontRendering default_value;

  constexpr PspecTraits (Gtk::FontRendering default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_font_rendering_get_type (),
                              static_cast<::GtkFontRendering> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class FontRendering : std::underlying_type<::GtkFontRendering>::type
{
  AUTOMATIC = GTK_FONT_RENDERING_AUTOMATIC,
  MANUAL = GTK_FONT_RENDERING_MANUAL,
}; /* enum FontRendering */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
