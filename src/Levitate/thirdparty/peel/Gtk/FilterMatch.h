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
#include <peel/Gtk/Filter.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Filter::Match>
{
  typedef Gtk::Filter::Match UnownedType;

  static Gtk::Filter::Match
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Filter::Match> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Filter::Match m)
  {
    g_value_set_enum (value, static_cast<::GtkFilterMatch> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Filter::Match m)
  {
    set (value, m);
  }

  static Gtk::Filter::Match
  cast_for_create (Gtk::Filter::Match m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Filter::Match> ()
{
  return gtk_filter_match_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Filter::Match>
{
  Gtk::Filter::Match default_value;

  constexpr PspecTraits (Gtk::Filter::Match default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_filter_match_get_type (),
                              static_cast<::GtkFilterMatch> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Filter::Match : std::underlying_type<::GtkFilterMatch>::type
{
  SOME = GTK_FILTER_MATCH_SOME,
  NONE = GTK_FILTER_MATCH_NONE,
  ALL = GTK_FILTER_MATCH_ALL,
}; /* enum Filter::Match */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
