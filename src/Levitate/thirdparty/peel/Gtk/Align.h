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
enum class Align : std::underlying_type<::GtkAlign>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Align>
{
  typedef Gtk::Align UnownedType;

  static Gtk::Align
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Align> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Align m)
  {
    g_value_set_enum (value, static_cast<::GtkAlign> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Align m)
  {
    set (value, m);
  }

  static Gtk::Align
  cast_for_create (Gtk::Align m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Align> ()
{
  return gtk_align_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Align>
{
  Gtk::Align default_value;

  constexpr PspecTraits (Gtk::Align default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_align_get_type (),
                              static_cast<::GtkAlign> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Align : std::underlying_type<::GtkAlign>::type
{
  FILL = GTK_ALIGN_FILL,
  START = GTK_ALIGN_START,
  END = GTK_ALIGN_END,
  CENTER = GTK_ALIGN_CENTER,
  BASELINE_FILL = GTK_ALIGN_BASELINE_FILL,
  BASELINE = GTK_ALIGN_BASELINE,
  BASELINE_CENTER = GTK_ALIGN_BASELINE_CENTER,
}; /* enum Align */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
