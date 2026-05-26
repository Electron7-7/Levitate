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
#include <peel/GObject/InitiallyUnowned.h>
#include <peel/Gtk/TreeView.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class CellArea;
class CellRenderer;
enum class SortType : std::underlying_type<::GtkSortType>::type;
struct TreeIter;
class /* interface */ TreeModel;
class TreeViewColumn;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeViewColumn> ()
{
  return gtk_tree_view_column_get_type ();
}


namespace Gtk
{
class TreeViewColumn : public GObject::InitiallyUnowned
/* non-derivable */
/* implements Buildable, CellLayout */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TreeViewColumn () = delete;
  TreeViewColumn (const TreeViewColumn &) = delete;
  TreeViewColumn (TreeViewColumn &&) = delete;
  TreeViewColumn &
  operator = (const TreeViewColumn &) = delete;
  TreeViewColumn &
  operator = (TreeViewColumn &&) = delete;
  ~TreeViewColumn () = delete;
public:

  static peel::FloatPtr<TreeViewColumn>
  create () noexcept
  {
    ::GtkTreeViewColumn *_peel_return = gtk_tree_view_column_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<TreeViewColumn> (reinterpret_cast<TreeViewColumn *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<TreeViewColumn>
  create_with_area (CellArea *area) noexcept
  {
    ::GtkCellArea *_peel_area = reinterpret_cast<::GtkCellArea *> (area);
    ::GtkTreeViewColumn *_peel_return = gtk_tree_view_column_new_with_area (_peel_area);
    peel_assume (_peel_return);
    return peel::FloatPtr<TreeViewColumn> (reinterpret_cast<TreeViewColumn *> (_peel_return));
  }

  /* Unsupported for now: new_with_attributes: varargs */
  static void
  create_with_attributes (UnsupportedForNowToken);

  peel_nonnull_args (2, 3)
  void
  add_attribute (CellRenderer *cell_renderer, const char *attribute, int column) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkCellRenderer *_peel_cell_renderer = reinterpret_cast<::GtkCellRenderer *> (cell_renderer);
    gtk_tree_view_column_add_attribute (_peel_this, _peel_cell_renderer, attribute, column);
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  bool
  cell_get_position (CellRenderer *cell_renderer, int *x_offset, int *width) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkCellRenderer *_peel_cell_renderer = reinterpret_cast<::GtkCellRenderer *> (cell_renderer);
    gboolean _peel_return = gtk_tree_view_column_cell_get_position (_peel_this, _peel_cell_renderer, x_offset, width);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_arg_out (5)
  void
  cell_get_size (int *x_offset, int *y_offset, int *width, int *height) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gtk_tree_view_column_cell_get_size (_peel_this, x_offset, y_offset, width, height);
  }

  bool
  cell_is_visible () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_return = gtk_tree_view_column_cell_is_visible (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  cell_set_cell_data (TreeModel *tree_model, TreeIter *iter, bool is_expander, bool is_expanded) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkTreeModel *_peel_tree_model = reinterpret_cast<::GtkTreeModel *> (tree_model);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_is_expander = static_cast<gboolean> (is_expander);
    gboolean _peel_is_expanded = static_cast<gboolean> (is_expanded);
    gtk_tree_view_column_cell_set_cell_data (_peel_this, _peel_tree_model, _peel_iter, _peel_is_expander, _peel_is_expanded);
  }

  void
  clear () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gtk_tree_view_column_clear (_peel_this);
  }

  peel_nonnull_args (2)
  void
  clear_attributes (CellRenderer *cell_renderer) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkCellRenderer *_peel_cell_renderer = reinterpret_cast<::GtkCellRenderer *> (cell_renderer);
    gtk_tree_view_column_clear_attributes (_peel_this, _peel_cell_renderer);
  }

  void
  clicked () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gtk_tree_view_column_clicked (_peel_this);
  }

  peel_nonnull_args (2)
  void
  focus_cell (CellRenderer *cell) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gtk_tree_view_column_focus_cell (_peel_this, _peel_cell);
  }

  float
  get_alignment () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    return gtk_tree_view_column_get_alignment (_peel_this);
  }

  peel_returns_nonnull
  Widget *
  get_button () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkWidget *_peel_return = gtk_tree_view_column_get_button (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_clickable () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_return = gtk_tree_view_column_get_clickable (_peel_this);
    return !!_peel_return;
  }

  bool
  get_expand () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_return = gtk_tree_view_column_get_expand (_peel_this);
    return !!_peel_return;
  }

  int
  get_fixed_width () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    return gtk_tree_view_column_get_fixed_width (_peel_this);
  }

  int
  get_max_width () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    return gtk_tree_view_column_get_max_width (_peel_this);
  }

  int
  get_min_width () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    return gtk_tree_view_column_get_min_width (_peel_this);
  }

  bool
  get_reorderable () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_return = gtk_tree_view_column_get_reorderable (_peel_this);
    return !!_peel_return;
  }

  bool
  get_resizable () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_return = gtk_tree_view_column_get_resizable (_peel_this);
    return !!_peel_return;
  }

  TreeView::ColumnSizing
  get_sizing () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkTreeViewColumnSizing _peel_return = gtk_tree_view_column_get_sizing (_peel_this);
    return static_cast<TreeView::ColumnSizing> (_peel_return);
  }

  int
  get_sort_column_id () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    return gtk_tree_view_column_get_sort_column_id (_peel_this);
  }

  bool
  get_sort_indicator () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_return = gtk_tree_view_column_get_sort_indicator (_peel_this);
    return !!_peel_return;
  }

  SortType
  get_sort_order () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkSortType _peel_return = gtk_tree_view_column_get_sort_order (_peel_this);
    return static_cast<SortType> (_peel_return);
  }

  int
  get_spacing () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    return gtk_tree_view_column_get_spacing (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_title () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    return gtk_tree_view_column_get_title (_peel_this);
  }

  Widget *
  get_tree_view () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkWidget *_peel_return = gtk_tree_view_column_get_tree_view (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_visible () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_return = gtk_tree_view_column_get_visible (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_widget () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkWidget *_peel_return = gtk_tree_view_column_get_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  int
  get_width () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    return gtk_tree_view_column_get_width (_peel_this);
  }

  int
  get_x_offset () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    return gtk_tree_view_column_get_x_offset (_peel_this);
  }

  peel_nonnull_args (2)
  void
  pack_end (CellRenderer *cell, bool expand) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    gtk_tree_view_column_pack_end (_peel_this, _peel_cell, _peel_expand);
  }

  peel_nonnull_args (2)
  void
  pack_start (CellRenderer *cell, bool expand) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    gtk_tree_view_column_pack_start (_peel_this, _peel_cell, _peel_expand);
  }

  void
  queue_resize () noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gtk_tree_view_column_queue_resize (_peel_this);
  }

  void
  set_alignment (float xalign) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gtk_tree_view_column_set_alignment (_peel_this, xalign);
  }

  /* Unsupported for now: set_attributes: varargs */
  static void
  set_attributes (UnsupportedForNowToken);

  template<typename TreeCellDataFunc>
  peel_nonnull_args (2)
  void
  set_cell_data_func (CellRenderer *cell_renderer, TreeCellDataFunc &&func) noexcept
  {
    gpointer _peel_func_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkCellRenderer *_peel_cell_renderer = reinterpret_cast<::GtkCellRenderer *> (cell_renderer);
    ::GtkTreeCellDataFunc _peel_func = peel::internals::CallbackHelper<void, ::GtkTreeViewColumn *, ::GtkCellRenderer *, ::GtkTreeModel *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<TreeCellDataFunc &&> (func),
      [] (::GtkTreeViewColumn *tree_column, ::GtkCellRenderer *cell, ::GtkTreeModel *tree_model, ::GtkTreeIter *iter, gpointer data) -> void
      {
        TreeCellDataFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TreeCellDataFunc>::type *> (data);
        TreeViewColumn *_peel_tree_column = reinterpret_cast<TreeViewColumn *> (tree_column);
        CellRenderer *_peel_cell = reinterpret_cast<CellRenderer *> (cell);
        TreeModel *_peel_tree_model = reinterpret_cast<TreeModel *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_func) (_peel_tree_column, _peel_cell, _peel_tree_model, _peel_iter);
      },
      &_peel_func_data, &_peel_destroy, peel::internals::is_const_invocable<TreeCellDataFunc, void, TreeViewColumn *, CellRenderer *, TreeModel *, TreeIter *>::value);
    gtk_tree_view_column_set_cell_data_func (_peel_this, _peel_cell_renderer, _peel_func, _peel_func_data, _peel_destroy);
  }

  void
  set_clickable (bool clickable) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_clickable = static_cast<gboolean> (clickable);
    gtk_tree_view_column_set_clickable (_peel_this, _peel_clickable);
  }

  void
  set_expand (bool expand) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    gtk_tree_view_column_set_expand (_peel_this, _peel_expand);
  }

  void
  set_fixed_width (int fixed_width) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gtk_tree_view_column_set_fixed_width (_peel_this, fixed_width);
  }

  void
  set_max_width (int max_width) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gtk_tree_view_column_set_max_width (_peel_this, max_width);
  }

  void
  set_min_width (int min_width) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gtk_tree_view_column_set_min_width (_peel_this, min_width);
  }

  void
  set_reorderable (bool reorderable) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_reorderable = static_cast<gboolean> (reorderable);
    gtk_tree_view_column_set_reorderable (_peel_this, _peel_reorderable);
  }

  void
  set_resizable (bool resizable) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_resizable = static_cast<gboolean> (resizable);
    gtk_tree_view_column_set_resizable (_peel_this, _peel_resizable);
  }

  void
  set_sizing (TreeView::ColumnSizing type) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkTreeViewColumnSizing _peel_type = static_cast<::GtkTreeViewColumnSizing> (type);
    gtk_tree_view_column_set_sizing (_peel_this, _peel_type);
  }

  void
  set_sort_column_id (int sort_column_id) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gtk_tree_view_column_set_sort_column_id (_peel_this, sort_column_id);
  }

  void
  set_sort_indicator (bool setting) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_tree_view_column_set_sort_indicator (_peel_this, _peel_setting);
  }

  void
  set_sort_order (SortType order) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkSortType _peel_order = static_cast<::GtkSortType> (order);
    gtk_tree_view_column_set_sort_order (_peel_this, _peel_order);
  }

  void
  set_spacing (int spacing) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gtk_tree_view_column_set_spacing (_peel_this, spacing);
  }

  peel_nonnull_args (2)
  void
  set_title (const char *title) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gtk_tree_view_column_set_title (_peel_this, title);
  }

  void
  set_visible (bool visible) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    gboolean _peel_visible = static_cast<gboolean> (visible);
    gtk_tree_view_column_set_visible (_peel_this, _peel_visible);
  }

  void
  set_widget (Widget *widget) noexcept
  {
    ::GtkTreeViewColumn *_peel_this = reinterpret_cast<::GtkTreeViewColumn *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_tree_view_column_set_widget (_peel_this, _peel_widget);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_clicked (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeViewColumn, void ()>::_peel_connect_by_name (this, "clicked", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_clicked (HandlerObject *object, void (HandlerObject::*handler_method) (TreeViewColumn *), bool after = false) noexcept
  {
    return Signal<TreeViewColumn, void ()>::_peel_connect_by_name (this, "clicked", object, handler_method, after);
  }

  static peel::Property<float>
  prop_alignment ()
  {
    return peel::Property<float> { "alignment" };
  }

  static peel::Property<CellArea>
  prop_cell_area ()
  {
    return peel::Property<CellArea> { "cell-area" };
  }

  static peel::Property<bool>
  prop_clickable ()
  {
    return peel::Property<bool> { "clickable" };
  }

  static peel::Property<bool>
  prop_expand ()
  {
    return peel::Property<bool> { "expand" };
  }

  static peel::Property<int>
  prop_fixed_width ()
  {
    return peel::Property<int> { "fixed-width" };
  }

  static peel::Property<int>
  prop_max_width ()
  {
    return peel::Property<int> { "max-width" };
  }

  static peel::Property<int>
  prop_min_width ()
  {
    return peel::Property<int> { "min-width" };
  }

  static peel::Property<bool>
  prop_reorderable ()
  {
    return peel::Property<bool> { "reorderable" };
  }

  static peel::Property<bool>
  prop_resizable ()
  {
    return peel::Property<bool> { "resizable" };
  }

  static peel::Property<TreeView::ColumnSizing>
  prop_sizing ()
  {
    return peel::Property<TreeView::ColumnSizing> { "sizing" };
  }

  static peel::Property<int>
  prop_sort_column_id ()
  {
    return peel::Property<int> { "sort-column-id" };
  }

  static peel::Property<bool>
  prop_sort_indicator ()
  {
    return peel::Property<bool> { "sort-indicator" };
  }

  static peel::Property<SortType>
  prop_sort_order ()
  {
    return peel::Property<SortType> { "sort-order" };
  }

  static peel::Property<int>
  prop_spacing ()
  {
    return peel::Property<int> { "spacing" };
  }

  static peel::Property<const char *>
  prop_title ()
  {
    return peel::Property<const char *> { "title" };
  }

  static peel::Property<bool>
  prop_visible ()
  {
    return peel::Property<bool> { "visible" };
  }

  static peel::Property<Widget>
  prop_widget ()
  {
    return peel::Property<Widget> { "widget" };
  }

  static peel::Property<int>
  prop_width ()
  {
    return peel::Property<int> { "width" };
  }

  static peel::Property<int>
  prop_x_offset ()
  {
    return peel::Property<int> { "x-offset" };
  }
}; /* class TreeViewColumn */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
