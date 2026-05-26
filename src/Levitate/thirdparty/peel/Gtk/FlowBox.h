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
class FlowBox;
class FlowBoxChild;
enum class MovementStep : std::underlying_type<::GtkMovementStep>::type;
enum class SelectionMode : std::underlying_type<::GtkSelectionMode>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FlowBox> ()
{
  return gtk_flow_box_get_type ();
}


namespace Gtk
{
class FlowBox : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FlowBox () = delete;
  FlowBox (const FlowBox &) = delete;
  FlowBox (FlowBox &&) = delete;
  FlowBox &
  operator = (const FlowBox &) = delete;
  FlowBox &
  operator = (FlowBox &&) = delete;
  ~FlowBox () = delete;
public:

  static peel::FloatPtr<FlowBox>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_flow_box_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<FlowBox> (reinterpret_cast<FlowBox *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  append (Widget *child) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_flow_box_append (_peel_this, _peel_child);
  }

  template<typename FlowBoxCreateWidgetFunc>
  void
  bind_model (Gio::ListModel *model, FlowBoxCreateWidgetFunc &&create_widget_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_data_free_func;
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (model);
    ::GtkFlowBoxCreateWidgetFunc _peel_create_widget_func = peel::internals::CallbackHelper<::GtkWidget *, ::gpointer>::wrap_notified_callback (
      static_cast<FlowBoxCreateWidgetFunc &&> (create_widget_func),
      [] (::gpointer item, gpointer user_data) -> ::GtkWidget *
      {
        FlowBoxCreateWidgetFunc &_peel_captured_create_widget_func = *reinterpret_cast<typename std::remove_reference<FlowBoxCreateWidgetFunc>::type *> (user_data);
        GObject::Object *_peel_item = reinterpret_cast<GObject::Object *> (item);
        peel::RefPtr<Widget> _peel_return = _peel_captured_create_widget_func (_peel_item);
        return reinterpret_cast<::GtkWidget *> (std::move (_peel_return).release_ref ());
      },
      &_peel_user_data, &_peel_user_data_free_func, peel::internals::is_const_invocable<FlowBoxCreateWidgetFunc, void, GObject::Object *>::value);
    gtk_flow_box_bind_model (_peel_this, _peel_model, _peel_create_widget_func, _peel_user_data, _peel_user_data_free_func);
  }

  bool
  get_activate_on_single_click () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gboolean _peel_return = gtk_flow_box_get_activate_on_single_click (_peel_this);
    return !!_peel_return;
  }

  FlowBoxChild *
  get_child_at_index (int idx) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkFlowBoxChild *_peel_return = gtk_flow_box_get_child_at_index (_peel_this, idx);
    return reinterpret_cast<FlowBoxChild *> (_peel_return);
  }

  FlowBoxChild *
  get_child_at_pos (int x, int y) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkFlowBoxChild *_peel_return = gtk_flow_box_get_child_at_pos (_peel_this, x, y);
    return reinterpret_cast<FlowBoxChild *> (_peel_return);
  }

  unsigned
  get_column_spacing () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    return gtk_flow_box_get_column_spacing (_peel_this);
  }

  bool
  get_homogeneous () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gboolean _peel_return = gtk_flow_box_get_homogeneous (_peel_this);
    return !!_peel_return;
  }

  unsigned
  get_max_children_per_line () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    return gtk_flow_box_get_max_children_per_line (_peel_this);
  }

  unsigned
  get_min_children_per_line () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    return gtk_flow_box_get_min_children_per_line (_peel_this);
  }

  unsigned
  get_row_spacing () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    return gtk_flow_box_get_row_spacing (_peel_this);
  }

  GLib::List<FlowBoxChild *>
  get_selected_children () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    GList *_peel_return = gtk_flow_box_get_selected_children (_peel_this);
    return GLib::List<FlowBoxChild *>::adopt_list (_peel_return);
  }

  SelectionMode
  get_selection_mode () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkSelectionMode _peel_return = gtk_flow_box_get_selection_mode (_peel_this);
    return static_cast<SelectionMode> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  insert (Widget *widget, int position) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_flow_box_insert (_peel_this, _peel_widget, position);
  }

  void
  invalidate_filter () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gtk_flow_box_invalidate_filter (_peel_this);
  }

  void
  invalidate_sort () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gtk_flow_box_invalidate_sort (_peel_this);
  }

  peel_nonnull_args (2)
  void
  prepend (Widget *child) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_flow_box_prepend (_peel_this, _peel_child);
  }

  peel_nonnull_args (2)
  void
  remove (Widget *widget) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_flow_box_remove (_peel_this, _peel_widget);
  }

  void
  remove_all () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gtk_flow_box_remove_all (_peel_this);
  }

  void
  select_all () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gtk_flow_box_select_all (_peel_this);
  }

  peel_nonnull_args (2)
  void
  select_child (FlowBoxChild *child) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkFlowBoxChild *_peel_child = reinterpret_cast<::GtkFlowBoxChild *> (child);
    gtk_flow_box_select_child (_peel_this, _peel_child);
  }

  template<typename FlowBoxForeachFunc>
  void
  selected_foreach (FlowBoxForeachFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkFlowBoxForeachFunc _peel_func = peel::internals::CallbackHelper<void, ::GtkFlowBox *, ::GtkFlowBoxChild *>::wrap_call_callback (
      static_cast<FlowBoxForeachFunc &&> (func),
      [] (::GtkFlowBox *box, ::GtkFlowBoxChild *child, gpointer user_data) -> void
      {
        FlowBoxForeachFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<FlowBoxForeachFunc>::type *> (user_data);
        FlowBox *_peel_box = reinterpret_cast<FlowBox *> (box);
        FlowBoxChild *_peel_child = reinterpret_cast<FlowBoxChild *> (child);
        _peel_captured_func (_peel_box, _peel_child);
      },
      &_peel_data, peel::internals::is_const_invocable<FlowBoxForeachFunc, void, FlowBox *, FlowBoxChild *>::value);
    gtk_flow_box_selected_foreach (_peel_this, _peel_func, _peel_data);
  }

  void
  set_activate_on_single_click (bool single) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gboolean _peel_single = static_cast<gboolean> (single);
    gtk_flow_box_set_activate_on_single_click (_peel_this, _peel_single);
  }

  void
  set_column_spacing (unsigned spacing) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gtk_flow_box_set_column_spacing (_peel_this, spacing);
  }

  template<typename FlowBoxFilterFunc>
  void
  set_filter_func (FlowBoxFilterFunc &&filter_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkFlowBoxFilterFunc _peel_filter_func = peel::internals::CallbackHelper<gboolean, ::GtkFlowBoxChild *>::wrap_notified_callback (
      static_cast<FlowBoxFilterFunc &&> (filter_func),
      [] (::GtkFlowBoxChild *child, gpointer user_data) -> gboolean
      {
        FlowBoxFilterFunc &_peel_captured_filter_func = *reinterpret_cast<typename std::remove_reference<FlowBoxFilterFunc>::type *> (user_data);
        FlowBoxChild *_peel_child = reinterpret_cast<FlowBoxChild *> (child);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_filter_func) (_peel_child);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<FlowBoxFilterFunc, void, FlowBoxChild *>::value);
    gtk_flow_box_set_filter_func (_peel_this, _peel_filter_func, _peel_user_data, _peel_destroy);
  }

  peel_nonnull_args (2)
  void
  set_hadjustment (Adjustment *adjustment) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkAdjustment *_peel_adjustment = reinterpret_cast<::GtkAdjustment *> (adjustment);
    gtk_flow_box_set_hadjustment (_peel_this, _peel_adjustment);
  }

  void
  set_homogeneous (bool homogeneous) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gboolean _peel_homogeneous = static_cast<gboolean> (homogeneous);
    gtk_flow_box_set_homogeneous (_peel_this, _peel_homogeneous);
  }

  void
  set_max_children_per_line (unsigned n_children) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gtk_flow_box_set_max_children_per_line (_peel_this, n_children);
  }

  void
  set_min_children_per_line (unsigned n_children) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gtk_flow_box_set_min_children_per_line (_peel_this, n_children);
  }

  void
  set_row_spacing (unsigned spacing) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gtk_flow_box_set_row_spacing (_peel_this, spacing);
  }

  void
  set_selection_mode (SelectionMode mode) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkSelectionMode _peel_mode = static_cast<::GtkSelectionMode> (mode);
    gtk_flow_box_set_selection_mode (_peel_this, _peel_mode);
  }

  template<typename FlowBoxSortFunc>
  void
  set_sort_func (FlowBoxSortFunc &&sort_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkFlowBoxSortFunc _peel_sort_func = peel::internals::CallbackHelper<int, ::GtkFlowBoxChild *, ::GtkFlowBoxChild *>::wrap_notified_callback (
      static_cast<FlowBoxSortFunc &&> (sort_func),
      [] (::GtkFlowBoxChild *child1, ::GtkFlowBoxChild *child2, gpointer user_data) -> int
      {
        FlowBoxSortFunc &_peel_captured_sort_func = *reinterpret_cast<typename std::remove_reference<FlowBoxSortFunc>::type *> (user_data);
        FlowBoxChild *_peel_child1 = reinterpret_cast<FlowBoxChild *> (child1);
        FlowBoxChild *_peel_child2 = reinterpret_cast<FlowBoxChild *> (child2);
        return peel::internals::invoke_if_nonnull<int> (_peel_captured_sort_func) (_peel_child1, _peel_child2);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<FlowBoxSortFunc, void, FlowBoxChild *, FlowBoxChild *>::value);
    gtk_flow_box_set_sort_func (_peel_this, _peel_sort_func, _peel_user_data, _peel_destroy);
  }

  peel_nonnull_args (2)
  void
  set_vadjustment (Adjustment *adjustment) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkAdjustment *_peel_adjustment = reinterpret_cast<::GtkAdjustment *> (adjustment);
    gtk_flow_box_set_vadjustment (_peel_this, _peel_adjustment);
  }

  void
  unselect_all () noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    gtk_flow_box_unselect_all (_peel_this);
  }

  peel_nonnull_args (2)
  void
  unselect_child (FlowBoxChild *child) noexcept
  {
    ::GtkFlowBox *_peel_this = reinterpret_cast<::GtkFlowBox *> (this);
    ::GtkFlowBoxChild *_peel_child = reinterpret_cast<::GtkFlowBoxChild *> (child);
    gtk_flow_box_unselect_child (_peel_this, _peel_child);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate_cursor_child (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FlowBox, void ()>::_peel_connect_by_name (this, "activate-cursor-child", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate_cursor_child (HandlerObject *object, void (HandlerObject::*handler_method) (FlowBox *), bool after = false) noexcept
  {
    return Signal<FlowBox, void ()>::_peel_connect_by_name (this, "activate-cursor-child", object, handler_method, after);
  }

  void
  emit_activate_cursor_child () noexcept
  {
    return Signal<FlowBox, void ()>::_peel_emit_by_name (this, "activate-cursor-child");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_child_activated (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FlowBox, void (FlowBoxChild *)>::_peel_connect_by_name (this, "child-activated", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_child_activated (HandlerObject *object, void (HandlerObject::*handler_method) (FlowBox *, FlowBoxChild *), bool after = false) noexcept
  {
    return Signal<FlowBox, void (FlowBoxChild *)>::_peel_connect_by_name (this, "child-activated", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_cursor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FlowBox, bool (MovementStep, int, bool, bool)>::_peel_connect_by_name (this, "move-cursor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_cursor (HandlerObject *object, bool (HandlerObject::*handler_method) (FlowBox *, MovementStep, int, bool, bool), bool after = false) noexcept
  {
    return Signal<FlowBox, bool (MovementStep, int, bool, bool)>::_peel_connect_by_name (this, "move-cursor", object, handler_method, after);
  }

  bool
  emit_move_cursor (MovementStep step, int count, bool extend, bool modify) noexcept
  {
    return Signal<FlowBox, bool (MovementStep, int, bool, bool)>::_peel_emit_by_name (this, "move-cursor", step, count, extend, modify);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_select_all (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FlowBox, void ()>::_peel_connect_by_name (this, "select-all", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_select_all (HandlerObject *object, void (HandlerObject::*handler_method) (FlowBox *), bool after = false) noexcept
  {
    return Signal<FlowBox, void ()>::_peel_connect_by_name (this, "select-all", object, handler_method, after);
  }

  void
  emit_select_all () noexcept
  {
    return Signal<FlowBox, void ()>::_peel_emit_by_name (this, "select-all");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_selected_children_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FlowBox, void ()>::_peel_connect_by_name (this, "selected-children-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_selected_children_changed (HandlerObject *object, void (HandlerObject::*handler_method) (FlowBox *), bool after = false) noexcept
  {
    return Signal<FlowBox, void ()>::_peel_connect_by_name (this, "selected-children-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_toggle_cursor_child (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FlowBox, void ()>::_peel_connect_by_name (this, "toggle-cursor-child", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_toggle_cursor_child (HandlerObject *object, void (HandlerObject::*handler_method) (FlowBox *), bool after = false) noexcept
  {
    return Signal<FlowBox, void ()>::_peel_connect_by_name (this, "toggle-cursor-child", object, handler_method, after);
  }

  void
  emit_toggle_cursor_child () noexcept
  {
    return Signal<FlowBox, void ()>::_peel_emit_by_name (this, "toggle-cursor-child");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_unselect_all (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FlowBox, void ()>::_peel_connect_by_name (this, "unselect-all", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_unselect_all (HandlerObject *object, void (HandlerObject::*handler_method) (FlowBox *), bool after = false) noexcept
  {
    return Signal<FlowBox, void ()>::_peel_connect_by_name (this, "unselect-all", object, handler_method, after);
  }

  void
  emit_unselect_all () noexcept
  {
    return Signal<FlowBox, void ()>::_peel_emit_by_name (this, "unselect-all");
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

  static peel::Property<unsigned>
  prop_column_spacing ()
  {
    return peel::Property<unsigned> { "column-spacing" };
  }

  static peel::Property<bool>
  prop_homogeneous ()
  {
    return peel::Property<bool> { "homogeneous" };
  }

  static peel::Property<unsigned>
  prop_max_children_per_line ()
  {
    return peel::Property<unsigned> { "max-children-per-line" };
  }

  static peel::Property<unsigned>
  prop_min_children_per_line ()
  {
    return peel::Property<unsigned> { "min-children-per-line" };
  }

  static peel::Property<unsigned>
  prop_row_spacing ()
  {
    return peel::Property<unsigned> { "row-spacing" };
  }

  static peel::Property<SelectionMode>
  prop_selection_mode ()
  {
    return peel::Property<SelectionMode> { "selection-mode" };
  }
}; /* class FlowBox */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/FlowBoxChild.h>
