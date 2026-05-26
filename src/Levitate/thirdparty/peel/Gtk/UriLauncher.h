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
} /* namespace Gio */

namespace Gtk
{
class UriLauncher;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::UriLauncher> ()
{
  return gtk_uri_launcher_get_type ();
}


namespace Gtk
{
class UriLauncher : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  UriLauncher () = delete;
  UriLauncher (const UriLauncher &) = delete;
  UriLauncher (UriLauncher &&) = delete;
  UriLauncher &
  operator = (const UriLauncher &) = delete;
  UriLauncher &
  operator = (UriLauncher &&) = delete;
  ~UriLauncher () = delete;
public:

  static peel::RefPtr<UriLauncher>
  create (const char *uri) noexcept
  {
    ::GtkUriLauncher *_peel_return = gtk_uri_launcher_new (uri);
    peel_assume (_peel_return);
    return peel::RefPtr<UriLauncher>::adopt_ref (reinterpret_cast<UriLauncher *> (_peel_return));
  }

  bool
  can_launch (Window *parent) noexcept
  {
    ::GtkUriLauncher *_peel_this = reinterpret_cast<::GtkUriLauncher *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    gboolean _peel_return = gtk_uri_launcher_can_launch (_peel_this, _peel_parent);
    return !!_peel_return;
  }

  const char *
  get_uri () noexcept
  {
    ::GtkUriLauncher *_peel_this = reinterpret_cast<::GtkUriLauncher *> (this);
    return gtk_uri_launcher_get_uri (_peel_this);
  }

  template<typename AsyncReadyCallback>
  void
  launch (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkUriLauncher *_peel_this = reinterpret_cast<::GtkUriLauncher *> (this);
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
    gtk_uri_launcher_launch (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  launch_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkUriLauncher *_peel_this = reinterpret_cast<::GtkUriLauncher *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_uri_launcher_launch_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  set_uri (const char *uri) noexcept
  {
    ::GtkUriLauncher *_peel_this = reinterpret_cast<::GtkUriLauncher *> (this);
    gtk_uri_launcher_set_uri (_peel_this, uri);
  }

  static peel::Property<const char *>
  prop_uri ()
  {
    return peel::Property<const char *> { "uri" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkUriLauncherClass),
                 "UriLauncher::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkUriLauncherClass),
                 "UriLauncher::Class align mismatch");
}; /* class UriLauncher */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
