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
enum class TextWindowType : std::underlying_type<::GtkTextWindowType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::TextWindowType>
{
  typedef Gtk::TextWindowType UnownedType;

  static Gtk::TextWindowType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::TextWindowType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::TextWindowType m)
  {
    g_value_set_enum (value, static_cast<::GtkTextWindowType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::TextWindowType m)
  {
    set (value, m);
  }

  static Gtk::TextWindowType
  cast_for_create (Gtk::TextWindowType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::TextWindowType> ()
{
  return gtk_text_window_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::TextWindowType>
{
  Gtk::TextWindowType default_value;

  constexpr PspecTraits (Gtk::TextWindowType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_text_window_type_get_type (),
                              static_cast<::GtkTextWindowType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class TextWindowType : std::underlying_type<::GtkTextWindowType>::type
{
  WIDGET = GTK_TEXT_WINDOW_WIDGET,
  TEXT = GTK_TEXT_WINDOW_TEXT,
  LEFT = GTK_TEXT_WINDOW_LEFT,
  RIGHT = GTK_TEXT_WINDOW_RIGHT,
  TOP = GTK_TEXT_WINDOW_TOP,
  BOTTOM = GTK_TEXT_WINDOW_BOTTOM,
}; /* enum TextWindowType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
