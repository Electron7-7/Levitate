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
enum class SortType : std::underlying_type<::GtkSortType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::SortType>
{
  typedef Gtk::SortType UnownedType;

  static Gtk::SortType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::SortType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::SortType m)
  {
    g_value_set_enum (value, static_cast<::GtkSortType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::SortType m)
  {
    set (value, m);
  }

  static Gtk::SortType
  cast_for_create (Gtk::SortType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::SortType> ()
{
  return gtk_sort_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::SortType>
{
  Gtk::SortType default_value;

  constexpr PspecTraits (Gtk::SortType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_sort_type_get_type (),
                              static_cast<::GtkSortType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class SortType : std::underlying_type<::GtkSortType>::type
{
  ASCENDING = GTK_SORT_ASCENDING,
  DESCENDING = GTK_SORT_DESCENDING,
}; /* enum SortType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
