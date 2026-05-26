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
#include <peel/Gtk/Accessible.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Accessible::Autocomplete>
{
  typedef Gtk::Accessible::Autocomplete UnownedType;

  static Gtk::Accessible::Autocomplete
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Accessible::Autocomplete> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Accessible::Autocomplete m)
  {
    g_value_set_enum (value, static_cast<::GtkAccessibleAutocomplete> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Accessible::Autocomplete m)
  {
    set (value, m);
  }

  static Gtk::Accessible::Autocomplete
  cast_for_create (Gtk::Accessible::Autocomplete m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Accessible::Autocomplete> ()
{
  return gtk_accessible_autocomplete_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Accessible::Autocomplete>
{
  Gtk::Accessible::Autocomplete default_value;

  constexpr PspecTraits (Gtk::Accessible::Autocomplete default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_accessible_autocomplete_get_type (),
                              static_cast<::GtkAccessibleAutocomplete> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Accessible::Autocomplete : std::underlying_type<::GtkAccessibleAutocomplete>::type
{
  NONE = GTK_ACCESSIBLE_AUTOCOMPLETE_NONE,
  INLINE = GTK_ACCESSIBLE_AUTOCOMPLETE_INLINE,
  LIST = GTK_ACCESSIBLE_AUTOCOMPLETE_LIST,
  BOTH = GTK_ACCESSIBLE_AUTOCOMPLETE_BOTH,
}; /* enum Accessible::Autocomplete */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
