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
class Filter;
class FontDialog;
class Window;
} /* namespace Gtk */

namespace Pango
{
class /* record */ FontDescription;
class FontFace;
class FontFamily;
class FontMap;
class /* record */ Language;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FontDialog> ()
{
  return gtk_font_dialog_get_type ();
}


namespace Gtk
{
class FontDialog : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FontDialog () = delete;
  FontDialog (const FontDialog &) = delete;
  FontDialog (FontDialog &&) = delete;
  FontDialog &
  operator = (const FontDialog &) = delete;
  FontDialog &
  operator = (FontDialog &&) = delete;
  ~FontDialog () = delete;
public:

  static peel::RefPtr<FontDialog>
  create () noexcept
  {
    ::GtkFontDialog *_peel_return = gtk_font_dialog_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<FontDialog>::adopt_ref (reinterpret_cast<FontDialog *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  choose_face (Window *parent, Pango::FontFace *initial_value, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::PangoFontFace *_peel_initial_value = reinterpret_cast<::PangoFontFace *> (initial_value);
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
    gtk_font_dialog_choose_face (_peel_this, _peel_parent, _peel_initial_value, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Pango::FontFace>
  choose_face_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::PangoFontFace *_peel_return = gtk_font_dialog_choose_face_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Pango::FontFace>::adopt_ref (reinterpret_cast<Pango::FontFace *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  choose_family (Window *parent, Pango::FontFamily *initial_value, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::PangoFontFamily *_peel_initial_value = reinterpret_cast<::PangoFontFamily *> (initial_value);
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
    gtk_font_dialog_choose_family (_peel_this, _peel_parent, _peel_initial_value, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Pango::FontFamily>
  choose_family_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::PangoFontFamily *_peel_return = gtk_font_dialog_choose_family_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Pango::FontFamily>::adopt_ref (reinterpret_cast<Pango::FontFamily *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (3)
  void
  choose_font (Window *parent, Pango::FontDescription *initial_value, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::PangoFontDescription *_peel_initial_value = reinterpret_cast<::PangoFontDescription *> (initial_value);
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
    gtk_font_dialog_choose_font (_peel_this, _peel_parent, _peel_initial_value, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (3)
  void
  choose_font_and_features (Window *parent, Pango::FontDescription *initial_value, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::PangoFontDescription *_peel_initial_value = reinterpret_cast<::PangoFontDescription *> (initial_value);
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
    gtk_font_dialog_choose_font_and_features (_peel_this, _peel_parent, _peel_initial_value, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  /* Unsupported for now: choose_font_and_features_finish: no idea about ownership semantics */
  static void
  choose_font_and_features_finish (UnsupportedForNowToken);

  peel_nonnull_args (2)
  peel::UniquePtr<Pango::FontDescription>
  choose_font_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::PangoFontDescription *_peel_return = gtk_font_dialog_choose_font_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::UniquePtr<Pango::FontDescription>::adopt_ref (reinterpret_cast<Pango::FontDescription *> (_peel_return));
  }

  Filter *
  get_filter () noexcept
  {
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    ::GtkFilter *_peel_return = gtk_font_dialog_get_filter (_peel_this);
    return reinterpret_cast<Filter *> (_peel_return);
  }

  Pango::FontMap *
  get_font_map () noexcept
  {
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    ::PangoFontMap *_peel_return = gtk_font_dialog_get_font_map (_peel_this);
    return reinterpret_cast<Pango::FontMap *> (_peel_return);
  }

  /* Unsupported for now: get_language: no idea about ownership semantics */
  static void
  get_language (UnsupportedForNowToken);

  bool
  get_modal () noexcept
  {
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    gboolean _peel_return = gtk_font_dialog_get_modal (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  const char *
  get_title () noexcept
  {
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    return gtk_font_dialog_get_title (_peel_this);
  }

  void
  set_filter (Filter *filter) noexcept
  {
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    ::GtkFilter *_peel_filter = reinterpret_cast<::GtkFilter *> (filter);
    gtk_font_dialog_set_filter (_peel_this, _peel_filter);
  }

  void
  set_font_map (Pango::FontMap *fontmap) noexcept
  {
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    ::PangoFontMap *_peel_fontmap = reinterpret_cast<::PangoFontMap *> (fontmap);
    gtk_font_dialog_set_font_map (_peel_this, _peel_fontmap);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_language (Pango::Language *language) noexcept
  {
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    gtk_font_dialog_set_language (_peel_this, _peel_language);
  }

  void
  set_modal (bool modal) noexcept
  {
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    gboolean _peel_modal = static_cast<gboolean> (modal);
    gtk_font_dialog_set_modal (_peel_this, _peel_modal);
  }

  peel_nonnull_args (2)
  void
  set_title (const char *title) noexcept
  {
    ::GtkFontDialog *_peel_this = reinterpret_cast<::GtkFontDialog *> (this);
    gtk_font_dialog_set_title (_peel_this, title);
  }

  static peel::Property<Filter>
  prop_filter ()
  {
    return peel::Property<Filter> { "filter" };
  }

  static peel::Property<Pango::FontMap>
  prop_font_map ()
  {
    return peel::Property<Pango::FontMap> { "font-map" };
  }

  static peel::Property<Pango::Language>
  prop_language ()
  {
    return peel::Property<Pango::Language> { "language" };
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

  static_assert (sizeof (Class) == sizeof (::GtkFontDialogClass),
                 "FontDialog::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFontDialogClass),
                 "FontDialog::Class align mismatch");
}; /* class FontDialog */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Pango/FontDescription.h>
#include <peel/Pango/FontFace.h>
#include <peel/Pango/FontFamily.h>
#include <peel/Pango/Language.h>
