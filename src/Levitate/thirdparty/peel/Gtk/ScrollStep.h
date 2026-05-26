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
enum class ScrollStep : std::underlying_type<::GtkScrollStep>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::ScrollStep>
{
  typedef Gtk::ScrollStep UnownedType;

  static Gtk::ScrollStep
  get (const ::GValue *value)
  {
    return static_cast<Gtk::ScrollStep> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::ScrollStep m)
  {
    g_value_set_enum (value, static_cast<::GtkScrollStep> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::ScrollStep m)
  {
    set (value, m);
  }

  static Gtk::ScrollStep
  cast_for_create (Gtk::ScrollStep m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::ScrollStep> ()
{
  return gtk_scroll_step_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::ScrollStep>
{
  Gtk::ScrollStep default_value;

  constexpr PspecTraits (Gtk::ScrollStep default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_scroll_step_get_type (),
                              static_cast<::GtkScrollStep> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class ScrollStep : std::underlying_type<::GtkScrollStep>::type
{
  STEPS = GTK_SCROLL_STEPS,
  PAGES = GTK_SCROLL_PAGES,
  ENDS = GTK_SCROLL_ENDS,
  HORIZONTAL_STEPS = GTK_SCROLL_HORIZONTAL_STEPS,
  HORIZONTAL_PAGES = GTK_SCROLL_HORIZONTAL_PAGES,
  HORIZONTAL_ENDS = GTK_SCROLL_HORIZONTAL_ENDS,
}; /* enum ScrollStep */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
