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
class FontDialog;
class FontDialogButton;
enum class FontLevel : std::underlying_type<::GtkFontLevel>::type;
} /* namespace Gtk */

namespace Pango
{
class /* record */ FontDescription;
class /* record */ Language;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FontDialogButton> ()
{
  return gtk_font_dialog_button_get_type ();
}


namespace Gtk
{
class FontDialogButton : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FontDialogButton () = delete;
  FontDialogButton (const FontDialogButton &) = delete;
  FontDialogButton (FontDialogButton &&) = delete;
  FontDialogButton &
  operator = (const FontDialogButton &) = delete;
  FontDialogButton &
  operator = (FontDialogButton &&) = delete;
  ~FontDialogButton () = delete;
public:

  static peel::FloatPtr<FontDialogButton>
  create (peel::RefPtr<FontDialog> dialog) noexcept
  {
    ::GtkFontDialog *_peel_dialog = reinterpret_cast<::GtkFontDialog *> (std::move (dialog).release_ref ());
    ::GtkWidget *_peel_return = gtk_font_dialog_button_new (_peel_dialog);
    peel_assume (_peel_return);
    return peel::FloatPtr<FontDialogButton> (reinterpret_cast<FontDialogButton *> (_peel_return));
  }

  FontDialog *
  get_dialog () noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    ::GtkFontDialog *_peel_return = gtk_font_dialog_button_get_dialog (_peel_this);
    return reinterpret_cast<FontDialog *> (_peel_return);
  }

  Pango::FontDescription *
  get_font_desc () noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    ::PangoFontDescription *_peel_return = gtk_font_dialog_button_get_font_desc (_peel_this);
    return reinterpret_cast<Pango::FontDescription *> (_peel_return);
  }

  const char *
  get_font_features () noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    return gtk_font_dialog_button_get_font_features (_peel_this);
  }

  /* Unsupported for now: get_language: no idea about ownership semantics */
  static void
  get_language (UnsupportedForNowToken);

  FontLevel
  get_level () noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    ::GtkFontLevel _peel_return = gtk_font_dialog_button_get_level (_peel_this);
    return static_cast<FontLevel> (_peel_return);
  }

  bool
  get_use_font () noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    gboolean _peel_return = gtk_font_dialog_button_get_use_font (_peel_this);
    return !!_peel_return;
  }

  bool
  get_use_size () noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    gboolean _peel_return = gtk_font_dialog_button_get_use_size (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set_dialog (FontDialog *dialog) noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    ::GtkFontDialog *_peel_dialog = reinterpret_cast<::GtkFontDialog *> (dialog);
    gtk_font_dialog_button_set_dialog (_peel_this, _peel_dialog);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_font_desc (const Pango::FontDescription *font_desc) noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    const ::PangoFontDescription *_peel_font_desc = reinterpret_cast<const ::PangoFontDescription *> (font_desc);
    gtk_font_dialog_button_set_font_desc (_peel_this, _peel_font_desc);
  }

  void
  set_font_features (const char *font_features) noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    gtk_font_dialog_button_set_font_features (_peel_this, font_features);
  }

  peel_arg_in (2)
  void
  set_language (Pango::Language *language) noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    gtk_font_dialog_button_set_language (_peel_this, _peel_language);
  }

  void
  set_level (FontLevel level) noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    ::GtkFontLevel _peel_level = static_cast<::GtkFontLevel> (level);
    gtk_font_dialog_button_set_level (_peel_this, _peel_level);
  }

  void
  set_use_font (bool use_font) noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    gboolean _peel_use_font = static_cast<gboolean> (use_font);
    gtk_font_dialog_button_set_use_font (_peel_this, _peel_use_font);
  }

  void
  set_use_size (bool use_size) noexcept
  {
    ::GtkFontDialogButton *_peel_this = reinterpret_cast<::GtkFontDialogButton *> (this);
    gboolean _peel_use_size = static_cast<gboolean> (use_size);
    gtk_font_dialog_button_set_use_size (_peel_this, _peel_use_size);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FontDialogButton, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (FontDialogButton *), bool after = false) noexcept
  {
    return Signal<FontDialogButton, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<FontDialogButton, void ()>::_peel_emit_by_name (this, "activate");
  }

  static peel::Property<FontDialog>
  prop_dialog ()
  {
    return peel::Property<FontDialog> { "dialog" };
  }

  static peel::Property<Pango::FontDescription>
  prop_font_desc ()
  {
    return peel::Property<Pango::FontDescription> { "font-desc" };
  }

  static peel::Property<const char *>
  prop_font_features ()
  {
    return peel::Property<const char *> { "font-features" };
  }

  static peel::Property<Pango::Language>
  prop_language ()
  {
    return peel::Property<Pango::Language> { "language" };
  }

  static peel::Property<FontLevel>
  prop_level ()
  {
    return peel::Property<FontLevel> { "level" };
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

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkFontDialogButtonClass),
                 "FontDialogButton::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFontDialogButtonClass),
                 "FontDialogButton::Class align mismatch");
}; /* class FontDialogButton */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/FontDialog.h>
#include <peel/Pango/Language.h>
