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
#include <peel/Gtk/Window.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ ListModel;
} /* namespace Gio */

namespace Gtk
{
class Assistant;
class AssistantPage;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Assistant> ()
{
  return gtk_assistant_get_type ();
}


namespace Gtk
{
class Assistant : public Window
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Native, Root, ShortcutManager */
{
private:
  using Window::get_default_icon_name;
  using Window::get_toplevels;
  using Window::list_toplevels;
  using Window::set_auto_startup_notification;
  using Window::set_default_icon_name;
  using Window::set_interactive_debugging;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Assistant () = delete;
  Assistant (const Assistant &) = delete;
  Assistant (Assistant &&) = delete;
  Assistant &
  operator = (const Assistant &) = delete;
  Assistant &
  operator = (Assistant &&) = delete;
  ~Assistant () = delete;
public:
  enum class PageType : std::underlying_type<::GtkAssistantPageType>::type;

  peel_returns_nonnull
  static Assistant *
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_assistant_new ();
    peel_assume (_peel_return);
    return reinterpret_cast<Assistant *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  add_action_widget (Widget *child) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_assistant_add_action_widget (_peel_this, _peel_child);
  }

  peel_nonnull_args (2)
  int
  append_page (Widget *page) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_page = reinterpret_cast<::GtkWidget *> (page);
    return gtk_assistant_append_page (_peel_this, _peel_page);
  }

  void
  commit () noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    gtk_assistant_commit (_peel_this);
  }

  int
  get_current_page () noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    return gtk_assistant_get_current_page (_peel_this);
  }

  int
  get_n_pages () noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    return gtk_assistant_get_n_pages (_peel_this);
  }

  Widget *
  get_nth_page (int page_num) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_return = gtk_assistant_get_nth_page (_peel_this, page_num);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  peel_nonnull_args (2) peel_returns_nonnull
  AssistantPage *
  get_page (Widget *child) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkAssistantPage *_peel_return = gtk_assistant_get_page (_peel_this, _peel_child);
    peel_assume (_peel_return);
    return reinterpret_cast<AssistantPage *> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  get_page_complete (Widget *page) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_page = reinterpret_cast<::GtkWidget *> (page);
    gboolean _peel_return = gtk_assistant_get_page_complete (_peel_this, _peel_page);
    return !!_peel_return;
  }

  peel_nonnull_args (2) peel_returns_nonnull
  const char *
  get_page_title (Widget *page) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_page = reinterpret_cast<::GtkWidget *> (page);
    return gtk_assistant_get_page_title (_peel_this, _peel_page);
  }

  peel_nonnull_args (2)
  Assistant::PageType
  get_page_type (Widget *page) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_page = reinterpret_cast<::GtkWidget *> (page);
    ::GtkAssistantPageType _peel_return = gtk_assistant_get_page_type (_peel_this, _peel_page);
    return static_cast<Assistant::PageType> (_peel_return);
  }

  peel::RefPtr<Gio::ListModel>
  get_pages () noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GListModel *_peel_return = gtk_assistant_get_pages (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Gio::ListModel>::adopt_ref (reinterpret_cast<Gio::ListModel *> (_peel_return));
  }

  peel_nonnull_args (2)
  int
  insert_page (Widget *page, int position) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_page = reinterpret_cast<::GtkWidget *> (page);
    return gtk_assistant_insert_page (_peel_this, _peel_page, position);
  }

  void
  next_page () noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    gtk_assistant_next_page (_peel_this);
  }

  peel_nonnull_args (2)
  int
  prepend_page (Widget *page) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_page = reinterpret_cast<::GtkWidget *> (page);
    return gtk_assistant_prepend_page (_peel_this, _peel_page);
  }

  void
  previous_page () noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    gtk_assistant_previous_page (_peel_this);
  }

  peel_nonnull_args (2)
  void
  remove_action_widget (Widget *child) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_assistant_remove_action_widget (_peel_this, _peel_child);
  }

  void
  remove_page (int page_num) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    gtk_assistant_remove_page (_peel_this, page_num);
  }

  void
  set_current_page (int page_num) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    gtk_assistant_set_current_page (_peel_this, page_num);
  }

  template<typename AssistantPageFunc>
  void
  set_forward_page_func (AssistantPageFunc &&page_func) noexcept
  {
    gpointer _peel_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkAssistantPageFunc _peel_page_func = peel::internals::CallbackHelper<int, int>::wrap_notified_callback (
      static_cast<AssistantPageFunc &&> (page_func),
      [] (int current_page, gpointer data) -> int
      {
        AssistantPageFunc &_peel_captured_page_func = *reinterpret_cast<typename std::remove_reference<AssistantPageFunc>::type *> (data);
        return peel::internals::invoke_if_nonnull<int> (_peel_captured_page_func) (current_page);
      },
      &_peel_data, &_peel_destroy, peel::internals::is_const_invocable<AssistantPageFunc, void, int>::value);
    gtk_assistant_set_forward_page_func (_peel_this, _peel_page_func, _peel_data, _peel_destroy);
  }

  peel_nonnull_args (2)
  void
  set_page_complete (Widget *page, bool complete) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_page = reinterpret_cast<::GtkWidget *> (page);
    gboolean _peel_complete = static_cast<gboolean> (complete);
    gtk_assistant_set_page_complete (_peel_this, _peel_page, _peel_complete);
  }

  peel_nonnull_args (2, 3)
  void
  set_page_title (Widget *page, const char *title) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_page = reinterpret_cast<::GtkWidget *> (page);
    gtk_assistant_set_page_title (_peel_this, _peel_page, title);
  }

  peel_nonnull_args (2)
  void
  set_page_type (Widget *page, Assistant::PageType type) noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    ::GtkWidget *_peel_page = reinterpret_cast<::GtkWidget *> (page);
    ::GtkAssistantPageType _peel_type = static_cast<::GtkAssistantPageType> (type);
    gtk_assistant_set_page_type (_peel_this, _peel_page, _peel_type);
  }

  void
  update_buttons_state () noexcept
  {
    ::GtkAssistant *_peel_this = reinterpret_cast<::GtkAssistant *> (this);
    gtk_assistant_update_buttons_state (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_apply (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Assistant, void ()>::_peel_connect_by_name (this, "apply", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_apply (HandlerObject *object, void (HandlerObject::*handler_method) (Assistant *), bool after = false) noexcept
  {
    return Signal<Assistant, void ()>::_peel_connect_by_name (this, "apply", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_cancel (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Assistant, void ()>::_peel_connect_by_name (this, "cancel", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_cancel (HandlerObject *object, void (HandlerObject::*handler_method) (Assistant *), bool after = false) noexcept
  {
    return Signal<Assistant, void ()>::_peel_connect_by_name (this, "cancel", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_close (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Assistant, void ()>::_peel_connect_by_name (this, "close", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_close (HandlerObject *object, void (HandlerObject::*handler_method) (Assistant *), bool after = false) noexcept
  {
    return Signal<Assistant, void ()>::_peel_connect_by_name (this, "close", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_escape (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Assistant, void ()>::_peel_connect_by_name (this, "escape", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_escape (HandlerObject *object, void (HandlerObject::*handler_method) (Assistant *), bool after = false) noexcept
  {
    return Signal<Assistant, void ()>::_peel_connect_by_name (this, "escape", object, handler_method, after);
  }

  void
  emit_escape () noexcept
  {
    return Signal<Assistant, void ()>::_peel_emit_by_name (this, "escape");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_prepare (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Assistant, void (Widget *)>::_peel_connect_by_name (this, "prepare", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_prepare (HandlerObject *object, void (HandlerObject::*handler_method) (Assistant *, Widget *), bool after = false) noexcept
  {
    return Signal<Assistant, void (Widget *)>::_peel_connect_by_name (this, "prepare", object, handler_method, after);
  }

  static peel::Property<Gio::ListModel>
  prop_pages ()
  {
    return peel::Property<Gio::ListModel> { "pages" };
  }

  static peel::Property<int>
  prop_use_header_bar ()
  {
    return peel::Property<int> { "use-header-bar" };
  }
}; /* class Assistant */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/ListModel.h>
