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
namespace GObject
{
struct Value;
} /* namespace GObject */

namespace Gtk
{
struct TreeIter;
class TreeStore;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeStore> ()
{
  return gtk_tree_store_get_type ();
}


namespace Gtk
{
class TreeStore : public TreeSortable
/* extends GObject::Object */
/* implements Buildable, TreeDragDest, TreeDragSource, TreeModel, TreeSortable */
{
private:
  unsigned char _placeholder[sizeof (::GtkTreeStore) - sizeof (TreeSortable)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TreeStore () = delete;
  TreeStore (const TreeStore &) = delete;
  TreeStore (TreeStore &&) = delete;
  TreeStore &
  operator = (const TreeStore &) = delete;
  TreeStore &
  operator = (TreeStore &&) = delete;
protected:
  ~TreeStore () = default;
public:

  /* Unsupported for now: new: varargs */
  static void
  create (UnsupportedForNowToken);

  static peel::RefPtr<TreeStore>
  createv (peel::ArrayRef<GObject::Type> types) noexcept
  {
    int _peel_n_columns;
    GType *_peel_types = (_peel_n_columns = types.size (), reinterpret_cast<GType *> (types.data ()));
    ::GtkTreeStore *_peel_return = gtk_tree_store_newv (_peel_n_columns, _peel_types);
    peel_assume (_peel_return);
    return peel::RefPtr<TreeStore>::adopt_ref (reinterpret_cast<TreeStore *> (_peel_return));
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2)
  void
  append (TreeIter *iter, TreeIter *parent) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    gtk_tree_store_append (_peel_this, _peel_iter, _peel_parent);
  }

  void
  clear () noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    gtk_tree_store_clear (_peel_this);
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2)
  void
  insert (TreeIter *iter, TreeIter *parent, int position) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    gtk_tree_store_insert (_peel_this, _peel_iter, _peel_parent, position);
  }

  peel_arg_out (2) peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2)
  void
  insert_after (TreeIter *iter, TreeIter *parent, TreeIter *sibling) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    ::GtkTreeIter *_peel_sibling = reinterpret_cast<::GtkTreeIter *> (sibling);
    gtk_tree_store_insert_after (_peel_this, _peel_iter, _peel_parent, _peel_sibling);
  }

  peel_arg_out (2) peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2)
  void
  insert_before (TreeIter *iter, TreeIter *parent, TreeIter *sibling) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    ::GtkTreeIter *_peel_sibling = reinterpret_cast<::GtkTreeIter *> (sibling);
    gtk_tree_store_insert_before (_peel_this, _peel_iter, _peel_parent, _peel_sibling);
  }

  /* Unsupported for now: insert_with_values: varargs */
  static void
  insert_with_values (UnsupportedForNowToken);

  peel_arg_out (2) peel_arg_in (3)
  void
  insert_with_valuesv (TreeIter *iter, TreeIter *parent, int position, peel::ArrayRef<int> columns, peel::ArrayRef<GObject::Value> values) noexcept
  {
    int _peel_n_values;
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    int *_peel_columns = (_peel_n_values = columns.size (), reinterpret_cast<int *> (columns.data ()));
    ::GValue *_peel_values = (_peel_n_values = values.size (), reinterpret_cast<::GValue *> (values.data ()));
    gtk_tree_store_insert_with_valuesv (_peel_this, _peel_iter, _peel_parent, position, _peel_columns, _peel_values, _peel_n_values);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  is_ancestor (TreeIter *iter, TreeIter *descendant) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_descendant = reinterpret_cast<::GtkTreeIter *> (descendant);
    gboolean _peel_return = gtk_tree_store_is_ancestor (_peel_this, _peel_iter, _peel_descendant);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  int
  iter_depth (TreeIter *iter) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    return gtk_tree_store_iter_depth (_peel_this, _peel_iter);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  iter_is_valid (TreeIter *iter) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_tree_store_iter_is_valid (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2)
  void
  move_after (TreeIter *iter, TreeIter *position) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_position = reinterpret_cast<::GtkTreeIter *> (position);
    gtk_tree_store_move_after (_peel_this, _peel_iter, _peel_position);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2)
  void
  move_before (TreeIter *iter, TreeIter *position) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_position = reinterpret_cast<::GtkTreeIter *> (position);
    gtk_tree_store_move_before (_peel_this, _peel_iter, _peel_position);
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2)
  void
  prepend (TreeIter *iter, TreeIter *parent) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    gtk_tree_store_prepend (_peel_this, _peel_iter, _peel_parent);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  remove (TreeIter *iter) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_tree_store_remove (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_in (2)
  void
  reorder (TreeIter *parent, int *new_order) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    gtk_tree_store_reorder (_peel_this, _peel_parent, new_order);
  }

  /* Unsupported for now: set: varargs */
  static void
  set (UnsupportedForNowToken);

  void
  set_column_types (peel::ArrayRef<GObject::Type> types) noexcept
  {
    int _peel_n_columns;
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    GType *_peel_types = (_peel_n_columns = types.size (), reinterpret_cast<GType *> (types.data ()));
    gtk_tree_store_set_column_types (_peel_this, _peel_n_columns, _peel_types);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_valist (TreeIter *iter, va_list var_args) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gtk_tree_store_set_valist (_peel_this, _peel_iter, var_args);
  }

  peel_arg_in (2) peel_arg_in (4) peel_nonnull_args (2, 4)
  void
  set_value (TreeIter *iter, int column, GObject::Value *value) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    gtk_tree_store_set_value (_peel_this, _peel_iter, column, _peel_value);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_valuesv (TreeIter *iter, peel::ArrayRef<int> columns, peel::ArrayRef<GObject::Value> values) noexcept
  {
    int _peel_n_values;
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    int *_peel_columns = (_peel_n_values = columns.size (), reinterpret_cast<int *> (columns.data ()));
    ::GValue *_peel_values = (_peel_n_values = values.size (), reinterpret_cast<::GValue *> (values.data ()));
    gtk_tree_store_set_valuesv (_peel_this, _peel_iter, _peel_columns, _peel_values, _peel_n_values);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  swap (TreeIter *a, TreeIter *b) noexcept
  {
    ::GtkTreeStore *_peel_this = reinterpret_cast<::GtkTreeStore *> (this);
    ::GtkTreeIter *_peel_a = reinterpret_cast<::GtkTreeIter *> (a);
    ::GtkTreeIter *_peel_b = reinterpret_cast<::GtkTreeIter *> (b);
    gtk_tree_store_swap (_peel_this, _peel_a, _peel_b);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TreeStore> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTreeStoreClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GtkTreeStoreClass),
                 "TreeStore::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTreeStoreClass),
                 "TreeStore::Class align mismatch");
}; /* class TreeStore */

static_assert (sizeof (TreeStore) == sizeof (::GtkTreeStore),
               "TreeStore size mismatch");
static_assert (alignof (TreeStore) == alignof (::GtkTreeStore),
               "TreeStore align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
