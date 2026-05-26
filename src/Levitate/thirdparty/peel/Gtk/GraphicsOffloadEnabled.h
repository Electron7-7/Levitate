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
#include <peel/Gtk/GraphicsOffload.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::GraphicsOffload::Enabled>
{
  typedef Gtk::GraphicsOffload::Enabled UnownedType;

  static Gtk::GraphicsOffload::Enabled
  get (const ::GValue *value)
  {
    return static_cast<Gtk::GraphicsOffload::Enabled> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::GraphicsOffload::Enabled m)
  {
    g_value_set_enum (value, static_cast<::GtkGraphicsOffloadEnabled> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::GraphicsOffload::Enabled m)
  {
    set (value, m);
  }

  static Gtk::GraphicsOffload::Enabled
  cast_for_create (Gtk::GraphicsOffload::Enabled m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::GraphicsOffload::Enabled> ()
{
  return gtk_graphics_offload_enabled_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::GraphicsOffload::Enabled>
{
  Gtk::GraphicsOffload::Enabled default_value;

  constexpr PspecTraits (Gtk::GraphicsOffload::Enabled default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_graphics_offload_enabled_get_type (),
                              static_cast<::GtkGraphicsOffloadEnabled> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class GraphicsOffload::Enabled : std::underlying_type<::GtkGraphicsOffloadEnabled>::type
{
  ENABLED = GTK_GRAPHICS_OFFLOAD_ENABLED,
  DISABLED = GTK_GRAPHICS_OFFLOAD_DISABLED,
}; /* enum GraphicsOffload::Enabled */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
