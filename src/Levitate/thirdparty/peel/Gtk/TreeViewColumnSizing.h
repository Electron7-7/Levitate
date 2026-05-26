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
struct GObject::Value::Traits<Gtk::TreeView::ColumnSizing>
{
  typedef Gtk::TreeView::ColumnSizing UnownedType;

  static Gtk::TreeView::ColumnSizing
  get (const ::GValue *value)
  {
    return static_cast<Gtk::TreeView::ColumnSizing> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::TreeView::ColumnSizing m)
  {
    g_value_set_enum (value, static_cast<::GtkTreeViewColumnSizing> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::TreeView::ColumnSizing m)
  {
    set (value, m);
  }

  static Gtk::TreeView::ColumnSizing
  cast_for_create (Gtk::TreeView::ColumnSizing m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeView::ColumnSizing> ()
{
  return gtk_tree_view_column_sizing_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::TreeView::ColumnSizing>
{
  Gtk::TreeView::ColumnSizing default_value;

  constexpr PspecTraits (Gtk::TreeView::ColumnSizing default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_tree_view_column_sizing_get_type (),
                              static_cast<::GtkTreeViewColumnSizing> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class TreeView::ColumnSizing : std::underlying_type<::GtkTreeViewColumnSizing>::type
{
  GROW_ONLY = GTK_TREE_VIEW_COLUMN_GROW_ONLY,
  AUTOSIZE = GTK_TREE_VIEW_COLUMN_AUTOSIZE,
  FIXED = GTK_TREE_VIEW_COLUMN_FIXED,
}; /* enum TreeView::ColumnSizing */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
