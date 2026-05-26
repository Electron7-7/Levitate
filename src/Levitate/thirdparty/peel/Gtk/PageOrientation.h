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
enum class PageOrientation : std::underlying_type<::GtkPageOrientation>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PageOrientation>
{
  typedef Gtk::PageOrientation UnownedType;

  static Gtk::PageOrientation
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PageOrientation> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PageOrientation m)
  {
    g_value_set_enum (value, static_cast<::GtkPageOrientation> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PageOrientation m)
  {
    set (value, m);
  }

  static Gtk::PageOrientation
  cast_for_create (Gtk::PageOrientation m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PageOrientation> ()
{
  return gtk_page_orientation_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PageOrientation>
{
  Gtk::PageOrientation default_value;

  constexpr PspecTraits (Gtk::PageOrientation default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_page_orientation_get_type (),
                              static_cast<::GtkPageOrientation> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PageOrientation : std::underlying_type<::GtkPageOrientation>::type
{
  PORTRAIT = GTK_PAGE_ORIENTATION_PORTRAIT,
  LANDSCAPE = GTK_PAGE_ORIENTATION_LANDSCAPE,
  REVERSE_PORTRAIT = GTK_PAGE_ORIENTATION_REVERSE_PORTRAIT,
  REVERSE_LANDSCAPE = GTK_PAGE_ORIENTATION_REVERSE_LANDSCAPE,
}; /* enum PageOrientation */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
