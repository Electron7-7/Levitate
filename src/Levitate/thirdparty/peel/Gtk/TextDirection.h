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
enum class TextDirection : std::underlying_type<::GtkTextDirection>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::TextDirection>
{
  typedef Gtk::TextDirection UnownedType;

  static Gtk::TextDirection
  get (const ::GValue *value)
  {
    return static_cast<Gtk::TextDirection> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::TextDirection m)
  {
    g_value_set_enum (value, static_cast<::GtkTextDirection> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::TextDirection m)
  {
    set (value, m);
  }

  static Gtk::TextDirection
  cast_for_create (Gtk::TextDirection m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::TextDirection> ()
{
  return gtk_text_direction_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::TextDirection>
{
  Gtk::TextDirection default_value;

  constexpr PspecTraits (Gtk::TextDirection default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_text_direction_get_type (),
                              static_cast<::GtkTextDirection> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class TextDirection : std::underlying_type<::GtkTextDirection>::type
{
  NONE = GTK_TEXT_DIR_NONE,
  LTR = GTK_TEXT_DIR_LTR,
  RTL = GTK_TEXT_DIR_RTL,
}; /* enum TextDirection */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
