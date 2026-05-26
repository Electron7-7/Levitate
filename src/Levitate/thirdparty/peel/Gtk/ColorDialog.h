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

namespace Gdk
{
struct RGBA;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
} /* namespace Gio */

namespace Gtk
{
class ColorDialog;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ColorDialog> ()
{
  return gtk_color_dialog_get_type ();
}


namespace Gtk
{
class ColorDialog : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ColorDialog () = delete;
  ColorDialog (const ColorDialog &) = delete;
  ColorDialog (ColorDialog &&) = delete;
  ColorDialog &
  operator = (const ColorDialog &) = delete;
  ColorDialog &
  operator = (ColorDialog &&) = delete;
  ~ColorDialog () = delete;
public:

  static peel::RefPtr<ColorDialog>
  create () noexcept
  {
    ::GtkColorDialog *_peel_return = gtk_color_dialog_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<ColorDialog>::adopt_ref (reinterpret_cast<ColorDialog *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (3)
  void
  choose_rgba (Window *parent, const Gdk::RGBA *initial_color, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkColorDialog *_peel_this = reinterpret_cast<::GtkColorDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    const ::GdkRGBA *_peel_initial_color = reinterpret_cast<const ::GdkRGBA *> (initial_color);
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
    gtk_color_dialog_choose_rgba (_peel_this, _peel_parent, _peel_initial_color, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::UniquePtr<Gdk::RGBA>
  choose_rgba_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkColorDialog *_peel_this = reinterpret_cast<::GtkColorDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GdkRGBA *_peel_return = gtk_color_dialog_choose_rgba_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::UniquePtr<Gdk::RGBA>::adopt_ref (reinterpret_cast<Gdk::RGBA *> (_peel_return));
  }

  bool
  get_modal () noexcept
  {
    ::GtkColorDialog *_peel_this = reinterpret_cast<::GtkColorDialog *> (this);
    gboolean _peel_return = gtk_color_dialog_get_modal (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  const char *
  get_title () noexcept
  {
    ::GtkColorDialog *_peel_this = reinterpret_cast<::GtkColorDialog *> (this);
    return gtk_color_dialog_get_title (_peel_this);
  }

  bool
  get_with_alpha () noexcept
  {
    ::GtkColorDialog *_peel_this = reinterpret_cast<::GtkColorDialog *> (this);
    gboolean _peel_return = gtk_color_dialog_get_with_alpha (_peel_this);
    return !!_peel_return;
  }

  void
  set_modal (bool modal) noexcept
  {
    ::GtkColorDialog *_peel_this = reinterpret_cast<::GtkColorDialog *> (this);
    gboolean _peel_modal = static_cast<gboolean> (modal);
    gtk_color_dialog_set_modal (_peel_this, _peel_modal);
  }

  peel_nonnull_args (2)
  void
  set_title (const char *title) noexcept
  {
    ::GtkColorDialog *_peel_this = reinterpret_cast<::GtkColorDialog *> (this);
    gtk_color_dialog_set_title (_peel_this, title);
  }

  void
  set_with_alpha (bool with_alpha) noexcept
  {
    ::GtkColorDialog *_peel_this = reinterpret_cast<::GtkColorDialog *> (this);
    gboolean _peel_with_alpha = static_cast<gboolean> (with_alpha);
    gtk_color_dialog_set_with_alpha (_peel_this, _peel_with_alpha);
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

  static peel::Property<bool>
  prop_with_alpha ()
  {
    return peel::Property<bool> { "with-alpha" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkColorDialogClass),
                 "ColorDialog::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkColorDialogClass),
                 "ColorDialog::Class align mismatch");
}; /* class ColorDialog */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gdk/RGBA.h>
