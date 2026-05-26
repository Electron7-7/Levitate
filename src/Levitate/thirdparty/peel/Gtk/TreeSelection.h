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
#include <peel/GLib/List.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class SelectionMode : std::underlying_type<::GtkSelectionMode>::type;
struct TreeIter;
class /* interface */ TreeModel;
class /* record */ TreePath;
class TreeSelection;
class TreeView;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeSelection> ()
{
  return gtk_tree_selection_get_type ();
}


namespace Gtk
{
class TreeSelection : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TreeSelection () = delete;
  TreeSelection (const TreeSelection &) = delete;
  TreeSelection (TreeSelection &&) = delete;
  TreeSelection &
  operator = (const TreeSelection &) = delete;
  TreeSelection &
  operator = (TreeSelection &&) = delete;
  ~TreeSelection () = delete;
public:

  int
  count_selected_rows () noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    return gtk_tree_selection_count_selected_rows (_peel_this);
  }

  SelectionMode
  get_mode () noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkSelectionMode _peel_return = gtk_tree_selection_get_mode (_peel_this);
    return static_cast<SelectionMode> (_peel_return);
  }

  ::GtkTreeSelectionFunc
  get_select_function () noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    return gtk_tree_selection_get_select_function (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  get_selected (TreeModel **model, TreeIter *iter) noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreeModel **_peel_model = reinterpret_cast<::GtkTreeModel **> (model);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_tree_selection_get_selected (_peel_this, _peel_model, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_out (2)
  GLib::List<peel::UniquePtr<TreePath>>
  get_selected_rows (TreeModel **model) noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreeModel **_peel_model = reinterpret_cast<::GtkTreeModel **> (model);
    GList *_peel_return = gtk_tree_selection_get_selected_rows (_peel_this, _peel_model);
    return GLib::List<peel::UniquePtr<TreePath>>::adopt_list (_peel_return);
  }

  peel_returns_nonnull
  TreeView *
  get_tree_view () noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreeView *_peel_return = gtk_tree_selection_get_tree_view (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TreeView *> (_peel_return);
  }

  void *
  get_user_data () noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    return gtk_tree_selection_get_user_data (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  iter_is_selected (TreeIter *iter) noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_tree_selection_iter_is_selected (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  path_is_selected (TreePath *path) noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = gtk_tree_selection_path_is_selected (_peel_this, _peel_path);
    return !!_peel_return;
  }

  void
  select_all () noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    gtk_tree_selection_select_all (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  select_iter (TreeIter *iter) noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gtk_tree_selection_select_iter (_peel_this, _peel_iter);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  select_path (TreePath *path) noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gtk_tree_selection_select_path (_peel_this, _peel_path);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  select_range (TreePath *start_path, TreePath *end_path) noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreePath *_peel_start_path = reinterpret_cast<::GtkTreePath *> (start_path);
    ::GtkTreePath *_peel_end_path = reinterpret_cast<::GtkTreePath *> (end_path);
    gtk_tree_selection_select_range (_peel_this, _peel_start_path, _peel_end_path);
  }

  template<typename TreeSelectionForeachFunc>
  void
  selected_foreach (TreeSelectionForeachFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreeSelectionForeachFunc _peel_func = peel::internals::CallbackHelper<void, ::GtkTreeModel *, ::GtkTreePath *, ::GtkTreeIter *>::wrap_call_callback (
      static_cast<TreeSelectionForeachFunc &&> (func),
      [] (::GtkTreeModel *model, ::GtkTreePath *path, ::GtkTreeIter *iter, gpointer data) -> void
      {
        TreeSelectionForeachFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TreeSelectionForeachFunc>::type *> (data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        _peel_captured_func (_peel_model, _peel_path, _peel_iter);
      },
      &_peel_data, peel::internals::is_const_invocable<TreeSelectionForeachFunc, void, TreeModel *, TreePath *, TreeIter *>::value);
    gtk_tree_selection_selected_foreach (_peel_this, _peel_func, _peel_data);
  }

  void
  set_mode (SelectionMode type) noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkSelectionMode _peel_type = static_cast<::GtkSelectionMode> (type);
    gtk_tree_selection_set_mode (_peel_this, _peel_type);
  }

  template<typename TreeSelectionFunc>
  void
  set_select_function (TreeSelectionFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreeSelectionFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GtkTreeSelection *, ::GtkTreeModel *, ::GtkTreePath *, gboolean>::wrap_notified_callback (
      static_cast<TreeSelectionFunc &&> (func),
      [] (::GtkTreeSelection *selection, ::GtkTreeModel *model, ::GtkTreePath *path, gboolean path_currently_selected, gpointer data) -> gboolean
      {
        TreeSelectionFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TreeSelectionFunc>::type *> (data);
        TreeSelection *_peel_selection = reinterpret_cast<TreeSelection *> (selection);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        bool _peel_path_currently_selected = !!path_currently_selected;
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_func) (_peel_selection, _peel_model, _peel_path, _peel_path_currently_selected);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, &_peel_destroy, peel::internals::is_const_invocable<TreeSelectionFunc, void, TreeSelection *, TreeModel *, TreePath *, bool>::value);
    gtk_tree_selection_set_select_function (_peel_this, _peel_func, _peel_data, _peel_destroy);
  }

  void
  unselect_all () noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    gtk_tree_selection_unselect_all (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  unselect_iter (TreeIter *iter) noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gtk_tree_selection_unselect_iter (_peel_this, _peel_iter);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  unselect_path (TreePath *path) noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gtk_tree_selection_unselect_path (_peel_this, _peel_path);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  unselect_range (TreePath *start_path, TreePath *end_path) noexcept
  {
    ::GtkTreeSelection *_peel_this = reinterpret_cast<::GtkTreeSelection *> (this);
    ::GtkTreePath *_peel_start_path = reinterpret_cast<::GtkTreePath *> (start_path);
    ::GtkTreePath *_peel_end_path = reinterpret_cast<::GtkTreePath *> (end_path);
    gtk_tree_selection_unselect_range (_peel_this, _peel_start_path, _peel_end_path);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeSelection, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (TreeSelection *), bool after = false) noexcept
  {
    return Signal<TreeSelection, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  static peel::Property<SelectionMode>
  prop_mode ()
  {
    return peel::Property<SelectionMode> { "mode" };
  }
}; /* class TreeSelection */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/TreePath.h>
