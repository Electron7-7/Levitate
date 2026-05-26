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
struct GObject::Value::Traits<Gtk::TreeView::DropPosition>
{
  typedef Gtk::TreeView::DropPosition UnownedType;

  static Gtk::TreeView::DropPosition
  get (const ::GValue *value)
  {
    return static_cast<Gtk::TreeView::DropPosition> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::TreeView::DropPosition m)
  {
    g_value_set_enum (value, static_cast<::GtkTreeViewDropPosition> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::TreeView::DropPosition m)
  {
    set (value, m);
  }

  static Gtk::TreeView::DropPosition
  cast_for_create (Gtk::TreeView::DropPosition m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeView::DropPosition> ()
{
  return gtk_tree_view_drop_position_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::TreeView::DropPosition>
{
  Gtk::TreeView::DropPosition default_value;

  constexpr PspecTraits (Gtk::TreeView::DropPosition default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_tree_view_drop_position_get_type (),
                              static_cast<::GtkTreeViewDropPosition> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class TreeView::DropPosition : std::underlying_type<::GtkTreeViewDropPosition>::type
{
  BEFORE = GTK_TREE_VIEW_DROP_BEFORE,
  AFTER = GTK_TREE_VIEW_DROP_AFTER,
  INTO_OR_BEFORE = GTK_TREE_VIEW_DROP_INTO_OR_BEFORE,
  INTO_OR_AFTER = GTK_TREE_VIEW_DROP_INTO_OR_AFTER,
}; /* enum TreeView::DropPosition */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
