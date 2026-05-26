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
namespace Gio
{
class /* interface */ File;
} /* namespace Gio */

namespace Gtk
{
class AppChooserDialog;
class Widget;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AppChooserDialog> ()
{
  return gtk_app_chooser_dialog_get_type ();
}


namespace Gtk
{
class AppChooserDialog : public Dialog
/* non-derivable */
/* implements Accessible, AppChooser, Buildable, Constraint::Target, Native, Root, ShortcutManager */
{
private:
  using Dialog::create_with_buttons;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  AppChooserDialog () = delete;
  AppChooserDialog (const AppChooserDialog &) = delete;
  AppChooserDialog (AppChooserDialog &&) = delete;
  AppChooserDialog &
  operator = (const AppChooserDialog &) = delete;
  AppChooserDialog &
  operator = (AppChooserDialog &&) = delete;
  ~AppChooserDialog () = delete;
public:

  peel_nonnull_args (3) peel_returns_nonnull
  static AppChooserDialog *
  create (Window *parent, Dialog::Flags flags, Gio::File *file) noexcept
  {
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GtkDialogFlags _peel_flags = static_cast<::GtkDialogFlags> (flags);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GtkWidget *_peel_return = gtk_app_chooser_dialog_new (_peel_parent, _peel_flags, _peel_file);
    peel_assume (_peel_return);
    return reinterpret_cast<AppChooserDialog *> (_peel_return);
  }

  peel_nonnull_args (3) peel_returns_nonnull
  static AppChooserDialog *
  create_for_content_type (Window *parent, Dialog::Flags flags, const char *content_type) noexcept
  {
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GtkDialogFlags _peel_flags = static_cast<::GtkDialogFlags> (flags);
    ::GtkWidget *_peel_return = gtk_app_chooser_dialog_new_for_content_type (_peel_parent, _peel_flags, content_type);
    peel_assume (_peel_return);
    return reinterpret_cast<AppChooserDialog *> (_peel_return);
  }

  const char *
  get_heading () noexcept
  {
    ::GtkAppChooserDialog *_peel_this = reinterpret_cast<::GtkAppChooserDialog *> (this);
    return gtk_app_chooser_dialog_get_heading (_peel_this);
  }

  peel_returns_nonnull
  Widget *
  get_widget () noexcept
  {
    ::GtkAppChooserDialog *_peel_this = reinterpret_cast<::GtkAppChooserDialog *> (this);
    ::GtkWidget *_peel_return = gtk_app_chooser_dialog_get_widget (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  set_heading (const char *heading) noexcept
  {
    ::GtkAppChooserDialog *_peel_this = reinterpret_cast<::GtkAppChooserDialog *> (this);
    gtk_app_chooser_dialog_set_heading (_peel_this, heading);
  }

  static peel::Property<Gio::File>
  prop_gfile ()
  {
    return peel::Property<Gio::File> { "gfile" };
  }

  static peel::Property<const char *>
  prop_heading ()
  {
    return peel::Property<const char *> { "heading" };
  }
}; /* class AppChooserDialog */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
