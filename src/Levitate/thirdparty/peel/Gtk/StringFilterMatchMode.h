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
#include <peel/Gtk/StringFilter.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::StringFilter::MatchMode>
{
  typedef Gtk::StringFilter::MatchMode UnownedType;

  static Gtk::StringFilter::MatchMode
  get (const ::GValue *value)
  {
    return static_cast<Gtk::StringFilter::MatchMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::StringFilter::MatchMode m)
  {
    g_value_set_enum (value, static_cast<::GtkStringFilterMatchMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::StringFilter::MatchMode m)
  {
    set (value, m);
  }

  static Gtk::StringFilter::MatchMode
  cast_for_create (Gtk::StringFilter::MatchMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::StringFilter::MatchMode> ()
{
  return gtk_string_filter_match_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::StringFilter::MatchMode>
{
  Gtk::StringFilter::MatchMode default_value;

  constexpr PspecTraits (Gtk::StringFilter::MatchMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_string_filter_match_mode_get_type (),
                              static_cast<::GtkStringFilterMatchMode> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class StringFilter::MatchMode : std::underlying_type<::GtkStringFilterMatchMode>::type
{
  EXACT = GTK_STRING_FILTER_MATCH_MODE_EXACT,
  SUBSTRING = GTK_STRING_FILTER_MATCH_MODE_SUBSTRING,
  PREFIX = GTK_STRING_FILTER_MATCH_MODE_PREFIX,
}; /* enum StringFilter::MatchMode */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
