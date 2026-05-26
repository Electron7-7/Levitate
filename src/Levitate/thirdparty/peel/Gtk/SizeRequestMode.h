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
enum class SizeRequestMode : std::underlying_type<::GtkSizeRequestMode>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::SizeRequestMode>
{
  typedef Gtk::SizeRequestMode UnownedType;

  static Gtk::SizeRequestMode
  get (const ::GValue *value)
  {
    return static_cast<Gtk::SizeRequestMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::SizeRequestMode m)
  {
    g_value_set_enum (value, static_cast<::GtkSizeRequestMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::SizeRequestMode m)
  {
    set (value, m);
  }

  static Gtk::SizeRequestMode
  cast_for_create (Gtk::SizeRequestMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::SizeRequestMode> ()
{
  return gtk_size_request_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::SizeRequestMode>
{
  Gtk::SizeRequestMode default_value;

  constexpr PspecTraits (Gtk::SizeRequestMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_size_request_mode_get_type (),
                              static_cast<::GtkSizeRequestMode> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class SizeRequestMode : std::underlying_type<::GtkSizeRequestMode>::type
{
  HEIGHT_FOR_WIDTH = GTK_SIZE_REQUEST_HEIGHT_FOR_WIDTH,
  WIDTH_FOR_HEIGHT = GTK_SIZE_REQUEST_WIDTH_FOR_HEIGHT,
  CONSTANT_SIZE = GTK_SIZE_REQUEST_CONSTANT_SIZE,
}; /* enum SizeRequestMode */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
