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
class CellArea;
class CellRenderer;
class IconView;
enum class MovementStep : std::underlying_type<::GtkMovementStep>::type;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
enum class SelectionMode : std::underlying_type<::GtkSelectionMode>::type;
class Tooltip;
struct TreeIter;
class /* interface */ TreeModel;
class /* record */ TreePath;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::IconView> ()
{
  return gtk_icon_view_get_type ();
}


namespace Gtk
{
class IconView : public Widget
/* non-derivable */
/* implements Accessible, Buildable, CellLayout, Constraint::Target, Scrollable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  IconView () = delete;
  IconView (const IconView &) = delete;
  IconView (IconView &&) = delete;
  IconView &
  operator = (const IconView &) = delete;
  IconView &
  operator = (IconView &&) = delete;
  ~IconView () = delete;
public:
  enum class DropPosition : std::underlying_type<::GtkIconViewDropPosition>::type;

  static peel::FloatPtr<IconView>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_icon_view_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<IconView> (reinterpret_cast<IconView *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<IconView>
  create_with_area (CellArea *area) noexcept
  {
    ::GtkCellArea *_peel_area = reinterpret_cast<::GtkCellArea *> (area);
    ::GtkWidget *_peel_return = gtk_icon_view_new_with_area (_peel_area);
    peel_assume (_peel_return);
    return peel::FloatPtr<IconView> (reinterpret_cast<IconView *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<IconView>
  create_with_model (TreeModel *model) noexcept
  {
    ::GtkTreeModel *_peel_model = reinterpret_cast<::GtkTreeModel *> (model);
    ::GtkWidget *_peel_return = gtk_icon_view_new_with_model (_peel_model);
    peel_assume (_peel_return);
    return peel::FloatPtr<IconView> (reinterpret_cast<IconView *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::RefPtr<Gdk::Paintable>
  create_drag_icon (TreePath *path) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GdkPaintable *_peel_return = gtk_icon_view_create_drag_icon (_peel_this, _peel_path);
    return peel::RefPtr<Gdk::Paintable>::adopt_ref (reinterpret_cast<Gdk::Paintable *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  enable_model_drag_dest (Gdk::ContentFormats *formats, Gdk::Drag::Action actions) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GdkContentFormats *_peel_formats = reinterpret_cast<::GdkContentFormats *> (formats);
    ::GdkDragAction _peel_actions = static_cast<::GdkDragAction> (actions);
    gtk_icon_view_enable_model_drag_dest (_peel_this, _peel_formats, _peel_actions);
  }

  peel_arg_in (3) peel_nonnull_args (3)
  void
  enable_model_drag_source (Gdk::ModifierType start_button_mask, Gdk::ContentFormats *formats, Gdk::Drag::Action actions) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GdkModifierType _peel_start_button_mask = static_cast<::GdkModifierType> (start_button_mask);
    ::GdkContentFormats *_peel_formats = reinterpret_cast<::GdkContentFormats *> (formats);
    ::GdkDragAction _peel_actions = static_cast<::GdkDragAction> (actions);
    gtk_icon_view_enable_model_drag_source (_peel_this, _peel_start_button_mask, _peel_formats, _peel_actions);
  }

  bool
  get_activate_on_single_click () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gboolean _peel_return = gtk_icon_view_get_activate_on_single_click (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  bool
  get_cell_rect (TreePath *path, CellRenderer *cell, Gdk::Rectangle *rect) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    ::GdkRectangle *_peel_rect = reinterpret_cast<::GdkRectangle *> (rect);
    gboolean _peel_return = gtk_icon_view_get_cell_rect (_peel_this, _peel_path, _peel_cell, _peel_rect);
    return !!_peel_return;
  }

  int
  get_column_spacing () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    return gtk_icon_view_get_column_spacing (_peel_this);
  }

  int
  get_columns () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    return gtk_icon_view_get_columns (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  get_cursor (peel::UniquePtr<TreePath> *path, CellRenderer **cell) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path;
    ::GtkCellRenderer **_peel_cell = reinterpret_cast<::GtkCellRenderer **> (cell);
    gboolean _peel_return = gtk_icon_view_get_cursor (_peel_this, path ? &_peel_path : nullptr, _peel_cell);
    if (path)
      *path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_path));
    return !!_peel_return;
  }

  peel_arg_out (4) peel_arg_out (5)
  bool
  get_dest_item_at_pos (int drag_x, int drag_y, peel::UniquePtr<TreePath> *path, IconView::DropPosition *pos) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path;
    ::GtkIconViewDropPosition *_peel_pos = reinterpret_cast<::GtkIconViewDropPosition *> (pos);
    gboolean _peel_return = gtk_icon_view_get_dest_item_at_pos (_peel_this, drag_x, drag_y, path ? &_peel_path : nullptr, _peel_pos);
    if (path)
      *path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_path));
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_drag_dest_item (peel::UniquePtr<TreePath> *path, IconView::DropPosition *pos) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path;
    ::GtkIconViewDropPosition *_peel_pos = reinterpret_cast<::GtkIconViewDropPosition *> (pos);
    gtk_icon_view_get_drag_dest_item (_peel_this, path ? &_peel_path : nullptr, _peel_pos);
    if (path)
      *path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_path));
  }

  peel_arg_out (4) peel_arg_out (5)
  bool
  get_item_at_pos (int x, int y, peel::UniquePtr<TreePath> *path, CellRenderer **cell) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path;
    ::GtkCellRenderer **_peel_cell = reinterpret_cast<::GtkCellRenderer **> (cell);
    gboolean _peel_return = gtk_icon_view_get_item_at_pos (_peel_this, x, y, path ? &_peel_path : nullptr, _peel_cell);
    if (path)
      *path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_path));
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  int
  get_item_column (TreePath *path) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    return gtk_icon_view_get_item_column (_peel_this, _peel_path);
  }

  Orientation
  get_item_orientation () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkOrientation _peel_return = gtk_icon_view_get_item_orientation (_peel_this);
    return static_cast<Orientation> (_peel_return);
  }

  int
  get_item_padding () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    return gtk_icon_view_get_item_padding (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  int
  get_item_row (TreePath *path) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    return gtk_icon_view_get_item_row (_peel_this, _peel_path);
  }

  int
  get_item_width () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    return gtk_icon_view_get_item_width (_peel_this);
  }

  int
  get_margin () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    return gtk_icon_view_get_margin (_peel_this);
  }

  int
  get_markup_column () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    return gtk_icon_view_get_markup_column (_peel_this);
  }

  TreeModel *
  get_model () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreeModel *_peel_return = gtk_icon_view_get_model (_peel_this);
    return reinterpret_cast<TreeModel *> (_peel_return);
  }

  peel::UniquePtr<TreePath>
  get_path_at_pos (int x, int y) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_return = gtk_icon_view_get_path_at_pos (_peel_this, x, y);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  int
  get_pixbuf_column () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    return gtk_icon_view_get_pixbuf_column (_peel_this);
  }

  bool
  get_reorderable () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gboolean _peel_return = gtk_icon_view_get_reorderable (_peel_this);
    return !!_peel_return;
  }

  int
  get_row_spacing () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    return gtk_icon_view_get_row_spacing (_peel_this);
  }

  GLib::List<peel::UniquePtr<TreePath>>
  get_selected_items () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    GList *_peel_return = gtk_icon_view_get_selected_items (_peel_this);
    return GLib::List<peel::UniquePtr<TreePath>>::adopt_list (_peel_return);
  }

  SelectionMode
  get_selection_mode () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkSelectionMode _peel_return = gtk_icon_view_get_selection_mode (_peel_this);
    return static_cast<SelectionMode> (_peel_return);
  }

  int
  get_spacing () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    return gtk_icon_view_get_spacing (_peel_this);
  }

  int
  get_text_column () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    return gtk_icon_view_get_text_column (_peel_this);
  }

  int
  get_tooltip_column () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    return gtk_icon_view_get_tooltip_column (_peel_this);
  }

  peel_arg_out (5) peel_arg_out (6) peel_arg_out (7)
  bool
  get_tooltip_context (int x, int y, bool keyboard_tip, TreeModel **model, peel::UniquePtr<TreePath> *path, TreeIter *iter) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gboolean _peel_keyboard_tip = static_cast<gboolean> (keyboard_tip);
    ::GtkTreeModel **_peel_model = reinterpret_cast<::GtkTreeModel **> (model);
    ::GtkTreePath *_peel_path;
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_icon_view_get_tooltip_context (_peel_this, x, y, _peel_keyboard_tip, _peel_model, path ? &_peel_path : nullptr, _peel_iter);
    if (path)
      *path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_path));
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  get_visible_range (peel::UniquePtr<TreePath> *start_path, peel::UniquePtr<TreePath> *end_path) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_start_path;
    ::GtkTreePath *_peel_end_path;
    gboolean _peel_return = gtk_icon_view_get_visible_range (_peel_this, start_path ? &_peel_start_path : nullptr, end_path ? &_peel_end_path : nullptr);
    if (start_path)
      *start_path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_start_path));
    if (end_path)
      *end_path = peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_end_path));
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  item_activated (TreePath *path) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gtk_icon_view_item_activated (_peel_this, _peel_path);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  path_is_selected (TreePath *path) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_return = gtk_icon_view_path_is_selected (_peel_this, _peel_path);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  scroll_to_path (TreePath *path, bool use_align, float row_align, float col_align) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gboolean _peel_use_align = static_cast<gboolean> (use_align);
    gtk_icon_view_scroll_to_path (_peel_this, _peel_path, _peel_use_align, row_align, col_align);
  }

  void
  select_all () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_select_all (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  select_path (TreePath *path) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gtk_icon_view_select_path (_peel_this, _peel_path);
  }

  template<typename IconViewForeachFunc>
  void
  selected_foreach (IconViewForeachFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkIconViewForeachFunc _peel_func = peel::internals::CallbackHelper<void, ::GtkIconView *, ::GtkTreePath *>::wrap_call_callback (
      static_cast<IconViewForeachFunc &&> (func),
      [] (::GtkIconView *icon_view, ::GtkTreePath *path, gpointer data) -> void
      {
        IconViewForeachFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<IconViewForeachFunc>::type *> (data);
        IconView *_peel_icon_view = reinterpret_cast<IconView *> (icon_view);
        TreePath *_peel_path = reinterpret_cast<TreePath *> (path);
        _peel_captured_func (_peel_icon_view, _peel_path);
      },
      &_peel_data, peel::internals::is_const_invocable<IconViewForeachFunc, void, IconView *, TreePath *>::value);
    gtk_icon_view_selected_foreach (_peel_this, _peel_func, _peel_data);
  }

  void
  set_activate_on_single_click (bool single) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gboolean _peel_single = static_cast<gboolean> (single);
    gtk_icon_view_set_activate_on_single_click (_peel_this, _peel_single);
  }

  void
  set_column_spacing (int column_spacing) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_set_column_spacing (_peel_this, column_spacing);
  }

  void
  set_columns (int columns) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_set_columns (_peel_this, columns);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_cursor (TreePath *path, CellRenderer *cell, bool start_editing) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gboolean _peel_start_editing = static_cast<gboolean> (start_editing);
    gtk_icon_view_set_cursor (_peel_this, _peel_path, _peel_cell, _peel_start_editing);
  }

  peel_arg_in (2)
  void
  set_drag_dest_item (TreePath *path, IconView::DropPosition pos) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkIconViewDropPosition _peel_pos = static_cast<::GtkIconViewDropPosition> (pos);
    gtk_icon_view_set_drag_dest_item (_peel_this, _peel_path, _peel_pos);
  }

  void
  set_item_orientation (Orientation orientation) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    gtk_icon_view_set_item_orientation (_peel_this, _peel_orientation);
  }

  void
  set_item_padding (int item_padding) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_set_item_padding (_peel_this, item_padding);
  }

  void
  set_item_width (int item_width) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_set_item_width (_peel_this, item_width);
  }

  void
  set_margin (int margin) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_set_margin (_peel_this, margin);
  }

  void
  set_markup_column (int column) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_set_markup_column (_peel_this, column);
  }

  void
  set_model (TreeModel *model) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreeModel *_peel_model = reinterpret_cast<::GtkTreeModel *> (model);
    gtk_icon_view_set_model (_peel_this, _peel_model);
  }

  void
  set_pixbuf_column (int column) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_set_pixbuf_column (_peel_this, column);
  }

  void
  set_reorderable (bool reorderable) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gboolean _peel_reorderable = static_cast<gboolean> (reorderable);
    gtk_icon_view_set_reorderable (_peel_this, _peel_reorderable);
  }

  void
  set_row_spacing (int row_spacing) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_set_row_spacing (_peel_this, row_spacing);
  }

  void
  set_selection_mode (SelectionMode mode) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkSelectionMode _peel_mode = static_cast<::GtkSelectionMode> (mode);
    gtk_icon_view_set_selection_mode (_peel_this, _peel_mode);
  }

  void
  set_spacing (int spacing) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_set_spacing (_peel_this, spacing);
  }

  void
  set_text_column (int column) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_set_text_column (_peel_this, column);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  set_tooltip_cell (Tooltip *tooltip, TreePath *path, CellRenderer *cell) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTooltip *_peel_tooltip = reinterpret_cast<::GtkTooltip *> (tooltip);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    ::GtkCellRenderer *_peel_cell = reinterpret_cast<::GtkCellRenderer *> (cell);
    gtk_icon_view_set_tooltip_cell (_peel_this, _peel_tooltip, _peel_path, _peel_cell);
  }

  void
  set_tooltip_column (int column) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_set_tooltip_column (_peel_this, column);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  set_tooltip_item (Tooltip *tooltip, TreePath *path) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTooltip *_peel_tooltip = reinterpret_cast<::GtkTooltip *> (tooltip);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gtk_icon_view_set_tooltip_item (_peel_this, _peel_tooltip, _peel_path);
  }

  void
  unselect_all () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_unselect_all (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  unselect_path (TreePath *path) noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gtk_icon_view_unselect_path (_peel_this, _peel_path);
  }

  void
  unset_model_drag_dest () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_unset_model_drag_dest (_peel_this);
  }

  void
  unset_model_drag_source () noexcept
  {
    ::GtkIconView *_peel_this = reinterpret_cast<::GtkIconView *> (this);
    gtk_icon_view_unset_model_drag_source (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate_cursor_item (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IconView, bool ()>::_peel_connect_by_name (this, "activate-cursor-item", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate_cursor_item (HandlerObject *object, bool (HandlerObject::*handler_method) (IconView *), bool after = false) noexcept
  {
    return Signal<IconView, bool ()>::_peel_connect_by_name (this, "activate-cursor-item", object, handler_method, after);
  }

  bool
  emit_activate_cursor_item () noexcept
  {
    return Signal<IconView, bool ()>::_peel_emit_by_name (this, "activate-cursor-item");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_item_activated (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IconView, void (const TreePath *)>::_peel_connect_by_name (this, "item-activated", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_item_activated (HandlerObject *object, void (HandlerObject::*handler_method) (IconView *, const TreePath *), bool after = false) noexcept
  {
    return Signal<IconView, void (const TreePath *)>::_peel_connect_by_name (this, "item-activated", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_cursor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IconView, bool (MovementStep, int, bool, bool)>::_peel_connect_by_name (this, "move-cursor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_cursor (HandlerObject *object, bool (HandlerObject::*handler_method) (IconView *, MovementStep, int, bool, bool), bool after = false) noexcept
  {
    return Signal<IconView, bool (MovementStep, int, bool, bool)>::_peel_connect_by_name (this, "move-cursor", object, handler_method, after);
  }

  bool
  emit_move_cursor (MovementStep step, int count, bool extend, bool modify) noexcept
  {
    return Signal<IconView, bool (MovementStep, int, bool, bool)>::_peel_emit_by_name (this, "move-cursor", step, count, extend, modify);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_select_all (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IconView, void ()>::_peel_connect_by_name (this, "select-all", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_select_all (HandlerObject *object, void (HandlerObject::*handler_method) (IconView *), bool after = false) noexcept
  {
    return Signal<IconView, void ()>::_peel_connect_by_name (this, "select-all", object, handler_method, after);
  }

  void
  emit_select_all () noexcept
  {
    return Signal<IconView, void ()>::_peel_emit_by_name (this, "select-all");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_select_cursor_item (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IconView, void ()>::_peel_connect_by_name (this, "select-cursor-item", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_select_cursor_item (HandlerObject *object, void (HandlerObject::*handler_method) (IconView *), bool after = false) noexcept
  {
    return Signal<IconView, void ()>::_peel_connect_by_name (this, "select-cursor-item", object, handler_method, after);
  }

  void
  emit_select_cursor_item () noexcept
  {
    return Signal<IconView, void ()>::_peel_emit_by_name (this, "select-cursor-item");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_selection_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IconView, void ()>::_peel_connect_by_name (this, "selection-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_selection_changed (HandlerObject *object, void (HandlerObject::*handler_method) (IconView *), bool after = false) noexcept
  {
    return Signal<IconView, void ()>::_peel_connect_by_name (this, "selection-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_toggle_cursor_item (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IconView, void ()>::_peel_connect_by_name (this, "toggle-cursor-item", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_toggle_cursor_item (HandlerObject *object, void (HandlerObject::*handler_method) (IconView *), bool after = false) noexcept
  {
    return Signal<IconView, void ()>::_peel_connect_by_name (this, "toggle-cursor-item", object, handler_method, after);
  }

  void
  emit_toggle_cursor_item () noexcept
  {
    return Signal<IconView, void ()>::_peel_emit_by_name (this, "toggle-cursor-item");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_unselect_all (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IconView, void ()>::_peel_connect_by_name (this, "unselect-all", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_unselect_all (HandlerObject *object, void (HandlerObject::*handler_method) (IconView *), bool after = false) noexcept
  {
    return Signal<IconView, void ()>::_peel_connect_by_name (this, "unselect-all", object, handler_method, after);
  }

  void
  emit_unselect_all () noexcept
  {
    return Signal<IconView, void ()>::_peel_emit_by_name (this, "unselect-all");
  }

  static peel::Property<bool>
  prop_activate_on_single_click ()
  {
    return peel::Property<bool> { "activate-on-single-click" };
  }

  static peel::Property<CellArea>
  prop_cell_area ()
  {
    return peel::Property<CellArea> { "cell-area" };
  }

  static peel::Property<int>
  prop_column_spacing ()
  {
    return peel::Property<int> { "column-spacing" };
  }

  static peel::Property<int>
  prop_columns ()
  {
    return peel::Property<int> { "columns" };
  }

  static peel::Property<Orientation>
  prop_item_orientation ()
  {
    return peel::Property<Orientation> { "item-orientation" };
  }

  static peel::Property<int>
  prop_item_padding ()
  {
    return peel::Property<int> { "item-padding" };
  }

  static peel::Property<int>
  prop_item_width ()
  {
    return peel::Property<int> { "item-width" };
  }

  static peel::Property<int>
  prop_margin ()
  {
    return peel::Property<int> { "margin" };
  }

  static peel::Property<int>
  prop_markup_column ()
  {
    return peel::Property<int> { "markup-column" };
  }

  static peel::Property<TreeModel>
  prop_model ()
  {
    return peel::Property<TreeModel> { "model" };
  }

  static peel::Property<int>
  prop_pixbuf_column ()
  {
    return peel::Property<int> { "pixbuf-column" };
  }

  static peel::Property<bool>
  prop_reorderable ()
  {
    return peel::Property<bool> { "reorderable" };
  }

  static peel::Property<int>
  prop_row_spacing ()
  {
    return peel::Property<int> { "row-spacing" };
  }

  static peel::Property<SelectionMode>
  prop_selection_mode ()
  {
    return peel::Property<SelectionMode> { "selection-mode" };
  }

  static peel::Property<int>
  prop_spacing ()
  {
    return peel::Property<int> { "spacing" };
  }

  static peel::Property<int>
  prop_text_column ()
  {
    return peel::Property<int> { "text-column" };
  }

  static peel::Property<int>
  prop_tooltip_column ()
  {
    return peel::Property<int> { "tooltip-column" };
  }
}; /* class IconView */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/Paintable.h>
#include <peel/Gtk/TreePath.h>
