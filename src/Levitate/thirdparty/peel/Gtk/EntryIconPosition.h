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
#include <peel/Gtk/Entry.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Entry::IconPosition>
{
  typedef Gtk::Entry::IconPosition UnownedType;

  static Gtk::Entry::IconPosition
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Entry::IconPosition> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Entry::IconPosition m)
  {
    g_value_set_enum (value, static_cast<::GtkEntryIconPosition> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Entry::IconPosition m)
  {
    set (value, m);
  }

  static Gtk::Entry::IconPosition
  cast_for_create (Gtk::Entry::IconPosition m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Entry::IconPosition> ()
{
  return gtk_entry_icon_position_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Entry::IconPosition>
{
  Gtk::Entry::IconPosition default_value;

  constexpr PspecTraits (Gtk::Entry::IconPosition default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_entry_icon_position_get_type (),
                              static_cast<::GtkEntryIconPosition> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Entry::IconPosition : std::underlying_type<::GtkEntryIconPosition>::type
{
  PRIMARY = GTK_ENTRY_ICON_PRIMARY,
  SECONDARY = GTK_ENTRY_ICON_SECONDARY,
}; /* enum Entry::IconPosition */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
