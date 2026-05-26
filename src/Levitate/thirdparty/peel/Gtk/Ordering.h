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
enum class Ordering : std::underlying_type<::GtkOrdering>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Ordering>
{
  typedef Gtk::Ordering UnownedType;

  static Gtk::Ordering
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Ordering> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Ordering m)
  {
    g_value_set_enum (value, static_cast<::GtkOrdering> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Ordering m)
  {
    set (value, m);
  }

  static Gtk::Ordering
  cast_for_create (Gtk::Ordering m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Ordering> ()
{
  return gtk_ordering_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Ordering>
{
  Gtk::Ordering default_value;

  constexpr PspecTraits (Gtk::Ordering default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_ordering_get_type (),
                              static_cast<::GtkOrdering> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Ordering : std::underlying_type<::GtkOrdering>::type
{
  SMALLER = GTK_ORDERING_SMALLER,
  EQUAL = GTK_ORDERING_EQUAL,
  LARGER = GTK_ORDERING_LARGER,
}; /* enum Ordering */

peel_no_warn_unused
static Ordering
ordering_from_cmpfunc (int cmpfunc_result) noexcept
{
  ::GtkOrdering _peel_return = gtk_ordering_from_cmpfunc (cmpfunc_result);
  return static_cast<Ordering> (_peel_return);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
