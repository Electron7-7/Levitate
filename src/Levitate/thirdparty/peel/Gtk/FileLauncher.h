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
} /* namespace Gio */

namespace Gtk
{
class FileLauncher;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FileLauncher> ()
{
  return gtk_file_launcher_get_type ();
}


namespace Gtk
{
class FileLauncher : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FileLauncher () = delete;
  FileLauncher (const FileLauncher &) = delete;
  FileLauncher (FileLauncher &&) = delete;
  FileLauncher &
  operator = (const FileLauncher &) = delete;
  FileLauncher &
  operator = (FileLauncher &&) = delete;
  ~FileLauncher () = delete;
public:

  static peel::RefPtr<FileLauncher>
  create (Gio::File *file) noexcept
  {
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GtkFileLauncher *_peel_return = gtk_file_launcher_new (_peel_file);
    peel_assume (_peel_return);
    return peel::RefPtr<FileLauncher>::adopt_ref (reinterpret_cast<FileLauncher *> (_peel_return));
  }

  bool
  get_always_ask () noexcept
  {
    ::GtkFileLauncher *_peel_this = reinterpret_cast<::GtkFileLauncher *> (this);
    gboolean _peel_return = gtk_file_launcher_get_always_ask (_peel_this);
    return !!_peel_return;
  }

  Gio::File *
  get_file () noexcept
  {
    ::GtkFileLauncher *_peel_this = reinterpret_cast<::GtkFileLauncher *> (this);
    ::GFile *_peel_return = gtk_file_launcher_get_file (_peel_this);
    return reinterpret_cast<Gio::File *> (_peel_return);
  }

  bool
  get_writable () noexcept
  {
    ::GtkFileLauncher *_peel_this = reinterpret_cast<::GtkFileLauncher *> (this);
    gboolean _peel_return = gtk_file_launcher_get_writable (_peel_this);
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  launch (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFileLauncher *_peel_this = reinterpret_cast<::GtkFileLauncher *> (this);
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
    gtk_file_launcher_launch (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  launch_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileLauncher *_peel_this = reinterpret_cast<::GtkFileLauncher *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_file_launcher_launch_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  open_containing_folder (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFileLauncher *_peel_this = reinterpret_cast<::GtkFileLauncher *> (this);
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
    gtk_file_launcher_open_containing_folder (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  open_containing_folder_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFileLauncher *_peel_this = reinterpret_cast<::GtkFileLauncher *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_file_launcher_open_containing_folder_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  set_always_ask (bool always_ask) noexcept
  {
    ::GtkFileLauncher *_peel_this = reinterpret_cast<::GtkFileLauncher *> (this);
    gboolean _peel_always_ask = static_cast<gboolean> (always_ask);
    gtk_file_launcher_set_always_ask (_peel_this, _peel_always_ask);
  }

  void
  set_file (Gio::File *file) noexcept
  {
    ::GtkFileLauncher *_peel_this = reinterpret_cast<::GtkFileLauncher *> (this);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    gtk_file_launcher_set_file (_peel_this, _peel_file);
  }

  void
  set_writable (bool writable) noexcept
  {
    ::GtkFileLauncher *_peel_this = reinterpret_cast<::GtkFileLauncher *> (this);
    gboolean _peel_writable = static_cast<gboolean> (writable);
    gtk_file_launcher_set_writable (_peel_this, _peel_writable);
  }

  static peel::Property<bool>
  prop_always_ask ()
  {
    return peel::Property<bool> { "always-ask" };
  }

  static peel::Property<Gio::File>
  prop_file ()
  {
    return peel::Property<Gio::File> { "file" };
  }

  static peel::Property<bool>
  prop_writable ()
  {
    return peel::Property<bool> { "writable" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkFileLauncherClass),
                 "FileLauncher::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFileLauncherClass),
                 "FileLauncher::Class align mismatch");
}; /* class FileLauncher */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
