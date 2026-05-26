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
#include <peel/GObject/TypeInterface.h>

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
class /* interface */ TreeModel;
class /* record */ TreePath;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeModel> ()
{
  return gtk_tree_model_get_type ();
}


namespace Gtk
{
class /* interface */ TreeModel : public GObject::Object
/* requires GObject::Object */
{
private:
  TreeModel () = delete;
  TreeModel (const TreeModel &) = delete;
  TreeModel (TreeModel &&) = delete;

  TreeModel &
  operator = (const TreeModel &) = delete;
  TreeModel &
  operator = (TreeModel &&) = delete;

protected:
  ~TreeModel () = default;

public:
  enum class Flags : std::underlying_type<::GtkTreeModelFlags>::type;

  peel_arg_in (2)
  peel::RefPtr<TreeModel>
  filter_new (TreePath *root) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_root = reinterpret_cast<::GtkTreePath *> (root);
    ::GtkTreeModel *_peel_return = gtk_tree_model_filter_new (_peel_this, _peel_root);
    peel_assume (_peel_return);
    return peel::RefPtr<TreeModel>::adopt_ref (reinterpret_cast<TreeModel *> (_peel_return));
  }

  template<typename TreeModelForeachFunc>
  void
  foreach (TreeModelForeachFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeModelForeachFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GtkTreeModel *, ::GtkTreePath *, ::GtkTreeIter *>::wrap_call_callback (
      static_cast<TreeModelForeachFunc &&> (func),
      [] (::GtkTreeModel *model, ::GtkTreePath *path, ::GtkTreeIter *iter, gpointer data) -> gboolean
      {
        TreeModelForeachFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TreeModelForeachFunc>::type *> (data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        bool _peel_return = _peel_captured_func (_peel_model, _peel_path, _peel_iter);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<TreeModelForeachFunc, void, TreeModel *, TreePath *, TreeIter *>::value);
    gtk_tree_model_foreach (_peel_this, _peel_func, _peel_user_data);
  }

  /* Unsupported for now: get: varargs */

  GObject::Type
  get_column_type (int index_) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    return gtk_tree_model_get_column_type (_peel_this, index_);
  }

  TreeModel::Flags
  get_flags () noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeModelFlags _peel_return = gtk_tree_model_get_flags (_peel_this);
    return static_cast<TreeModel::Flags> (_peel_return);
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  get_iter (TreeIter *iter, TreePath *path) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = gtk_tree_model_get_iter (_peel_this, _peel_iter, _peel_path);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_iter_first (TreeIter *iter) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_tree_model_get_iter_first (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2, 3)
  bool
  get_iter_from_string (TreeIter *iter, const char *path_string) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_tree_model_get_iter_from_string (_peel_this, _peel_iter, path_string);
    return !!_peel_return;
  }

  int
  get_n_columns () noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    return gtk_tree_model_get_n_columns (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::UniquePtr<TreePath>
  get_path (TreeIter *iter) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreePath *_peel_return = gtk_tree_model_get_path (_peel_this, _peel_iter);
    peel_assume (_peel_return);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::String
  get_string_from_iter (TreeIter *iter) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    char *_peel_return = gtk_tree_model_get_string_from_iter (_peel_this, _peel_iter);
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  get_valist (TreeIter *iter, va_list var_args) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gtk_tree_model_get_valist (_peel_this, _peel_iter, var_args);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  get_value (TreeIter *iter, int column, GObject::Value *value) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    gtk_tree_model_get_value (_peel_this, _peel_iter, column, _peel_value);
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2)
  bool
  iter_children (TreeIter *iter, TreeIter *parent) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    gboolean _peel_return = gtk_tree_model_iter_children (_peel_this, _peel_iter, _peel_parent);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  iter_has_child (TreeIter *iter) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_tree_model_iter_has_child (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_in (2)
  int
  iter_n_children (TreeIter *iter) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    return gtk_tree_model_iter_n_children (_peel_this, _peel_iter);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  iter_next (TreeIter *iter) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_tree_model_iter_next (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2)
  bool
  iter_nth_child (TreeIter *iter, TreeIter *parent, int n) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    gboolean _peel_return = gtk_tree_model_iter_nth_child (_peel_this, _peel_iter, _peel_parent, n);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  iter_parent (TreeIter *iter, TreeIter *child) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_child = reinterpret_cast<::GtkTreeIter *> (child);
    gboolean _peel_return = gtk_tree_model_iter_parent (_peel_this, _peel_iter, _peel_child);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  iter_previous (TreeIter *iter) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_tree_model_iter_previous (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  ref_node (TreeIter *iter) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gtk_tree_model_ref_node (_peel_this, _peel_iter);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  row_changed (TreePath *path, TreeIter *iter) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gtk_tree_model_row_changed (_peel_this, _peel_path, _peel_iter);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  row_deleted (TreePath *path) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gtk_tree_model_row_deleted (_peel_this, _peel_path);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  row_has_child_toggled (TreePath *path, TreeIter *iter) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gtk_tree_model_row_has_child_toggled (_peel_this, _peel_path, _peel_iter);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  row_inserted (TreePath *path, TreeIter *iter) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gtk_tree_model_row_inserted (_peel_this, _peel_path, _peel_iter);
  }

  /* Unsupported for now: rows_reordered: explicitly skipped */

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2)
  void
  rows_reordered_with_length (TreePath *path, TreeIter *iter, peel::ArrayRef<int> new_order) noexcept
  {
    int _peel_length;
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    int *_peel_new_order = (_peel_length = new_order.size (), reinterpret_cast<int *> (new_order.data ()));
    gtk_tree_model_rows_reordered_with_length (_peel_this, _peel_path, _peel_iter, _peel_new_order, _peel_length);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  unref_node (TreeIter *iter) noexcept
  {
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gtk_tree_model_unref_node (_peel_this, _peel_iter);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_row_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeModel, void (const TreePath *, const TreeIter *)>::_peel_connect_by_name (this, "row-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_row_changed (HandlerObject *object, void (HandlerObject::*handler_method) (TreeModel *, const TreePath *, const TreeIter *), bool after = false) noexcept
  {
    return Signal<TreeModel, void (const TreePath *, const TreeIter *)>::_peel_connect_by_name (this, "row-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_row_deleted (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeModel, void (const TreePath *)>::_peel_connect_by_name (this, "row-deleted", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_row_deleted (HandlerObject *object, void (HandlerObject::*handler_method) (TreeModel *, const TreePath *), bool after = false) noexcept
  {
    return Signal<TreeModel, void (const TreePath *)>::_peel_connect_by_name (this, "row-deleted", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_row_has_child_toggled (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeModel, void (const TreePath *, const TreeIter *)>::_peel_connect_by_name (this, "row-has-child-toggled", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_row_has_child_toggled (HandlerObject *object, void (HandlerObject::*handler_method) (TreeModel *, const TreePath *, const TreeIter *), bool after = false) noexcept
  {
    return Signal<TreeModel, void (const TreePath *, const TreeIter *)>::_peel_connect_by_name (this, "row-has-child-toggled", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_row_inserted (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeModel, void (const TreePath *, const TreeIter *)>::_peel_connect_by_name (this, "row-inserted", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_row_inserted (HandlerObject *object, void (HandlerObject::*handler_method) (TreeModel *, const TreePath *, const TreeIter *), bool after = false) noexcept
  {
    return Signal<TreeModel, void (const TreePath *, const TreeIter *)>::_peel_connect_by_name (this, "row-inserted", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_rows_reordered (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeModel, void (const TreePath *, const TreeIter *, void *)>::_peel_connect_by_name (this, "rows-reordered", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_rows_reordered (HandlerObject *object, void (HandlerObject::*handler_method) (TreeModel *, const TreePath *, const TreeIter *, void *), bool after = false) noexcept
  {
    return Signal<TreeModel, void (const TreePath *, const TreeIter *, void *)>::_peel_connect_by_name (this, "rows-reordered", object, handler_method, after);
  }

  template<typename DerivedClass>
  GObject::Type
  parent_vfunc_get_column_type (int index_) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    return _peel_iface->get_column_type (_peel_this, index_);
  }

  GObject::Type
  default_vfunc_get_column_type (int index_) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    return _peel_iface->get_column_type (_peel_this, index_);
  }

  template<typename DerivedClass>
  TreeModel::Flags
  parent_vfunc_get_flags () noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeModelFlags _peel_return = _peel_iface->get_flags (_peel_this);
    return static_cast<TreeModel::Flags> (_peel_return);
  }

  TreeModel::Flags
  default_vfunc_get_flags () noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeModelFlags _peel_return = _peel_iface->get_flags (_peel_this);
    return static_cast<TreeModel::Flags> (_peel_return);
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_get_iter (TreeIter *iter, TreePath *path) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = _peel_iface->get_iter (_peel_this, _peel_iter, _peel_path);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  default_vfunc_get_iter (TreeIter *iter, TreePath *path) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = _peel_iface->get_iter (_peel_this, _peel_iter, _peel_path);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  int
  parent_vfunc_get_n_columns () noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    return _peel_iface->get_n_columns (_peel_this);
  }

  int
  default_vfunc_get_n_columns () noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    return _peel_iface->get_n_columns (_peel_this);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  peel::UniquePtr<TreePath>
  parent_vfunc_get_path (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreePath *_peel_return = _peel_iface->get_path (_peel_this, _peel_iter);
    peel_assume (_peel_return);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::UniquePtr<TreePath>
  default_vfunc_get_path (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreePath *_peel_return = _peel_iface->get_path (_peel_this, _peel_iter);
    peel_assume (_peel_return);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  parent_vfunc_get_value (TreeIter *iter, int column, GObject::Value *value) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    _peel_iface->get_value (_peel_this, _peel_iter, column, _peel_value);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  default_vfunc_get_value (TreeIter *iter, int column, GObject::Value *value) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    _peel_iface->get_value (_peel_this, _peel_iter, column, _peel_value);
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2)
  bool
  parent_vfunc_iter_children (TreeIter *iter, TreeIter *parent) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    gboolean _peel_return = _peel_iface->iter_children (_peel_this, _peel_iter, _peel_parent);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2)
  bool
  default_vfunc_iter_children (TreeIter *iter, TreeIter *parent) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    gboolean _peel_return = _peel_iface->iter_children (_peel_this, _peel_iter, _peel_parent);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  bool
  parent_vfunc_iter_has_child (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = _peel_iface->iter_has_child (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  default_vfunc_iter_has_child (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = _peel_iface->iter_has_child (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2)
  int
  parent_vfunc_iter_n_children (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    return _peel_iface->iter_n_children (_peel_this, _peel_iter);
  }

  peel_arg_in (2)
  int
  default_vfunc_iter_n_children (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    return _peel_iface->iter_n_children (_peel_this, _peel_iter);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  bool
  parent_vfunc_iter_next (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = _peel_iface->iter_next (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  default_vfunc_iter_next (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = _peel_iface->iter_next (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2)
  bool
  parent_vfunc_iter_nth_child (TreeIter *iter, TreeIter *parent, int n) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    gboolean _peel_return = _peel_iface->iter_nth_child (_peel_this, _peel_iter, _peel_parent, n);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2)
  bool
  default_vfunc_iter_nth_child (TreeIter *iter, TreeIter *parent, int n) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_parent = reinterpret_cast<::GtkTreeIter *> (parent);
    gboolean _peel_return = _peel_iface->iter_nth_child (_peel_this, _peel_iter, _peel_parent, n);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_iter_parent (TreeIter *iter, TreeIter *child) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_child = reinterpret_cast<::GtkTreeIter *> (child);
    gboolean _peel_return = _peel_iface->iter_parent (_peel_this, _peel_iter, _peel_child);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  default_vfunc_iter_parent (TreeIter *iter, TreeIter *child) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreeIter *_peel_child = reinterpret_cast<::GtkTreeIter *> (child);
    gboolean _peel_return = _peel_iface->iter_parent (_peel_this, _peel_iter, _peel_child);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  bool
  parent_vfunc_iter_previous (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = _peel_iface->iter_previous (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  default_vfunc_iter_previous (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = _peel_iface->iter_previous (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_ref_node (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    _peel_iface->ref_node (_peel_this, _peel_iter);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  default_vfunc_ref_node (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    _peel_iface->ref_node (_peel_this, _peel_iter);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_row_changed (TreePath *path, TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    _peel_iface->row_changed (_peel_this, _peel_path, _peel_iter);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  default_vfunc_row_changed (TreePath *path, TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    _peel_iface->row_changed (_peel_this, _peel_path, _peel_iter);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_row_deleted (TreePath *path) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    _peel_iface->row_deleted (_peel_this, _peel_path);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  default_vfunc_row_deleted (TreePath *path) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    _peel_iface->row_deleted (_peel_this, _peel_path);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_row_has_child_toggled (TreePath *path, TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    _peel_iface->row_has_child_toggled (_peel_this, _peel_path, _peel_iter);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  default_vfunc_row_has_child_toggled (TreePath *path, TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    _peel_iface->row_has_child_toggled (_peel_this, _peel_path, _peel_iter);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_row_inserted (TreePath *path, TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    _peel_iface->row_inserted (_peel_this, _peel_path, _peel_iter);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  default_vfunc_row_inserted (TreePath *path, TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    _peel_iface->row_inserted (_peel_this, _peel_path, _peel_iter);
  }

  /* Unsupported for now: rows_reordered: explicitly skipped */

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_unref_node (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TreeModel> ())->peek_parent ());
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    _peel_iface->unref_node (_peel_this, _peel_iter);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  default_vfunc_unref_node (TreeIter *iter) noexcept
  {
    ::GtkTreeModelIface *_peel_iface = reinterpret_cast<::GtkTreeModelIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TreeModel> ()));
    ::GtkTreeModel *_peel_this = reinterpret_cast<::GtkTreeModel *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    _peel_iface->unref_node (_peel_this, _peel_iter);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTreeModelIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_column_type ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->get_column_type = +[] (::GtkTreeModel *tree_model, int index_) -> GType
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        return _peel_this->DerivedClass::vfunc_get_column_type (index_);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_flags ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->get_flags = +[] (::GtkTreeModel *tree_model) -> ::GtkTreeModelFlags
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeModel::Flags _peel_return = _peel_this->DerivedClass::vfunc_get_flags ();
        return static_cast<::GtkTreeModelFlags> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_iter ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->get_iter = +[] (::GtkTreeModel *tree_model, ::GtkTreeIter *iter, ::GtkTreePath *path) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_iter (_peel_iter, _peel_path);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_n_columns ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->get_n_columns = +[] (::GtkTreeModel *tree_model) -> int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        return _peel_this->DerivedClass::vfunc_get_n_columns ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_path ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->get_path = +[] (::GtkTreeModel *tree_model, ::GtkTreeIter *iter) -> ::GtkTreePath *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        peel::UniquePtr<TreePath> _peel_return = _peel_this->DerivedClass::vfunc_get_path (_peel_iter);
        return reinterpret_cast<::GtkTreePath *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_value ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->get_value = +[] (::GtkTreeModel *tree_model, ::GtkTreeIter *iter, int column, ::GValue *value) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        GObject::Value *_peel_value = reinterpret_cast<GObject::Value *> (value);
        _peel_this->DerivedClass::vfunc_get_value (_peel_iter, column, _peel_value);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_iter_children ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->iter_children = +[] (::GtkTreeModel *tree_model, ::GtkTreeIter *iter, ::GtkTreeIter *parent) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        TreeIter *_peel_parent = reinterpret_cast<TreeIter *> (parent);
        bool _peel_return = _peel_this->DerivedClass::vfunc_iter_children (_peel_iter, _peel_parent);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_iter_has_child ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->iter_has_child = +[] (::GtkTreeModel *tree_model, ::GtkTreeIter *iter) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        bool _peel_return = _peel_this->DerivedClass::vfunc_iter_has_child (_peel_iter);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_iter_n_children ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->iter_n_children = +[] (::GtkTreeModel *tree_model, ::GtkTreeIter *iter) -> int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        return _peel_this->DerivedClass::vfunc_iter_n_children (_peel_iter);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_iter_next ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->iter_next = +[] (::GtkTreeModel *tree_model, ::GtkTreeIter *iter) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        bool _peel_return = _peel_this->DerivedClass::vfunc_iter_next (_peel_iter);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_iter_nth_child ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->iter_nth_child = +[] (::GtkTreeModel *tree_model, ::GtkTreeIter *iter, ::GtkTreeIter *parent, int n) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        TreeIter *_peel_parent = reinterpret_cast<TreeIter *> (parent);
        bool _peel_return = _peel_this->DerivedClass::vfunc_iter_nth_child (_peel_iter, _peel_parent, n);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_iter_parent ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->iter_parent = +[] (::GtkTreeModel *tree_model, ::GtkTreeIter *iter, ::GtkTreeIter *child) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        TreeIter *_peel_child = reinterpret_cast<TreeIter *> (child);
        bool _peel_return = _peel_this->DerivedClass::vfunc_iter_parent (_peel_iter, _peel_child);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_iter_previous ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->iter_previous = +[] (::GtkTreeModel *tree_model, ::GtkTreeIter *iter) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        bool _peel_return = _peel_this->DerivedClass::vfunc_iter_previous (_peel_iter);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_ref_node ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->ref_node = +[] (::GtkTreeModel *tree_model, ::GtkTreeIter *iter) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        _peel_this->DerivedClass::vfunc_ref_node (_peel_iter);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_row_changed ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->row_changed = +[] (::GtkTreeModel *tree_model, ::GtkTreePath *path, ::GtkTreeIter *iter) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        _peel_this->DerivedClass::vfunc_row_changed (_peel_path, _peel_iter);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_row_deleted ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->row_deleted = +[] (::GtkTreeModel *tree_model, ::GtkTreePath *path) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        _peel_this->DerivedClass::vfunc_row_deleted (_peel_path);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_row_has_child_toggled ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->row_has_child_toggled = +[] (::GtkTreeModel *tree_model, ::GtkTreePath *path, ::GtkTreeIter *iter) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        _peel_this->DerivedClass::vfunc_row_has_child_toggled (_peel_path, _peel_iter);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_row_inserted ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->row_inserted = +[] (::GtkTreeModel *tree_model, ::GtkTreePath *path, ::GtkTreeIter *iter) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        _peel_this->DerivedClass::vfunc_row_inserted (_peel_path, _peel_iter);
      };
    }

    /* Unsupported for now: rows_reordered: explicitly skipped */

    template<typename DerivedClass>
    void
    override_vfunc_unref_node ()
    {
      ::GtkTreeModelIface *klass = reinterpret_cast<::GtkTreeModelIface *> (this);
      klass->unref_node = +[] (::GtkTreeModel *tree_model, ::GtkTreeIter *iter) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        _peel_this->DerivedClass::vfunc_unref_node (_peel_iter);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkTreeModelIface),
                 "TreeModel::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkTreeModelIface),
                 "TreeModel::Iface align mismatch");
}; /* interface TreeModel */
static_assert (sizeof (TreeModel) == sizeof (GObject::Object),
               "TreeModel size mismatch");
static_assert (alignof (TreeModel) == alignof (GObject::Object),
               "TreeModel align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/TreePath.h>
