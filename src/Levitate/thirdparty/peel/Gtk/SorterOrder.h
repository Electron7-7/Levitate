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
struct GObject::Value::Traits<Gtk::Sorter::Order>
{
  typedef Gtk::Sorter::Order UnownedType;

  static Gtk::Sorter::Order
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Sorter::Order> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Sorter::Order m)
  {
    g_value_set_enum (value, static_cast<::GtkSorterOrder> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Sorter::Order m)
  {
    set (value, m);
  }

  static Gtk::Sorter::Order
  cast_for_create (Gtk::Sorter::Order m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Sorter::Order> ()
{
  return gtk_sorter_order_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Sorter::Order>
{
  Gtk::Sorter::Order default_value;

  constexpr PspecTraits (Gtk::Sorter::Order default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_sorter_order_get_type (),
                              static_cast<::GtkSorterOrder> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Sorter::Order : std::underlying_type<::GtkSorterOrder>::type
{
  PARTIAL = GTK_SORTER_ORDER_PARTIAL,
  NONE = GTK_SORTER_ORDER_NONE,
  TOTAL = GTK_SORTER_ORDER_TOTAL,
}; /* enum Sorter::Order */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
