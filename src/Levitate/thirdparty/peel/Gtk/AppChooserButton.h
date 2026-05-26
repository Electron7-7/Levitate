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
class /* interface */ Icon;
} /* namespace Gio */

namespace Gtk
{
class AppChooserButton;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AppChooserButton> ()
{
  return gtk_app_chooser_button_get_type ();
}


namespace Gtk
{
class AppChooserButton : public AppChooser
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

  AppChooserButton () = delete;
  AppChooserButton (const AppChooserButton &) = delete;
  AppChooserButton (AppChooserButton &&) = delete;
  AppChooserButton &
  operator = (const AppChooserButton &) = delete;
  AppChooserButton &
  operator = (AppChooserButton &&) = delete;
  ~AppChooserButton () = delete;
public:

  peel_nonnull_args (1)
  static peel::FloatPtr<AppChooserButton>
  create (const char *content_type) noexcept
  {
    ::GtkWidget *_peel_return = gtk_app_chooser_button_new (content_type);
    peel_assume (_peel_return);
    return peel::FloatPtr<AppChooserButton> (reinterpret_cast<AppChooserButton *> (_peel_return));
  }

  peel_nonnull_args (2, 3, 4)
  void
  append_custom_item (const char *name, const char *label, Gio::Icon *icon) noexcept
  {
    ::GtkAppChooserButton *_peel_this = reinterpret_cast<::GtkAppChooserButton *> (this);
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    gtk_app_chooser_button_append_custom_item (_peel_this, name, label, _peel_icon);
  }

  void
  append_separator () noexcept
  {
    ::GtkAppChooserButton *_peel_this = reinterpret_cast<::GtkAppChooserButton *> (this);
    gtk_app_chooser_button_append_separator (_peel_this);
  }

  const char *
  get_heading () noexcept
  {
    ::GtkAppChooserButton *_peel_this = reinterpret_cast<::GtkAppChooserButton *> (this);
    return gtk_app_chooser_button_get_heading (_peel_this);
  }

  bool
  get_modal () noexcept
  {
    ::GtkAppChooserButton *_peel_this = reinterpret_cast<::GtkAppChooserButton *> (this);
    gboolean _peel_return = gtk_app_chooser_button_get_modal (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_default_item () noexcept
  {
    ::GtkAppChooserButton *_peel_this = reinterpret_cast<::GtkAppChooserButton *> (this);
    gboolean _peel_return = gtk_app_chooser_button_get_show_default_item (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_dialog_item () noexcept
  {
    ::GtkAppChooserButton *_peel_this = reinterpret_cast<::GtkAppChooserButton *> (this);
    gboolean _peel_return = gtk_app_chooser_button_get_show_dialog_item (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set_active_custom_item (const char *name) noexcept
  {
    ::GtkAppChooserButton *_peel_this = reinterpret_cast<::GtkAppChooserButton *> (this);
    gtk_app_chooser_button_set_active_custom_item (_peel_this, name);
  }

  peel_nonnull_args (2)
  void
  set_heading (const char *heading) noexcept
  {
    ::GtkAppChooserButton *_peel_this = reinterpret_cast<::GtkAppChooserButton *> (this);
    gtk_app_chooser_button_set_heading (_peel_this, heading);
  }

  void
  set_modal (bool modal) noexcept
  {
    ::GtkAppChooserButton *_peel_this = reinterpret_cast<::GtkAppChooserButton *> (this);
    gboolean _peel_modal = static_cast<gboolean> (modal);
    gtk_app_chooser_button_set_modal (_peel_this, _peel_modal);
  }

  void
  set_show_default_item (bool setting) noexcept
  {
    ::GtkAppChooserButton *_peel_this = reinterpret_cast<::GtkAppChooserButton *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_app_chooser_button_set_show_default_item (_peel_this, _peel_setting);
  }

  void
  set_show_dialog_item (bool setting) noexcept
  {
    ::GtkAppChooserButton *_peel_this = reinterpret_cast<::GtkAppChooserButton *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_app_chooser_button_set_show_dialog_item (_peel_this, _peel_setting);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<AppChooserButton, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (AppChooserButton *), bool after = false) noexcept
  {
    return Signal<AppChooserButton, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<AppChooserButton, void ()>::_peel_emit_by_name (this, "activate");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<AppChooserButton, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (AppChooserButton *), bool after = false) noexcept
  {
    return Signal<AppChooserButton, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_custom_item_activated (Handler &&handler, bool after = false) noexcept
  {
    return Signal<AppChooserButton, void (const char *)>::_peel_connect_by_name (this, "custom-item-activated", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_custom_item_activated (HandlerObject *object, void (HandlerObject::*handler_method) (AppChooserButton *, const char *), bool after = false) noexcept
  {
    return Signal<AppChooserButton, void (const char *)>::_peel_connect_by_name (this, "custom-item-activated", object, handler_method, after);
  }
  template<typename Handler>
  peel::SignalConnection::Token
  connect_custom_item_activated (const char *detail, Handler &&handler, bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<AppChooserButton, void (const char *)>::lookup ("custom-item-activated").connect (this, detail_quark, static_cast<Handler &&> (handler), after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_custom_item_activated (GLib::Quark detail, Handler &&handler, bool after = false) noexcept
  {
    return Signal<AppChooserButton, void (const char *)>::lookup ("custom-item-activated").connect (this, detail, static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_custom_item_activated (const char *detail, HandlerObject *object, void (HandlerObject::*handler_method) (AppChooserButton *, const char *), bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<AppChooserButton, void (const char *)>::lookup ("custom-item-activated") .connect (this, detail_quark, object, handler_method, after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_custom_item_activated (GLib::Quark detail, HandlerObject *object, void (HandlerObject::*handler_method) (AppChooserButton *, const char *), bool after = false) noexcept
  {
    return Signal<AppChooserButton, void (const char *)>::lookup ("custom-item-activated") .connect (this, detail, object, handler_method, after);
  }

  static peel::Property<const char *>
  prop_heading ()
  {
    return peel::Property<const char *> { "heading" };
  }

  static peel::Property<bool>
  prop_modal ()
  {
    return peel::Property<bool> { "modal" };
  }

  static peel::Property<bool>
  prop_show_default_item ()
  {
    return peel::Property<bool> { "show-default-item" };
  }

  static peel::Property<bool>
  prop_show_dialog_item ()
  {
    return peel::Property<bool> { "show-dialog-item" };
  }
}; /* class AppChooserButton */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
