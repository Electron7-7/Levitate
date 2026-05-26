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
enum class SelectionMode : std::underlying_type<::GtkSelectionMode>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::SelectionMode>
{
  typedef Gtk::SelectionMode UnownedType;

  static Gtk::SelectionMode
  get (const ::GValue *value)
  {
    return static_cast<Gtk::SelectionMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::SelectionMode m)
  {
    g_value_set_enum (value, static_cast<::GtkSelectionMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::SelectionMode m)
  {
    set (value, m);
  }

  static Gtk::SelectionMode
  cast_for_create (Gtk::SelectionMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::SelectionMode> ()
{
  return gtk_selection_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::SelectionMode>
{
  Gtk::SelectionMode default_value;

  constexpr PspecTraits (Gtk::SelectionMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_selection_mode_get_type (),
                              static_cast<::GtkSelectionMode> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class SelectionMode : std::underlying_type<::GtkSelectionMode>::type
{
  NONE = GTK_SELECTION_NONE,
  SINGLE = GTK_SELECTION_SINGLE,
  BROWSE = GTK_SELECTION_BROWSE,
  MULTIPLE = GTK_SELECTION_MULTIPLE,
}; /* enum SelectionMode */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
