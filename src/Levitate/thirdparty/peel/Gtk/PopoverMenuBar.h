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
class PopoverMenuBar;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PopoverMenuBar> ()
{
  return gtk_popover_menu_bar_get_type ();
}


namespace Gtk
{
class PopoverMenuBar : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PopoverMenuBar () = delete;
  PopoverMenuBar (const PopoverMenuBar &) = delete;
  PopoverMenuBar (PopoverMenuBar &&) = delete;
  PopoverMenuBar &
  operator = (const PopoverMenuBar &) = delete;
  PopoverMenuBar &
  operator = (PopoverMenuBar &&) = delete;
  ~PopoverMenuBar () = delete;
public:

  static peel::FloatPtr<PopoverMenuBar>
  create_from_model (Gio::MenuModel *model) noexcept
  {
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    ::GtkWidget *_peel_return = gtk_popover_menu_bar_new_from_model (_peel_model);
    peel_assume (_peel_return);
    return peel::FloatPtr<PopoverMenuBar> (reinterpret_cast<PopoverMenuBar *> (_peel_return));
  }

  peel_nonnull_args (2, 3)
  bool
  add_child (Widget *child, const char *id) noexcept
  {
    ::GtkPopoverMenuBar *_peel_this = reinterpret_cast<::GtkPopoverMenuBar *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gboolean _peel_return = gtk_popover_menu_bar_add_child (_peel_this, _peel_child, id);
    return !!_peel_return;
  }

  Gio::MenuModel *
  get_menu_model () noexcept
  {
    ::GtkPopoverMenuBar *_peel_this = reinterpret_cast<::GtkPopoverMenuBar *> (this);
    ::GMenuModel *_peel_return = gtk_popover_menu_bar_get_menu_model (_peel_this);
    return reinterpret_cast<Gio::MenuModel *> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  remove_child (Widget *child) noexcept
  {
    ::GtkPopoverMenuBar *_peel_this = reinterpret_cast<::GtkPopoverMenuBar *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gboolean _peel_return = gtk_popover_menu_bar_remove_child (_peel_this, _peel_child);
    return !!_peel_return;
  }

  void
  set_menu_model (Gio::MenuModel *model) noexcept
  {
    ::GtkPopoverMenuBar *_peel_this = reinterpret_cast<::GtkPopoverMenuBar *> (this);
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    gtk_popover_menu_bar_set_menu_model (_peel_this, _peel_model);
  }

  static peel::Property<Gio::MenuModel>
  prop_menu_model ()
  {
    return peel::Property<Gio::MenuModel> { "menu-model" };
  }
}; /* class PopoverMenuBar */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
