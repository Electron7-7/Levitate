#pragma once

/* Auto-generated, do not modify */
/* Package gdk-pixbuf-2.0 */

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
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <peel/GLib/SList.h>
#include <peel/Gio/LoadableIcon.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
class /* record */ HashTable;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace GdkPixbuf
{
enum class Colorspace : std::underlying_type<::GdkColorspace>::type;
enum class InterpType : std::underlying_type<::GdkInterpType>::type;
class Pixbuf;
struct PixbufFormat;
enum class PixbufRotation : std::underlying_type<::GdkPixbufRotation>::type;
} /* namespace GdkPixbuf */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class InputStream;
class OutputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::Pixbuf> ()
{
  return gdk_pixbuf_get_type ();
}


namespace GdkPixbuf
{
class Pixbuf : public Gio::LoadableIcon
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::Icon, Gio::LoadableIcon */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Pixbuf () = delete;
  Pixbuf (const Pixbuf &) = delete;
  Pixbuf (Pixbuf &&) = delete;
  Pixbuf &
  operator = (const Pixbuf &) = delete;
  Pixbuf &
  operator = (Pixbuf &&) = delete;
  ~Pixbuf () = delete;
public:

  static peel::RefPtr<Pixbuf>
  create (Colorspace colorspace, bool has_alpha, int bits_per_sample, int width, int height) noexcept
  {
    ::GdkColorspace _peel_colorspace = static_cast<::GdkColorspace> (colorspace);
    gboolean _peel_has_alpha = static_cast<gboolean> (has_alpha);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new (_peel_colorspace, _peel_has_alpha, bits_per_sample, width, height);
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<Pixbuf>
  create_from_bytes (GLib::Bytes *data, Colorspace colorspace, bool has_alpha, int bits_per_sample, int width, int height, int rowstride) noexcept
  {
    ::GBytes *_peel_data = reinterpret_cast<::GBytes *> (data);
    ::GdkColorspace _peel_colorspace = static_cast<::GdkColorspace> (colorspace);
    gboolean _peel_has_alpha = static_cast<gboolean> (has_alpha);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_from_bytes (_peel_data, _peel_colorspace, _peel_has_alpha, bits_per_sample, width, height, rowstride);
    peel_assume (_peel_return);
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  template<typename PixbufDestroyNotify>
  static peel::RefPtr<Pixbuf>
  create_from_data (const uint8_t *data, Colorspace colorspace, bool has_alpha, int bits_per_sample, int width, int height, int rowstride, PixbufDestroyNotify &&destroy_fn) noexcept
  {
    gpointer _peel_destroy_fn_data;
    const guchar *_peel_data = reinterpret_cast<const guchar *> (data);
    ::GdkColorspace _peel_colorspace = static_cast<::GdkColorspace> (colorspace);
    gboolean _peel_has_alpha = static_cast<gboolean> (has_alpha);
    ::GdkPixbufDestroyNotify _peel_destroy_fn = peel::internals::CallbackHelper<void, guchar *>::wrap_async_callback (
      static_cast<PixbufDestroyNotify &&> (destroy_fn),
      [] (guchar *pixels, gpointer data) -> void
      {
        PixbufDestroyNotify &_peel_captured_destroy_fn = *reinterpret_cast<typename std::remove_reference<PixbufDestroyNotify>::type *> (data);
        uint8_t *_peel_pixels = reinterpret_cast<uint8_t *> (pixels);
        peel::internals::invoke_if_nonnull<void> (static_cast<PixbufDestroyNotify &&> (_peel_captured_destroy_fn)) (_peel_pixels);
      },
      &_peel_destroy_fn_data);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_from_data (_peel_data, _peel_colorspace, _peel_has_alpha, bits_per_sample, width, height, rowstride, _peel_destroy_fn, _peel_destroy_fn_data);
    peel_assume (_peel_return);
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Pixbuf>
  create_from_file (const char *filename, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_from_file (filename, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Pixbuf>
  create_from_file_at_scale (const char *filename, int width, int height, bool preserve_aspect_ratio, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gboolean _peel_preserve_aspect_ratio = static_cast<gboolean> (preserve_aspect_ratio);
    ::GError *_peel_error = nullptr;
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_from_file_at_scale (filename, width, height, _peel_preserve_aspect_ratio, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Pixbuf>
  create_from_file_at_size (const char *filename, int width, int height, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_from_file_at_size (filename, width, height, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  static peel::RefPtr<Pixbuf>
  create_from_inline (peel::ArrayRef<const uint8_t> data, bool copy_pixels, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gint _peel_data_length;
    const guint8 *_peel_data = (_peel_data_length = data.size (), reinterpret_cast<const guint8 *> (data.data ()));
    gboolean _peel_copy_pixels = static_cast<gboolean> (copy_pixels);
    ::GError *_peel_error = nullptr;
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_from_inline (_peel_data_length, _peel_data, _peel_copy_pixels, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Pixbuf>
  create_from_resource (const char *resource_path, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_from_resource (resource_path, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Pixbuf>
  create_from_resource_at_scale (const char *resource_path, int width, int height, bool preserve_aspect_ratio, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gboolean _peel_preserve_aspect_ratio = static_cast<gboolean> (preserve_aspect_ratio);
    ::GError *_peel_error = nullptr;
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_from_resource_at_scale (resource_path, width, height, _peel_preserve_aspect_ratio, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Pixbuf>
  create_from_stream (Gio::InputStream *stream, Gio::Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStream *_peel_stream = reinterpret_cast<::GInputStream *> (stream);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_from_stream (_peel_stream, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Pixbuf>
  create_from_stream_at_scale (Gio::InputStream *stream, int width, int height, bool preserve_aspect_ratio, Gio::Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStream *_peel_stream = reinterpret_cast<::GInputStream *> (stream);
    gboolean _peel_preserve_aspect_ratio = static_cast<gboolean> (preserve_aspect_ratio);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_from_stream_at_scale (_peel_stream, width, height, _peel_preserve_aspect_ratio, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Pixbuf>
  create_from_stream_finish (Gio::AsyncResult *async_result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_async_result = reinterpret_cast<::GAsyncResult *> (async_result);
    ::GError *_peel_error = nullptr;
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_from_stream_finish (_peel_async_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  static peel::RefPtr<Pixbuf>
  create_from_xpm_data (peel::StrvRef data) noexcept
  {
    const char **_peel_data = const_cast<const char **> (data.data ());
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_from_xpm_data (_peel_data);
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  static int
  calculate_rowstride (Colorspace colorspace, bool has_alpha, int bits_per_sample, int width, int height) noexcept
  {
    ::GdkColorspace _peel_colorspace = static_cast<::GdkColorspace> (colorspace);
    gboolean _peel_has_alpha = static_cast<gboolean> (has_alpha);
    return gdk_pixbuf_calculate_rowstride (_peel_colorspace, _peel_has_alpha, bits_per_sample, width, height);
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (1)
  static PixbufFormat *
  get_file_info (const char *filename, int *width, int *height) noexcept
  {
    gint *_peel_width = reinterpret_cast<gint *> (width);
    gint *_peel_height = reinterpret_cast<gint *> (height);
    ::GdkPixbufFormat *_peel_return = gdk_pixbuf_get_file_info (filename, _peel_width, _peel_height);
    return reinterpret_cast<PixbufFormat *> (_peel_return);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (1)
  static void
  get_file_info_async (const char *filename, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
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
    gdk_pixbuf_get_file_info_async (filename, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (1, 2, 3)
  static PixbufFormat *
  get_file_info_finish (Gio::AsyncResult *async_result, int *width, int *height, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_async_result = reinterpret_cast<::GAsyncResult *> (async_result);
    gint *_peel_width = reinterpret_cast<gint *> (width);
    gint *_peel_height = reinterpret_cast<gint *> (height);
    ::GError *_peel_error = nullptr;
    ::GdkPixbufFormat *_peel_return = gdk_pixbuf_get_file_info_finish (_peel_async_result, _peel_width, _peel_height, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return reinterpret_cast<PixbufFormat *> (_peel_return);
  }

  static GLib::SList<PixbufFormat *>
  get_formats () noexcept
  {
    GSList *_peel_return = gdk_pixbuf_get_formats ();
    return GLib::SList<PixbufFormat *>::adopt_list (_peel_return);
  }

  peel_nonnull_args (1)
  static bool
  init_modules (const char *path, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_pixbuf_init_modules (path, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (1)
  static void
  new_from_stream_async (Gio::InputStream *stream, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GInputStream *_peel_stream = reinterpret_cast<::GInputStream *> (stream);
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
    gdk_pixbuf_new_from_stream_async (_peel_stream, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (1)
  static void
  new_from_stream_at_scale_async (Gio::InputStream *stream, int width, int height, bool preserve_aspect_ratio, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GInputStream *_peel_stream = reinterpret_cast<::GInputStream *> (stream);
    gboolean _peel_preserve_aspect_ratio = static_cast<gboolean> (preserve_aspect_ratio);
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
    gdk_pixbuf_new_from_stream_at_scale_async (_peel_stream, width, height, _peel_preserve_aspect_ratio, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (1)
  static bool
  save_to_stream_finish (Gio::AsyncResult *async_result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_async_result = reinterpret_cast<::GAsyncResult *> (async_result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_pixbuf_save_to_stream_finish (_peel_async_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<Pixbuf>
  add_alpha (bool substitute_color, uint8_t r, uint8_t g, uint8_t b) const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    gboolean _peel_substitute_color = static_cast<gboolean> (substitute_color);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_add_alpha (_peel_this, _peel_substitute_color, r, g, b);
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel::RefPtr<Pixbuf>
  apply_embedded_orientation () noexcept
  {
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_apply_embedded_orientation (_peel_this);
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  composite (Pixbuf *dest, int dest_x, int dest_y, int dest_width, int dest_height, double offset_x, double offset_y, double scale_x, double scale_y, InterpType interp_type, int overall_alpha) const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    ::GdkPixbuf *_peel_dest = reinterpret_cast<::GdkPixbuf *> (dest);
    ::GdkInterpType _peel_interp_type = static_cast<::GdkInterpType> (interp_type);
    gdk_pixbuf_composite (_peel_this, _peel_dest, dest_x, dest_y, dest_width, dest_height, offset_x, offset_y, scale_x, scale_y, _peel_interp_type, overall_alpha);
  }

  peel_nonnull_args (2)
  void
  composite_color (Pixbuf *dest, int dest_x, int dest_y, int dest_width, int dest_height, double offset_x, double offset_y, double scale_x, double scale_y, InterpType interp_type, int overall_alpha, int check_x, int check_y, int check_size, uint32_t color1, uint32_t color2) const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    ::GdkPixbuf *_peel_dest = reinterpret_cast<::GdkPixbuf *> (dest);
    ::GdkInterpType _peel_interp_type = static_cast<::GdkInterpType> (interp_type);
    gdk_pixbuf_composite_color (_peel_this, _peel_dest, dest_x, dest_y, dest_width, dest_height, offset_x, offset_y, scale_x, scale_y, _peel_interp_type, overall_alpha, check_x, check_y, check_size, color1, color2);
  }

  peel::RefPtr<Pixbuf>
  composite_color_simple (int dest_width, int dest_height, InterpType interp_type, int overall_alpha, int check_size, uint32_t color1, uint32_t color2) const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    ::GdkInterpType _peel_interp_type = static_cast<::GdkInterpType> (interp_type);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_composite_color_simple (_peel_this, dest_width, dest_height, _peel_interp_type, overall_alpha, check_size, color1, color2);
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel::RefPtr<Pixbuf>
  copy () const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_copy (_peel_this);
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_nonnull_args (6)
  void
  copy_area (int src_x, int src_y, int width, int height, Pixbuf *dest_pixbuf, int dest_x, int dest_y) const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    ::GdkPixbuf *_peel_dest_pixbuf = reinterpret_cast<::GdkPixbuf *> (dest_pixbuf);
    gdk_pixbuf_copy_area (_peel_this, src_x, src_y, width, height, _peel_dest_pixbuf, dest_x, dest_y);
  }

  peel_nonnull_args (2)
  bool
  copy_options (Pixbuf *dest_pixbuf) noexcept
  {
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    ::GdkPixbuf *_peel_dest_pixbuf = reinterpret_cast<::GdkPixbuf *> (dest_pixbuf);
    gboolean _peel_return = gdk_pixbuf_copy_options (_peel_this, _peel_dest_pixbuf);
    return !!_peel_return;
  }

  void
  fill (uint32_t pixel) noexcept
  {
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    gdk_pixbuf_fill (_peel_this, pixel);
  }

  peel::RefPtr<Pixbuf>
  flip (bool horizontal) const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    gboolean _peel_horizontal = static_cast<gboolean> (horizontal);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_flip (_peel_this, _peel_horizontal);
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  int
  get_bits_per_sample () const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    return gdk_pixbuf_get_bits_per_sample (_peel_this);
  }

  size_t
  get_byte_length () const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    return gdk_pixbuf_get_byte_length (_peel_this);
  }

  Colorspace
  get_colorspace () const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    ::GdkColorspace _peel_return = gdk_pixbuf_get_colorspace (_peel_this);
    return static_cast<Colorspace> (_peel_return);
  }

  bool
  get_has_alpha () const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    gboolean _peel_return = gdk_pixbuf_get_has_alpha (_peel_this);
    return !!_peel_return;
  }

  int
  get_height () const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    return gdk_pixbuf_get_height (_peel_this);
  }

  int
  get_n_channels () const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    return gdk_pixbuf_get_n_channels (_peel_this);
  }

  peel_nonnull_args (2)
  const char *
  get_option (const char *key) noexcept
  {
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    return gdk_pixbuf_get_option (_peel_this, key);
  }

  /* Unsupported for now: get_options: transfer container, but not an array or a list */
  static void
  get_options (UnsupportedForNowToken);

  uint8_t *
  get_pixels () const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    guchar *_peel_return = gdk_pixbuf_get_pixels (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<uint8_t *> (_peel_return);
  }

  peel::ArrayRef<uint8_t>
  get_pixels_with_length () const noexcept
  {
    guint _peel_length;
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    guchar *_peel_return = gdk_pixbuf_get_pixels_with_length (_peel_this, &_peel_length);
    peel_assume (_peel_return);
    return peel::ArrayRef<uint8_t> (reinterpret_cast<uint8_t *> (_peel_return), _peel_length);
  }

  int
  get_rowstride () const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    return gdk_pixbuf_get_rowstride (_peel_this);
  }

  int
  get_width () const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    return gdk_pixbuf_get_width (_peel_this);
  }

  peel::RefPtr<Pixbuf>
  new_subpixbuf (int src_x, int src_y, int width, int height) noexcept
  {
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_new_subpixbuf (_peel_this, src_x, src_y, width, height);
    peel_assume (_peel_return);
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel::RefPtr<GLib::Bytes>
  read_pixel_bytes () const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    ::GBytes *_peel_return = gdk_pixbuf_read_pixel_bytes (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  /* Unsupported for now: read_pixels: explicitly skipped */
  static void
  read_pixels (UnsupportedForNowToken);

  peel_returns_nonnull
  Pixbuf *
  ref () noexcept
  {
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_ref (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Pixbuf *> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  remove_option (const char *key) noexcept
  {
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    gboolean _peel_return = gdk_pixbuf_remove_option (_peel_this, key);
    return !!_peel_return;
  }

  peel::RefPtr<Pixbuf>
  rotate_simple (PixbufRotation angle) const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    ::GdkPixbufRotation _peel_angle = static_cast<::GdkPixbufRotation> (angle);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_rotate_simple (_peel_this, _peel_angle);
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  saturate_and_pixelate (Pixbuf *dest, float saturation, bool pixelate) const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    ::GdkPixbuf *_peel_dest = reinterpret_cast<::GdkPixbuf *> (dest);
    gboolean _peel_pixelate = static_cast<gboolean> (pixelate);
    gdk_pixbuf_saturate_and_pixelate (_peel_this, _peel_dest, saturation, _peel_pixelate);
  }

  /* Unsupported for now: save: varargs */
  static void
  save (UnsupportedForNowToken);

  /* Unsupported for now: save_to_buffer: varargs */
  static void
  save_to_buffer (UnsupportedForNowToken);

  peel_nonnull_args (3)
  bool
  save_to_bufferv (peel::UniquePtr<uint8_t[]> *buffer, const char *type, peel::StrvRef option_keys, peel::StrvRef option_values, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_buffer_size;
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    gchar *_peel_buffer;
    char **_peel_option_keys = const_cast<char **> (option_keys.data ());
    char **_peel_option_values = const_cast<char **> (option_values.data ());
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_pixbuf_save_to_bufferv (_peel_this, &_peel_buffer, &_peel_buffer_size, type, _peel_option_keys, _peel_option_values, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        *buffer = peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_buffer), _peel_buffer_size);
      }
    return !!_peel_return;
  }

  /* Unsupported for now: save_to_callback: varargs */
  static void
  save_to_callback (UnsupportedForNowToken);

  template<typename PixbufSaveFunc>
  peel_nonnull_args (3)
  bool
  save_to_callbackv (PixbufSaveFunc &&save_func, const char *type, peel::StrvRef option_keys, peel::StrvRef option_values, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gpointer _peel_user_data;
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    ::GdkPixbufSaveFunc _peel_save_func = peel::internals::CallbackHelper<gboolean, const gchar *, gsize, ::GError **>::wrap_call_callback (
      static_cast<PixbufSaveFunc &&> (save_func),
      [] (const gchar *buf, gsize count, ::GError **error, gpointer data) -> gboolean
      {
        PixbufSaveFunc &_peel_captured_save_func = *reinterpret_cast<typename std::remove_reference<PixbufSaveFunc>::type *> (data);
        peel::ArrayRef<const uint8_t> _peel_buf = peel::ArrayRef<const uint8_t> (reinterpret_cast<const uint8_t *> (buf), count);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_captured_save_func (_peel_buf, &_peel_error);
        *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<PixbufSaveFunc, void, peel::ArrayRef<const uint8_t>, size_t, peel::UniquePtr<GLib::Error>>::value);
    char **_peel_option_keys = const_cast<char **> (option_keys.data ());
    char **_peel_option_values = const_cast<char **> (option_values.data ());
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_pixbuf_save_to_callbackv (_peel_this, _peel_save_func, _peel_user_data, type, _peel_option_keys, _peel_option_values, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  /* Unsupported for now: save_to_stream: varargs */
  static void
  save_to_stream (UnsupportedForNowToken);

  /* Unsupported for now: save_to_stream_async: varargs */
  static void
  save_to_stream_async (UnsupportedForNowToken);

  peel_nonnull_args (2, 3)
  bool
  save_to_streamv (Gio::OutputStream *stream, const char *type, peel::StrvRef option_keys, peel::StrvRef option_values, Gio::Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    ::GOutputStream *_peel_stream = reinterpret_cast<::GOutputStream *> (stream);
    char **_peel_option_keys = const_cast<char **> (option_keys.data ());
    char **_peel_option_values = const_cast<char **> (option_values.data ());
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_pixbuf_save_to_streamv (_peel_this, _peel_stream, type, _peel_option_keys, _peel_option_values, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2, 3)
  void
  save_to_streamv_async (Gio::OutputStream *stream, const char *type, peel::StrvRef option_keys, peel::StrvRef option_values, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    ::GOutputStream *_peel_stream = reinterpret_cast<::GOutputStream *> (stream);
    gchar **_peel_option_keys = const_cast<gchar **> (option_keys.data ());
    gchar **_peel_option_values = const_cast<gchar **> (option_values.data ());
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
    gdk_pixbuf_save_to_streamv_async (_peel_this, _peel_stream, type, _peel_option_keys, _peel_option_values, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2, 3)
  bool
  savev (const char *filename, const char *type, peel::StrvRef option_keys, peel::StrvRef option_values, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    char **_peel_option_keys = const_cast<char **> (option_keys.data ());
    char **_peel_option_values = const_cast<char **> (option_values.data ());
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_pixbuf_savev (_peel_this, filename, type, _peel_option_keys, _peel_option_values, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  scale (Pixbuf *dest, int dest_x, int dest_y, int dest_width, int dest_height, double offset_x, double offset_y, double scale_x, double scale_y, InterpType interp_type) const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    ::GdkPixbuf *_peel_dest = reinterpret_cast<::GdkPixbuf *> (dest);
    ::GdkInterpType _peel_interp_type = static_cast<::GdkInterpType> (interp_type);
    gdk_pixbuf_scale (_peel_this, _peel_dest, dest_x, dest_y, dest_width, dest_height, offset_x, offset_y, scale_x, scale_y, _peel_interp_type);
  }

  peel::RefPtr<Pixbuf>
  scale_simple (int dest_width, int dest_height, InterpType interp_type) const noexcept
  {
    const ::GdkPixbuf *_peel_this = reinterpret_cast<const ::GdkPixbuf *> (this);
    ::GdkInterpType _peel_interp_type = static_cast<::GdkInterpType> (interp_type);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_scale_simple (_peel_this, dest_width, dest_height, _peel_interp_type);
    return peel::RefPtr<Pixbuf>::adopt_ref (reinterpret_cast<Pixbuf *> (_peel_return));
  }

  peel_nonnull_args (2, 3)
  bool
  set_option (const char *key, const char *value) noexcept
  {
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    gboolean _peel_return = gdk_pixbuf_set_option (_peel_this, key, value);
    return !!_peel_return;
  }

  void
  unref () noexcept
  {
    ::GdkPixbuf *_peel_this = reinterpret_cast<::GdkPixbuf *> (this);
    gdk_pixbuf_unref (_peel_this);
  }

  static peel::Property<int>
  prop_bits_per_sample ()
  {
    return peel::Property<int> { "bits-per-sample" };
  }

  static peel::Property<Colorspace>
  prop_colorspace ()
  {
    return peel::Property<Colorspace> { "colorspace" };
  }

  static peel::Property<bool>
  prop_has_alpha ()
  {
    return peel::Property<bool> { "has-alpha" };
  }

  static peel::Property<int>
  prop_height ()
  {
    return peel::Property<int> { "height" };
  }

  static peel::Property<int>
  prop_n_channels ()
  {
    return peel::Property<int> { "n-channels" };
  }

  static peel::Property<GLib::Bytes>
  prop_pixel_bytes ()
  {
    return peel::Property<GLib::Bytes> { "pixel-bytes" };
  }

  static peel::Property<void *>
  prop_pixels ()
  {
    return peel::Property<void *> { "pixels" };
  }

  static peel::Property<int>
  prop_rowstride ()
  {
    return peel::Property<int> { "rowstride" };
  }

  static peel::Property<int>
  prop_width ()
  {
    return peel::Property<int> { "width" };
  }
}; /* class Pixbuf */

} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
#include <peel/GLib/HashTable.h>
#include <peel/GdkPixbuf/PixbufFormat.h>
