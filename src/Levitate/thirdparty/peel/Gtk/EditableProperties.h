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
#include <peel/Gtk/Editable.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Editable::Properties>
{
  typedef Gtk::Editable::Properties UnownedType;

  static Gtk::Editable::Properties
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Editable::Properties> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Editable::Properties m)
  {
    g_value_set_enum (value, static_cast<::GtkEditableProperties> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Editable::Properties m)
  {
    set (value, m);
  }

  static Gtk::Editable::Properties
  cast_for_create (Gtk::Editable::Properties m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Editable::Properties> ()
{
  return gtk_editable_properties_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Editable::Properties>
{
  Gtk::Editable::Properties default_value;

  constexpr PspecTraits (Gtk::Editable::Properties default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_editable_properties_get_type (),
                              static_cast<::GtkEditableProperties> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Editable::Properties : std::underlying_type<::GtkEditableProperties>::type
{
  PROP_TEXT = GTK_EDITABLE_PROP_TEXT,
  PROP_CURSOR_POSITION = GTK_EDITABLE_PROP_CURSOR_POSITION,
  PROP_SELECTION_BOUND = GTK_EDITABLE_PROP_SELECTION_BOUND,
  PROP_EDITABLE = GTK_EDITABLE_PROP_EDITABLE,
  PROP_WIDTH_CHARS = GTK_EDITABLE_PROP_WIDTH_CHARS,
  PROP_MAX_WIDTH_CHARS = GTK_EDITABLE_PROP_MAX_WIDTH_CHARS,
  PROP_XALIGN = GTK_EDITABLE_PROP_XALIGN,
  PROP_ENABLE_UNDO = GTK_EDITABLE_PROP_ENABLE_UNDO,
  NUM_PROPERTIES = GTK_EDITABLE_NUM_PROPERTIES,
}; /* enum Editable::Properties */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
