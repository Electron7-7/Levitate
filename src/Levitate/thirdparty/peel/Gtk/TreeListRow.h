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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ ListModel;
} /* namespace Gio */

namespace Gtk
{
class TreeListRow;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeListRow> ()
{
  return gtk_tree_list_row_get_type ();
}


namespace Gtk
{
class TreeListRow : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TreeListRow () = delete;
  TreeListRow (const TreeListRow &) = delete;
  TreeListRow (TreeListRow &&) = delete;
  TreeListRow &
  operator = (const TreeListRow &) = delete;
  TreeListRow &
  operator = (TreeListRow &&) = delete;
  ~TreeListRow () = delete;
public:

  peel::RefPtr<TreeListRow>
  get_child_row (unsigned position) noexcept
  {
    ::GtkTreeListRow *_peel_this = reinterpret_cast<::GtkTreeListRow *> (this);
    ::GtkTreeListRow *_peel_return = gtk_tree_list_row_get_child_row (_peel_this, position);
    return peel::RefPtr<TreeListRow>::adopt_ref (reinterpret_cast<TreeListRow *> (_peel_return));
  }

  Gio::ListModel *
  get_children () noexcept
  {
    ::GtkTreeListRow *_peel_this = reinterpret_cast<::GtkTreeListRow *> (this);
    ::GListModel *_peel_return = gtk_tree_list_row_get_children (_peel_this);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  unsigned
  get_depth () noexcept
  {
    ::GtkTreeListRow *_peel_this = reinterpret_cast<::GtkTreeListRow *> (this);
    return gtk_tree_list_row_get_depth (_peel_this);
  }

  bool
  get_expanded () noexcept
  {
    ::GtkTreeListRow *_peel_this = reinterpret_cast<::GtkTreeListRow *> (this);
    gboolean _peel_return = gtk_tree_list_row_get_expanded (_peel_this);
    return !!_peel_return;
  }

  peel::RefPtr<GObject::Object>
  get_item () noexcept
  {
    ::GtkTreeListRow *_peel_this = reinterpret_cast<::GtkTreeListRow *> (this);
    ::gpointer _peel_return = gtk_tree_list_row_get_item (_peel_this);
    return peel::RefPtr<GObject::Object>::adopt_ref (reinterpret_cast<GObject::Object *> (_peel_return));
  }

  peel::RefPtr<TreeListRow>
  get_parent () noexcept
  {
    ::GtkTreeListRow *_peel_this = reinterpret_cast<::GtkTreeListRow *> (this);
    ::GtkTreeListRow *_peel_return = gtk_tree_list_row_get_parent (_peel_this);
    return peel::RefPtr<TreeListRow>::adopt_ref (reinterpret_cast<TreeListRow *> (_peel_return));
  }

  unsigned
  get_position () noexcept
  {
    ::GtkTreeListRow *_peel_this = reinterpret_cast<::GtkTreeListRow *> (this);
    return gtk_tree_list_row_get_position (_peel_this);
  }

  bool
  is_expandable () noexcept
  {
    ::GtkTreeListRow *_peel_this = reinterpret_cast<::GtkTreeListRow *> (this);
    gboolean _peel_return = gtk_tree_list_row_is_expandable (_peel_this);
    return !!_peel_return;
  }

  void
  set_expanded (bool expanded) noexcept
  {
    ::GtkTreeListRow *_peel_this = reinterpret_cast<::GtkTreeListRow *> (this);
    gboolean _peel_expanded = static_cast<gboolean> (expanded);
    gtk_tree_list_row_set_expanded (_peel_this, _peel_expanded);
  }

  static peel::Property<Gio::ListModel>
  prop_children ()
  {
    return peel::Property<Gio::ListModel> { "children" };
  }

  static peel::Property<unsigned>
  prop_depth ()
  {
    return peel::Property<unsigned> { "depth" };
  }

  static peel::Property<bool>
  prop_expandable ()
  {
    return peel::Property<bool> { "expandable" };
  }

  static peel::Property<bool>
  prop_expanded ()
  {
    return peel::Property<bool> { "expanded" };
  }

  static peel::Property<GObject::Object>
  prop_item ()
  {
    return peel::Property<GObject::Object> { "item" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkTreeListRowClass),
                 "TreeListRow::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTreeListRowClass),
                 "TreeListRow::Class align mismatch");
}; /* class TreeListRow */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
