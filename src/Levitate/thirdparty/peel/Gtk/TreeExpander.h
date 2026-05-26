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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gtk
{
class TreeExpander;
class TreeListRow;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeExpander> ()
{
  return gtk_tree_expander_get_type ();
}


namespace Gtk
{
class TreeExpander : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TreeExpander () = delete;
  TreeExpander (const TreeExpander &) = delete;
  TreeExpander (TreeExpander &&) = delete;
  TreeExpander &
  operator = (const TreeExpander &) = delete;
  TreeExpander &
  operator = (TreeExpander &&) = delete;
  ~TreeExpander () = delete;
public:

  static peel::FloatPtr<TreeExpander>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_tree_expander_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<TreeExpander> (reinterpret_cast<TreeExpander *> (_peel_return));
  }

  Widget *
  get_child () noexcept
  {
    ::GtkTreeExpander *_peel_this = reinterpret_cast<::GtkTreeExpander *> (this);
    ::GtkWidget *_peel_return = gtk_tree_expander_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_hide_expander () noexcept
  {
    ::GtkTreeExpander *_peel_this = reinterpret_cast<::GtkTreeExpander *> (this);
    gboolean _peel_return = gtk_tree_expander_get_hide_expander (_peel_this);
    return !!_peel_return;
  }

  bool
  get_indent_for_depth () noexcept
  {
    ::GtkTreeExpander *_peel_this = reinterpret_cast<::GtkTreeExpander *> (this);
    gboolean _peel_return = gtk_tree_expander_get_indent_for_depth (_peel_this);
    return !!_peel_return;
  }

  bool
  get_indent_for_icon () noexcept
  {
    ::GtkTreeExpander *_peel_this = reinterpret_cast<::GtkTreeExpander *> (this);
    gboolean _peel_return = gtk_tree_expander_get_indent_for_icon (_peel_this);
    return !!_peel_return;
  }

  peel::RefPtr<GObject::Object>
  get_item () noexcept
  {
    ::GtkTreeExpander *_peel_this = reinterpret_cast<::GtkTreeExpander *> (this);
    ::gpointer _peel_return = gtk_tree_expander_get_item (_peel_this);
    return peel::RefPtr<GObject::Object>::adopt_ref (reinterpret_cast<GObject::Object *> (_peel_return));
  }

  TreeListRow *
  get_list_row () noexcept
  {
    ::GtkTreeExpander *_peel_this = reinterpret_cast<::GtkTreeExpander *> (this);
    ::GtkTreeListRow *_peel_return = gtk_tree_expander_get_list_row (_peel_this);
    return reinterpret_cast<TreeListRow *> (_peel_return);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkTreeExpander *_peel_this = reinterpret_cast<::GtkTreeExpander *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_tree_expander_set_child (_peel_this, _peel_child);
  }

  void
  set_hide_expander (bool hide_expander) noexcept
  {
    ::GtkTreeExpander *_peel_this = reinterpret_cast<::GtkTreeExpander *> (this);
    gboolean _peel_hide_expander = static_cast<gboolean> (hide_expander);
    gtk_tree_expander_set_hide_expander (_peel_this, _peel_hide_expander);
  }

  void
  set_indent_for_depth (bool indent_for_depth) noexcept
  {
    ::GtkTreeExpander *_peel_this = reinterpret_cast<::GtkTreeExpander *> (this);
    gboolean _peel_indent_for_depth = static_cast<gboolean> (indent_for_depth);
    gtk_tree_expander_set_indent_for_depth (_peel_this, _peel_indent_for_depth);
  }

  void
  set_indent_for_icon (bool indent_for_icon) noexcept
  {
    ::GtkTreeExpander *_peel_this = reinterpret_cast<::GtkTreeExpander *> (this);
    gboolean _peel_indent_for_icon = static_cast<gboolean> (indent_for_icon);
    gtk_tree_expander_set_indent_for_icon (_peel_this, _peel_indent_for_icon);
  }

  void
  set_list_row (TreeListRow *list_row) noexcept
  {
    ::GtkTreeExpander *_peel_this = reinterpret_cast<::GtkTreeExpander *> (this);
    ::GtkTreeListRow *_peel_list_row = reinterpret_cast<::GtkTreeListRow *> (list_row);
    gtk_tree_expander_set_list_row (_peel_this, _peel_list_row);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_hide_expander ()
  {
    return peel::Property<bool> { "hide-expander" };
  }

  static peel::Property<bool>
  prop_indent_for_depth ()
  {
    return peel::Property<bool> { "indent-for-depth" };
  }

  static peel::Property<bool>
  prop_indent_for_icon ()
  {
    return peel::Property<bool> { "indent-for-icon" };
  }

  static peel::Property<GObject::Object>
  prop_item ()
  {
    return peel::Property<GObject::Object> { "item" };
  }

  static peel::Property<TreeListRow>
  prop_list_row ()
  {
    return peel::Property<TreeListRow> { "list-row" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkTreeExpanderClass),
                 "TreeExpander::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTreeExpanderClass),
                 "TreeExpander::Class align mismatch");
}; /* class TreeExpander */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GObject/Object.h>
