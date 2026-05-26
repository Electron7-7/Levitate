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
class MenuModel;
} /* namespace Gio */

namespace Gtk
{
enum class ArrowType : std::underlying_type<::GtkArrowType>::type;
class MenuButton;
class Popover;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::MenuButton> ()
{
  return gtk_menu_button_get_type ();
}


namespace Gtk
{
class MenuButton : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MenuButton () = delete;
  MenuButton (const MenuButton &) = delete;
  MenuButton (MenuButton &&) = delete;
  MenuButton &
  operator = (const MenuButton &) = delete;
  MenuButton &
  operator = (MenuButton &&) = delete;
  ~MenuButton () = delete;
public:

  static peel::FloatPtr<MenuButton>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_menu_button_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<MenuButton> (reinterpret_cast<MenuButton *> (_peel_return));
  }

  bool
  get_active () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gboolean _peel_return = gtk_menu_button_get_active (_peel_this);
    return !!_peel_return;
  }

  bool
  get_always_show_arrow () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gboolean _peel_return = gtk_menu_button_get_always_show_arrow (_peel_this);
    return !!_peel_return;
  }

  bool
  get_can_shrink () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gboolean _peel_return = gtk_menu_button_get_can_shrink (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_child () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    ::GtkWidget *_peel_return = gtk_menu_button_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  ArrowType
  get_direction () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    ::GtkArrowType _peel_return = gtk_menu_button_get_direction (_peel_this);
    return static_cast<ArrowType> (_peel_return);
  }

  bool
  get_has_frame () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gboolean _peel_return = gtk_menu_button_get_has_frame (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_icon_name () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    return gtk_menu_button_get_icon_name (_peel_this);
  }

  const char *
  get_label () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    return gtk_menu_button_get_label (_peel_this);
  }

  Gio::MenuModel *
  get_menu_model () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    ::GMenuModel *_peel_return = gtk_menu_button_get_menu_model (_peel_this);
    return reinterpret_cast<Gio::MenuModel *> (_peel_return);
  }

  Popover *
  get_popover () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    ::GtkPopover *_peel_return = gtk_menu_button_get_popover (_peel_this);
    return reinterpret_cast<Popover *> (_peel_return);
  }

  bool
  get_primary () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gboolean _peel_return = gtk_menu_button_get_primary (_peel_this);
    return !!_peel_return;
  }

  bool
  get_use_underline () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gboolean _peel_return = gtk_menu_button_get_use_underline (_peel_this);
    return !!_peel_return;
  }

  void
  popdown () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gtk_menu_button_popdown (_peel_this);
  }

  void
  popup () noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gtk_menu_button_popup (_peel_this);
  }

  void
  set_active (bool active) noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gboolean _peel_active = static_cast<gboolean> (active);
    gtk_menu_button_set_active (_peel_this, _peel_active);
  }

  void
  set_always_show_arrow (bool always_show_arrow) noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gboolean _peel_always_show_arrow = static_cast<gboolean> (always_show_arrow);
    gtk_menu_button_set_always_show_arrow (_peel_this, _peel_always_show_arrow);
  }

  void
  set_can_shrink (bool can_shrink) noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gboolean _peel_can_shrink = static_cast<gboolean> (can_shrink);
    gtk_menu_button_set_can_shrink (_peel_this, _peel_can_shrink);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_menu_button_set_child (_peel_this, _peel_child);
  }

  template<typename MenuButtonCreatePopupFunc>
  void
  set_create_popup_func (MenuButtonCreatePopupFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy_notify;
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    ::GtkMenuButtonCreatePopupFunc _peel_func = peel::internals::CallbackHelper<void, ::GtkMenuButton *>::wrap_notified_callback (
      static_cast<MenuButtonCreatePopupFunc &&> (func),
      [] (::GtkMenuButton *menu_button, gpointer user_data) -> void
      {
        MenuButtonCreatePopupFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<MenuButtonCreatePopupFunc>::type *> (user_data);
        MenuButton *_peel_menu_button = reinterpret_cast<MenuButton *> (menu_button);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_func) (_peel_menu_button);
      },
      &_peel_user_data, &_peel_destroy_notify, peel::internals::is_const_invocable<MenuButtonCreatePopupFunc, void, MenuButton *>::value);
    gtk_menu_button_set_create_popup_func (_peel_this, _peel_func, _peel_user_data, _peel_destroy_notify);
  }

  void
  set_direction (ArrowType direction) noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    ::GtkArrowType _peel_direction = static_cast<::GtkArrowType> (direction);
    gtk_menu_button_set_direction (_peel_this, _peel_direction);
  }

  void
  set_has_frame (bool has_frame) noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gboolean _peel_has_frame = static_cast<gboolean> (has_frame);
    gtk_menu_button_set_has_frame (_peel_this, _peel_has_frame);
  }

  peel_nonnull_args (2)
  void
  set_icon_name (const char *icon_name) noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gtk_menu_button_set_icon_name (_peel_this, icon_name);
  }

  peel_nonnull_args (2)
  void
  set_label (const char *label) noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gtk_menu_button_set_label (_peel_this, label);
  }

  void
  set_menu_model (Gio::MenuModel *menu_model) noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    ::GMenuModel *_peel_menu_model = reinterpret_cast<::GMenuModel *> (menu_model);
    gtk_menu_button_set_menu_model (_peel_this, _peel_menu_model);
  }

  void
  set_popover (peel::FloatPtr<Popover> popover) noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    ::GtkWidget *_peel_popover = reinterpret_cast<::GtkWidget *> (std::move (popover).release_floating_ptr ());
    gtk_menu_button_set_popover (_peel_this, _peel_popover);
  }

  void
  set_primary (bool primary) noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gboolean _peel_primary = static_cast<gboolean> (primary);
    gtk_menu_button_set_primary (_peel_this, _peel_primary);
  }

  void
  set_use_underline (bool use_underline) noexcept
  {
    ::GtkMenuButton *_peel_this = reinterpret_cast<::GtkMenuButton *> (this);
    gboolean _peel_use_underline = static_cast<gboolean> (use_underline);
    gtk_menu_button_set_use_underline (_peel_this, _peel_use_underline);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<MenuButton, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (MenuButton *), bool after = false) noexcept
  {
    return Signal<MenuButton, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<MenuButton, void ()>::_peel_emit_by_name (this, "activate");
  }

  static peel::Property<bool>
  prop_active ()
  {
    return peel::Property<bool> { "active" };
  }

  static peel::Property<bool>
  prop_always_show_arrow ()
  {
    return peel::Property<bool> { "always-show-arrow" };
  }

  static peel::Property<bool>
  prop_can_shrink ()
  {
    return peel::Property<bool> { "can-shrink" };
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<ArrowType>
  prop_direction ()
  {
    return peel::Property<ArrowType> { "direction" };
  }

  static peel::Property<bool>
  prop_has_frame ()
  {
    return peel::Property<bool> { "has-frame" };
  }

  static peel::Property<const char *>
  prop_icon_name ()
  {
    return peel::Property<const char *> { "icon-name" };
  }

  static peel::Property<const char *>
  prop_label ()
  {
    return peel::Property<const char *> { "label" };
  }

  static peel::Property<Gio::MenuModel>
  prop_menu_model ()
  {
    return peel::Property<Gio::MenuModel> { "menu-model" };
  }

  static peel::Property<Popover>
  prop_popover ()
  {
    return peel::Property<Popover> { "popover" };
  }

  static peel::Property<bool>
  prop_primary ()
  {
    return peel::Property<bool> { "primary" };
  }

  static peel::Property<bool>
  prop_use_underline ()
  {
    return peel::Property<bool> { "use-underline" };
  }
}; /* class MenuButton */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Popover.h>
