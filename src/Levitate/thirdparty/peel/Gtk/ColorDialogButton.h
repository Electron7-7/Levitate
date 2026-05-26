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
namespace Gdk
{
struct RGBA;
} /* namespace Gdk */

namespace Gtk
{
class ColorDialog;
class ColorDialogButton;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ColorDialogButton> ()
{
  return gtk_color_dialog_button_get_type ();
}


namespace Gtk
{
class ColorDialogButton : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ColorDialogButton () = delete;
  ColorDialogButton (const ColorDialogButton &) = delete;
  ColorDialogButton (ColorDialogButton &&) = delete;
  ColorDialogButton &
  operator = (const ColorDialogButton &) = delete;
  ColorDialogButton &
  operator = (ColorDialogButton &&) = delete;
  ~ColorDialogButton () = delete;
public:

  static peel::FloatPtr<ColorDialogButton>
  create (peel::RefPtr<ColorDialog> dialog) noexcept
  {
    ::GtkColorDialog *_peel_dialog = reinterpret_cast<::GtkColorDialog *> (std::move (dialog).release_ref ());
    ::GtkWidget *_peel_return = gtk_color_dialog_button_new (_peel_dialog);
    peel_assume (_peel_return);
    return peel::FloatPtr<ColorDialogButton> (reinterpret_cast<ColorDialogButton *> (_peel_return));
  }

  ColorDialog *
  get_dialog () noexcept
  {
    ::GtkColorDialogButton *_peel_this = reinterpret_cast<::GtkColorDialogButton *> (this);
    ::GtkColorDialog *_peel_return = gtk_color_dialog_button_get_dialog (_peel_this);
    return reinterpret_cast<ColorDialog *> (_peel_return);
  }

  peel_returns_nonnull
  const Gdk::RGBA *
  get_rgba () noexcept
  {
    ::GtkColorDialogButton *_peel_this = reinterpret_cast<::GtkColorDialogButton *> (this);
    const ::GdkRGBA *_peel_return = gtk_color_dialog_button_get_rgba (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Gdk::RGBA *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  set_dialog (ColorDialog *dialog) noexcept
  {
    ::GtkColorDialogButton *_peel_this = reinterpret_cast<::GtkColorDialogButton *> (this);
    ::GtkColorDialog *_peel_dialog = reinterpret_cast<::GtkColorDialog *> (dialog);
    gtk_color_dialog_button_set_dialog (_peel_this, _peel_dialog);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_rgba (const Gdk::RGBA *color) noexcept
  {
    ::GtkColorDialogButton *_peel_this = reinterpret_cast<::GtkColorDialogButton *> (this);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    gtk_color_dialog_button_set_rgba (_peel_this, _peel_color);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ColorDialogButton, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (ColorDialogButton *), bool after = false) noexcept
  {
    return Signal<ColorDialogButton, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<ColorDialogButton, void ()>::_peel_emit_by_name (this, "activate");
  }

  static peel::Property<ColorDialog>
  prop_dialog ()
  {
    return peel::Property<ColorDialog> { "dialog" };
  }

  static peel::Property<Gdk::RGBA>
  prop_rgba ()
  {
    return peel::Property<Gdk::RGBA> { "rgba" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkColorDialogButtonClass),
                 "ColorDialogButton::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkColorDialogButtonClass),
                 "ColorDialogButton::Class align mismatch");
}; /* class ColorDialogButton */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/ColorDialog.h>
