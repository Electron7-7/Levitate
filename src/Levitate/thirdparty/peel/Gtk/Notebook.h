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
enum class DirectionType : std::underlying_type<::GtkDirectionType>::type;
class Notebook;
class NotebookPage;
enum class PackType : std::underlying_type<::GtkPackType>::type;
enum class PositionType : std::underlying_type<::GtkPositionType>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Notebook> ()
{
  return gtk_notebook_get_type ();
}


namespace Gtk
{
class Notebook : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Notebook () = delete;
  Notebook (const Notebook &) = delete;
  Notebook (Notebook &&) = delete;
  Notebook &
  operator = (const Notebook &) = delete;
  Notebook &
  operator = (Notebook &&) = delete;
  ~Notebook () = delete;
public:
  enum class Tab : std::underlying_type<::GtkNotebookTab>::type;

  static peel::FloatPtr<Notebook>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_notebook_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Notebook> (reinterpret_cast<Notebook *> (_peel_return));
  }

  peel_nonnull_args (2)
  int
  append_page (Widget *child, Widget *tab_label) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkWidget *_peel_tab_label = reinterpret_cast<::GtkWidget *> (tab_label);
    return gtk_notebook_append_page (_peel_this, _peel_child, _peel_tab_label);
  }

  peel_nonnull_args (2)
  int
  append_page_menu (Widget *child, Widget *tab_label, Widget *menu_label) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkWidget *_peel_tab_label = reinterpret_cast<::GtkWidget *> (tab_label);
    ::GtkWidget *_peel_menu_label = reinterpret_cast<::GtkWidget *> (menu_label);
    return gtk_notebook_append_page_menu (_peel_this, _peel_child, _peel_tab_label, _peel_menu_label);
  }

  peel_nonnull_args (2)
  void
  detach_tab (Widget *child) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_notebook_detach_tab (_peel_this, _peel_child);
  }

  Widget *
  get_action_widget (PackType pack_type) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkPackType _peel_pack_type = static_cast<::GtkPackType> (pack_type);
    ::GtkWidget *_peel_return = gtk_notebook_get_action_widget (_peel_this, _peel_pack_type);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  int
  get_current_page () noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    return gtk_notebook_get_current_page (_peel_this);
  }

  const char *
  get_group_name () noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    return gtk_notebook_get_group_name (_peel_this);
  }

  peel_nonnull_args (2)
  Widget *
  get_menu_label (Widget *child) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkWidget *_peel_return = gtk_notebook_get_menu_label (_peel_this, _peel_child);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  peel_nonnull_args (2)
  const char *
  get_menu_label_text (Widget *child) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    return gtk_notebook_get_menu_label_text (_peel_this, _peel_child);
  }

  int
  get_n_pages () noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    return gtk_notebook_get_n_pages (_peel_this);
  }

  Widget *
  get_nth_page (int page_num) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_return = gtk_notebook_get_nth_page (_peel_this, page_num);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  peel_nonnull_args (2) peel_returns_nonnull
  NotebookPage *
  get_page (Widget *child) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkNotebookPage *_peel_return = gtk_notebook_get_page (_peel_this, _peel_child);
    peel_assume (_peel_return);
    return reinterpret_cast<NotebookPage *> (_peel_return);
  }

  peel::RefPtr<Gio::ListModel>
  get_pages () noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GListModel *_peel_return = gtk_notebook_get_pages (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Gio::ListModel>::adopt_ref (reinterpret_cast<Gio::ListModel *> (_peel_return));
  }

  bool
  get_scrollable () noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gboolean _peel_return = gtk_notebook_get_scrollable (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_border () noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gboolean _peel_return = gtk_notebook_get_show_border (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_tabs () noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gboolean _peel_return = gtk_notebook_get_show_tabs (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  get_tab_detachable (Widget *child) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gboolean _peel_return = gtk_notebook_get_tab_detachable (_peel_this, _peel_child);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  Widget *
  get_tab_label (Widget *child) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkWidget *_peel_return = gtk_notebook_get_tab_label (_peel_this, _peel_child);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  peel_nonnull_args (2)
  const char *
  get_tab_label_text (Widget *child) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    return gtk_notebook_get_tab_label_text (_peel_this, _peel_child);
  }

  PositionType
  get_tab_pos () noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkPositionType _peel_return = gtk_notebook_get_tab_pos (_peel_this);
    return static_cast<PositionType> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  get_tab_reorderable (Widget *child) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gboolean _peel_return = gtk_notebook_get_tab_reorderable (_peel_this, _peel_child);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  int
  insert_page (Widget *child, Widget *tab_label, int position) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkWidget *_peel_tab_label = reinterpret_cast<::GtkWidget *> (tab_label);
    return gtk_notebook_insert_page (_peel_this, _peel_child, _peel_tab_label, position);
  }

  peel_nonnull_args (2)
  int
  insert_page_menu (Widget *child, Widget *tab_label, Widget *menu_label, int position) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkWidget *_peel_tab_label = reinterpret_cast<::GtkWidget *> (tab_label);
    ::GtkWidget *_peel_menu_label = reinterpret_cast<::GtkWidget *> (menu_label);
    return gtk_notebook_insert_page_menu (_peel_this, _peel_child, _peel_tab_label, _peel_menu_label, position);
  }

  void
  next_page () noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gtk_notebook_next_page (_peel_this);
  }

  peel_nonnull_args (2)
  int
  page_num (Widget *child) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    return gtk_notebook_page_num (_peel_this, _peel_child);
  }

  void
  popup_disable () noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gtk_notebook_popup_disable (_peel_this);
  }

  void
  popup_enable () noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gtk_notebook_popup_enable (_peel_this);
  }

  peel_nonnull_args (2)
  int
  prepend_page (Widget *child, Widget *tab_label) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkWidget *_peel_tab_label = reinterpret_cast<::GtkWidget *> (tab_label);
    return gtk_notebook_prepend_page (_peel_this, _peel_child, _peel_tab_label);
  }

  peel_nonnull_args (2)
  int
  prepend_page_menu (Widget *child, Widget *tab_label, Widget *menu_label) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkWidget *_peel_tab_label = reinterpret_cast<::GtkWidget *> (tab_label);
    ::GtkWidget *_peel_menu_label = reinterpret_cast<::GtkWidget *> (menu_label);
    return gtk_notebook_prepend_page_menu (_peel_this, _peel_child, _peel_tab_label, _peel_menu_label);
  }

  void
  prev_page () noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gtk_notebook_prev_page (_peel_this);
  }

  void
  remove_page (int page_num) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gtk_notebook_remove_page (_peel_this, page_num);
  }

  peel_nonnull_args (2)
  void
  reorder_child (Widget *child, int position) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_notebook_reorder_child (_peel_this, _peel_child, position);
  }

  peel_nonnull_args (2)
  void
  set_action_widget (Widget *widget, PackType pack_type) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkPackType _peel_pack_type = static_cast<::GtkPackType> (pack_type);
    gtk_notebook_set_action_widget (_peel_this, _peel_widget, _peel_pack_type);
  }

  void
  set_current_page (int page_num) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gtk_notebook_set_current_page (_peel_this, page_num);
  }

  void
  set_group_name (const char *group_name) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gtk_notebook_set_group_name (_peel_this, group_name);
  }

  peel_nonnull_args (2)
  void
  set_menu_label (Widget *child, Widget *menu_label) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkWidget *_peel_menu_label = reinterpret_cast<::GtkWidget *> (menu_label);
    gtk_notebook_set_menu_label (_peel_this, _peel_child, _peel_menu_label);
  }

  peel_nonnull_args (2, 3)
  void
  set_menu_label_text (Widget *child, const char *menu_text) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_notebook_set_menu_label_text (_peel_this, _peel_child, menu_text);
  }

  void
  set_scrollable (bool scrollable) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gboolean _peel_scrollable = static_cast<gboolean> (scrollable);
    gtk_notebook_set_scrollable (_peel_this, _peel_scrollable);
  }

  void
  set_show_border (bool show_border) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gboolean _peel_show_border = static_cast<gboolean> (show_border);
    gtk_notebook_set_show_border (_peel_this, _peel_show_border);
  }

  void
  set_show_tabs (bool show_tabs) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    gboolean _peel_show_tabs = static_cast<gboolean> (show_tabs);
    gtk_notebook_set_show_tabs (_peel_this, _peel_show_tabs);
  }

  peel_nonnull_args (2)
  void
  set_tab_detachable (Widget *child, bool detachable) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gboolean _peel_detachable = static_cast<gboolean> (detachable);
    gtk_notebook_set_tab_detachable (_peel_this, _peel_child, _peel_detachable);
  }

  peel_nonnull_args (2)
  void
  set_tab_label (Widget *child, Widget *tab_label) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkWidget *_peel_tab_label = reinterpret_cast<::GtkWidget *> (tab_label);
    gtk_notebook_set_tab_label (_peel_this, _peel_child, _peel_tab_label);
  }

  peel_nonnull_args (2, 3)
  void
  set_tab_label_text (Widget *child, const char *tab_text) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_notebook_set_tab_label_text (_peel_this, _peel_child, tab_text);
  }

  void
  set_tab_pos (PositionType pos) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkPositionType _peel_pos = static_cast<::GtkPositionType> (pos);
    gtk_notebook_set_tab_pos (_peel_this, _peel_pos);
  }

  peel_nonnull_args (2)
  void
  set_tab_reorderable (Widget *child, bool reorderable) noexcept
  {
    ::GtkNotebook *_peel_this = reinterpret_cast<::GtkNotebook *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gboolean _peel_reorderable = static_cast<gboolean> (reorderable);
    gtk_notebook_set_tab_reorderable (_peel_this, _peel_child, _peel_reorderable);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_change_current_page (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Notebook, bool (int)>::_peel_connect_by_name (this, "change-current-page", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_change_current_page (HandlerObject *object, bool (HandlerObject::*handler_method) (Notebook *, int), bool after = false) noexcept
  {
    return Signal<Notebook, bool (int)>::_peel_connect_by_name (this, "change-current-page", object, handler_method, after);
  }

  bool
  emit_change_current_page (int page) noexcept
  {
    return Signal<Notebook, bool (int)>::_peel_emit_by_name (this, "change-current-page", page);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_create_window (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Notebook, Notebook * (Widget *)>::_peel_connect_by_name (this, "create-window", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_create_window (HandlerObject *object, Notebook * (HandlerObject::*handler_method) (Notebook *, Widget *), bool after = false) noexcept
  {
    return Signal<Notebook, Notebook * (Widget *)>::_peel_connect_by_name (this, "create-window", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_focus_tab (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Notebook, bool (Notebook::Tab)>::_peel_connect_by_name (this, "focus-tab", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_focus_tab (HandlerObject *object, bool (HandlerObject::*handler_method) (Notebook *, Notebook::Tab), bool after = false) noexcept
  {
    return Signal<Notebook, bool (Notebook::Tab)>::_peel_connect_by_name (this, "focus-tab", object, handler_method, after);
  }

  bool
  emit_focus_tab (Notebook::Tab tab) noexcept
  {
    return Signal<Notebook, bool (Notebook::Tab)>::_peel_emit_by_name (this, "focus-tab", tab);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_focus_out (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Notebook, void (DirectionType)>::_peel_connect_by_name (this, "move-focus-out", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_focus_out (HandlerObject *object, void (HandlerObject::*handler_method) (Notebook *, DirectionType), bool after = false) noexcept
  {
    return Signal<Notebook, void (DirectionType)>::_peel_connect_by_name (this, "move-focus-out", object, handler_method, after);
  }

  void
  emit_move_focus_out (DirectionType direction) noexcept
  {
    return Signal<Notebook, void (DirectionType)>::_peel_emit_by_name (this, "move-focus-out", direction);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_page_added (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Notebook, void (Widget *, unsigned)>::_peel_connect_by_name (this, "page-added", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_page_added (HandlerObject *object, void (HandlerObject::*handler_method) (Notebook *, Widget *, unsigned), bool after = false) noexcept
  {
    return Signal<Notebook, void (Widget *, unsigned)>::_peel_connect_by_name (this, "page-added", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_page_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Notebook, void (Widget *, unsigned)>::_peel_connect_by_name (this, "page-removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_page_removed (HandlerObject *object, void (HandlerObject::*handler_method) (Notebook *, Widget *, unsigned), bool after = false) noexcept
  {
    return Signal<Notebook, void (Widget *, unsigned)>::_peel_connect_by_name (this, "page-removed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_page_reordered (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Notebook, void (Widget *, unsigned)>::_peel_connect_by_name (this, "page-reordered", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_page_reordered (HandlerObject *object, void (HandlerObject::*handler_method) (Notebook *, Widget *, unsigned), bool after = false) noexcept
  {
    return Signal<Notebook, void (Widget *, unsigned)>::_peel_connect_by_name (this, "page-reordered", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_reorder_tab (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Notebook, bool (DirectionType, bool)>::_peel_connect_by_name (this, "reorder-tab", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_reorder_tab (HandlerObject *object, bool (HandlerObject::*handler_method) (Notebook *, DirectionType, bool), bool after = false) noexcept
  {
    return Signal<Notebook, bool (DirectionType, bool)>::_peel_connect_by_name (this, "reorder-tab", object, handler_method, after);
  }

  bool
  emit_reorder_tab (DirectionType direction, bool move_to_last) noexcept
  {
    return Signal<Notebook, bool (DirectionType, bool)>::_peel_emit_by_name (this, "reorder-tab", direction, move_to_last);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_select_page (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Notebook, bool (bool)>::_peel_connect_by_name (this, "select-page", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_select_page (HandlerObject *object, bool (HandlerObject::*handler_method) (Notebook *, bool), bool after = false) noexcept
  {
    return Signal<Notebook, bool (bool)>::_peel_connect_by_name (this, "select-page", object, handler_method, after);
  }

  bool
  emit_select_page (bool move_focus) noexcept
  {
    return Signal<Notebook, bool (bool)>::_peel_emit_by_name (this, "select-page", move_focus);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_switch_page (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Notebook, void (Widget *, unsigned)>::_peel_connect_by_name (this, "switch-page", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_switch_page (HandlerObject *object, void (HandlerObject::*handler_method) (Notebook *, Widget *, unsigned), bool after = false) noexcept
  {
    return Signal<Notebook, void (Widget *, unsigned)>::_peel_connect_by_name (this, "switch-page", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_enable_popup ()
  {
    return peel::Property<bool> { "enable-popup" };
  }

  static peel::Property<const char *>
  prop_group_name ()
  {
    return peel::Property<const char *> { "group-name" };
  }

  static peel::Property<int>
  prop_page ()
  {
    return peel::Property<int> { "page" };
  }

  static peel::Property<Gio::ListModel>
  prop_pages ()
  {
    return peel::Property<Gio::ListModel> { "pages" };
  }

  static peel::Property<bool>
  prop_scrollable ()
  {
    return peel::Property<bool> { "scrollable" };
  }

  static peel::Property<bool>
  prop_show_border ()
  {
    return peel::Property<bool> { "show-border" };
  }

  static peel::Property<bool>
  prop_show_tabs ()
  {
    return peel::Property<bool> { "show-tabs" };
  }

  static peel::Property<PositionType>
  prop_tab_pos ()
  {
    return peel::Property<PositionType> { "tab-pos" };
  }
}; /* class Notebook */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/ListModel.h>
