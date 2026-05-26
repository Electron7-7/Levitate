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
#include <peel/Gtk/Popover.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class MenuModel;
} /* namespace Gio */

namespace Gtk
{
class PopoverMenu;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PopoverMenu> ()
{
  return gtk_popover_menu_get_type ();
}


namespace Gtk
{
class PopoverMenu : public Popover
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Native, ShortcutManager */
{
private:
  using Popover::create;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PopoverMenu () = delete;
  PopoverMenu (const PopoverMenu &) = delete;
  PopoverMenu (PopoverMenu &&) = delete;
  PopoverMenu &
  operator = (const PopoverMenu &) = delete;
  PopoverMenu &
  operator = (PopoverMenu &&) = delete;
  ~PopoverMenu () = delete;
public:
  enum class Flags : std::underlying_type<::GtkPopoverMenuFlags>::type;

  static peel::FloatPtr<PopoverMenu>
  create_from_model (Gio::MenuModel *model) noexcept
  {
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    ::GtkWidget *_peel_return = gtk_popover_menu_new_from_model (_peel_model);
    peel_assume (_peel_return);
    return peel::FloatPtr<PopoverMenu> (reinterpret_cast<PopoverMenu *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<PopoverMenu>
  create_from_model_full (Gio::MenuModel *model, PopoverMenu::Flags flags) noexcept
  {
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    ::GtkPopoverMenuFlags _peel_flags = static_cast<::GtkPopoverMenuFlags> (flags);
    ::GtkWidget *_peel_return = gtk_popover_menu_new_from_model_full (_peel_model, _peel_flags);
    peel_assume (_peel_return);
    return peel::FloatPtr<PopoverMenu> (reinterpret_cast<PopoverMenu *> (_peel_return));
  }

  peel_nonnull_args (2, 3)
  bool
  add_child (Widget *child, const char *id) noexcept
  {
    ::GtkPopoverMenu *_peel_this = reinterpret_cast<::GtkPopoverMenu *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gboolean _peel_return = gtk_popover_menu_add_child (_peel_this, _peel_child, id);
    return !!_peel_return;
  }

  PopoverMenu::Flags
  get_flags () noexcept
  {
    ::GtkPopoverMenu *_peel_this = reinterpret_cast<::GtkPopoverMenu *> (this);
    ::GtkPopoverMenuFlags _peel_return = gtk_popover_menu_get_flags (_peel_this);
    return static_cast<PopoverMenu::Flags> (_peel_return);
  }

  Gio::MenuModel *
  get_menu_model () noexcept
  {
    ::GtkPopoverMenu *_peel_this = reinterpret_cast<::GtkPopoverMenu *> (this);
    ::GMenuModel *_peel_return = gtk_popover_menu_get_menu_model (_peel_this);
    return reinterpret_cast<Gio::MenuModel *> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  remove_child (Widget *child) noexcept
  {
    ::GtkPopoverMenu *_peel_this = reinterpret_cast<::GtkPopoverMenu *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gboolean _peel_return = gtk_popover_menu_remove_child (_peel_this, _peel_child);
    return !!_peel_return;
  }

  void
  set_flags (PopoverMenu::Flags flags) noexcept
  {
    ::GtkPopoverMenu *_peel_this = reinterpret_cast<::GtkPopoverMenu *> (this);
    ::GtkPopoverMenuFlags _peel_flags = static_cast<::GtkPopoverMenuFlags> (flags);
    gtk_popover_menu_set_flags (_peel_this, _peel_flags);
  }

  void
  set_menu_model (Gio::MenuModel *model) noexcept
  {
    ::GtkPopoverMenu *_peel_this = reinterpret_cast<::GtkPopoverMenu *> (this);
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    gtk_popover_menu_set_menu_model (_peel_this, _peel_model);
  }

  static peel::Property<PopoverMenu::Flags>
  prop_flags ()
  {
    return peel::Property<PopoverMenu::Flags> { "flags" };
  }

  static peel::Property<Gio::MenuModel>
  prop_menu_model ()
  {
    return peel::Property<Gio::MenuModel> { "menu-model" };
  }

  static peel::Property<const char *>
  prop_visible_submenu ()
  {
    return peel::Property<const char *> { "visible-submenu" };
  }
}; /* class PopoverMenu */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
