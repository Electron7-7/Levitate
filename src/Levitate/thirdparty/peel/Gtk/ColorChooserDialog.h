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
class ColorChooserDialog;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ColorChooserDialog> ()
{
  return gtk_color_chooser_dialog_get_type ();
}


namespace Gtk
{
class ColorChooserDialog : public Dialog
/* non-derivable */
/* implements Accessible, Buildable, ColorChooser, Constraint::Target, Native, Root, ShortcutManager */
{
private:
  using Dialog::create_with_buttons;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ColorChooserDialog () = delete;
  ColorChooserDialog (const ColorChooserDialog &) = delete;
  ColorChooserDialog (ColorChooserDialog &&) = delete;
  ColorChooserDialog &
  operator = (const ColorChooserDialog &) = delete;
  ColorChooserDialog &
  operator = (ColorChooserDialog &&) = delete;
  ~ColorChooserDialog () = delete;
public:

  peel_returns_nonnull
  static ColorChooserDialog *
  create (const char *title, Window *parent) noexcept
  {
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GtkWidget *_peel_return = gtk_color_chooser_dialog_new (title, _peel_parent);
    peel_assume (_peel_return);
    return reinterpret_cast<ColorChooserDialog *> (_peel_return);
  }

  static peel::Property<bool>
  prop_show_editor ()
  {
    return peel::Property<bool> { "show-editor" };
  }
}; /* class ColorChooserDialog */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
