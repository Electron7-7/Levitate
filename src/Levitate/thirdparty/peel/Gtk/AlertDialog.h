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
class AlertDialog;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AlertDialog> ()
{
  return gtk_alert_dialog_get_type ();
}


namespace Gtk
{
class AlertDialog : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  AlertDialog () = delete;
  AlertDialog (const AlertDialog &) = delete;
  AlertDialog (AlertDialog &&) = delete;
  AlertDialog &
  operator = (const AlertDialog &) = delete;
  AlertDialog &
  operator = (AlertDialog &&) = delete;
  ~AlertDialog () = delete;
public:

  template<typename... Args>
  peel_nonnull_args (1)
  static peel::RefPtr<AlertDialog>
  create (const char *format, Args ...args) noexcept
  {
    ::GtkAlertDialog *_peel_return = gtk_alert_dialog_new (format, args...);
    peel_assume (_peel_return);
    return peel::RefPtr<AlertDialog>::adopt_ref (reinterpret_cast<AlertDialog *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  choose (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
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
    gtk_alert_dialog_choose (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  int
  choose_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    int _peel_return = gtk_alert_dialog_choose_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel::StrvRef
  get_buttons () noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    const char* const *_peel_return = gtk_alert_dialog_get_buttons (_peel_this);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  int
  get_cancel_button () noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    return gtk_alert_dialog_get_cancel_button (_peel_this);
  }

  int
  get_default_button () noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    return gtk_alert_dialog_get_default_button (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_detail () noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    return gtk_alert_dialog_get_detail (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_message () noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    return gtk_alert_dialog_get_message (_peel_this);
  }

  bool
  get_modal () noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    gboolean _peel_return = gtk_alert_dialog_get_modal (_peel_this);
    return !!_peel_return;
  }

  void
  set_buttons (peel::StrvRef labels) noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    const char* const *_peel_labels = reinterpret_cast<const char* const *> (labels.data ());
    gtk_alert_dialog_set_buttons (_peel_this, _peel_labels);
  }

  void
  set_cancel_button (int button) noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    gtk_alert_dialog_set_cancel_button (_peel_this, button);
  }

  void
  set_default_button (int button) noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    gtk_alert_dialog_set_default_button (_peel_this, button);
  }

  peel_nonnull_args (2)
  void
  set_detail (const char *detail) noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    gtk_alert_dialog_set_detail (_peel_this, detail);
  }

  peel_nonnull_args (2)
  void
  set_message (const char *message) noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    gtk_alert_dialog_set_message (_peel_this, message);
  }

  void
  set_modal (bool modal) noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    gboolean _peel_modal = static_cast<gboolean> (modal);
    gtk_alert_dialog_set_modal (_peel_this, _peel_modal);
  }

  void
  show (Window *parent) noexcept
  {
    ::GtkAlertDialog *_peel_this = reinterpret_cast<::GtkAlertDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    gtk_alert_dialog_show (_peel_this, _peel_parent);
  }

  static peel::Property<peel::Strv>
  prop_buttons ()
  {
    return peel::Property<peel::Strv> { "buttons" };
  }

  static peel::Property<int>
  prop_cancel_button ()
  {
    return peel::Property<int> { "cancel-button" };
  }

  static peel::Property<int>
  prop_default_button ()
  {
    return peel::Property<int> { "default-button" };
  }

  static peel::Property<const char *>
  prop_detail ()
  {
    return peel::Property<const char *> { "detail" };
  }

  static peel::Property<const char *>
  prop_message ()
  {
    return peel::Property<const char *> { "message" };
  }

  static peel::Property<bool>
  prop_modal ()
  {
    return peel::Property<bool> { "modal" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkAlertDialogClass),
                 "AlertDialog::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkAlertDialogClass),
                 "AlertDialog::Class align mismatch");
}; /* class AlertDialog */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
