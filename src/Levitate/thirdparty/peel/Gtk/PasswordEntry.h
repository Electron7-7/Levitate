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
#include <peel/Gtk/Editable.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class MenuModel;
} /* namespace Gio */

namespace Gtk
{
class PasswordEntry;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PasswordEntry> ()
{
  return gtk_password_entry_get_type ();
}


namespace Gtk
{
class PasswordEntry : public Editable
/* non-derivable */
/* extends Widget */
/* implements Accessible, Buildable, Constraint::Target, Editable */
{
private:
  using Editable::get_default_direction;
  using Editable::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PasswordEntry () = delete;
  PasswordEntry (const PasswordEntry &) = delete;
  PasswordEntry (PasswordEntry &&) = delete;
  PasswordEntry &
  operator = (const PasswordEntry &) = delete;
  PasswordEntry &
  operator = (PasswordEntry &&) = delete;
  ~PasswordEntry () = delete;
public:

  static peel::FloatPtr<PasswordEntry>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_password_entry_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<PasswordEntry> (reinterpret_cast<PasswordEntry *> (_peel_return));
  }

  Gio::MenuModel *
  get_extra_menu () noexcept
  {
    ::GtkPasswordEntry *_peel_this = reinterpret_cast<::GtkPasswordEntry *> (this);
    ::GMenuModel *_peel_return = gtk_password_entry_get_extra_menu (_peel_this);
    return reinterpret_cast<Gio::MenuModel *> (_peel_return);
  }

  bool
  get_show_peek_icon () noexcept
  {
    ::GtkPasswordEntry *_peel_this = reinterpret_cast<::GtkPasswordEntry *> (this);
    gboolean _peel_return = gtk_password_entry_get_show_peek_icon (_peel_this);
    return !!_peel_return;
  }

  void
  set_extra_menu (Gio::MenuModel *model) noexcept
  {
    ::GtkPasswordEntry *_peel_this = reinterpret_cast<::GtkPasswordEntry *> (this);
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    gtk_password_entry_set_extra_menu (_peel_this, _peel_model);
  }

  void
  set_show_peek_icon (bool show_peek_icon) noexcept
  {
    ::GtkPasswordEntry *_peel_this = reinterpret_cast<::GtkPasswordEntry *> (this);
    gboolean _peel_show_peek_icon = static_cast<gboolean> (show_peek_icon);
    gtk_password_entry_set_show_peek_icon (_peel_this, _peel_show_peek_icon);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PasswordEntry, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (PasswordEntry *), bool after = false) noexcept
  {
    return Signal<PasswordEntry, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<PasswordEntry, void ()>::_peel_emit_by_name (this, "activate");
  }

  static peel::Property<bool>
  prop_activates_default ()
  {
    return peel::Property<bool> { "activates-default" };
  }

  static peel::Property<Gio::MenuModel>
  prop_extra_menu ()
  {
    return peel::Property<Gio::MenuModel> { "extra-menu" };
  }

  static peel::Property<const char *>
  prop_placeholder_text ()
  {
    return peel::Property<const char *> { "placeholder-text" };
  }

  static peel::Property<bool>
  prop_show_peek_icon ()
  {
    return peel::Property<bool> { "show-peek-icon" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class PasswordEntry */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
