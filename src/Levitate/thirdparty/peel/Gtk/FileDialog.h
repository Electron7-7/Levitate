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

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class /* interface */ File;
class /* interface */ ListModel;
} /* namespace Gio */

namespace Gtk
{
class FileDialog;
class FileFilter;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FileDialog> ()
{
  return gtk_file_dialog_get_type ();
}


namespace Gtk
{
class FileDialog : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FileDialog () = delete;
  FileDialog (const FileDialog &) = delete;
  FileDialog (FileDialog &&) = delete;
  FileDialog &
  operator = (const FileDialog &) = delete;
  FileDialog &
  operator = (FileDialog &&) = delete;
  ~FileDialog () = delete;
public:

  static peel::RefPtr<FileDialog>
  create () noexcept
  {
    ::GtkFileDialog *_peel_return = gtk_file_dialog_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<FileDialog>::adopt_ref (reinterpret_cast<FileDialog *> (_peel_return));
  }

  const char *
  get_accept_label () noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    return gtk_file_dialog_get_accept_label (_peel_this);
  }

  FileFilter *
  get_default_filter () noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GtkFileFilter *_peel_return = gtk_file_dialog_get_default_filter (_peel_this);
    return reinterpret_cast<FileFilter *> (_peel_return);
  }

  Gio::ListModel *
  get_filters () noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GListModel *_peel_return = gtk_file_dialog_get_filters (_peel_this);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  Gio::File *
  get_initial_file () noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GFile *_peel_return = gtk_file_dialog_get_initial_file (_peel_this);
    return reinterpret_cast<Gio::File *> (_peel_return);
  }

  Gio::File *
  get_initial_folder () noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GFile *_peel_return = gtk_file_dialog_get_initial_folder (_peel_this);
    return reinterpret_cast<Gio::File *> (_peel_return);
  }

  const char *
  get_initial_name () noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    return gtk_file_dialog_get_initial_name (_peel_this);
  }

  bool
  get_modal () noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    gboolean _peel_return = gtk_file_dialog_get_modal (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  const char *
  get_title () noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    return gtk_file_dialog_get_title (_peel_this);
  }

  template<typename AsyncReadyCallback>
  void
  open (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    gtk_file_dialog_open (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Gio::File>
  open_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = gtk_file_dialog_open_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Gio::File>::adopt_ref (reinterpret_cast<Gio::File *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  open_multiple (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    gtk_file_dialog_open_multiple (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Gio::ListModel>
  open_multiple_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GListModel *_peel_return = gtk_file_dialog_open_multiple_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Gio::ListModel>::adopt_ref (reinterpret_cast<Gio::ListModel *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  open_multiple_text_files (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    gtk_file_dialog_open_multiple_text_files (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2, 3)
  peel::RefPtr<Gio::ListModel>
  open_multiple_text_files_finish (Gio::AsyncResult *result, const char **encoding, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GListModel *_peel_return = gtk_file_dialog_open_multiple_text_files_finish (_peel_this, _peel_result, encoding, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Gio::ListModel>::adopt_ref (reinterpret_cast<Gio::ListModel *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  open_text_file (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    gtk_file_dialog_open_text_file (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2, 3)
  peel::RefPtr<Gio::File>
  open_text_file_finish (Gio::AsyncResult *result, const char **encoding, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = gtk_file_dialog_open_text_file_finish (_peel_this, _peel_result, encoding, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Gio::File>::adopt_ref (reinterpret_cast<Gio::File *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  save (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    gtk_file_dialog_save (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Gio::File>
  save_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = gtk_file_dialog_save_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Gio::File>::adopt_ref (reinterpret_cast<Gio::File *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  save_text_file (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    gtk_file_dialog_save_text_file (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  peel::RefPtr<Gio::File>
  save_text_file_finish (Gio::AsyncResult *result, const char **encoding, const char **line_ending, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = gtk_file_dialog_save_text_file_finish (_peel_this, _peel_result, encoding, line_ending, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Gio::File>::adopt_ref (reinterpret_cast<Gio::File *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  select_folder (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    gtk_file_dialog_select_folder (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Gio::File>
  select_folder_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GFile *_peel_return = gtk_file_dialog_select_folder_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Gio::File>::adopt_ref (reinterpret_cast<Gio::File *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  select_multiple_folders (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    gtk_file_dialog_select_multiple_folders (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Gio::ListModel>
  select_multiple_folders_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GListModel *_peel_return = gtk_file_dialog_select_multiple_folders_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Gio::ListModel>::adopt_ref (reinterpret_cast<Gio::ListModel *> (_peel_return));
  }

  void
  set_accept_label (const char *accept_label) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    gtk_file_dialog_set_accept_label (_peel_this, accept_label);
  }

  void
  set_default_filter (FileFilter *filter) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GtkFileFilter *_peel_filter = reinterpret_cast<::GtkFileFilter *> (filter);
    gtk_file_dialog_set_default_filter (_peel_this, _peel_filter);
  }

  void
  set_filters (Gio::ListModel *filters) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GListModel *_peel_filters = reinterpret_cast<::GListModel *> (filters);
    gtk_file_dialog_set_filters (_peel_this, _peel_filters);
  }

  void
  set_initial_file (Gio::File *file) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    gtk_file_dialog_set_initial_file (_peel_this, _peel_file);
  }

  void
  set_initial_folder (Gio::File *folder) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    ::GFile *_peel_folder = reinterpret_cast<::GFile *> (folder);
    gtk_file_dialog_set_initial_folder (_peel_this, _peel_folder);
  }

  void
  set_initial_name (const char *name) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    gtk_file_dialog_set_initial_name (_peel_this, name);
  }

  void
  set_modal (bool modal) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    gboolean _peel_modal = static_cast<gboolean> (modal);
    gtk_file_dialog_set_modal (_peel_this, _peel_modal);
  }

  peel_nonnull_args (2)
  void
  set_title (const char *title) noexcept
  {
    ::GtkFileDialog *_peel_this = reinterpret_cast<::GtkFileDialog *> (this);
    gtk_file_dialog_set_title (_peel_this, title);
  }

  static peel::Property<const char *>
  prop_accept_label ()
  {
    return peel::Property<const char *> { "accept-label" };
  }

  static peel::Property<FileFilter>
  prop_default_filter ()
  {
    return peel::Property<FileFilter> { "default-filter" };
  }

  static peel::Property<Gio::ListModel>
  prop_filters ()
  {
    return peel::Property<Gio::ListModel> { "filters" };
  }

  static peel::Property<Gio::File>
  prop_initial_file ()
  {
    return peel::Property<Gio::File> { "initial-file" };
  }

  static peel::Property<Gio::File>
  prop_initial_folder ()
  {
    return peel::Property<Gio::File> { "initial-folder" };
  }

  static peel::Property<const char *>
  prop_initial_name ()
  {
    return peel::Property<const char *> { "initial-name" };
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

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkFileDialogClass),
                 "FileDialog::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFileDialogClass),
                 "FileDialog::Class align mismatch");
}; /* class FileDialog */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/File.h>
#include <peel/Gio/ListModel.h>
