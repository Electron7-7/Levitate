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
struct GObject::Value::Traits<Gtk::Accessible::Sort>
{
  typedef Gtk::Accessible::Sort UnownedType;

  static Gtk::Accessible::Sort
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Accessible::Sort> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Accessible::Sort m)
  {
    g_value_set_enum (value, static_cast<::GtkAccessibleSort> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Accessible::Sort m)
  {
    set (value, m);
  }

  static Gtk::Accessible::Sort
  cast_for_create (Gtk::Accessible::Sort m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Accessible::Sort> ()
{
  return gtk_accessible_sort_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Accessible::Sort>
{
  Gtk::Accessible::Sort default_value;

  constexpr PspecTraits (Gtk::Accessible::Sort default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_accessible_sort_get_type (),
                              static_cast<::GtkAccessibleSort> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Accessible::Sort : std::underlying_type<::GtkAccessibleSort>::type
{
  NONE = GTK_ACCESSIBLE_SORT_NONE,
  ASCENDING = GTK_ACCESSIBLE_SORT_ASCENDING,
  DESCENDING = GTK_ACCESSIBLE_SORT_DESCENDING,
  OTHER = GTK_ACCESSIBLE_SORT_OTHER,
}; /* enum Accessible::Sort */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
