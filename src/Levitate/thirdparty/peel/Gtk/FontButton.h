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
namespace Gtk
{
class FontButton;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FontButton> ()
{
  return gtk_font_button_get_type ();
}


namespace Gtk
{
class FontButton : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, FontChooser */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FontButton () = delete;
  FontButton (const FontButton &) = delete;
  FontButton (FontButton &&) = delete;
  FontButton &
  operator = (const FontButton &) = delete;
  FontButton &
  operator = (FontButton &&) = delete;
  ~FontButton () = delete;
public:

  static peel::FloatPtr<FontButton>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_font_button_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<FontButton> (reinterpret_cast<FontButton *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<FontButton>
  create_with_font (const char *fontname) noexcept
  {
    ::GtkWidget *_peel_return = gtk_font_button_new_with_font (fontname);
    peel_assume (_peel_return);
    return peel::FloatPtr<FontButton> (reinterpret_cast<FontButton *> (_peel_return));
  }

  bool
  get_modal () noexcept
  {
    ::GtkFontButton *_peel_this = reinterpret_cast<::GtkFontButton *> (this);
    gboolean _peel_return = gtk_font_button_get_modal (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  const char *
  get_title () noexcept
  {
    ::GtkFontButton *_peel_this = reinterpret_cast<::GtkFontButton *> (this);
    return gtk_font_button_get_title (_peel_this);
  }

  bool
  get_use_font () noexcept
  {
    ::GtkFontButton *_peel_this = reinterpret_cast<::GtkFontButton *> (this);
    gboolean _peel_return = gtk_font_button_get_use_font (_peel_this);
    return !!_peel_return;
  }

  bool
  get_use_size () noexcept
  {
    ::GtkFontButton *_peel_this = reinterpret_cast<::GtkFontButton *> (this);
    gboolean _peel_return = gtk_font_button_get_use_size (_peel_this);
    return !!_peel_return;
  }

  void
  set_modal (bool modal) noexcept
  {
    ::GtkFontButton *_peel_this = reinterpret_cast<::GtkFontButton *> (this);
    gboolean _peel_modal = static_cast<gboolean> (modal);
    gtk_font_button_set_modal (_peel_this, _peel_modal);
  }

  peel_nonnull_args (2)
  void
  set_title (const char *title) noexcept
  {
    ::GtkFontButton *_peel_this = reinterpret_cast<::GtkFontButton *> (this);
    gtk_font_button_set_title (_peel_this, title);
  }

  void
  set_use_font (bool use_font) noexcept
  {
    ::GtkFontButton *_peel_this = reinterpret_cast<::GtkFontButton *> (this);
    gboolean _peel_use_font = static_cast<gboolean> (use_font);
    gtk_font_button_set_use_font (_peel_this, _peel_use_font);
  }

  void
  set_use_size (bool use_size) noexcept
  {
    ::GtkFontButton *_peel_this = reinterpret_cast<::GtkFontButton *> (this);
    gboolean _peel_use_size = static_cast<gboolean> (use_size);
    gtk_font_button_set_use_size (_peel_this, _peel_use_size);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FontButton, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (FontButton *), bool after = false) noexcept
  {
    return Signal<FontButton, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<FontButton, void ()>::_peel_emit_by_name (this, "activate");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_font_set (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FontButton, void ()>::_peel_connect_by_name (this, "font-set", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_font_set (HandlerObject *object, void (HandlerObject::*handler_method) (FontButton *), bool after = false) noexcept
  {
    return Signal<FontButton, void ()>::_peel_connect_by_name (this, "font-set", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_modal ()
  {
    return peel::Property<bool> { "modal" };
  }

  static peel::Property<const char *>
  prop_title ()
  {
    return peel::Property<const char *> { "title" };
  }

  static peel::Property<bool>
  prop_use_font ()
  {
    return peel::Property<bool> { "use-font" };
  }

  static peel::Property<bool>
  prop_use_size ()
  {
    return peel::Property<bool> { "use-size" };
  }
}; /* class FontButton */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
