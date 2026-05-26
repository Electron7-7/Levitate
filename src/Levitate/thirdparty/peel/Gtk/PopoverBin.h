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
class Popover;
class PopoverBin;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PopoverBin> ()
{
  return gtk_popover_bin_get_type ();
}


namespace Gtk
{
class PopoverBin final : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PopoverBin () = delete;
  PopoverBin (const PopoverBin &) = delete;
  PopoverBin (PopoverBin &&) = delete;
  PopoverBin &
  operator = (const PopoverBin &) = delete;
  PopoverBin &
  operator = (PopoverBin &&) = delete;
  ~PopoverBin () = delete;
public:

  static peel::FloatPtr<PopoverBin>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_popover_bin_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<PopoverBin> (reinterpret_cast<PopoverBin *> (_peel_return));
  }

  Widget *
  get_child () noexcept
  {
    ::GtkPopoverBin *_peel_this = reinterpret_cast<::GtkPopoverBin *> (this);
    ::GtkWidget *_peel_return = gtk_popover_bin_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_handle_input () noexcept
  {
    ::GtkPopoverBin *_peel_this = reinterpret_cast<::GtkPopoverBin *> (this);
    gboolean _peel_return = gtk_popover_bin_get_handle_input (_peel_this);
    return !!_peel_return;
  }

  Gio::MenuModel *
  get_menu_model () noexcept
  {
    ::GtkPopoverBin *_peel_this = reinterpret_cast<::GtkPopoverBin *> (this);
    ::GMenuModel *_peel_return = gtk_popover_bin_get_menu_model (_peel_this);
    return reinterpret_cast<Gio::MenuModel *> (_peel_return);
  }

  Popover *
  get_popover () noexcept
  {
    ::GtkPopoverBin *_peel_this = reinterpret_cast<::GtkPopoverBin *> (this);
    ::GtkWidget *_peel_return = gtk_popover_bin_get_popover (_peel_this);
    return reinterpret_cast<Popover *> (_peel_return);
  }

  void
  popdown () noexcept
  {
    ::GtkPopoverBin *_peel_this = reinterpret_cast<::GtkPopoverBin *> (this);
    gtk_popover_bin_popdown (_peel_this);
  }

  void
  popup () noexcept
  {
    ::GtkPopoverBin *_peel_this = reinterpret_cast<::GtkPopoverBin *> (this);
    gtk_popover_bin_popup (_peel_this);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkPopoverBin *_peel_this = reinterpret_cast<::GtkPopoverBin *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_popover_bin_set_child (_peel_this, _peel_child);
  }

  void
  set_handle_input (bool handle_input) noexcept
  {
    ::GtkPopoverBin *_peel_this = reinterpret_cast<::GtkPopoverBin *> (this);
    gboolean _peel_handle_input = static_cast<gboolean> (handle_input);
    gtk_popover_bin_set_handle_input (_peel_this, _peel_handle_input);
  }

  void
  set_menu_model (Gio::MenuModel *model) noexcept
  {
    ::GtkPopoverBin *_peel_this = reinterpret_cast<::GtkPopoverBin *> (this);
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    gtk_popover_bin_set_menu_model (_peel_this, _peel_model);
  }

  void
  set_popover (peel::FloatPtr<Popover> popover) noexcept
  {
    ::GtkPopoverBin *_peel_this = reinterpret_cast<::GtkPopoverBin *> (this);
    ::GtkWidget *_peel_popover = reinterpret_cast<::GtkWidget *> (std::move (popover).release_floating_ptr ());
    gtk_popover_bin_set_popover (_peel_this, _peel_popover);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_handle_input ()
  {
    return peel::Property<bool> { "handle-input" };
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

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkPopoverBinClass),
                 "PopoverBin::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkPopoverBinClass),
                 "PopoverBin::Class align mismatch");
}; /* class PopoverBin */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Popover.h>
