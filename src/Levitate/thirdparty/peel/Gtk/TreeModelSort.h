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
#include <peel/Gtk/TreeSortable.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
struct TreeIter;
class /* interface */ TreeModel;
class TreeModelSort;
class /* record */ TreePath;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeModelSort> ()
{
  return gtk_tree_model_sort_get_type ();
}


namespace Gtk
{
class TreeModelSort : public TreeSortable
/* extends GObject::Object */
/* implements TreeDragSource, TreeModel, TreeSortable */
{
private:
  unsigned char _placeholder[sizeof (::GtkTreeModelSort) - sizeof (TreeSortable)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TreeModelSort () = delete;
  TreeModelSort (const TreeModelSort &) = delete;
  TreeModelSort (TreeModelSort &&) = delete;
  TreeModelSort &
  operator = (const TreeModelSort &) = delete;
  TreeModelSort &
  operator = (TreeModelSort &&) = delete;
protected:
  ~TreeModelSort () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<TreeModelSort>
  create_with_model (TreeModel *child_model) noexcept
  {
    ::GtkTreeModel *_peel_child_model = reinterpret_cast<::GtkTreeModel *> (child_model);
    ::GtkTreeModel *_peel_return = gtk_tree_model_sort_new_with_model (_peel_child_model);
    peel_assume (_peel_return);
    return peel::RefPtr<TreeModelSort>::adopt_ref (reinterpret_cast<TreeModelSort *> (_peel_return));
  }

  void
  clear_cache () noexcept
  {
    ::GtkTreeModelSort *_peel_this = reinterpret_cast<::GtkTreeModelSort *> (this);
    gtk_tree_model_sort_clear_cache (_peel_this);
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  convert_child_iter_to_iter (TreeIter *sort_iter, TreeIter *child_iter) noexcept
  {
    ::GtkTreeModelSort *_peel_this = reinterpret_cast<::GtkTreeModelSort *> (this);
    ::GtkTreeIter *_peel_sort_iter = reinterpret_cast<::GtkTreeIter *> (sort_iter);
    ::GtkTreeIter *_peel_child_iter = reinterpret_cast<::GtkTreeIter *> (child_iter);
    gboolean _peel_return = gtk_tree_model_sort_convert_child_iter_to_iter (_peel_this, _peel_sort_iter, _peel_child_iter);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::UniquePtr<TreePath>
  convert_child_path_to_path (TreePath *child_path) noexcept
  {
    ::GtkTreeModelSort *_peel_this = reinterpret_cast<::GtkTreeModelSort *> (this);
    ::GtkTreePath *_peel_child_path = reinterpret_cast<::GtkTreePath *> (child_path);
    ::GtkTreePath *_peel_return = gtk_tree_model_sort_convert_child_path_to_path (_peel_this, _peel_child_path);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  convert_iter_to_child_iter (TreeIter *child_iter, TreeIter *sorted_iter) noexcept
  {
    ::GtkTreeModelSort *_peel_this = reinterpret_cast<::GtkTreeModelSort *> (this);
    ::GtkTreeIter *_peel_child_iter = reinterpret_cast<::GtkTreeIter *> (child_iter);
    ::GtkTreeIter *_peel_sorted_iter = reinterpret_cast<::GtkTreeIter *> (sorted_iter);
    gtk_tree_model_sort_convert_iter_to_child_iter (_peel_this, _peel_child_iter, _peel_sorted_iter);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::UniquePtr<TreePath>
  convert_path_to_child_path (TreePath *sorted_path) noexcept
  {
    ::GtkTreeModelSort *_peel_this = reinterpret_cast<::GtkTreeModelSort *> (this);
    ::GtkTreePath *_peel_sorted_path = reinterpret_cast<::GtkTreePath *> (sorted_path);
    ::GtkTreePath *_peel_return = gtk_tree_model_sort_convert_path_to_child_path (_peel_this, _peel_sorted_path);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  peel_returns_nonnull
  TreeModel *
  get_model () noexcept
  {
    ::GtkTreeModelSort *_peel_this = reinterpret_cast<::GtkTreeModelSort *> (this);
    ::GtkTreeModel *_peel_return = gtk_tree_model_sort_get_model (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TreeModel *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  iter_is_valid (TreeIter *iter) noexcept
  {
    ::GtkTreeModelSort *_peel_this = reinterpret_cast<::GtkTreeModelSort *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_tree_model_sort_iter_is_valid (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  void
  reset_default_sort_func () noexcept
  {
    ::GtkTreeModelSort *_peel_this = reinterpret_cast<::GtkTreeModelSort *> (this);
    gtk_tree_model_sort_reset_default_sort_func (_peel_this);
  }

  static peel::Property<TreeModel>
  prop_model ()
  {
    return peel::Property<TreeModel> { "model" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TreeModelSort> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTreeModelSortClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GtkTreeModelSortClass),
                 "TreeModelSort::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTreeModelSortClass),
                 "TreeModelSort::Class align mismatch");
}; /* class TreeModelSort */

static_assert (sizeof (TreeModelSort) == sizeof (::GtkTreeModelSort),
               "TreeModelSort size mismatch");
static_assert (alignof (TreeModelSort) == alignof (::GtkTreeModelSort),
               "TreeModelSort align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/TreePath.h>
