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
enum class Collation : std::underlying_type<::GtkCollation>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Collation>
{
  typedef Gtk::Collation UnownedType;

  static Gtk::Collation
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Collation> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Collation m)
  {
    g_value_set_enum (value, static_cast<::GtkCollation> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Collation m)
  {
    set (value, m);
  }

  static Gtk::Collation
  cast_for_create (Gtk::Collation m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Collation> ()
{
  return gtk_collation_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Collation>
{
  Gtk::Collation default_value;

  constexpr PspecTraits (Gtk::Collation default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_collation_get_type (),
                              static_cast<::GtkCollation> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Collation : std::underlying_type<::GtkCollation>::type
{
  NONE = GTK_COLLATION_NONE,
  UNICODE_ = GTK_COLLATION_UNICODE,
  FILENAME = GTK_COLLATION_FILENAME,
}; /* enum Collation */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
