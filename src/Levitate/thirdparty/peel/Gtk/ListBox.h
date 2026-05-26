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
#include <peel/Gtk/Widget.h>

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
class Adjustment;
class ListBox;
class ListBoxRow;
enum class ListTabBehavior : std::underlying_type<::GtkListTabBehavior>::type;
enum class MovementStep : std::underlying_type<::GtkMovementStep>::type;
enum class SelectionMode : std::underlying_type<::GtkSelectionMode>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ListBox> ()
{
  return gtk_list_box_get_type ();
}


namespace Gtk
{
class ListBox : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ListBox () = delete;
  ListBox (const ListBox &) = delete;
  ListBox (ListBox &&) = delete;
  ListBox &
  operator = (const ListBox &) = delete;
  ListBox &
  operator = (ListBox &&) = delete;
  ~ListBox () = delete;
public:

  static peel::FloatPtr<ListBox>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_list_box_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<ListBox> (reinterpret_cast<ListBox *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  append (Widget *child) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_list_box_append (_peel_this, _peel_child);
  }

  template<typename ListBoxCreateWidgetFunc>
  void
  bind_model (Gio::ListModel *model, ListBoxCreateWidgetFunc &&create_widget_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_data_free_func;
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (model);
    ::GtkListBoxCreateWidgetFunc _peel_create_widget_func = peel::internals::CallbackHelper<::GtkWidget *, ::gpointer>::wrap_notified_callback (
      static_cast<ListBoxCreateWidgetFunc &&> (create_widget_func),
      [] (::gpointer item, gpointer user_data) -> ::GtkWidget *
      {
        ListBoxCreateWidgetFunc &_peel_captured_create_widget_func = *reinterpret_cast<typename std::remove_reference<ListBoxCreateWidgetFunc>::type *> (user_data);
        GObject::Object *_peel_item = reinterpret_cast<GObject::Object *> (item);
        peel::RefPtr<Widget> _peel_return = peel::internals::invoke_if_nonnull<peel::RefPtr<Widget>> (_peel_captured_create_widget_func) (_peel_item);
        return reinterpret_cast<::GtkWidget *> (std::move (_peel_return).release_ref ());
      },
      &_peel_user_data, &_peel_user_data_free_func, peel::internals::is_const_invocable<ListBoxCreateWidgetFunc, void, GObject::Object *>::value);
    gtk_list_box_bind_model (_peel_this, _peel_model, _peel_create_widget_func, _peel_user_data, _peel_user_data_free_func);
  }

  peel_nonnull_args (2)
  void
  drag_highlight_row (ListBoxRow *row) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkListBoxRow *_peel_row = reinterpret_cast<::GtkListBoxRow *> (row);
    gtk_list_box_drag_highlight_row (_peel_this, _peel_row);
  }

  void
  drag_unhighlight_row () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    gtk_list_box_drag_unhighlight_row (_peel_this);
  }

  bool
  get_activate_on_single_click () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    gboolean _peel_return = gtk_list_box_get_activate_on_single_click (_peel_this);
    return !!_peel_return;
  }

  Adjustment *
  get_adjustment () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkAdjustment *_peel_return = gtk_list_box_get_adjustment (_peel_this);
    return reinterpret_cast<Adjustment *> (_peel_return);
  }

  ListBoxRow *
  get_row_at_index (int index_) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkListBoxRow *_peel_return = gtk_list_box_get_row_at_index (_peel_this, index_);
    return reinterpret_cast<ListBoxRow *> (_peel_return);
  }

  ListBoxRow *
  get_row_at_y (int y) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkListBoxRow *_peel_return = gtk_list_box_get_row_at_y (_peel_this, y);
    return reinterpret_cast<ListBoxRow *> (_peel_return);
  }

  ListBoxRow *
  get_selected_row () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkListBoxRow *_peel_return = gtk_list_box_get_selected_row (_peel_this);
    return reinterpret_cast<ListBoxRow *> (_peel_return);
  }

  GLib::List<ListBoxRow *>
  get_selected_rows () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    GList *_peel_return = gtk_list_box_get_selected_rows (_peel_this);
    return GLib::List<ListBoxRow *>::adopt_list (_peel_return);
  }

  SelectionMode
  get_selection_mode () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkSelectionMode _peel_return = gtk_list_box_get_selection_mode (_peel_this);
    return static_cast<SelectionMode> (_peel_return);
  }

  bool
  get_show_separators () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    gboolean _peel_return = gtk_list_box_get_show_separators (_peel_this);
    return !!_peel_return;
  }

  ListTabBehavior
  get_tab_behavior () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkListTabBehavior _peel_return = gtk_list_box_get_tab_behavior (_peel_this);
    return static_cast<ListTabBehavior> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  insert (Widget *child, int position) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_list_box_insert (_peel_this, _peel_child, position);
  }

  void
  invalidate_filter () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    gtk_list_box_invalidate_filter (_peel_this);
  }

  void
  invalidate_headers () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    gtk_list_box_invalidate_headers (_peel_this);
  }

  void
  invalidate_sort () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    gtk_list_box_invalidate_sort (_peel_this);
  }

  peel_nonnull_args (2)
  void
  prepend (Widget *child) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_list_box_prepend (_peel_this, _peel_child);
  }

  peel_nonnull_args (2)
  void
  remove (Widget *child) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_list_box_remove (_peel_this, _peel_child);
  }

  void
  remove_all () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    gtk_list_box_remove_all (_peel_this);
  }

  void
  select_all () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    gtk_list_box_select_all (_peel_this);
  }

  void
  select_row (ListBoxRow *row) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkListBoxRow *_peel_row = reinterpret_cast<::GtkListBoxRow *> (row);
    gtk_list_box_select_row (_peel_this, _peel_row);
  }

  template<typename ListBoxForeachFunc>
  void
  selected_foreach (ListBoxForeachFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkListBoxForeachFunc _peel_func = peel::internals::CallbackHelper<void, ::GtkListBox *, ::GtkListBoxRow *>::wrap_call_callback (
      static_cast<ListBoxForeachFunc &&> (func),
      [] (::GtkListBox *box, ::GtkListBoxRow *row, gpointer user_data) -> void
      {
        ListBoxForeachFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<ListBoxForeachFunc>::type *> (user_data);
        ListBox *_peel_box = reinterpret_cast<ListBox *> (box);
        ListBoxRow *_peel_row = reinterpret_cast<ListBoxRow *> (row);
        _peel_captured_func (_peel_box, _peel_row);
      },
      &_peel_data, peel::internals::is_const_invocable<ListBoxForeachFunc, void, ListBox *, ListBoxRow *>::value);
    gtk_list_box_selected_foreach (_peel_this, _peel_func, _peel_data);
  }

  void
  set_activate_on_single_click (bool single) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    gboolean _peel_single = static_cast<gboolean> (single);
    gtk_list_box_set_activate_on_single_click (_peel_this, _peel_single);
  }

  void
  set_adjustment (peel::FloatPtr<Adjustment> adjustment) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkAdjustment *_peel_adjustment = reinterpret_cast<::GtkAdjustment *> (std::move (adjustment).release_floating_ptr ());
    gtk_list_box_set_adjustment (_peel_this, _peel_adjustment);
  }

  template<typename ListBoxFilterFunc>
  void
  set_filter_func (ListBoxFilterFunc &&filter_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkListBoxFilterFunc _peel_filter_func = peel::internals::CallbackHelper<gboolean, ::GtkListBoxRow *>::wrap_notified_callback (
      static_cast<ListBoxFilterFunc &&> (filter_func),
      [] (::GtkListBoxRow *row, gpointer user_data) -> gboolean
      {
        ListBoxFilterFunc &_peel_captured_filter_func = *reinterpret_cast<typename std::remove_reference<ListBoxFilterFunc>::type *> (user_data);
        ListBoxRow *_peel_row = reinterpret_cast<ListBoxRow *> (row);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_filter_func) (_peel_row);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<ListBoxFilterFunc, void, ListBoxRow *>::value);
    gtk_list_box_set_filter_func (_peel_this, _peel_filter_func, _peel_user_data, _peel_destroy);
  }

  template<typename ListBoxUpdateHeaderFunc>
  void
  set_header_func (ListBoxUpdateHeaderFunc &&update_header) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkListBoxUpdateHeaderFunc _peel_update_header = peel::internals::CallbackHelper<void, ::GtkListBoxRow *, ::GtkListBoxRow *>::wrap_notified_callback (
      static_cast<ListBoxUpdateHeaderFunc &&> (update_header),
      [] (::GtkListBoxRow *row, ::GtkListBoxRow *before, gpointer user_data) -> void
      {
        ListBoxUpdateHeaderFunc &_peel_captured_update_header = *reinterpret_cast<typename std::remove_reference<ListBoxUpdateHeaderFunc>::type *> (user_data);
        ListBoxRow *_peel_row = reinterpret_cast<ListBoxRow *> (row);
        ListBoxRow *_peel_before = reinterpret_cast<ListBoxRow *> (before);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_update_header) (_peel_row, _peel_before);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<ListBoxUpdateHeaderFunc, void, ListBoxRow *, ListBoxRow *>::value);
    gtk_list_box_set_header_func (_peel_this, _peel_update_header, _peel_user_data, _peel_destroy);
  }

  void
  set_placeholder (Widget *placeholder) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkWidget *_peel_placeholder = reinterpret_cast<::GtkWidget *> (placeholder);
    gtk_list_box_set_placeholder (_peel_this, _peel_placeholder);
  }

  void
  set_selection_mode (SelectionMode mode) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkSelectionMode _peel_mode = static_cast<::GtkSelectionMode> (mode);
    gtk_list_box_set_selection_mode (_peel_this, _peel_mode);
  }

  void
  set_show_separators (bool show_separators) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    gboolean _peel_show_separators = static_cast<gboolean> (show_separators);
    gtk_list_box_set_show_separators (_peel_this, _peel_show_separators);
  }

  template<typename ListBoxSortFunc>
  void
  set_sort_func (ListBoxSortFunc &&sort_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkListBoxSortFunc _peel_sort_func = peel::internals::CallbackHelper<int, ::GtkListBoxRow *, ::GtkListBoxRow *>::wrap_notified_callback (
      static_cast<ListBoxSortFunc &&> (sort_func),
      [] (::GtkListBoxRow *row1, ::GtkListBoxRow *row2, gpointer user_data) -> int
      {
        ListBoxSortFunc &_peel_captured_sort_func = *reinterpret_cast<typename std::remove_reference<ListBoxSortFunc>::type *> (user_data);
        ListBoxRow *_peel_row1 = reinterpret_cast<ListBoxRow *> (row1);
        ListBoxRow *_peel_row2 = reinterpret_cast<ListBoxRow *> (row2);
        return peel::internals::invoke_if_nonnull<int> (_peel_captured_sort_func) (_peel_row1, _peel_row2);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<ListBoxSortFunc, void, ListBoxRow *, ListBoxRow *>::value);
    gtk_list_box_set_sort_func (_peel_this, _peel_sort_func, _peel_user_data, _peel_destroy);
  }

  void
  set_tab_behavior (ListTabBehavior behavior) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkListTabBehavior _peel_behavior = static_cast<::GtkListTabBehavior> (behavior);
    gtk_list_box_set_tab_behavior (_peel_this, _peel_behavior);
  }

  void
  unselect_all () noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    gtk_list_box_unselect_all (_peel_this);
  }

  peel_nonnull_args (2)
  void
  unselect_row (ListBoxRow *row) noexcept
  {
    ::GtkListBox *_peel_this = reinterpret_cast<::GtkListBox *> (this);
    ::GtkListBoxRow *_peel_row = reinterpret_cast<::GtkListBoxRow *> (row);
    gtk_list_box_unselect_row (_peel_this, _peel_row);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate_cursor_row (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ListBox, void ()>::_peel_connect_by_name (this, "activate-cursor-row", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate_cursor_row (HandlerObject *object, void (HandlerObject::*handler_method) (ListBox *), bool after = false) noexcept
  {
    return Signal<ListBox, void ()>::_peel_connect_by_name (this, "activate-cursor-row", object, handler_method, after);
  }

  void
  emit_activate_cursor_row () noexcept
  {
    return Signal<ListBox, void ()>::_peel_emit_by_name (this, "activate-cursor-row");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_cursor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ListBox, void (MovementStep, int, bool, bool)>::_peel_connect_by_name (this, "move-cursor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_cursor (HandlerObject *object, void (HandlerObject::*handler_method) (ListBox *, MovementStep, int, bool, bool), bool after = false) noexcept
  {
    return Signal<ListBox, void (MovementStep, int, bool, bool)>::_peel_connect_by_name (this, "move-cursor", object, handler_method, after);
  }

  void
  emit_move_cursor (MovementStep step, int count, bool extend, bool modify) noexcept
  {
    return Signal<ListBox, void (MovementStep, int, bool, bool)>::_peel_emit_by_name (this, "move-cursor", step, count, extend, modify);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_row_activated (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ListBox, void (ListBoxRow *)>::_peel_connect_by_name (this, "row-activated", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_row_activated (HandlerObject *object, void (HandlerObject::*handler_method) (ListBox *, ListBoxRow *), bool after = false) noexcept
  {
    return Signal<ListBox, void (ListBoxRow *)>::_peel_connect_by_name (this, "row-activated", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_row_selected (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ListBox, void (ListBoxRow *)>::_peel_connect_by_name (this, "row-selected", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_row_selected (HandlerObject *object, void (HandlerObject::*handler_method) (ListBox *, ListBoxRow *), bool after = false) noexcept
  {
    return Signal<ListBox, void (ListBoxRow *)>::_peel_connect_by_name (this, "row-selected", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_select_all (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ListBox, void ()>::_peel_connect_by_name (this, "select-all", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_select_all (HandlerObject *object, void (HandlerObject::*handler_method) (ListBox *), bool after = false) noexcept
  {
    return Signal<ListBox, void ()>::_peel_connect_by_name (this, "select-all", object, handler_method, after);
  }

  void
  emit_select_all () noexcept
  {
    return Signal<ListBox, void ()>::_peel_emit_by_name (this, "select-all");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_selected_rows_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ListBox, void ()>::_peel_connect_by_name (this, "selected-rows-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_selected_rows_changed (HandlerObject *object, void (HandlerObject::*handler_method) (ListBox *), bool after = false) noexcept
  {
    return Signal<ListBox, void ()>::_peel_connect_by_name (this, "selected-rows-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_toggle_cursor_row (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ListBox, void ()>::_peel_connect_by_name (this, "toggle-cursor-row", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_toggle_cursor_row (HandlerObject *object, void (HandlerObject::*handler_method) (ListBox *), bool after = false) noexcept
  {
    return Signal<ListBox, void ()>::_peel_connect_by_name (this, "toggle-cursor-row", object, handler_method, after);
  }

  void
  emit_toggle_cursor_row () noexcept
  {
    return Signal<ListBox, void ()>::_peel_emit_by_name (this, "toggle-cursor-row");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_unselect_all (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ListBox, void ()>::_peel_connect_by_name (this, "unselect-all", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_unselect_all (HandlerObject *object, void (HandlerObject::*handler_method) (ListBox *), bool after = false) noexcept
  {
    return Signal<ListBox, void ()>::_peel_connect_by_name (this, "unselect-all", object, handler_method, after);
  }

  void
  emit_unselect_all () noexcept
  {
    return Signal<ListBox, void ()>::_peel_emit_by_name (this, "unselect-all");
  }

  static peel::Property<bool>
  prop_accept_unpaired_release ()
  {
    return peel::Property<bool> { "accept-unpaired-release" };
  }

  static peel::Property<bool>
  prop_activate_on_single_click ()
  {
    return peel::Property<bool> { "activate-on-single-click" };
  }

  static peel::Property<SelectionMode>
  prop_selection_mode ()
  {
    return peel::Property<SelectionMode> { "selection-mode" };
  }

  static peel::Property<bool>
  prop_show_separators ()
  {
    return peel::Property<bool> { "show-separators" };
  }

  static peel::Property<ListTabBehavior>
  prop_tab_behavior ()
  {
    return peel::Property<ListTabBehavior> { "tab-behavior" };
  }
}; /* class ListBox */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Adjustment.h>
#include <peel/Gtk/ListBoxRow.h>
