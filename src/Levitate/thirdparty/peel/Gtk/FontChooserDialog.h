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
#include <peel/Gtk/Dialog.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class FontChooserDialog;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FontChooserDialog> ()
{
  return gtk_font_chooser_dialog_get_type ();
}


namespace Gtk
{
class FontChooserDialog : public Dialog
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, FontChooser, Native, Root, ShortcutManager */
{
private:
  using Dialog::create_with_buttons;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FontChooserDialog () = delete;
  FontChooserDialog (const FontChooserDialog &) = delete;
  FontChooserDialog (FontChooserDialog &&) = delete;
  FontChooserDialog &
  operator = (const FontChooserDialog &) = delete;
  FontChooserDialog &
  operator = (FontChooserDialog &&) = delete;
  ~FontChooserDialog () = delete;
public:

  peel_returns_nonnull
  static FontChooserDialog *
  create (const char *title, Window *parent) noexcept
  {
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GtkWidget *_peel_return = gtk_font_chooser_dialog_new (title, _peel_parent);
    peel_assume (_peel_return);
    return reinterpret_cast<FontChooserDialog *> (_peel_return);
  }
}; /* class FontChooserDialog */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
