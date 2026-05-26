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
class OutputStream;
} /* namespace Gio */

namespace Gtk
{
class PageSetup;
class PrintDialog;
class PrintSettings;
class /* record */ PrintSetup;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PrintDialog> ()
{
  return gtk_print_dialog_get_type ();
}


namespace Gtk
{
class PrintDialog : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PrintDialog () = delete;
  PrintDialog (const PrintDialog &) = delete;
  PrintDialog (PrintDialog &&) = delete;
  PrintDialog &
  operator = (const PrintDialog &) = delete;
  PrintDialog &
  operator = (PrintDialog &&) = delete;
  ~PrintDialog () = delete;
public:

  static peel::RefPtr<PrintDialog>
  create () noexcept
  {
    ::GtkPrintDialog *_peel_return = gtk_print_dialog_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<PrintDialog>::adopt_ref (reinterpret_cast<PrintDialog *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_accept_label () noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    return gtk_print_dialog_get_accept_label (_peel_this);
  }

  bool
  get_modal () noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    gboolean _peel_return = gtk_print_dialog_get_modal (_peel_this);
    return !!_peel_return;
  }

  PageSetup *
  get_page_setup () noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    ::GtkPageSetup *_peel_return = gtk_print_dialog_get_page_setup (_peel_this);
    return reinterpret_cast<PageSetup *> (_peel_return);
  }

  PrintSettings *
  get_print_settings () noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    ::GtkPrintSettings *_peel_return = gtk_print_dialog_get_print_settings (_peel_this);
    return reinterpret_cast<PrintSettings *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_title () noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    return gtk_print_dialog_get_title (_peel_this);
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (3)
  void
  print (Window *parent, PrintSetup *setup, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GtkPrintSetup *_peel_setup = reinterpret_cast<::GtkPrintSetup *> (setup);
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
    gtk_print_dialog_print (_peel_this, _peel_parent, _peel_setup, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (3) peel_nonnull_args (4)
  void
  print_file (Window *parent, PrintSetup *setup, Gio::File *file, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GtkPrintSetup *_peel_setup = reinterpret_cast<::GtkPrintSetup *> (setup);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
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
    gtk_print_dialog_print_file (_peel_this, _peel_parent, _peel_setup, _peel_file, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  print_file_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_print_dialog_print_file_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::RefPtr<Gio::OutputStream>
  print_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GOutputStream *_peel_return = gtk_print_dialog_print_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Gio::OutputStream>::adopt_ref (reinterpret_cast<Gio::OutputStream *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  set_accept_label (const char *accept_label) noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    gtk_print_dialog_set_accept_label (_peel_this, accept_label);
  }

  void
  set_modal (bool modal) noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    gboolean _peel_modal = static_cast<gboolean> (modal);
    gtk_print_dialog_set_modal (_peel_this, _peel_modal);
  }

  peel_nonnull_args (2)
  void
  set_page_setup (PageSetup *page_setup) noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    ::GtkPageSetup *_peel_page_setup = reinterpret_cast<::GtkPageSetup *> (page_setup);
    gtk_print_dialog_set_page_setup (_peel_this, _peel_page_setup);
  }

  peel_nonnull_args (2)
  void
  set_print_settings (PrintSettings *print_settings) noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    ::GtkPrintSettings *_peel_print_settings = reinterpret_cast<::GtkPrintSettings *> (print_settings);
    gtk_print_dialog_set_print_settings (_peel_this, _peel_print_settings);
  }

  peel_nonnull_args (2)
  void
  set_title (const char *title) noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    gtk_print_dialog_set_title (_peel_this, title);
  }

  template<typename AsyncReadyCallback>
  void
  setup (Window *parent, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
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
    gtk_print_dialog_setup (_peel_this, _peel_parent, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<PrintSetup>
  setup_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkPrintDialog *_peel_this = reinterpret_cast<::GtkPrintDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GtkPrintSetup *_peel_return = gtk_print_dialog_setup_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<PrintSetup>::adopt_ref (reinterpret_cast<PrintSetup *> (_peel_return));
  }

  static peel::Property<const char *>
  prop_accept_label ()
  {
    return peel::Property<const char *> { "accept-label" };
  }

  static peel::Property<bool>
  prop_modal ()
  {
    return peel::Property<bool> { "modal" };
  }

  static peel::Property<PageSetup>
  prop_page_setup ()
  {
    return peel::Property<PageSetup> { "page-setup" };
  }

  static peel::Property<PrintSettings>
  prop_print_settings ()
  {
    return peel::Property<PrintSettings> { "print-settings" };
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

  static_assert (sizeof (Class) == sizeof (::GtkPrintDialogClass),
                 "PrintDialog::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkPrintDialogClass),
                 "PrintDialog::Class align mismatch");
}; /* class PrintDialog */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/OutputStream.h>
#include <peel/Gtk/PrintSetup.h>
