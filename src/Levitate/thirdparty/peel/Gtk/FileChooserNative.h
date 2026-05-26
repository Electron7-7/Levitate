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
#include <peel/Gtk/FileChooser.h>
#include <peel/Gtk/NativeDialog.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class FileChooserNative;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FileChooserNative> ()
{
  return gtk_file_chooser_native_get_type ();
}


namespace Gtk
{
class FileChooserNative : public NativeDialog
/* non-derivable */
/* implements FileChooser */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FileChooserNative () = delete;
  FileChooserNative (const FileChooserNative &) = delete;
  FileChooserNative (FileChooserNative &&) = delete;
  FileChooserNative &
  operator = (const FileChooserNative &) = delete;
  FileChooserNative &
  operator = (FileChooserNative &&) = delete;
  ~FileChooserNative () = delete;
public:

  static peel::RefPtr<FileChooserNative>
  create (const char *title, Window *parent, FileChooser::Action action, const char *accept_label, const char *cancel_label) noexcept
  {
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GtkFileChooserAction _peel_action = static_cast<::GtkFileChooserAction> (action);
    ::GtkFileChooserNative *_peel_return = gtk_file_chooser_native_new (title, _peel_parent, _peel_action, accept_label, cancel_label);
    peel_assume (_peel_return);
    return peel::RefPtr<FileChooserNative>::adopt_ref (reinterpret_cast<FileChooserNative *> (_peel_return));
  }

  const char *
  get_accept_label () noexcept
  {
    ::GtkFileChooserNative *_peel_this = reinterpret_cast<::GtkFileChooserNative *> (this);
    return gtk_file_chooser_native_get_accept_label (_peel_this);
  }

  const char *
  get_cancel_label () noexcept
  {
    ::GtkFileChooserNative *_peel_this = reinterpret_cast<::GtkFileChooserNative *> (this);
    return gtk_file_chooser_native_get_cancel_label (_peel_this);
  }

  void
  set_accept_label (const char *accept_label) noexcept
  {
    ::GtkFileChooserNative *_peel_this = reinterpret_cast<::GtkFileChooserNative *> (this);
    gtk_file_chooser_native_set_accept_label (_peel_this, accept_label);
  }

  void
  set_cancel_label (const char *cancel_label) noexcept
  {
    ::GtkFileChooserNative *_peel_this = reinterpret_cast<::GtkFileChooserNative *> (this);
    gtk_file_chooser_native_set_cancel_label (_peel_this, cancel_label);
  }

  static peel::Property<const char *>
  prop_accept_label ()
  {
    return peel::Property<const char *> { "accept-label" };
  }

  static peel::Property<const char *>
  prop_cancel_label ()
  {
    return peel::Property<const char *> { "cancel-label" };
  }

  class Class : public NativeDialog::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkFileChooserNativeClass),
                 "FileChooserNative::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFileChooserNativeClass),
                 "FileChooserNative::Class align mismatch");
}; /* class FileChooserNative */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
