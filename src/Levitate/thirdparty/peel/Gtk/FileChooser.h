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
#include <peel/GObject/Object.h>
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class /* interface */ File;
class /* interface */ ListModel;
} /* namespace Gio */

namespace Gtk
{
class /* interface */ FileChooser;
class FileFilter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FileChooser> ()
{
  return gtk_file_chooser_get_type ();
}


namespace Gtk
{
class /* interface */ FileChooser : public GObject::Object
/* requires GObject::Object */
{
private:
  FileChooser () = delete;
  FileChooser (const FileChooser &) = delete;
  FileChooser (FileChooser &&) = delete;

  FileChooser &
  operator = (const FileChooser &) = delete;
  FileChooser &
  operator = (FileChooser &&) = delete;

protected:
  ~FileChooser () = default;

public:
  enum class Action : std::underlying_type<::GtkFileChooserAction>::type;
  enum class Error : std::underlying_type<::GtkFileChooserError>::type;

  peel_nonnull_args (2, 3)
  void
  add_choice (const char *id, const char *label, peel::StrvRef options, peel::StrvRef option_labels) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    const char **_peel_options = const_cast<const char **> (options.data ());
    const char **_peel_option_labels = const_cast<const char **> (option_labels.data ());
    gtk_file_chooser_add_choice (_peel_this, id, label, _peel_options, _peel_option_labels);
  }

  peel_nonnull_args (2)
  void
  add_filter (FileFilter *filter) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GtkFileFilter *_peel_filter = reinterpret_cast<::GtkFileFilter *> (filter);
    gtk_file_chooser_add_filter (_peel_this, _peel_filter);
  }

  peel_nonnull_args (2)
  bool
  add_shortcut_folder (Gio::File *folder, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GFile *_peel_folder = reinterpret_cast<::GFile *> (folder);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_file_chooser_add_shortcut_folder (_peel_this, _peel_folder, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  FileChooser::Action
  get_action () noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GtkFileChooserAction _peel_return = gtk_file_chooser_get_action (_peel_this);
    return static_cast<FileChooser::Action> (_peel_return);
  }

  peel_nonnull_args (2)
  const char *
  get_choice (const char *id) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    return gtk_file_chooser_get_choice (_peel_this, id);
  }

  bool
  get_create_folders () noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    gboolean _peel_return = gtk_file_chooser_get_create_folders (_peel_this);
    return !!_peel_return;
  }

  peel::RefPtr<Gio::File>
  get_current_folder () noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GFile *_peel_return = gtk_file_chooser_get_current_folder (_peel_this);
    return peel::RefPtr<Gio::File>::adopt_ref (reinterpret_cast<Gio::File *> (_peel_return));
  }

  peel::String
  get_current_name () noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    char *_peel_return = gtk_file_chooser_get_current_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::RefPtr<Gio::File>
  get_file () noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GFile *_peel_return = gtk_file_chooser_get_file (_peel_this);
    return peel::RefPtr<Gio::File>::adopt_ref (reinterpret_cast<Gio::File *> (_peel_return));
  }

  peel::RefPtr<Gio::ListModel>
  get_files () noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GListModel *_peel_return = gtk_file_chooser_get_files (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Gio::ListModel>::adopt_ref (reinterpret_cast<Gio::ListModel *> (_peel_return));
  }

  FileFilter *
  get_filter () noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GtkFileFilter *_peel_return = gtk_file_chooser_get_filter (_peel_this);
    return reinterpret_cast<FileFilter *> (_peel_return);
  }

  peel::RefPtr<Gio::ListModel>
  get_filters () noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GListModel *_peel_return = gtk_file_chooser_get_filters (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Gio::ListModel>::adopt_ref (reinterpret_cast<Gio::ListModel *> (_peel_return));
  }

  bool
  get_select_multiple () noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    gboolean _peel_return = gtk_file_chooser_get_select_multiple (_peel_this);
    return !!_peel_return;
  }

  peel::RefPtr<Gio::ListModel>
  get_shortcut_folders () noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GListModel *_peel_return = gtk_file_chooser_get_shortcut_folders (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Gio::ListModel>::adopt_ref (reinterpret_cast<Gio::ListModel *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  remove_choice (const char *id) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    gtk_file_chooser_remove_choice (_peel_this, id);
  }

  peel_nonnull_args (2)
  void
  remove_filter (FileFilter *filter) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GtkFileFilter *_peel_filter = reinterpret_cast<::GtkFileFilter *> (filter);
    gtk_file_chooser_remove_filter (_peel_this, _peel_filter);
  }

  peel_nonnull_args (2)
  bool
  remove_shortcut_folder (Gio::File *folder, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GFile *_peel_folder = reinterpret_cast<::GFile *> (folder);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_file_chooser_remove_shortcut_folder (_peel_this, _peel_folder, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  set_action (FileChooser::Action action) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GtkFileChooserAction _peel_action = static_cast<::GtkFileChooserAction> (action);
    gtk_file_chooser_set_action (_peel_this, _peel_action);
  }

  peel_nonnull_args (2, 3)
  void
  set_choice (const char *id, const char *option) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    gtk_file_chooser_set_choice (_peel_this, id, option);
  }

  void
  set_create_folders (bool create_folders) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    gboolean _peel_create_folders = static_cast<gboolean> (create_folders);
    gtk_file_chooser_set_create_folders (_peel_this, _peel_create_folders);
  }

  bool
  set_current_folder (Gio::File *file, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_file_chooser_set_current_folder (_peel_this, _peel_file, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set_current_name (const char *name) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    gtk_file_chooser_set_current_name (_peel_this, name);
  }

  peel_nonnull_args (2)
  bool
  set_file (Gio::File *file, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_file_chooser_set_file (_peel_this, _peel_file, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set_filter (FileFilter *filter) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    ::GtkFileFilter *_peel_filter = reinterpret_cast<::GtkFileFilter *> (filter);
    gtk_file_chooser_set_filter (_peel_this, _peel_filter);
  }

  void
  set_select_multiple (bool select_multiple) noexcept
  {
    ::GtkFileChooser *_peel_this = reinterpret_cast<::GtkFileChooser *> (this);
    gboolean _peel_select_multiple = static_cast<gboolean> (select_multiple);
    gtk_file_chooser_set_select_multiple (_peel_this, _peel_select_multiple);
  }

  static peel::Property<FileChooser::Action>
  prop_action ()
  {
    return peel::Property<FileChooser::Action> { "action" };
  }

  static peel::Property<bool>
  prop_create_folders ()
  {
    return peel::Property<bool> { "create-folders" };
  }

  static peel::Property<FileFilter>
  prop_filter ()
  {
    return peel::Property<FileFilter> { "filter" };
  }

  static peel::Property<Gio::ListModel>
  prop_filters ()
  {
    return peel::Property<Gio::ListModel> { "filters" };
  }

  static peel::Property<bool>
  prop_select_multiple ()
  {
    return peel::Property<bool> { "select-multiple" };
  }

  static peel::Property<Gio::ListModel>
  prop_shortcut_folders ()
  {
    return peel::Property<Gio::ListModel> { "shortcut-folders" };
  }
}; /* interface FileChooser */
static_assert (sizeof (FileChooser) == sizeof (GObject::Object),
               "FileChooser size mismatch");
static_assert (alignof (FileChooser) == alignof (GObject::Object),
               "FileChooser align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/File.h>
#include <peel/Gio/ListModel.h>
