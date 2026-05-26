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
#include <peel/Gtk/TreeView.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::TreeView::GridLines>
{
  typedef Gtk::TreeView::GridLines UnownedType;

  static Gtk::TreeView::GridLines
  get (const ::GValue *value)
  {
    return static_cast<Gtk::TreeView::GridLines> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::TreeView::GridLines m)
  {
    g_value_set_enum (value, static_cast<::GtkTreeViewGridLines> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::TreeView::GridLines m)
  {
    set (value, m);
  }

  static Gtk::TreeView::GridLines
  cast_for_create (Gtk::TreeView::GridLines m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeView::GridLines> ()
{
  return gtk_tree_view_grid_lines_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::TreeView::GridLines>
{
  Gtk::TreeView::GridLines default_value;

  constexpr PspecTraits (Gtk::TreeView::GridLines default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_tree_view_grid_lines_get_type (),
                              static_cast<::GtkTreeViewGridLines> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class TreeView::GridLines : std::underlying_type<::GtkTreeViewGridLines>::type
{
  NONE = GTK_TREE_VIEW_GRID_LINES_NONE,
  HORIZONTAL = GTK_TREE_VIEW_GRID_LINES_HORIZONTAL,
  VERTICAL = GTK_TREE_VIEW_GRID_LINES_VERTICAL,
  BOTH = GTK_TREE_VIEW_GRID_LINES_BOTH,
}; /* enum TreeView::GridLines */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
