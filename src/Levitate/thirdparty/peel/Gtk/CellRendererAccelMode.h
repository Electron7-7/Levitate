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
#include <peel/Gtk/CellRendererAccel.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::CellRendererAccel::Mode>
{
  typedef Gtk::CellRendererAccel::Mode UnownedType;

  static Gtk::CellRendererAccel::Mode
  get (const ::GValue *value)
  {
    return static_cast<Gtk::CellRendererAccel::Mode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::CellRendererAccel::Mode m)
  {
    g_value_set_enum (value, static_cast<::GtkCellRendererAccelMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::CellRendererAccel::Mode m)
  {
    set (value, m);
  }

  static Gtk::CellRendererAccel::Mode
  cast_for_create (Gtk::CellRendererAccel::Mode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::CellRendererAccel::Mode> ()
{
  return gtk_cell_renderer_accel_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::CellRendererAccel::Mode>
{
  Gtk::CellRendererAccel::Mode default_value;

  constexpr PspecTraits (Gtk::CellRendererAccel::Mode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_cell_renderer_accel_mode_get_type (),
                              static_cast<::GtkCellRendererAccelMode> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class CellRendererAccel::Mode : std::underlying_type<::GtkCellRendererAccelMode>::type
{
  GTK = GTK_CELL_RENDERER_ACCEL_MODE_GTK,
  OTHER = GTK_CELL_RENDERER_ACCEL_MODE_OTHER,
}; /* enum CellRendererAccel::Mode */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
