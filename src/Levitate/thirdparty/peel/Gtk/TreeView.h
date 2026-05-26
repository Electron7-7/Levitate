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
#include <peel/Gdk/Drag.h>
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* record */ ContentFormats;
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
class /* interface */ Paintable;
struct Rectangle;
} /* namespace Gdk */

namespace Gtk
{
class CellRenderer;
class /* interface */ Editable;
enum class MovementStep : std::underlying_type<::GtkMovementStep>::type;
class Tooltip;
struct TreeIter;
class /* interface */ TreeModel;
class /* record */ TreePath;
class TreeSelection;
class TreeView;
class TreeViewColumn;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeView> ()
{
  return gtk_tree_view_get_type ();
}


namespace Gtk
{
class TreeView : public Widget
/* implements Accessible, Buildable, Constraint::Target, Scrollable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TreeView () = delete;
  TreeView (const TreeView &) = delete;
  TreeView (TreeView &&) = delete;
  TreeView &
  operator = (const TreeView &) = delete;
  TreeView &
  operator = (TreeView &&) = delete;
protected:
  ~TreeView () = default;
public:
  enum class ColumnSizing : std::underlying_type<::GtkTreeViewColumnSizing>::type;
  enum class DropPosition : std::underlying_type<::GtkTreeViewDropPosition>::type;
  enum class GridLines : std::underlying_type<::GtkTreeViewGridLines>::type;

  static peel::FloatPtr<TreeView>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_tree_view_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<TreeView> (reinterpret_cast<TreeView *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<TreeView>
  create_with_model (TreeModel *model) noexcept
  {
    ::GtkTreeModel *_peel_model = reinterpret_cast<::GtkTreeModel *> (model);
    ::GtkWidget *_peel_return = gtk_tree_view_new_with_model (_peel_model);
    peel_assume (_peel_return);
    return peel::FloatPtr<TreeView> (reinterpret_cast<TreeView *> (_peel_return));
  }

  peel_nonnull_args (2)
  int
  append_column (TreeViewColumn *column) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewColumn *_peel_column = reinterpret_cast<::GtkTreeViewColumn *> (column);
    return gtk_tree_view_append_column (_peel_this, _peel_column);
  }

  void
  collapse_all () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_collapse_all (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  collapse_row (TreePath *path) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = gtk_tree_view_collapse_row (_peel_this, _peel_path);
    return !!_peel_return;
  }

  void
  columns_autosize () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_columns_autosize (_peel_this);
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (4, 5)
  void
  convert_bin_window_to_tree_coords (int bx, int by, int *tx, int *ty) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_convert_bin_window_to_tree_coords (_peel_this, bx, by, tx, ty);
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (4, 5)
  void
  convert_bin_window_to_widget_coords (int bx, int by, int *wx, int *wy) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_convert_bin_window_to_widget_coords (_peel_this, bx, by, wx, wy);
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (4, 5)
  void
  convert_tree_to_bin_window_coords (int tx, int ty, int *bx, int *by) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_convert_tree_to_bin_window_coords (_peel_this, tx, ty, bx, by);
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (4, 5)
  void
  convert_tree_to_widget_coords (int tx, int ty, int *wx, int *wy) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_convert_tree_to_widget_coords (_peel_this, tx, ty, wx, wy);
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (4, 5)
  void
  convert_widget_to_bin_window_coords (int wx, int wy, int *bx, int *by) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_convert_widget_to_bin_window_coords (_peel_this, wx, wy, bx, by);
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (4, 5)
  void
  convert_widget_to_tree_coords (int wx, int wy, int *tx, int *ty) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_convert_widget_to_tree_coords (_peel_this, wx, wy, tx, ty);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::RefPtr<Gdk::Paintable>
  create_row_drag_icon (TreePath *path) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GdkPaintable *_peel_return = gtk_tree_view_create_row_drag_icon (_peel_this, _peel_path);
    return peel::RefPtr<Gdk::Paintable>::adopt_ref (reinterpret_cast<Gdk::Paintable *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  enable_model_drag_dest (Gdk::ContentFormats *formats, Gdk::Drag::Action actions) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GdkContentFormats *_peel_formats = reinterpret_cast<::GdkContentFormats *> (formats);
    ::GdkDragAction _peel_actions = static_cast<::GdkDragAction> (actions);
    gtk_tree_view_enable_model_drag_dest (_peel_this, _peel_formats, _peel_actions);
  }

  peel_arg_in (3) peel_nonnull_args (3)
  void
  enable_model_drag_source (Gdk::ModifierType start_button_mask, Gdk::ContentFormats *formats, Gdk::Drag::Action actions) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GdkModifierType _peel_start_button_mask = static_cast<::GdkModifierType> (start_button_mask);
    ::GdkContentFormats *_peel_formats = reinterpret_cast<::GdkContentFormats *> (formats);
    ::GdkDragAction _peel_actions = static_cast<::GdkDragAction> (actions);
    gtk_tree_view_enable_model_drag_source (_peel_this, _peel_start_button_mask, _peel_formats, _peel_actions);
  }

  void
  expand_all () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_expand_all (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  expand_row (TreePath *path, bool open_all) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_open_all = static_cast<gboolean> (open_all);
    gboolean _peel_return = gtk_tree_view_expand_row (_peel_this, _peel_path, _peel_open_all);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  expand_to_path (TreePath *path) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gtk_tree_view_expand_to_path (_peel_this, _peel_path);
  }

  bool
  get_activate_on_single_click () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = gtk_tree_view_get_activate_on_single_click (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (4)
  void
  get_background_area (TreePath *path, TreeViewColumn *column, Gdk::Rectangle *rect) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeViewColumn *_peel_column = reinterpret_cast<::GtkTreeViewColumn *> (column);
    ::GdkRectangle *_peel_rect = reinterpret_cast<::GdkRectangle *> (rect);
    gtk_tree_view_get_background_area (_peel_this, _peel_path, _peel_column, _peel_rect);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (4)
  void
  get_cell_area (TreePath *path, TreeViewColumn *column, Gdk::Rectangle *rect) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeViewColumn *_peel_column = reinterpret_cast<::GtkTreeViewColumn *> (column);
    ::GdkRectangle *_peel_rect = reinterpret_cast<::GdkRectangle *> (rect);
    gtk_tree_view_get_cell_area (_peel_this, _peel_path, _peel_column, _peel_rect);
  }

  TreeViewColumn *
  get_column (int n) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewColumn *_peel_return = gtk_tree_view_get_column (_peel_this, n);
    return reinterpret_cast<TreeViewColumn *> (_peel_return);
  }

  GLib::List<TreeViewColumn *>
  get_columns () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    GList *_peel_return = gtk_tree_view_get_columns (_peel_this);
    return GLib::List<TreeViewColumn *>::adopt_list (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_cursor (peel::UniquePtr<TreePath> *path, TreeViewColumn **focus_column) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path;
    ::GtkTreeViewColumn **_peel_focus_column = reinterpret_cast<::GtkTreeViewColumn **> (focus_column);
    gtk_tree_view_get_cursor (_peel_this, path ? &_peel_path : nullptr, _peel_focus_column);
    if (path)
      *path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_path));
  }

  peel_arg_out (4) peel_arg_out (5)
  bool
  get_dest_row_at_pos (int drag_x, int drag_y, peel::UniquePtr<TreePath> *path, TreeView::DropPosition *pos) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path;
    ::GtkTreeViewDropPosition *_peel_pos = reinterpret_cast<::GtkTreeViewDropPosition *> (pos);
    gboolean _peel_return = gtk_tree_view_get_dest_row_at_pos (_peel_this, drag_x, drag_y, path ? &_peel_path : nullptr, _peel_pos);
    if (path)
      *path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_path));
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_drag_dest_row (peel::UniquePtr<TreePath> *path, TreeView::DropPosition *pos) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path;
    ::GtkTreeViewDropPosition *_peel_pos = reinterpret_cast<::GtkTreeViewDropPosition *> (pos);
    gtk_tree_view_get_drag_dest_row (_peel_this, path ? &_peel_path : nullptr, _peel_pos);
    if (path)
      *path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_path));
  }

  bool
  get_enable_search () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = gtk_tree_view_get_enable_search (_peel_this);
    return !!_peel_return;
  }

  bool
  get_enable_tree_lines () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = gtk_tree_view_get_enable_tree_lines (_peel_this);
    return !!_peel_return;
  }

  TreeViewColumn *
  get_expander_column () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewColumn *_peel_return = gtk_tree_view_get_expander_column (_peel_this);
    return reinterpret_cast<TreeViewColumn *> (_peel_return);
  }

  bool
  get_fixed_height_mode () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = gtk_tree_view_get_fixed_height_mode (_peel_this);
    return !!_peel_return;
  }

  TreeView::GridLines
  get_grid_lines () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewGridLines _peel_return = gtk_tree_view_get_grid_lines (_peel_this);
    return static_cast<TreeView::GridLines> (_peel_return);
  }

  bool
  get_headers_clickable () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = gtk_tree_view_get_headers_clickable (_peel_this);
    return !!_peel_return;
  }

  bool
  get_headers_visible () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = gtk_tree_view_get_headers_visible (_peel_this);
    return !!_peel_return;
  }

  bool
  get_hover_expand () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = gtk_tree_view_get_hover_expand (_peel_this);
    return !!_peel_return;
  }

  bool
  get_hover_selection () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = gtk_tree_view_get_hover_selection (_peel_this);
    return !!_peel_return;
  }

  int
  get_level_indentation () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    return gtk_tree_view_get_level_indentation (_peel_this);
  }

  TreeModel *
  get_model () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeModel *_peel_return = gtk_tree_view_get_model (_peel_this);
    return reinterpret_cast<TreeModel *> (_peel_return);
  }

  unsigned
  get_n_columns () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    return gtk_tree_view_get_n_columns (_peel_this);
  }

  peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_arg_out (7)
  bool
  get_path_at_pos (int x, int y, peel::UniquePtr<TreePath> *path, TreeViewColumn **column, int *cell_x, int *cell_y) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path;
    ::GtkTreeViewColumn **_peel_column = reinterpret_cast<::GtkTreeViewColumn **> (column);
    gboolean _peel_return = gtk_tree_view_get_path_at_pos (_peel_this, x, y, path ? &_peel_path : nullptr, _peel_column, cell_x, cell_y);
    if (path)
      *path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_path));
    return !!_peel_return;
  }

  bool
  get_reorderable () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = gtk_tree_view_get_reorderable (_peel_this);
    return !!_peel_return;
  }

  ::GtkTreeViewRowSeparatorFunc
  get_row_separator_func () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    return gtk_tree_view_get_row_separator_func (_peel_this);
  }

  bool
  get_rubber_banding () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = gtk_tree_view_get_rubber_banding (_peel_this);
    return !!_peel_return;
  }

  int
  get_search_column () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    return gtk_tree_view_get_search_column (_peel_this);
  }

  Editable *
  get_search_entry () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkEditable *_peel_return = gtk_tree_view_get_search_entry (_peel_this);
    return reinterpret_cast<Editable *> (_peel_return);
  }

  ::GtkTreeViewSearchEqualFunc
  get_search_equal_func () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    return gtk_tree_view_get_search_equal_func (_peel_this);
  }

  peel_returns_nonnull
  TreeSelection *
  get_selection () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeSelection *_peel_return = gtk_tree_view_get_selection (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TreeSelection *> (_peel_return);
  }

  bool
  get_show_expanders () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = gtk_tree_view_get_show_expanders (_peel_this);
    return !!_peel_return;
  }

  int
  get_tooltip_column () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    return gtk_tree_view_get_tooltip_column (_peel_this);
  }

  peel_arg_out (5) peel_arg_out (6) peel_arg_out (7)
  bool
  get_tooltip_context (int x, int y, bool keyboard_tip, TreeModel **model, peel::UniquePtr<TreePath> *path, TreeIter *iter) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_keyboard_tip = static_cast<gboolean> (keyboard_tip);
    ::GtkTreeModel **_peel_model = reinterpret_cast<::GtkTreeModel **> (model);
    ::GtkTreePath *_peel_path;
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_tree_view_get_tooltip_context (_peel_this, x, y, _peel_keyboard_tip, _peel_model, path ? &_peel_path : nullptr, _peel_iter);
    if (path)
      *path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_path));
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  get_visible_range (peel::UniquePtr<TreePath> *start_path, peel::UniquePtr<TreePath> *end_path) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_start_path;
    ::GtkTreePath *_peel_end_path;
    gboolean _peel_return = gtk_tree_view_get_visible_range (_peel_this, start_path ? &_peel_start_path : nullptr, end_path ? &_peel_end_path : nullptr);
    if (start_path)
      *start_path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_start_path));
    if (end_path)
      *end_path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_end_path));
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_visible_rect (Gdk::Rectangle *visible_rect) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GdkRectangle *_peel_visible_rect = reinterpret_cast<::GdkRectangle *> (visible_rect);
    gtk_tree_view_get_visible_rect (_peel_this, _peel_visible_rect);
  }

  int
  insert_column (peel::FloatPtr<TreeViewColumn> column, int position) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewColumn *_peel_column = reinterpret_cast<::GtkTreeViewColumn *> (std::move (column).release_floating_ptr ());
    return gtk_tree_view_insert_column (_peel_this, _peel_column, position);
  }

  /* Unsupported for now: insert_column_with_attributes: varargs */
  static void
  insert_column_with_attributes (UnsupportedForNowToken);

  template<typename TreeCellDataFunc>
  peel_nonnull_args (3, 4)
  int
  insert_column_with_data_func (int position, const char *title, CellRenderer *cell, TreeCellDataFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GDestroyNotify _peel_dnotify;
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    ::GtkTreeCellDataFunc _peel_func = peel::internals::CallbackHelper<void, ::GtkTreeViewColumn *, ::GtkCellRenderer *, ::GtkTreeModel *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<TreeCellDataFunc &&> (func),
      [] (::GtkTreeViewColumn *tree_column, ::GtkCellRenderer *cell, ::GtkTreeModel *tree_model, ::GtkTreeIter *iter, gpointer data) -> void
      {
        TreeCellDataFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TreeCellDataFunc>::type *> (data);
        TreeViewColumn *_peel_tree_column = reinterpret_cast<TreeViewColumn *> (tree_column);
        CellRenderer *_peel_cell = reinterpret_cast<CellRenderer *> (cell);
        TreeModel *_peel_tree_model = reinterpret_cast<TreeModel *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        _peel_captured_func (_peel_tree_column, _peel_cell, _peel_tree_model, _peel_iter);
      },
      &_peel_data, &_peel_dnotify, peel::internals::is_const_invocable<TreeCellDataFunc, void, TreeViewColumn *, CellRenderer *, TreeModel *, TreeIter *>::value);
    return gtk_tree_view_insert_column_with_data_func (_peel_this, position, title, _peel_cell, _peel_func, _peel_data, _peel_dnotify);
  }

  peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_arg_out (7)
  bool
  is_blank_at_pos (int x, int y, peel::UniquePtr<TreePath> *path, TreeViewColumn **column, int *cell_x, int *cell_y) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path;
    ::GtkTreeViewColumn **_peel_column = reinterpret_cast<::GtkTreeViewColumn **> (column);
    gboolean _peel_return = gtk_tree_view_is_blank_at_pos (_peel_this, x, y, path ? &_peel_path : nullptr, _peel_column, cell_x, cell_y);
    if (path)
      *path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_path));
    return !!_peel_return;
  }

  bool
  is_rubber_banding_active () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = gtk_tree_view_is_rubber_banding_active (_peel_this);
    return !!_peel_return;
  }

  template<typename TreeViewMappingFunc>
  void
  map_expanded_rows (TreeViewMappingFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewMappingFunc _peel_func = peel::internals::CallbackHelper<void, ::GtkTreeView *, ::GtkTreePath *>::wrap_call_callback (
      static_cast<TreeViewMappingFunc &&> (func),
      [] (::GtkTreeView *tree_view, ::GtkTreePath *path, gpointer user_data) -> void
      {
        TreeViewMappingFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TreeViewMappingFunc>::type *> (user_data);
        TreeView *_peel_tree_view = reinterpret_cast<TreeView *> (tree_view);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        _peel_captured_func (_peel_tree_view, _peel_path);
      },
      &_peel_data, peel::internals::is_const_invocable<TreeViewMappingFunc, void, TreeView *, TreePath *>::value);
    gtk_tree_view_map_expanded_rows (_peel_this, _peel_func, _peel_data);
  }

  peel_nonnull_args (2)
  void
  move_column_after (TreeViewColumn *column, TreeViewColumn *base_column) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewColumn *_peel_column = reinterpret_cast<::GtkTreeViewColumn *> (column);
    ::GtkTreeViewColumn *_peel_base_column = reinterpret_cast<::GtkTreeViewColumn *> (base_column);
    gtk_tree_view_move_column_after (_peel_this, _peel_column, _peel_base_column);
  }

  peel_nonnull_args (2)
  int
  remove_column (TreeViewColumn *column) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewColumn *_peel_column = reinterpret_cast<::GtkTreeViewColumn *> (column);
    return gtk_tree_view_remove_column (_peel_this, _peel_column);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  row_activated (TreePath *path, TreeViewColumn *column) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeViewColumn *_peel_column = reinterpret_cast<::GtkTreeViewColumn *> (column);
    gtk_tree_view_row_activated (_peel_this, _peel_path, _peel_column);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  row_expanded (TreePath *path) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = gtk_tree_view_row_expanded (_peel_this, _peel_path);
    return !!_peel_return;
  }

  peel_arg_in (2)
  void
  scroll_to_cell (TreePath *path, TreeViewColumn *column, bool use_align, float row_align, float col_align) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeViewColumn *_peel_column = reinterpret_cast<::GtkTreeViewColumn *> (column);
    gboolean _peel_use_align = static_cast<gboolean> (use_align);
    gtk_tree_view_scroll_to_cell (_peel_this, _peel_path, _peel_column, _peel_use_align, row_align, col_align);
  }

  void
  scroll_to_point (int tree_x, int tree_y) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_scroll_to_point (_peel_this, tree_x, tree_y);
  }

  void
  set_activate_on_single_click (bool single) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_single = static_cast<gboolean> (single);
    gtk_tree_view_set_activate_on_single_click (_peel_this, _peel_single);
  }

  template<typename TreeViewColumnDropFunc>
  void
  set_column_drag_function (TreeViewColumnDropFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewColumnDropFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GtkTreeView *, ::GtkTreeViewColumn *, ::GtkTreeViewColumn *, ::GtkTreeViewColumn *>::wrap_notified_callback (
      static_cast<TreeViewColumnDropFunc &&> (func),
      [] (::GtkTreeView *tree_view, ::GtkTreeViewColumn *column, ::GtkTreeViewColumn *prev_column, ::GtkTreeViewColumn *next_column, gpointer data) -> gboolean
      {
        TreeViewColumnDropFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TreeViewColumnDropFunc>::type *> (data);
        TreeView *_peel_tree_view = reinterpret_cast<TreeView *> (tree_view);
        TreeViewColumn *_peel_column = reinterpret_cast<TreeViewColumn *> (column);
        TreeViewColumn *_peel_prev_column = reinterpret_cast<TreeViewColumn *> (prev_column);
        TreeViewColumn *_peel_next_column = reinterpret_cast<TreeViewColumn *> (next_column);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_func) (_peel_tree_view, _peel_column, _peel_prev_column, _peel_next_column);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<TreeViewColumnDropFunc, void, TreeView *, TreeViewColumn *, TreeViewColumn *, TreeViewColumn *>::value);
    gtk_tree_view_set_column_drag_function (_peel_this, _peel_func, _peel_user_data, _peel_destroy);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_cursor (TreePath *path, TreeViewColumn *focus_column, bool start_editing) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeViewColumn *_peel_focus_column = reinterpret_cast<::GtkTreeViewColumn *> (focus_column);
    gboolean _peel_start_editing = static_cast<gboolean> (start_editing);
    gtk_tree_view_set_cursor (_peel_this, _peel_path, _peel_focus_column, _peel_start_editing);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_cursor_on_cell (TreePath *path, TreeViewColumn *focus_column, CellRenderer *focus_cell, bool start_editing) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeViewColumn *_peel_focus_column = reinterpret_cast<::GtkTreeViewColumn *> (focus_column);
    ::GtkCellRenderer *_peel_focus_cell = reinterpret_cast<::GtkCellRenderer *> (focus_cell);
    gboolean _peel_start_editing = static_cast<gboolean> (start_editing);
    gtk_tree_view_set_cursor_on_cell (_peel_this, _peel_path, _peel_focus_column, _peel_focus_cell, _peel_start_editing);
  }

  peel_arg_in (2)
  void
  set_drag_dest_row (TreePath *path, TreeView::DropPosition pos) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeViewDropPosition _peel_pos = static_cast<::GtkTreeViewDropPosition> (pos);
    gtk_tree_view_set_drag_dest_row (_peel_this, _peel_path, _peel_pos);
  }

  void
  set_enable_search (bool enable_search) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_enable_search = static_cast<gboolean> (enable_search);
    gtk_tree_view_set_enable_search (_peel_this, _peel_enable_search);
  }

  void
  set_enable_tree_lines (bool enabled) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_enabled = static_cast<gboolean> (enabled);
    gtk_tree_view_set_enable_tree_lines (_peel_this, _peel_enabled);
  }

  void
  set_expander_column (TreeViewColumn *column) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewColumn *_peel_column = reinterpret_cast<::GtkTreeViewColumn *> (column);
    gtk_tree_view_set_expander_column (_peel_this, _peel_column);
  }

  void
  set_fixed_height_mode (bool enable) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_enable = static_cast<gboolean> (enable);
    gtk_tree_view_set_fixed_height_mode (_peel_this, _peel_enable);
  }

  void
  set_grid_lines (TreeView::GridLines grid_lines) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewGridLines _peel_grid_lines = static_cast<::GtkTreeViewGridLines> (grid_lines);
    gtk_tree_view_set_grid_lines (_peel_this, _peel_grid_lines);
  }

  void
  set_headers_clickable (bool setting) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_tree_view_set_headers_clickable (_peel_this, _peel_setting);
  }

  void
  set_headers_visible (bool headers_visible) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_headers_visible = static_cast<gboolean> (headers_visible);
    gtk_tree_view_set_headers_visible (_peel_this, _peel_headers_visible);
  }

  void
  set_hover_expand (bool expand) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    gtk_tree_view_set_hover_expand (_peel_this, _peel_expand);
  }

  void
  set_hover_selection (bool hover) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_hover = static_cast<gboolean> (hover);
    gtk_tree_view_set_hover_selection (_peel_this, _peel_hover);
  }

  void
  set_level_indentation (int indentation) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_set_level_indentation (_peel_this, indentation);
  }

  void
  set_model (TreeModel *model) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeModel *_peel_model = reinterpret_cast<::GtkTreeModel *> (model);
    gtk_tree_view_set_model (_peel_this, _peel_model);
  }

  void
  set_reorderable (bool reorderable) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_reorderable = static_cast<gboolean> (reorderable);
    gtk_tree_view_set_reorderable (_peel_this, _peel_reorderable);
  }

  template<typename TreeViewRowSeparatorFunc>
  void
  set_row_separator_func (TreeViewRowSeparatorFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewRowSeparatorFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GtkTreeModel *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<TreeViewRowSeparatorFunc &&> (func),
      [] (::GtkTreeModel *model, ::GtkTreeIter *iter, gpointer data) -> gboolean
      {
        TreeViewRowSeparatorFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TreeViewRowSeparatorFunc>::type *> (data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_func) (_peel_model, _peel_iter);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, &_peel_destroy, peel::internals::is_const_invocable<TreeViewRowSeparatorFunc, void, TreeModel *, TreeIter *>::value);
    gtk_tree_view_set_row_separator_func (_peel_this, _peel_func, _peel_data, _peel_destroy);
  }

  void
  set_rubber_banding (bool enable) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_enable = static_cast<gboolean> (enable);
    gtk_tree_view_set_rubber_banding (_peel_this, _peel_enable);
  }

  void
  set_search_column (int column) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_set_search_column (_peel_this, column);
  }

  void
  set_search_entry (Editable *entry) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkEditable *_peel_entry = reinterpret_cast<::GtkEditable *> (entry);
    gtk_tree_view_set_search_entry (_peel_this, _peel_entry);
  }

  template<typename TreeViewSearchEqualFunc>
  void
  set_search_equal_func (TreeViewSearchEqualFunc &&search_equal_func) noexcept
  {
    gpointer _peel_search_user_data;
    ::GDestroyNotify _peel_search_destroy;
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeViewSearchEqualFunc _peel_search_equal_func = peel::internals::CallbackHelper<gboolean, ::GtkTreeModel *, int, const char *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<TreeViewSearchEqualFunc &&> (search_equal_func),
      [] (::GtkTreeModel *model, int column, const char *key, ::GtkTreeIter *iter, gpointer search_data) -> gboolean
      {
        TreeViewSearchEqualFunc &_peel_captured_search_equal_func = *reinterpret_cast<typename std::remove_reference<TreeViewSearchEqualFunc>::type *> (search_data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        bool _peel_return = _peel_captured_search_equal_func (_peel_model, column, key, _peel_iter);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_search_user_data, &_peel_search_destroy, peel::internals::is_const_invocable<TreeViewSearchEqualFunc, void, TreeModel *, int, const char *, TreeIter *>::value);
    gtk_tree_view_set_search_equal_func (_peel_this, _peel_search_equal_func, _peel_search_user_data, _peel_search_destroy);
  }

  void
  set_show_expanders (bool enabled) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_enabled = static_cast<gboolean> (enabled);
    gtk_tree_view_set_show_expanders (_peel_this, _peel_enabled);
  }

  peel_arg_in (3) peel_nonnull_args (2)
  void
  set_tooltip_cell (Tooltip *tooltip, TreePath *path, TreeViewColumn *column, CellRenderer *cell) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTooltip *_peel_tooltip = reinterpret_cast<::GtkTooltip *> (tooltip);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeViewColumn *_peel_column = reinterpret_cast<::GtkTreeViewColumn *> (column);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gtk_tree_view_set_tooltip_cell (_peel_this, _peel_tooltip, _peel_path, _peel_column, _peel_cell);
  }

  void
  set_tooltip_column (int column) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_set_tooltip_column (_peel_this, column);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  set_tooltip_row (Tooltip *tooltip, TreePath *path) noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTooltip *_peel_tooltip = reinterpret_cast<::GtkTooltip *> (tooltip);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gtk_tree_view_set_tooltip_row (_peel_this, _peel_tooltip, _peel_path);
  }

  void
  unset_rows_drag_dest () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_unset_rows_drag_dest (_peel_this);
  }

  void
  unset_rows_drag_source () noexcept
  {
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gtk_tree_view_unset_rows_drag_source (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_columns_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, void ()>::_peel_connect_by_name (this, "columns-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_columns_changed (HandlerObject *object, void (HandlerObject::*handler_method) (TreeView *), bool after = false) noexcept
  {
    return Signal<TreeView, void ()>::_peel_connect_by_name (this, "columns-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_cursor_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, void ()>::_peel_connect_by_name (this, "cursor-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_cursor_changed (HandlerObject *object, void (HandlerObject::*handler_method) (TreeView *), bool after = false) noexcept
  {
    return Signal<TreeView, void ()>::_peel_connect_by_name (this, "cursor-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_expand_collapse_cursor_row (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, bool (bool, bool, bool)>::_peel_connect_by_name (this, "expand-collapse-cursor-row", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_expand_collapse_cursor_row (HandlerObject *object, bool (HandlerObject::*handler_method) (TreeView *, bool, bool, bool), bool after = false) noexcept
  {
    return Signal<TreeView, bool (bool, bool, bool)>::_peel_connect_by_name (this, "expand-collapse-cursor-row", object, handler_method, after);
  }

  bool
  emit_expand_collapse_cursor_row (bool object, bool p0, bool p1) noexcept
  {
    return Signal<TreeView, bool (bool, bool, bool)>::_peel_emit_by_name (this, "expand-collapse-cursor-row", object, p0, p1);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_cursor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, bool (MovementStep, int, bool, bool)>::_peel_connect_by_name (this, "move-cursor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_cursor (HandlerObject *object, bool (HandlerObject::*handler_method) (TreeView *, MovementStep, int, bool, bool), bool after = false) noexcept
  {
    return Signal<TreeView, bool (MovementStep, int, bool, bool)>::_peel_connect_by_name (this, "move-cursor", object, handler_method, after);
  }

  bool
  emit_move_cursor (MovementStep step, int direction, bool extend, bool modify) noexcept
  {
    return Signal<TreeView, bool (MovementStep, int, bool, bool)>::_peel_emit_by_name (this, "move-cursor", step, direction, extend, modify);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_row_activated (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, void (const TreePath *, TreeViewColumn *)>::_peel_connect_by_name (this, "row-activated", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_row_activated (HandlerObject *object, void (HandlerObject::*handler_method) (TreeView *, const TreePath *, TreeViewColumn *), bool after = false) noexcept
  {
    return Signal<TreeView, void (const TreePath *, TreeViewColumn *)>::_peel_connect_by_name (this, "row-activated", object, handler_method, after);
  }

  void
  emit_row_activated (const TreePath *path, TreeViewColumn *column) noexcept
  {
    return Signal<TreeView, void (const TreePath *, TreeViewColumn *)>::_peel_emit_by_name (this, "row-activated", path, column);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_row_collapsed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, void (const TreeIter *, const TreePath *)>::_peel_connect_by_name (this, "row-collapsed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_row_collapsed (HandlerObject *object, void (HandlerObject::*handler_method) (TreeView *, const TreeIter *, const TreePath *), bool after = false) noexcept
  {
    return Signal<TreeView, void (const TreeIter *, const TreePath *)>::_peel_connect_by_name (this, "row-collapsed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_row_expanded (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, void (const TreeIter *, const TreePath *)>::_peel_connect_by_name (this, "row-expanded", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_row_expanded (HandlerObject *object, void (HandlerObject::*handler_method) (TreeView *, const TreeIter *, const TreePath *), bool after = false) noexcept
  {
    return Signal<TreeView, void (const TreeIter *, const TreePath *)>::_peel_connect_by_name (this, "row-expanded", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_select_all (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, bool ()>::_peel_connect_by_name (this, "select-all", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_select_all (HandlerObject *object, bool (HandlerObject::*handler_method) (TreeView *), bool after = false) noexcept
  {
    return Signal<TreeView, bool ()>::_peel_connect_by_name (this, "select-all", object, handler_method, after);
  }

  bool
  emit_select_all () noexcept
  {
    return Signal<TreeView, bool ()>::_peel_emit_by_name (this, "select-all");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_select_cursor_parent (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, bool ()>::_peel_connect_by_name (this, "select-cursor-parent", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_select_cursor_parent (HandlerObject *object, bool (HandlerObject::*handler_method) (TreeView *), bool after = false) noexcept
  {
    return Signal<TreeView, bool ()>::_peel_connect_by_name (this, "select-cursor-parent", object, handler_method, after);
  }

  bool
  emit_select_cursor_parent () noexcept
  {
    return Signal<TreeView, bool ()>::_peel_emit_by_name (this, "select-cursor-parent");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_select_cursor_row (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, bool (bool)>::_peel_connect_by_name (this, "select-cursor-row", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_select_cursor_row (HandlerObject *object, bool (HandlerObject::*handler_method) (TreeView *, bool), bool after = false) noexcept
  {
    return Signal<TreeView, bool (bool)>::_peel_connect_by_name (this, "select-cursor-row", object, handler_method, after);
  }

  bool
  emit_select_cursor_row (bool object) noexcept
  {
    return Signal<TreeView, bool (bool)>::_peel_emit_by_name (this, "select-cursor-row", object);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_start_interactive_search (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, bool ()>::_peel_connect_by_name (this, "start-interactive-search", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_start_interactive_search (HandlerObject *object, bool (HandlerObject::*handler_method) (TreeView *), bool after = false) noexcept
  {
    return Signal<TreeView, bool ()>::_peel_connect_by_name (this, "start-interactive-search", object, handler_method, after);
  }

  bool
  emit_start_interactive_search () noexcept
  {
    return Signal<TreeView, bool ()>::_peel_emit_by_name (this, "start-interactive-search");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_test_collapse_row (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, bool (const TreeIter *, const TreePath *)>::_peel_connect_by_name (this, "test-collapse-row", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_test_collapse_row (HandlerObject *object, bool (HandlerObject::*handler_method) (TreeView *, const TreeIter *, const TreePath *), bool after = false) noexcept
  {
    return Signal<TreeView, bool (const TreeIter *, const TreePath *)>::_peel_connect_by_name (this, "test-collapse-row", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_test_expand_row (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, bool (const TreeIter *, const TreePath *)>::_peel_connect_by_name (this, "test-expand-row", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_test_expand_row (HandlerObject *object, bool (HandlerObject::*handler_method) (TreeView *, const TreeIter *, const TreePath *), bool after = false) noexcept
  {
    return Signal<TreeView, bool (const TreeIter *, const TreePath *)>::_peel_connect_by_name (this, "test-expand-row", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_toggle_cursor_row (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, bool ()>::_peel_connect_by_name (this, "toggle-cursor-row", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_toggle_cursor_row (HandlerObject *object, bool (HandlerObject::*handler_method) (TreeView *), bool after = false) noexcept
  {
    return Signal<TreeView, bool ()>::_peel_connect_by_name (this, "toggle-cursor-row", object, handler_method, after);
  }

  bool
  emit_toggle_cursor_row () noexcept
  {
    return Signal<TreeView, bool ()>::_peel_emit_by_name (this, "toggle-cursor-row");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_unselect_all (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TreeView, bool ()>::_peel_connect_by_name (this, "unselect-all", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_unselect_all (HandlerObject *object, bool (HandlerObject::*handler_method) (TreeView *), bool after = false) noexcept
  {
    return Signal<TreeView, bool ()>::_peel_connect_by_name (this, "unselect-all", object, handler_method, after);
  }

  bool
  emit_unselect_all () noexcept
  {
    return Signal<TreeView, bool ()>::_peel_emit_by_name (this, "unselect-all");
  }

  static peel::Property<bool>
  prop_activate_on_single_click ()
  {
    return peel::Property<bool> { "activate-on-single-click" };
  }

  static peel::Property<TreeView::GridLines>
  prop_enable_grid_lines ()
  {
    return peel::Property<TreeView::GridLines> { "enable-grid-lines" };
  }

  static peel::Property<bool>
  prop_enable_search ()
  {
    return peel::Property<bool> { "enable-search" };
  }

  static peel::Property<bool>
  prop_enable_tree_lines ()
  {
    return peel::Property<bool> { "enable-tree-lines" };
  }

  static peel::Property<TreeViewColumn>
  prop_expander_column ()
  {
    return peel::Property<TreeViewColumn> { "expander-column" };
  }

  static peel::Property<bool>
  prop_fixed_height_mode ()
  {
    return peel::Property<bool> { "fixed-height-mode" };
  }

  static peel::Property<bool>
  prop_headers_clickable ()
  {
    return peel::Property<bool> { "headers-clickable" };
  }

  static peel::Property<bool>
  prop_headers_visible ()
  {
    return peel::Property<bool> { "headers-visible" };
  }

  static peel::Property<bool>
  prop_hover_expand ()
  {
    return peel::Property<bool> { "hover-expand" };
  }

  static peel::Property<bool>
  prop_hover_selection ()
  {
    return peel::Property<bool> { "hover-selection" };
  }

  static peel::Property<int>
  prop_level_indentation ()
  {
    return peel::Property<int> { "level-indentation" };
  }

  static peel::Property<TreeModel>
  prop_model ()
  {
    return peel::Property<TreeModel> { "model" };
  }

  static peel::Property<bool>
  prop_reorderable ()
  {
    return peel::Property<bool> { "reorderable" };
  }

  static peel::Property<bool>
  prop_rubber_banding ()
  {
    return peel::Property<bool> { "rubber-banding" };
  }

  static peel::Property<int>
  prop_search_column ()
  {
    return peel::Property<int> { "search-column" };
  }

  static peel::Property<bool>
  prop_show_expanders ()
  {
    return peel::Property<bool> { "show-expanders" };
  }

  static peel::Property<int>
  prop_tooltip_column ()
  {
    return peel::Property<int> { "tooltip-column" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TreeView> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_columns_changed () noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    _peel_class->columns_changed (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_cursor_changed () noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    _peel_class->cursor_changed (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_expand_collapse_cursor_row (bool logical, bool expand, bool open_all) noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_logical = static_cast<gboolean> (logical);
    gboolean _peel_expand = static_cast<gboolean> (expand);
    gboolean _peel_open_all = static_cast<gboolean> (open_all);
    gboolean _peel_return = _peel_class->expand_collapse_cursor_row (_peel_this, _peel_logical, _peel_expand, _peel_open_all);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_move_cursor (MovementStep step, int count, bool extend, bool modify) noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkMovementStep _peel_step = static_cast<::GtkMovementStep> (step);
    gboolean _peel_extend = static_cast<gboolean> (extend);
    gboolean _peel_modify = static_cast<gboolean> (modify);
    gboolean _peel_return = _peel_class->move_cursor (_peel_this, _peel_step, count, _peel_extend, _peel_modify);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_row_activated (TreePath *path, TreeViewColumn *column) noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkTreeViewColumn *_peel_column = reinterpret_cast<::GtkTreeViewColumn *> (column);
    _peel_class->row_activated (_peel_this, _peel_path, _peel_column);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_row_collapsed (TreeIter *iter, TreePath *path) noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    _peel_class->row_collapsed (_peel_this, _peel_iter, _peel_path);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_row_expanded (TreeIter *iter, TreePath *path) noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    _peel_class->row_expanded (_peel_this, _peel_iter, _peel_path);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_select_all () noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = _peel_class->select_all (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_select_cursor_parent () noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = _peel_class->select_cursor_parent (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_select_cursor_row (bool start_editing) noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_start_editing = static_cast<gboolean> (start_editing);
    gboolean _peel_return = _peel_class->select_cursor_row (_peel_this, _peel_start_editing);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_start_interactive_search () noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = _peel_class->start_interactive_search (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_test_collapse_row (TreeIter *iter, TreePath *path) noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = _peel_class->test_collapse_row (_peel_this, _peel_iter, _peel_path);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_test_expand_row (TreeIter *iter, TreePath *path) noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = _peel_class->test_expand_row (_peel_this, _peel_iter, _peel_path);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_toggle_cursor_row () noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = _peel_class->toggle_cursor_row (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_unselect_all () noexcept
  {
    ::GtkTreeViewClass *_peel_class = reinterpret_cast<::GtkTreeViewClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTreeView *_peel_this = reinterpret_cast<::GtkTreeView *> (this);
    gboolean _peel_return = _peel_class->unselect_all (_peel_this);
    return !!_peel_return;
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTreeViewClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_columns_changed ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->columns_changed = +[] (::GtkTreeView *tree_view) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        _peel_this->DerivedClass::vfunc_columns_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_cursor_changed ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->cursor_changed = +[] (::GtkTreeView *tree_view) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        _peel_this->DerivedClass::vfunc_cursor_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_expand_collapse_cursor_row ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->expand_collapse_cursor_row = +[] (::GtkTreeView *tree_view, gboolean logical, gboolean expand, gboolean open_all) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        bool _peel_logical = !!logical;
        bool _peel_expand = !!expand;
        bool _peel_open_all = !!open_all;
        bool _peel_return = _peel_this->DerivedClass::vfunc_expand_collapse_cursor_row (_peel_logical, _peel_expand, _peel_open_all);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_move_cursor ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->move_cursor = +[] (::GtkTreeView *tree_view, ::GtkMovementStep step, int count, gboolean extend, gboolean modify) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        MovementStep _peel_step = static_cast<MovementStep> (step);
        bool _peel_extend = !!extend;
        bool _peel_modify = !!modify;
        bool _peel_return = _peel_this->DerivedClass::vfunc_move_cursor (_peel_step, count, _peel_extend, _peel_modify);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_row_activated ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->row_activated = +[] (::GtkTreeView *tree_view, ::GtkTreePath *path, ::GtkTreeViewColumn *column) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        TreeViewColumn *_peel_column = reinterpret_cast<TreeViewColumn *> (column);
        _peel_this->DerivedClass::vfunc_row_activated (_peel_path, _peel_column);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_row_collapsed ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->row_collapsed = +[] (::GtkTreeView *tree_view, ::GtkTreeIter *iter, ::GtkTreePath *path) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        _peel_this->DerivedClass::vfunc_row_collapsed (_peel_iter, _peel_path);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_row_expanded ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->row_expanded = +[] (::GtkTreeView *tree_view, ::GtkTreeIter *iter, ::GtkTreePath *path) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        _peel_this->DerivedClass::vfunc_row_expanded (_peel_iter, _peel_path);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_select_all ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->select_all = +[] (::GtkTreeView *tree_view) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        bool _peel_return = _peel_this->DerivedClass::vfunc_select_all ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_select_cursor_parent ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->select_cursor_parent = +[] (::GtkTreeView *tree_view) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        bool _peel_return = _peel_this->DerivedClass::vfunc_select_cursor_parent ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_select_cursor_row ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->select_cursor_row = +[] (::GtkTreeView *tree_view, gboolean start_editing) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        bool _peel_start_editing = !!start_editing;
        bool _peel_return = _peel_this->DerivedClass::vfunc_select_cursor_row (_peel_start_editing);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_start_interactive_search ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->start_interactive_search = +[] (::GtkTreeView *tree_view) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        bool _peel_return = _peel_this->DerivedClass::vfunc_start_interactive_search ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_test_collapse_row ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->test_collapse_row = +[] (::GtkTreeView *tree_view, ::GtkTreeIter *iter, ::GtkTreePath *path) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        bool _peel_return = _peel_this->DerivedClass::vfunc_test_collapse_row (_peel_iter, _peel_path);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_test_expand_row ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->test_expand_row = +[] (::GtkTreeView *tree_view, ::GtkTreeIter *iter, ::GtkTreePath *path) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        bool _peel_return = _peel_this->DerivedClass::vfunc_test_expand_row (_peel_iter, _peel_path);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_toggle_cursor_row ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->toggle_cursor_row = +[] (::GtkTreeView *tree_view) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        bool _peel_return = _peel_this->DerivedClass::vfunc_toggle_cursor_row ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_unselect_all ()
    {
      ::GtkTreeViewClass *klass = reinterpret_cast<::GtkTreeViewClass *> (this);
      klass->unselect_all = +[] (::GtkTreeView *tree_view) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (tree_view);
        bool _peel_return = _peel_this->DerivedClass::vfunc_unselect_all ();
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkTreeViewClass),
                 "TreeView::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTreeViewClass),
                 "TreeView::Class align mismatch");
}; /* class TreeView */

static_assert (sizeof (TreeView) == sizeof (::GtkTreeView),
               "TreeView size mismatch");
static_assert (alignof (TreeView) == alignof (::GtkTreeView),
               "TreeView align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/Paintable.h>
#include <peel/Gtk/TreePath.h>
#include <peel/Gtk/TreeViewColumn.h>
