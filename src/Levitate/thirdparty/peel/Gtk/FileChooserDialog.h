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
#include <peel/Gtk/FileChooser.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class FileChooserDialog;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FileChooserDialog> ()
{
  return gtk_file_chooser_dialog_get_type ();
}


namespace Gtk
{
class FileChooserDialog : public Dialog
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, FileChooser, Native, Root, ShortcutManager */
{
private:
  using Dialog::create_with_buttons;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FileChooserDialog () = delete;
  FileChooserDialog (const FileChooserDialog &) = delete;
  FileChooserDialog (FileChooserDialog &&) = delete;
  FileChooserDialog &
  operator = (const FileChooserDialog &) = delete;
  FileChooserDialog &
  operator = (FileChooserDialog &&) = delete;
  ~FileChooserDialog () = delete;
public:

  /* Unsupported for now: new: varargs */
  static void
  create (UnsupportedForNowToken);
}; /* class FileChooserDialog */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
