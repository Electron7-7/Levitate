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
#include <peel/Gio/Application.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class Menu;
class MenuModel;
} /* namespace Gio */

namespace Gtk
{
class Application;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Application> ()
{
  return gtk_application_get_type ();
}


namespace Gtk
{
class Application : public Gio::Application
/* implements Gio::ActionGroup, Gio::ActionMap */
{
private:
  using Gio::Application::get_default;
  using Gio::Application::id_is_valid;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Application () = delete;
  Application (const Application &) = delete;
  Application (Application &&) = delete;
  Application &
  operator = (const Application &) = delete;
  Application &
  operator = (Application &&) = delete;
protected:
  ~Application () = default;
public:
  enum class InhibitFlags : std::underlying_type<::GtkApplicationInhibitFlags>::type;

  static peel::RefPtr<Application>
  create (const char *application_id, Gio::Application::Flags flags) noexcept
  {
    ::GApplicationFlags _peel_flags = static_cast<::GApplicationFlags> (flags);
    ::GtkApplication *_peel_return = gtk_application_new (application_id, _peel_flags);
    peel_assume (_peel_return);
    return peel::RefPtr<Application>::adopt_ref (reinterpret_cast<Application *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_window (Window *window) noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    ::GtkWindow *_peel_window = reinterpret_cast<::GtkWindow *> (window);
    gtk_application_add_window (_peel_this, _peel_window);
  }

  peel_nonnull_args (2)
  peel::Strv
  get_accels_for_action (const char *detailed_action_name) noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    char **_peel_return = gtk_application_get_accels_for_action (_peel_this, detailed_action_name);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::Strv
  get_actions_for_accel (const char *accel) noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    char **_peel_return = gtk_application_get_actions_for_accel (_peel_this, accel);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  Window *
  get_active_window () noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    ::GtkWindow *_peel_return = gtk_application_get_active_window (_peel_this);
    return reinterpret_cast<Window *> (_peel_return);
  }

  peel_nonnull_args (2)
  Gio::Menu *
  get_menu_by_id (const char *id) noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    ::GMenu *_peel_return = gtk_application_get_menu_by_id (_peel_this, id);
    return reinterpret_cast<Gio::Menu *> (_peel_return);
  }

  Gio::MenuModel *
  get_menubar () noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    ::GMenuModel *_peel_return = gtk_application_get_menubar (_peel_this);
    return reinterpret_cast<Gio::MenuModel *> (_peel_return);
  }

  Window *
  get_window_by_id (unsigned id) noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    ::GtkWindow *_peel_return = gtk_application_get_window_by_id (_peel_this, id);
    return reinterpret_cast<Window *> (_peel_return);
  }

  GLib::ListRef<Window * const>
  get_windows () noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    GList *_peel_return = gtk_application_get_windows (_peel_this);
    return GLib::ListRef<Window * const>::from_raw_list (_peel_return);
  }

  unsigned
  inhibit (Window *window, Application::InhibitFlags flags, const char *reason) noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    ::GtkWindow *_peel_window = reinterpret_cast<::GtkWindow *> (window);
    ::GtkApplicationInhibitFlags _peel_flags = static_cast<::GtkApplicationInhibitFlags> (flags);
    return gtk_application_inhibit (_peel_this, _peel_window, _peel_flags, reason);
  }

  peel::Strv
  list_action_descriptions () noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    char **_peel_return = gtk_application_list_action_descriptions (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  remove_window (Window *window) noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    ::GtkWindow *_peel_window = reinterpret_cast<::GtkWindow *> (window);
    gtk_application_remove_window (_peel_this, _peel_window);
  }

  peel_nonnull_args (2)
  void
  set_accels_for_action (const char *detailed_action_name, peel::StrvRef accels) noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    const char* const *_peel_accels = reinterpret_cast<const char* const *> (accels.data ());
    gtk_application_set_accels_for_action (_peel_this, detailed_action_name, _peel_accels);
  }

  void
  set_menubar (Gio::MenuModel *menubar) noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    ::GMenuModel *_peel_menubar = reinterpret_cast<::GMenuModel *> (menubar);
    gtk_application_set_menubar (_peel_this, _peel_menubar);
  }

  void
  uninhibit (unsigned cookie) noexcept
  {
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    gtk_application_uninhibit (_peel_this, cookie);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_query_end (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Application, void ()>::_peel_connect_by_name (this, "query-end", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_query_end (HandlerObject *object, void (HandlerObject::*handler_method) (Application *), bool after = false) noexcept
  {
    return Signal<Application, void ()>::_peel_connect_by_name (this, "query-end", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_window_added (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Application, void (Window *)>::_peel_connect_by_name (this, "window-added", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_window_added (HandlerObject *object, void (HandlerObject::*handler_method) (Application *, Window *), bool after = false) noexcept
  {
    return Signal<Application, void (Window *)>::_peel_connect_by_name (this, "window-added", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_window_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Application, void (Window *)>::_peel_connect_by_name (this, "window-removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_window_removed (HandlerObject *object, void (HandlerObject::*handler_method) (Application *, Window *), bool after = false) noexcept
  {
    return Signal<Application, void (Window *)>::_peel_connect_by_name (this, "window-removed", object, handler_method, after);
  }

  static peel::Property<Window>
  prop_active_window ()
  {
    return peel::Property<Window> { "active-window" };
  }

  static peel::Property<Gio::MenuModel>
  prop_menubar ()
  {
    return peel::Property<Gio::MenuModel> { "menubar" };
  }

  static peel::Property<bool>
  prop_register_session ()
  {
    return peel::Property<bool> { "register-session" };
  }

  static peel::Property<bool>
  prop_screensaver_active ()
  {
    return peel::Property<bool> { "screensaver-active" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Application> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_window_added (Window *window) noexcept
  {
    ::GtkApplicationClass *_peel_class = reinterpret_cast<::GtkApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    ::GtkWindow *_peel_window = reinterpret_cast<::GtkWindow *> (window);
    _peel_class->window_added (_peel_this, _peel_window);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_window_removed (Window *window) noexcept
  {
    ::GtkApplicationClass *_peel_class = reinterpret_cast<::GtkApplicationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkApplication *_peel_this = reinterpret_cast<::GtkApplication *> (this);
    ::GtkWindow *_peel_window = reinterpret_cast<::GtkWindow *> (window);
    _peel_class->window_removed (_peel_this, _peel_window);
  }

public:
  class Class : public Gio::Application::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkApplicationClass) - sizeof (Gio::Application::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_window_added ()
    {
      ::GtkApplicationClass *klass = reinterpret_cast<::GtkApplicationClass *> (this);
      klass->window_added = +[] (::GtkApplication *application, ::GtkWindow *window) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        Window *_peel_window = reinterpret_cast<Window *> (window);
        _peel_this->DerivedClass::vfunc_window_added (_peel_window);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_window_removed ()
    {
      ::GtkApplicationClass *klass = reinterpret_cast<::GtkApplicationClass *> (this);
      klass->window_removed = +[] (::GtkApplication *application, ::GtkWindow *window) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (application);
        Window *_peel_window = reinterpret_cast<Window *> (window);
        _peel_this->DerivedClass::vfunc_window_removed (_peel_window);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkApplicationClass),
                 "Application::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkApplicationClass),
                 "Application::Class align mismatch");
}; /* class Application */

static_assert (sizeof (Application) == sizeof (::GtkApplication),
               "Application size mismatch");
static_assert (alignof (Application) == alignof (::GtkApplication),
               "Application align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
