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
struct GObject::Value::Traits<Gtk::CellRenderer::State>
{
  typedef Gtk::CellRenderer::State UnownedType;

  static Gtk::CellRenderer::State
  get (const ::GValue *value)
  {
    return static_cast<Gtk::CellRenderer::State> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::CellRenderer::State flags)
  {
    g_value_set_flags (value, static_cast<::GtkCellRendererState> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::CellRenderer::State flags)
  {
    set (value, flags);
  }

  static Gtk::CellRenderer::State
  cast_for_create (Gtk::CellRenderer::State flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::CellRenderer::State> ()
{
  return gtk_cell_renderer_state_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::CellRenderer::State>
{
  Gtk::CellRenderer::State default_value;

  constexpr PspecTraits (Gtk::CellRenderer::State default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_cell_renderer_state_get_type (),
                               static_cast<::GtkCellRendererState> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ CellRenderer::State : std::underlying_type<::GtkCellRendererState>::type
{
  SELECTED = GTK_CELL_RENDERER_SELECTED,
  PRELIT = GTK_CELL_RENDERER_PRELIT,
  INSENSITIVE = GTK_CELL_RENDERER_INSENSITIVE,
  SORTED = GTK_CELL_RENDERER_SORTED,
  FOCUSED = GTK_CELL_RENDERER_FOCUSED,
  EXPANDABLE = GTK_CELL_RENDERER_EXPANDABLE,
  EXPANDED = GTK_CELL_RENDERER_EXPANDED,
}; /* bitfield CellRenderer::State */

static constexpr inline CellRenderer::State
operator | (CellRenderer::State lhs, CellRenderer::State rhs)
{
  return CellRenderer::State (static_cast<::GtkCellRendererState> (lhs) | static_cast<::GtkCellRendererState> (rhs));
}

static constexpr inline CellRenderer::State
operator & (CellRenderer::State lhs, CellRenderer::State rhs)
{
  return CellRenderer::State (static_cast<::GtkCellRendererState> (lhs) & static_cast<::GtkCellRendererState> (rhs));
}

static constexpr inline CellRenderer::State
operator ^ (CellRenderer::State lhs, CellRenderer::State rhs)
{
  return CellRenderer::State (static_cast<::GtkCellRendererState> (lhs) ^ static_cast<::GtkCellRendererState> (rhs));
}

static constexpr inline CellRenderer::State
operator ~ (CellRenderer::State lhs)
{
  return CellRenderer::State (~static_cast<::GtkCellRendererState> (lhs));
}

static inline CellRenderer::State &
operator |= (CellRenderer::State &lhs, CellRenderer::State rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline CellRenderer::State &
operator &= (CellRenderer::State &lhs, CellRenderer::State rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline CellRenderer::State &
operator ^= (CellRenderer::State &lhs, CellRenderer::State rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (CellRenderer::State lhs)
{
  return !static_cast<::GtkCellRendererState> (lhs);
}

static constexpr inline bool
operator + (CellRenderer::State lhs)
{
  return !!static_cast<::GtkCellRendererState> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
