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
#include <peel/Gtk/Sorter.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Sorter::Change>
{
  typedef Gtk::Sorter::Change UnownedType;

  static Gtk::Sorter::Change
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Sorter::Change> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Sorter::Change m)
  {
    g_value_set_enum (value, static_cast<::GtkSorterChange> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Sorter::Change m)
  {
    set (value, m);
  }

  static Gtk::Sorter::Change
  cast_for_create (Gtk::Sorter::Change m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Sorter::Change> ()
{
  return gtk_sorter_change_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Sorter::Change>
{
  Gtk::Sorter::Change default_value;

  constexpr PspecTraits (Gtk::Sorter::Change default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_sorter_change_get_type (),
                              static_cast<::GtkSorterChange> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Sorter::Change : std::underlying_type<::GtkSorterChange>::type
{
  DIFFERENT = GTK_SORTER_CHANGE_DIFFERENT,
  INVERTED = GTK_SORTER_CHANGE_INVERTED,
  LESS_STRICT = GTK_SORTER_CHANGE_LESS_STRICT,
  MORE_STRICT = GTK_SORTER_CHANGE_MORE_STRICT,
}; /* enum Sorter::Change */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
