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
enum class InterfaceContrast : std::underlying_type<::GtkInterfaceContrast>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::InterfaceContrast>
{
  typedef Gtk::InterfaceContrast UnownedType;

  static Gtk::InterfaceContrast
  get (const ::GValue *value)
  {
    return static_cast<Gtk::InterfaceContrast> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::InterfaceContrast m)
  {
    g_value_set_enum (value, static_cast<::GtkInterfaceContrast> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::InterfaceContrast m)
  {
    set (value, m);
  }

  static Gtk::InterfaceContrast
  cast_for_create (Gtk::InterfaceContrast m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::InterfaceContrast> ()
{
  return gtk_interface_contrast_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::InterfaceContrast>
{
  Gtk::InterfaceContrast default_value;

  constexpr PspecTraits (Gtk::InterfaceContrast default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_interface_contrast_get_type (),
                              static_cast<::GtkInterfaceContrast> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class InterfaceContrast : std::underlying_type<::GtkInterfaceContrast>::type
{
  UNSUPPORTED = GTK_INTERFACE_CONTRAST_UNSUPPORTED,
  NO_PREFERENCE = GTK_INTERFACE_CONTRAST_NO_PREFERENCE,
  MORE = GTK_INTERFACE_CONTRAST_MORE,
  LESS = GTK_INTERFACE_CONTRAST_LESS,
}; /* enum InterfaceContrast */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
