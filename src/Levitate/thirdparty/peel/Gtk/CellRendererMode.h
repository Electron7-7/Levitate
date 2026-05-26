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
#include <peel/Gtk/CellRenderer.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::CellRenderer::Mode>
{
  typedef Gtk::CellRenderer::Mode UnownedType;

  static Gtk::CellRenderer::Mode
  get (const ::GValue *value)
  {
    return static_cast<Gtk::CellRenderer::Mode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::CellRenderer::Mode m)
  {
    g_value_set_enum (value, static_cast<::GtkCellRendererMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::CellRenderer::Mode m)
  {
    set (value, m);
  }

  static Gtk::CellRenderer::Mode
  cast_for_create (Gtk::CellRenderer::Mode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::CellRenderer::Mode> ()
{
  return gtk_cell_renderer_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::CellRenderer::Mode>
{
  Gtk::CellRenderer::Mode default_value;

  constexpr PspecTraits (Gtk::CellRenderer::Mode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_cell_renderer_mode_get_type (),
                              static_cast<::GtkCellRendererMode> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class CellRenderer::Mode : std::underlying_type<::GtkCellRendererMode>::type
{
  INERT = GTK_CELL_RENDERER_MODE_INERT,
  ACTIVATABLE = GTK_CELL_RENDERER_MODE_ACTIVATABLE,
  EDITABLE = GTK_CELL_RENDERER_MODE_EDITABLE,
}; /* enum CellRenderer::Mode */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
