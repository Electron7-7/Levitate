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
enum class WrapMode : std::underlying_type<::GtkWrapMode>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::WrapMode>
{
  typedef Gtk::WrapMode UnownedType;

  static Gtk::WrapMode
  get (const ::GValue *value)
  {
    return static_cast<Gtk::WrapMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::WrapMode m)
  {
    g_value_set_enum (value, static_cast<::GtkWrapMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::WrapMode m)
  {
    set (value, m);
  }

  static Gtk::WrapMode
  cast_for_create (Gtk::WrapMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::WrapMode> ()
{
  return gtk_wrap_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::WrapMode>
{
  Gtk::WrapMode default_value;

  constexpr PspecTraits (Gtk::WrapMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_wrap_mode_get_type (),
                              static_cast<::GtkWrapMode> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class WrapMode : std::underlying_type<::GtkWrapMode>::type
{
  NONE = GTK_WRAP_NONE,
  CHAR = GTK_WRAP_CHAR,
  WORD = GTK_WRAP_WORD,
  WORD_CHAR = GTK_WRAP_WORD_CHAR,
}; /* enum WrapMode */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
