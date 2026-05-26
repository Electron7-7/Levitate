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
enum class PageSet : std::underlying_type<::GtkPageSet>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PageSet>
{
  typedef Gtk::PageSet UnownedType;

  static Gtk::PageSet
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PageSet> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PageSet m)
  {
    g_value_set_enum (value, static_cast<::GtkPageSet> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PageSet m)
  {
    set (value, m);
  }

  static Gtk::PageSet
  cast_for_create (Gtk::PageSet m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PageSet> ()
{
  return gtk_page_set_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PageSet>
{
  Gtk::PageSet default_value;

  constexpr PspecTraits (Gtk::PageSet default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_page_set_get_type (),
                              static_cast<::GtkPageSet> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PageSet : std::underlying_type<::GtkPageSet>::type
{
  ALL = GTK_PAGE_SET_ALL,
  EVEN = GTK_PAGE_SET_EVEN,
  ODD = GTK_PAGE_SET_ODD,
}; /* enum PageSet */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
