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
#include <peel/Gtk/Root.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Display;
class Monitor;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ ListModel;
} /* namespace Gio */

namespace Gtk
{
class Application;
class Widget;
class Window;
class WindowGroup;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Window> ()
{
  return gtk_window_get_type ();
}
template<typename T>
struct GObject::Object::Traits<T, peel::enable_if_derived<Gtk::Window, T, void>>
{
  typedef T *CreateType;

  static CreateType
  created (::GObject *obj)
  {
    return reinterpret_cast<T *> (obj);
  }
};


namespace Gtk
{
class Window : public Root
/* extends Widget */
/* implements Accessible, Buildable, Constraint::Target, Native, Root, ShortcutManager */
{
private:
  using Root::get_default_direction;
  using Root::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Window () = delete;
  Window (const Window &) = delete;
  Window (Window &&) = delete;
  Window &
  operator = (const Window &) = delete;
  Window &
  operator = (Window &&) = delete;
protected:
  ~Window () = default;
public:
  enum class Gravity : std::underlying_type<::GtkWindowGravity>::type;

  peel_returns_nonnull
  static Window *
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_window_new ();
    peel_assume (_peel_return);
    return reinterpret_cast<Window *> (_peel_return);
  }

  static const char *
  get_default_icon_name () noexcept
  {
    return gtk_window_get_default_icon_name ();
  }

  peel_returns_nonnull
  static Gio::ListModel *
  get_toplevels () noexcept
  {
    ::GListModel *_peel_return = gtk_window_get_toplevels ();
    peel_assume (_peel_return);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  static GLib::List<Widget *>
  list_toplevels () noexcept
  {
    GList *_peel_return = gtk_window_list_toplevels ();
    return GLib::List<Widget *>::adopt_list (_peel_return);
  }

  static void
  set_auto_startup_notification (bool setting) noexcept
  {
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_window_set_auto_startup_notification (_peel_setting);
  }

  peel_nonnull_args (1)
  static void
  set_default_icon_name (const char *name) noexcept
  {
    gtk_window_set_default_icon_name (name);
  }

  static void
  set_interactive_debugging (bool enable) noexcept
  {
    gboolean _peel_enable = static_cast<gboolean> (enable);
    gtk_window_set_interactive_debugging (_peel_enable);
  }

  void
  close () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_close (_peel_this);
  }

  void
  destroy () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_destroy (_peel_this);
  }

  void
  fullscreen () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_fullscreen (_peel_this);
  }

  peel_nonnull_args (2)
  void
  fullscreen_on_monitor (Gdk::Monitor *monitor) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GdkMonitor *_peel_monitor = reinterpret_cast<::GdkMonitor *> (monitor);
    gtk_window_fullscreen_on_monitor (_peel_this, _peel_monitor);
  }

  Application *
  get_application () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkApplication *_peel_return = gtk_window_get_application (_peel_this);
    return reinterpret_cast<Application *> (_peel_return);
  }

  Widget *
  get_child () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWidget *_peel_return = gtk_window_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_decorated () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_get_decorated (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_default_size (int *width, int *height) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_get_default_size (_peel_this, width, height);
  }

  Widget *
  get_default_widget () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWidget *_peel_return = gtk_window_get_default_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_deletable () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_get_deletable (_peel_this);
    return !!_peel_return;
  }

  bool
  get_destroy_with_parent () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_get_destroy_with_parent (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_focus () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWidget *_peel_return = gtk_window_get_focus (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_focus_visible () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_get_focus_visible (_peel_this);
    return !!_peel_return;
  }

  Window::Gravity
  get_gravity () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWindowGravity _peel_return = gtk_window_get_gravity (_peel_this);
    return static_cast<Window::Gravity> (_peel_return);
  }

  peel_returns_nonnull
  WindowGroup *
  get_group () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWindowGroup *_peel_return = gtk_window_get_group (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<WindowGroup *> (_peel_return);
  }

  bool
  get_handle_menubar_accel () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_get_handle_menubar_accel (_peel_this);
    return !!_peel_return;
  }

  bool
  get_hide_on_close () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_get_hide_on_close (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_icon_name () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    return gtk_window_get_icon_name (_peel_this);
  }

  bool
  get_mnemonics_visible () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_get_mnemonics_visible (_peel_this);
    return !!_peel_return;
  }

  bool
  get_modal () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_get_modal (_peel_this);
    return !!_peel_return;
  }

  bool
  get_resizable () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_get_resizable (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_title () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    return gtk_window_get_title (_peel_this);
  }

  Widget *
  get_titlebar () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWidget *_peel_return = gtk_window_get_titlebar (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  Window *
  get_transient_for () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWindow *_peel_return = gtk_window_get_transient_for (_peel_this);
    return reinterpret_cast<Window *> (_peel_return);
  }

  bool
  has_group () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_has_group (_peel_this);
    return !!_peel_return;
  }

  bool
  is_active () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_is_active (_peel_this);
    return !!_peel_return;
  }

  bool
  is_fullscreen () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_is_fullscreen (_peel_this);
    return !!_peel_return;
  }

  bool
  is_maximized () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_is_maximized (_peel_this);
    return !!_peel_return;
  }

  bool
  is_suspended () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = gtk_window_is_suspended (_peel_this);
    return !!_peel_return;
  }

  void
  maximize () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_maximize (_peel_this);
  }

  void
  minimize () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_minimize (_peel_this);
  }

  void
  present () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_present (_peel_this);
  }

  void
  present_with_time (uint32_t timestamp) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_present_with_time (_peel_this, timestamp);
  }

  void
  set_application (Application *application) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkApplication *_peel_application = reinterpret_cast<::GtkApplication *> (application);
    gtk_window_set_application (_peel_this, _peel_application);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_window_set_child (_peel_this, _peel_child);
  }

  void
  set_decorated (bool setting) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_window_set_decorated (_peel_this, _peel_setting);
  }

  void
  set_default_size (int width, int height) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_set_default_size (_peel_this, width, height);
  }

  void
  set_default_widget (Widget *default_widget) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWidget *_peel_default_widget = reinterpret_cast<::GtkWidget *> (default_widget);
    gtk_window_set_default_widget (_peel_this, _peel_default_widget);
  }

  void
  set_deletable (bool setting) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_window_set_deletable (_peel_this, _peel_setting);
  }

  void
  set_destroy_with_parent (bool setting) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_window_set_destroy_with_parent (_peel_this, _peel_setting);
  }

  peel_nonnull_args (2)
  void
  set_display (Gdk::Display *display) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    gtk_window_set_display (_peel_this, _peel_display);
  }

  void
  set_focus (Widget *focus) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWidget *_peel_focus = reinterpret_cast<::GtkWidget *> (focus);
    gtk_window_set_focus (_peel_this, _peel_focus);
  }

  void
  set_focus_visible (bool setting) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_window_set_focus_visible (_peel_this, _peel_setting);
  }

  void
  set_gravity (Window::Gravity gravity) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWindowGravity _peel_gravity = static_cast<::GtkWindowGravity> (gravity);
    gtk_window_set_gravity (_peel_this, _peel_gravity);
  }

  void
  set_handle_menubar_accel (bool handle_menubar_accel) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_handle_menubar_accel = static_cast<gboolean> (handle_menubar_accel);
    gtk_window_set_handle_menubar_accel (_peel_this, _peel_handle_menubar_accel);
  }

  void
  set_hide_on_close (bool setting) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_window_set_hide_on_close (_peel_this, _peel_setting);
  }

  void
  set_icon_name (const char *name) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_set_icon_name (_peel_this, name);
  }

  void
  set_mnemonics_visible (bool setting) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_window_set_mnemonics_visible (_peel_this, _peel_setting);
  }

  void
  set_modal (bool modal) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_modal = static_cast<gboolean> (modal);
    gtk_window_set_modal (_peel_this, _peel_modal);
  }

  void
  set_resizable (bool resizable) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_resizable = static_cast<gboolean> (resizable);
    gtk_window_set_resizable (_peel_this, _peel_resizable);
  }

  peel_nonnull_args (2)
  void
  set_startup_id (const char *startup_id) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_set_startup_id (_peel_this, startup_id);
  }

  void
  set_title (const char *title) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_set_title (_peel_this, title);
  }

  void
  set_titlebar (peel::FloatPtr<Widget> titlebar) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWidget *_peel_titlebar = reinterpret_cast<::GtkWidget *> (std::move (titlebar).release_floating_ptr ());
    gtk_window_set_titlebar (_peel_this, _peel_titlebar);
  }

  void
  set_transient_for (Window *parent) noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    gtk_window_set_transient_for (_peel_this, _peel_parent);
  }

  void
  unfullscreen () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_unfullscreen (_peel_this);
  }

  void
  unmaximize () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_unmaximize (_peel_this);
  }

  void
  unminimize () noexcept
  {
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gtk_window_unminimize (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate_default (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Window, void ()>::_peel_connect_by_name (this, "activate-default", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate_default (HandlerObject *object, void (HandlerObject::*handler_method) (Window *), bool after = false) noexcept
  {
    return Signal<Window, void ()>::_peel_connect_by_name (this, "activate-default", object, handler_method, after);
  }

  void
  emit_activate_default () noexcept
  {
    return Signal<Window, void ()>::_peel_emit_by_name (this, "activate-default");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate_focus (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Window, void ()>::_peel_connect_by_name (this, "activate-focus", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate_focus (HandlerObject *object, void (HandlerObject::*handler_method) (Window *), bool after = false) noexcept
  {
    return Signal<Window, void ()>::_peel_connect_by_name (this, "activate-focus", object, handler_method, after);
  }

  void
  emit_activate_focus () noexcept
  {
    return Signal<Window, void ()>::_peel_emit_by_name (this, "activate-focus");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_close_request (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Window, bool ()>::_peel_connect_by_name (this, "close-request", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_close_request (HandlerObject *object, bool (HandlerObject::*handler_method) (Window *), bool after = false) noexcept
  {
    return Signal<Window, bool ()>::_peel_connect_by_name (this, "close-request", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_enable_debugging (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Window, bool (bool)>::_peel_connect_by_name (this, "enable-debugging", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_enable_debugging (HandlerObject *object, bool (HandlerObject::*handler_method) (Window *, bool), bool after = false) noexcept
  {
    return Signal<Window, bool (bool)>::_peel_connect_by_name (this, "enable-debugging", object, handler_method, after);
  }

  bool
  emit_enable_debugging (bool toggle) noexcept
  {
    return Signal<Window, bool (bool)>::_peel_emit_by_name (this, "enable-debugging", toggle);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_keys_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Window, void ()>::_peel_connect_by_name (this, "keys-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_keys_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Window *), bool after = false) noexcept
  {
    return Signal<Window, void ()>::_peel_connect_by_name (this, "keys-changed", object, handler_method, after);
  }

  static peel::Property<Application>
  prop_application ()
  {
    return peel::Property<Application> { "application" };
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_decorated ()
  {
    return peel::Property<bool> { "decorated" };
  }

  static peel::Property<int>
  prop_default_height ()
  {
    return peel::Property<int> { "default-height" };
  }

  static peel::Property<Widget>
  prop_default_widget ()
  {
    return peel::Property<Widget> { "default-widget" };
  }

  static peel::Property<int>
  prop_default_width ()
  {
    return peel::Property<int> { "default-width" };
  }

  static peel::Property<bool>
  prop_deletable ()
  {
    return peel::Property<bool> { "deletable" };
  }

  static peel::Property<bool>
  prop_destroy_with_parent ()
  {
    return peel::Property<bool> { "destroy-with-parent" };
  }

  static peel::Property<Gdk::Display>
  prop_display ()
  {
    return peel::Property<Gdk::Display> { "display" };
  }

  static peel::Property<bool>
  prop_focus_visible ()
  {
    return peel::Property<bool> { "focus-visible" };
  }

  static peel::Property<Widget>
  prop_focus_widget ()
  {
    return peel::Property<Widget> { "focus-widget" };
  }

  static peel::Property<bool>
  prop_fullscreened ()
  {
    return peel::Property<bool> { "fullscreened" };
  }

  static peel::Property<Window::Gravity>
  prop_gravity ()
  {
    return peel::Property<Window::Gravity> { "gravity" };
  }

  static peel::Property<bool>
  prop_handle_menubar_accel ()
  {
    return peel::Property<bool> { "handle-menubar-accel" };
  }

  static peel::Property<bool>
  prop_hide_on_close ()
  {
    return peel::Property<bool> { "hide-on-close" };
  }

  static peel::Property<const char *>
  prop_icon_name ()
  {
    return peel::Property<const char *> { "icon-name" };
  }

  static peel::Property<bool>
  prop_is_active ()
  {
    return peel::Property<bool> { "is-active" };
  }

  static peel::Property<bool>
  prop_maximized ()
  {
    return peel::Property<bool> { "maximized" };
  }

  static peel::Property<bool>
  prop_mnemonics_visible ()
  {
    return peel::Property<bool> { "mnemonics-visible" };
  }

  static peel::Property<bool>
  prop_modal ()
  {
    return peel::Property<bool> { "modal" };
  }

  static peel::Property<bool>
  prop_resizable ()
  {
    return peel::Property<bool> { "resizable" };
  }

  static peel::Property<const char *>
  prop_startup_id ()
  {
    return peel::Property<const char *> { "startup-id" };
  }

  static peel::Property<bool>
  prop_suspended ()
  {
    return peel::Property<bool> { "suspended" };
  }

  static peel::Property<const char *>
  prop_title ()
  {
    return peel::Property<const char *> { "title" };
  }

  static peel::Property<Widget>
  prop_titlebar ()
  {
    return peel::Property<Widget> { "titlebar" };
  }

  static peel::Property<Window>
  prop_transient_for ()
  {
    return peel::Property<Window> { "transient-for" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Window> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_activate_default () noexcept
  {
    ::GtkWindowClass *_peel_class = reinterpret_cast<::GtkWindowClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    _peel_class->activate_default (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_activate_focus () noexcept
  {
    ::GtkWindowClass *_peel_class = reinterpret_cast<::GtkWindowClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    _peel_class->activate_focus (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_close_request () noexcept
  {
    ::GtkWindowClass *_peel_class = reinterpret_cast<::GtkWindowClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_return = _peel_class->close_request (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_enable_debugging (bool toggle) noexcept
  {
    ::GtkWindowClass *_peel_class = reinterpret_cast<::GtkWindowClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    gboolean _peel_toggle = static_cast<gboolean> (toggle);
    gboolean _peel_return = _peel_class->enable_debugging (_peel_this, _peel_toggle);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_keys_changed () noexcept
  {
    ::GtkWindowClass *_peel_class = reinterpret_cast<::GtkWindowClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkWindow *_peel_this = reinterpret_cast<::GtkWindow *> (this);
    _peel_class->keys_changed (_peel_this);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkWindowClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_activate_default ()
    {
      ::GtkWindowClass *klass = reinterpret_cast<::GtkWindowClass *> (this);
      klass->activate_default = +[] (::GtkWindow *window) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (window);
        _peel_this->DerivedClass::vfunc_activate_default ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_activate_focus ()
    {
      ::GtkWindowClass *klass = reinterpret_cast<::GtkWindowClass *> (this);
      klass->activate_focus = +[] (::GtkWindow *window) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (window);
        _peel_this->DerivedClass::vfunc_activate_focus ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_close_request ()
    {
      ::GtkWindowClass *klass = reinterpret_cast<::GtkWindowClass *> (this);
      klass->close_request = +[] (::GtkWindow *window) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (window);
        bool _peel_return = _peel_this->DerivedClass::vfunc_close_request ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_enable_debugging ()
    {
      ::GtkWindowClass *klass = reinterpret_cast<::GtkWindowClass *> (this);
      klass->enable_debugging = +[] (::GtkWindow *window, gboolean toggle) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (window);
        bool _peel_toggle = !!toggle;
        bool _peel_return = _peel_this->DerivedClass::vfunc_enable_debugging (_peel_toggle);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_keys_changed ()
    {
      ::GtkWindowClass *klass = reinterpret_cast<::GtkWindowClass *> (this);
      klass->keys_changed = +[] (::GtkWindow *window) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (window);
        _peel_this->DerivedClass::vfunc_keys_changed ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkWindowClass),
                 "Window::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkWindowClass),
                 "Window::Class align mismatch");
}; /* class Window */

static_assert (sizeof (Window) == sizeof (::GtkWindow),
               "Window size mismatch");
static_assert (alignof (Window) == alignof (::GtkWindow),
               "Window align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Widget.h>
