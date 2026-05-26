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
#include <peel/Gtk/AppChooser.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ AppInfo;
} /* namespace Gio */

namespace Gtk
{
class AppChooserWidget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AppChooserWidget> ()
{
  return gtk_app_chooser_widget_get_type ();
}


namespace Gtk
{
class AppChooserWidget : public AppChooser
/* non-derivable */
/* extends Widget */
/* implements Accessible, AppChooser, Buildable, Constraint::Target */
{
private:
  using AppChooser::get_default_direction;
  using AppChooser::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  AppChooserWidget () = delete;
  AppChooserWidget (const AppChooserWidget &) = delete;
  AppChooserWidget (AppChooserWidget &&) = delete;
  AppChooserWidget &
  operator = (const AppChooserWidget &) = delete;
  AppChooserWidget &
  operator = (AppChooserWidget &&) = delete;
  ~AppChooserWidget () = delete;
public:

  peel_nonnull_args (1)
  static peel::FloatPtr<AppChooserWidget>
  create (const char *content_type) noexcept
  {
    ::GtkWidget *_peel_return = gtk_app_chooser_widget_new (content_type);
    peel_assume (_peel_return);
    return peel::FloatPtr<AppChooserWidget> (reinterpret_cast<AppChooserWidget *> (_peel_return));
  }

  const char *
  get_default_text () noexcept
  {
    ::GtkAppChooserWidget *_peel_this = reinterpret_cast<::GtkAppChooserWidget *> (this);
    return gtk_app_chooser_widget_get_default_text (_peel_this);
  }

  bool
  get_show_all () noexcept
  {
    ::GtkAppChooserWidget *_peel_this = reinterpret_cast<::GtkAppChooserWidget *> (this);
    gboolean _peel_return = gtk_app_chooser_widget_get_show_all (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_default () noexcept
  {
    ::GtkAppChooserWidget *_peel_this = reinterpret_cast<::GtkAppChooserWidget *> (this);
    gboolean _peel_return = gtk_app_chooser_widget_get_show_default (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_fallback () noexcept
  {
    ::GtkAppChooserWidget *_peel_this = reinterpret_cast<::GtkAppChooserWidget *> (this);
    gboolean _peel_return = gtk_app_chooser_widget_get_show_fallback (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_other () noexcept
  {
    ::GtkAppChooserWidget *_peel_this = reinterpret_cast<::GtkAppChooserWidget *> (this);
    gboolean _peel_return = gtk_app_chooser_widget_get_show_other (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_recommended () noexcept
  {
    ::GtkAppChooserWidget *_peel_this = reinterpret_cast<::GtkAppChooserWidget *> (this);
    gboolean _peel_return = gtk_app_chooser_widget_get_show_recommended (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set_default_text (const char *text) noexcept
  {
    ::GtkAppChooserWidget *_peel_this = reinterpret_cast<::GtkAppChooserWidget *> (this);
    gtk_app_chooser_widget_set_default_text (_peel_this, text);
  }

  void
  set_show_all (bool setting) noexcept
  {
    ::GtkAppChooserWidget *_peel_this = reinterpret_cast<::GtkAppChooserWidget *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_app_chooser_widget_set_show_all (_peel_this, _peel_setting);
  }

  void
  set_show_default (bool setting) noexcept
  {
    ::GtkAppChooserWidget *_peel_this = reinterpret_cast<::GtkAppChooserWidget *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_app_chooser_widget_set_show_default (_peel_this, _peel_setting);
  }

  void
  set_show_fallback (bool setting) noexcept
  {
    ::GtkAppChooserWidget *_peel_this = reinterpret_cast<::GtkAppChooserWidget *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_app_chooser_widget_set_show_fallback (_peel_this, _peel_setting);
  }

  void
  set_show_other (bool setting) noexcept
  {
    ::GtkAppChooserWidget *_peel_this = reinterpret_cast<::GtkAppChooserWidget *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_app_chooser_widget_set_show_other (_peel_this, _peel_setting);
  }

  void
  set_show_recommended (bool setting) noexcept
  {
    ::GtkAppChooserWidget *_peel_this = reinterpret_cast<::GtkAppChooserWidget *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_app_chooser_widget_set_show_recommended (_peel_this, _peel_setting);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_application_activated (Handler &&handler, bool after = false) noexcept
  {
    return Signal<AppChooserWidget, void (Gio::AppInfo *)>::_peel_connect_by_name (this, "application-activated", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_application_activated (HandlerObject *object, void (HandlerObject::*handler_method) (AppChooserWidget *, Gio::AppInfo *), bool after = false) noexcept
  {
    return Signal<AppChooserWidget, void (Gio::AppInfo *)>::_peel_connect_by_name (this, "application-activated", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_application_selected (Handler &&handler, bool after = false) noexcept
  {
    return Signal<AppChooserWidget, void (Gio::AppInfo *)>::_peel_connect_by_name (this, "application-selected", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_application_selected (HandlerObject *object, void (HandlerObject::*handler_method) (AppChooserWidget *, Gio::AppInfo *), bool after = false) noexcept
  {
    return Signal<AppChooserWidget, void (Gio::AppInfo *)>::_peel_connect_by_name (this, "application-selected", object, handler_method, after);
  }

  static peel::Property<const char *>
  prop_default_text ()
  {
    return peel::Property<const char *> { "default-text" };
  }

  static peel::Property<bool>
  prop_show_all ()
  {
    return peel::Property<bool> { "show-all" };
  }

  static peel::Property<bool>
  prop_show_default ()
  {
    return peel::Property<bool> { "show-default" };
  }

  static peel::Property<bool>
  prop_show_fallback ()
  {
    return peel::Property<bool> { "show-fallback" };
  }

  static peel::Property<bool>
  prop_show_other ()
  {
    return peel::Property<bool> { "show-other" };
  }

  static peel::Property<bool>
  prop_show_recommended ()
  {
    return peel::Property<bool> { "show-recommended" };
  }
}; /* class AppChooserWidget */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
