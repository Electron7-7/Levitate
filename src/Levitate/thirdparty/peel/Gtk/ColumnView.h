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
namespace Gio
{
class /* interface */ ListModel;
} /* namespace Gio */

namespace Gtk
{
class ColumnView;
class ListItemFactory;
enum class ListScrollFlags : std::underlying_type<::GtkListScrollFlags>::type;
enum class ListTabBehavior : std::underlying_type<::GtkListTabBehavior>::type;
class /* record */ ScrollInfo;
class /* interface */ SelectionModel;
enum class SortType : std::underlying_type<::GtkSortType>::type;
class Sorter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ColumnView> ()
{
  return gtk_column_view_get_type ();
}


namespace Gtk
{
class ColumnView : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Scrollable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ColumnView () = delete;
  ColumnView (const ColumnView &) = delete;
  ColumnView (ColumnView &&) = delete;
  ColumnView &
  operator = (const ColumnView &) = delete;
  ColumnView &
  operator = (ColumnView &&) = delete;
  ~ColumnView () = delete;
public:
  class Cell;
  class Column;
  class Row;
  class Sorter;

  static peel::FloatPtr<ColumnView>
  create (peel::RefPtr<SelectionModel> model) noexcept
  {
    ::GtkSelectionModel *_peel_model = reinterpret_cast<::GtkSelectionModel *> (std::move (model).release_ref ());
    ::GtkWidget *_peel_return = gtk_column_view_new (_peel_model);
    peel_assume (_peel_return);
    return peel::FloatPtr<ColumnView> (reinterpret_cast<ColumnView *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  append_column (ColumnView::Column *column) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkColumnViewColumn *_peel_column = reinterpret_cast<::GtkColumnViewColumn *> (column);
    gtk_column_view_append_column (_peel_this, _peel_column);
  }

  peel_returns_nonnull
  Gio::ListModel *
  get_columns () noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GListModel *_peel_return = gtk_column_view_get_columns (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  bool
  get_enable_rubberband () noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    gboolean _peel_return = gtk_column_view_get_enable_rubberband (_peel_this);
    return !!_peel_return;
  }

  ListItemFactory *
  get_header_factory () noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkListItemFactory *_peel_return = gtk_column_view_get_header_factory (_peel_this);
    return reinterpret_cast<ListItemFactory *> (_peel_return);
  }

  SelectionModel *
  get_model () noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkSelectionModel *_peel_return = gtk_column_view_get_model (_peel_this);
    return reinterpret_cast<SelectionModel *> (_peel_return);
  }

  bool
  get_reorderable () noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    gboolean _peel_return = gtk_column_view_get_reorderable (_peel_this);
    return !!_peel_return;
  }

  ListItemFactory *
  get_row_factory () noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkListItemFactory *_peel_return = gtk_column_view_get_row_factory (_peel_this);
    return reinterpret_cast<ListItemFactory *> (_peel_return);
  }

  bool
  get_show_column_separators () noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    gboolean _peel_return = gtk_column_view_get_show_column_separators (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_row_separators () noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    gboolean _peel_return = gtk_column_view_get_show_row_separators (_peel_this);
    return !!_peel_return;
  }

  bool
  get_single_click_activate () noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    gboolean _peel_return = gtk_column_view_get_single_click_activate (_peel_this);
    return !!_peel_return;
  }

  Gtk::Sorter *
  get_sorter () noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkSorter *_peel_return = gtk_column_view_get_sorter (_peel_this);
    return reinterpret_cast<Gtk::Sorter *> (_peel_return);
  }

  ListTabBehavior
  get_tab_behavior () noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkListTabBehavior _peel_return = gtk_column_view_get_tab_behavior (_peel_this);
    return static_cast<ListTabBehavior> (_peel_return);
  }

  peel_nonnull_args (3)
  void
  insert_column (unsigned position, ColumnView::Column *column) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkColumnViewColumn *_peel_column = reinterpret_cast<::GtkColumnViewColumn *> (column);
    gtk_column_view_insert_column (_peel_this, position, _peel_column);
  }

  peel_nonnull_args (2)
  void
  remove_column (ColumnView::Column *column) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkColumnViewColumn *_peel_column = reinterpret_cast<::GtkColumnViewColumn *> (column);
    gtk_column_view_remove_column (_peel_this, _peel_column);
  }

  void
  scroll_to (unsigned pos, ColumnView::Column *column, ListScrollFlags flags, peel::RefPtr<ScrollInfo> scroll) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkColumnViewColumn *_peel_column = reinterpret_cast<::GtkColumnViewColumn *> (column);
    ::GtkListScrollFlags _peel_flags = static_cast<::GtkListScrollFlags> (flags);
    ::GtkScrollInfo *_peel_scroll = reinterpret_cast<::GtkScrollInfo *> (std::move (scroll).release_ref ());
    gtk_column_view_scroll_to (_peel_this, pos, _peel_column, _peel_flags, _peel_scroll);
  }

  void
  set_enable_rubberband (bool enable_rubberband) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    gboolean _peel_enable_rubberband = static_cast<gboolean> (enable_rubberband);
    gtk_column_view_set_enable_rubberband (_peel_this, _peel_enable_rubberband);
  }

  void
  set_header_factory (ListItemFactory *factory) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkListItemFactory *_peel_factory = reinterpret_cast<::GtkListItemFactory *> (factory);
    gtk_column_view_set_header_factory (_peel_this, _peel_factory);
  }

  void
  set_model (SelectionModel *model) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkSelectionModel *_peel_model = reinterpret_cast<::GtkSelectionModel *> (model);
    gtk_column_view_set_model (_peel_this, _peel_model);
  }

  void
  set_reorderable (bool reorderable) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    gboolean _peel_reorderable = static_cast<gboolean> (reorderable);
    gtk_column_view_set_reorderable (_peel_this, _peel_reorderable);
  }

  void
  set_row_factory (ListItemFactory *factory) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkListItemFactory *_peel_factory = reinterpret_cast<::GtkListItemFactory *> (factory);
    gtk_column_view_set_row_factory (_peel_this, _peel_factory);
  }

  void
  set_show_column_separators (bool show_column_separators) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    gboolean _peel_show_column_separators = static_cast<gboolean> (show_column_separators);
    gtk_column_view_set_show_column_separators (_peel_this, _peel_show_column_separators);
  }

  void
  set_show_row_separators (bool show_row_separators) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    gboolean _peel_show_row_separators = static_cast<gboolean> (show_row_separators);
    gtk_column_view_set_show_row_separators (_peel_this, _peel_show_row_separators);
  }

  void
  set_single_click_activate (bool single_click_activate) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    gboolean _peel_single_click_activate = static_cast<gboolean> (single_click_activate);
    gtk_column_view_set_single_click_activate (_peel_this, _peel_single_click_activate);
  }

  void
  set_tab_behavior (ListTabBehavior tab_behavior) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkListTabBehavior _peel_tab_behavior = static_cast<::GtkListTabBehavior> (tab_behavior);
    gtk_column_view_set_tab_behavior (_peel_this, _peel_tab_behavior);
  }

  void
  sort_by_column (ColumnView::Column *column, SortType direction) noexcept
  {
    ::GtkColumnView *_peel_this = reinterpret_cast<::GtkColumnView *> (this);
    ::GtkColumnViewColumn *_peel_column = reinterpret_cast<::GtkColumnViewColumn *> (column);
    ::GtkSortType _peel_direction = static_cast<::GtkSortType> (direction);
    gtk_column_view_sort_by_column (_peel_this, _peel_column, _peel_direction);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ColumnView, void (unsigned)>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (ColumnView *, unsigned), bool after = false) noexcept
  {
    return Signal<ColumnView, void (unsigned)>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  static peel::Property<Gio::ListModel>
  prop_columns ()
  {
    return peel::Property<Gio::ListModel> { "columns" };
  }

  static peel::Property<bool>
  prop_enable_rubberband ()
  {
    return peel::Property<bool> { "enable-rubberband" };
  }

  static peel::Property<ListItemFactory>
  prop_header_factory ()
  {
    return peel::Property<ListItemFactory> { "header-factory" };
  }

  static peel::Property<SelectionModel>
  prop_model ()
  {
    return peel::Property<SelectionModel> { "model" };
  }

  static peel::Property<bool>
  prop_reorderable ()
  {
    return peel::Property<bool> { "reorderable" };
  }

  static peel::Property<ListItemFactory>
  prop_row_factory ()
  {
    return peel::Property<ListItemFactory> { "row-factory" };
  }

  static peel::Property<bool>
  prop_show_column_separators ()
  {
    return peel::Property<bool> { "show-column-separators" };
  }

  static peel::Property<bool>
  prop_show_row_separators ()
  {
    return peel::Property<bool> { "show-row-separators" };
  }

  static peel::Property<bool>
  prop_single_click_activate ()
  {
    return peel::Property<bool> { "single-click-activate" };
  }

  static peel::Property<Gtk::Sorter>
  prop_sorter ()
  {
    return peel::Property<Gtk::Sorter> { "sorter" };
  }

  static peel::Property<ListTabBehavior>
  prop_tab_behavior ()
  {
    return peel::Property<ListTabBehavior> { "tab-behavior" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ColumnView */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/ScrollInfo.h>
#include <peel/Gtk/SelectionModel.h>
