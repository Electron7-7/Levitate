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
enum class NaturalWrapMode : std::underlying_type<::GtkNaturalWrapMode>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::NaturalWrapMode>
{
  typedef Gtk::NaturalWrapMode UnownedType;

  static Gtk::NaturalWrapMode
  get (const ::GValue *value)
  {
    return static_cast<Gtk::NaturalWrapMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::NaturalWrapMode m)
  {
    g_value_set_enum (value, static_cast<::GtkNaturalWrapMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::NaturalWrapMode m)
  {
    set (value, m);
  }

  static Gtk::NaturalWrapMode
  cast_for_create (Gtk::NaturalWrapMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::NaturalWrapMode> ()
{
  return gtk_natural_wrap_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::NaturalWrapMode>
{
  Gtk::NaturalWrapMode default_value;

  constexpr PspecTraits (Gtk::NaturalWrapMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_natural_wrap_mode_get_type (),
                              static_cast<::GtkNaturalWrapMode> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class NaturalWrapMode : std::underlying_type<::GtkNaturalWrapMode>::type
{
  INHERIT = GTK_NATURAL_WRAP_INHERIT,
  NONE = GTK_NATURAL_WRAP_NONE,
  WORD = GTK_NATURAL_WRAP_WORD,
}; /* enum NaturalWrapMode */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
