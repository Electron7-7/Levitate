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
namespace Gtk
{
class Application;
class ApplicationWindow;
class ShortcutsWindow;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ApplicationWindow> ()
{
  return gtk_application_window_get_type ();
}


namespace Gtk
{
class ApplicationWindow : public Window
/* implements Gio::ActionGroup, Gio::ActionMap, Accessible, Buildable, Constraint::Target, Native, Root, ShortcutManager */
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

  ApplicationWindow () = delete;
  ApplicationWindow (const ApplicationWindow &) = delete;
  ApplicationWindow (ApplicationWindow &&) = delete;
  ApplicationWindow &
  operator = (const ApplicationWindow &) = delete;
  ApplicationWindow &
  operator = (ApplicationWindow &&) = delete;
protected:
  ~ApplicationWindow () = default;
public:

  peel_nonnull_args (1) peel_returns_nonnull
  static ApplicationWindow *
  create (Application *application) noexcept
  {
    ::GtkApplication *_peel_application = reinterpret_cast<::GtkApplication *> (application);
    ::GtkWidget *_peel_return = gtk_application_window_new (_peel_application);
    peel_assume (_peel_return);
    return reinterpret_cast<ApplicationWindow *> (_peel_return);
  }

  ShortcutsWindow *
  get_help_overlay () noexcept
  {
    ::GtkApplicationWindow *_peel_this = reinterpret_cast<::GtkApplicationWindow *> (this);
    ::GtkShortcutsWindow *_peel_return = gtk_application_window_get_help_overlay (_peel_this);
    return reinterpret_cast<ShortcutsWindow *> (_peel_return);
  }

  unsigned
  get_id () noexcept
  {
    ::GtkApplicationWindow *_peel_this = reinterpret_cast<::GtkApplicationWindow *> (this);
    return gtk_application_window_get_id (_peel_this);
  }

  bool
  get_show_menubar () noexcept
  {
    ::GtkApplicationWindow *_peel_this = reinterpret_cast<::GtkApplicationWindow *> (this);
    gboolean _peel_return = gtk_application_window_get_show_menubar (_peel_this);
    return !!_peel_return;
  }

  void
  set_help_overlay (ShortcutsWindow *help_overlay) noexcept
  {
    ::GtkApplicationWindow *_peel_this = reinterpret_cast<::GtkApplicationWindow *> (this);
    ::GtkShortcutsWindow *_peel_help_overlay = reinterpret_cast<::GtkShortcutsWindow *> (help_overlay);
    gtk_application_window_set_help_overlay (_peel_this, _peel_help_overlay);
  }

  void
  set_show_menubar (bool show_menubar) noexcept
  {
    ::GtkApplicationWindow *_peel_this = reinterpret_cast<::GtkApplicationWindow *> (this);
    gboolean _peel_show_menubar = static_cast<gboolean> (show_menubar);
    gtk_application_window_set_show_menubar (_peel_this, _peel_show_menubar);
  }

  static peel::Property<bool>
  prop_show_menubar ()
  {
    return peel::Property<bool> { "show-menubar" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<ApplicationWindow> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public Window::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkApplicationWindowClass) - sizeof (Window::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GtkApplicationWindowClass),
                 "ApplicationWindow::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkApplicationWindowClass),
                 "ApplicationWindow::Class align mismatch");
}; /* class ApplicationWindow */

static_assert (sizeof (ApplicationWindow) == sizeof (::GtkApplicationWindow),
               "ApplicationWindow size mismatch");
static_assert (alignof (ApplicationWindow) == alignof (::GtkApplicationWindow),
               "ApplicationWindow align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
