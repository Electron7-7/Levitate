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
class ColorButton;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ColorButton> ()
{
  return gtk_color_button_get_type ();
}


namespace Gtk
{
class ColorButton : public Widget
/* non-derivable */
/* implements Accessible, Buildable, ColorChooser, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ColorButton () = delete;
  ColorButton (const ColorButton &) = delete;
  ColorButton (ColorButton &&) = delete;
  ColorButton &
  operator = (const ColorButton &) = delete;
  ColorButton &
  operator = (ColorButton &&) = delete;
  ~ColorButton () = delete;
public:

  static peel::FloatPtr<ColorButton>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_color_button_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<ColorButton> (reinterpret_cast<ColorButton *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::FloatPtr<ColorButton>
  create_with_rgba (const Gdk::RGBA *rgba) noexcept
  {
    const ::GdkRGBA *_peel_rgba = reinterpret_cast<const ::GdkRGBA *> (rgba);
    ::GtkWidget *_peel_return = gtk_color_button_new_with_rgba (_peel_rgba);
    peel_assume (_peel_return);
    return peel::FloatPtr<ColorButton> (reinterpret_cast<ColorButton *> (_peel_return));
  }

  bool
  get_modal () noexcept
  {
    ::GtkColorButton *_peel_this = reinterpret_cast<::GtkColorButton *> (this);
    gboolean _peel_return = gtk_color_button_get_modal (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  const char *
  get_title () noexcept
  {
    ::GtkColorButton *_peel_this = reinterpret_cast<::GtkColorButton *> (this);
    return gtk_color_button_get_title (_peel_this);
  }

  void
  set_modal (bool modal) noexcept
  {
    ::GtkColorButton *_peel_this = reinterpret_cast<::GtkColorButton *> (this);
    gboolean _peel_modal = static_cast<gboolean> (modal);
    gtk_color_button_set_modal (_peel_this, _peel_modal);
  }

  peel_nonnull_args (2)
  void
  set_title (const char *title) noexcept
  {
    ::GtkColorButton *_peel_this = reinterpret_cast<::GtkColorButton *> (this);
    gtk_color_button_set_title (_peel_this, title);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ColorButton, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (ColorButton *), bool after = false) noexcept
  {
    return Signal<ColorButton, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<ColorButton, void ()>::_peel_emit_by_name (this, "activate");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_color_set (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ColorButton, void ()>::_peel_connect_by_name (this, "color-set", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_color_set (HandlerObject *object, void (HandlerObject::*handler_method) (ColorButton *), bool after = false) noexcept
  {
    return Signal<ColorButton, void ()>::_peel_connect_by_name (this, "color-set", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_modal ()
  {
    return peel::Property<bool> { "modal" };
  }

  static peel::Property<bool>
  prop_show_editor ()
  {
    return peel::Property<bool> { "show-editor" };
  }

  static peel::Property<const char *>
  prop_title ()
  {
    return peel::Property<const char *> { "title" };
  }
}; /* class ColorButton */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
