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
#include <peel/Gtk/TextView.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::TextView::Layer>
{
  typedef Gtk::TextView::Layer UnownedType;

  static Gtk::TextView::Layer
  get (const ::GValue *value)
  {
    return static_cast<Gtk::TextView::Layer> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::TextView::Layer m)
  {
    g_value_set_enum (value, static_cast<::GtkTextViewLayer> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::TextView::Layer m)
  {
    set (value, m);
  }

  static Gtk::TextView::Layer
  cast_for_create (Gtk::TextView::Layer m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::TextView::Layer> ()
{
  return gtk_text_view_layer_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::TextView::Layer>
{
  Gtk::TextView::Layer default_value;

  constexpr PspecTraits (Gtk::TextView::Layer default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_text_view_layer_get_type (),
                              static_cast<::GtkTextViewLayer> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class TextView::Layer : std::underlying_type<::GtkTextViewLayer>::type
{
  BELOW_TEXT = GTK_TEXT_VIEW_LAYER_BELOW_TEXT,
  ABOVE_TEXT = GTK_TEXT_VIEW_LAYER_ABOVE_TEXT,
}; /* enum TextView::Layer */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
