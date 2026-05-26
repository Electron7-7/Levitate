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
#include <gdk/gdk.h>

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
struct Value;
} /* namespace GObject */

namespace Gdk
{
class ContentDeserializer;
class ContentSerializer;
class Event;
struct RGBA;
struct Rectangle;
class Surface;
class Texture;
} /* namespace Gdk */

namespace GdkPixbuf
{
class Pixbuf;
} /* namespace GdkPixbuf */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class InputStream;
class OutputStream;
} /* namespace Gio */

namespace Pango
{
class Layout;
struct LayoutLine;
} /* namespace Pango */


namespace Gdk
{
peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1, 2)
static void
cairo_draw_from_gl (::cairo_t *cr, Surface *surface, int source, int source_type, int buffer_scale, int x, int y, int width, int height) noexcept
{
  ::GdkSurface *_peel_surface = reinterpret_cast<::GdkSurface *> (surface);
  gdk_cairo_draw_from_gl (cr, _peel_surface, source, source_type, buffer_scale, x, y, width, height);
}

peel_no_warn_unused peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
static void
cairo_rectangle (::cairo_t *cr, const Rectangle *rectangle) noexcept
{
  const ::GdkRectangle *_peel_rectangle = reinterpret_cast<const ::GdkRectangle *> (rectangle);
  gdk_cairo_rectangle (cr, _peel_rectangle);
}

peel_no_warn_unused peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
static void
cairo_region (::cairo_t *cr, const ::cairo_region_t *region) noexcept
{
  gdk_cairo_region (cr, region);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static ::cairo_region_t *
cairo_region_create_from_surface (::cairo_surface_t *surface) noexcept
{
  ::cairo_region_t *_peel_return = gdk_cairo_region_create_from_surface (surface);
  peel_assume (_peel_return);
  return _peel_return;
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1, 2)
static void
cairo_set_source_pixbuf (::cairo_t *cr, const GdkPixbuf::Pixbuf *pixbuf, double pixbuf_x, double pixbuf_y) noexcept
{
  const ::GdkPixbuf *_peel_pixbuf = reinterpret_cast<const ::GdkPixbuf *> (pixbuf);
  gdk_cairo_set_source_pixbuf (cr, _peel_pixbuf, pixbuf_x, pixbuf_y);
}

peel_no_warn_unused peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
static void
cairo_set_source_rgba (::cairo_t *cr, const RGBA *rgba) noexcept
{
  const ::GdkRGBA *_peel_rgba = reinterpret_cast<const ::GdkRGBA *> (rgba);
  gdk_cairo_set_source_rgba (cr, _peel_rgba);
}

/* color_state_get_oklab moved to ColorState.get_oklab */

/* color_state_get_oklch moved to ColorState.get_oklch */

/* color_state_get_rec2100_linear moved to ColorState.get_rec2100_linear */

/* color_state_get_rec2100_pq moved to ColorState.get_rec2100_pq */

/* color_state_get_srgb moved to ColorState.get_srgb */

/* color_state_get_srgb_linear moved to ColorState.get_srgb_linear */

template<typename AsyncReadyCallback>
peel_no_warn_unused peel_nonnull_args (1, 2)
static void
content_deserialize_async (Gio::InputStream *stream, const char *mime_type, GObject::Type type, int io_priority, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
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
  gdk_content_deserialize_async (_peel_stream, mime_type, type, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (1, 2)
static bool
content_deserialize_finish (Gio::AsyncResult *result, GObject::Value *value, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
  ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = gdk_content_deserialize_finish (_peel_result, _peel_value, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

/* content_formats_parse moved to ContentFormats.parse */

/* Unsupported for now: content_register_deserializer: explicitly skipped */

/* Unsupported for now: content_register_serializer: explicitly skipped */

template<typename AsyncReadyCallback>
peel_no_warn_unused peel_arg_in (3) peel_nonnull_args (1, 2, 3)
static void
content_serialize_async (Gio::OutputStream *stream, const char *mime_type, const GObject::Value *value, int io_priority, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
{
  gpointer _peel_user_data;
  ::GOutputStream *_peel_stream = reinterpret_cast<::GOutputStream *> (stream);
  const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
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
  gdk_content_serialize_async (_peel_stream, mime_type, _peel_value, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
content_serialize_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = gdk_content_serialize_finish (_peel_result, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

/* dmabuf_error_quark moved to DmabufError.quark */

/* drag_action_is_unique moved to DragAction.is_unique */

peel_no_warn_unused peel_arg_out (3) peel_nonnull_args (1, 2, 3)
static bool
events_get_angle (Event *event1, Event *event2, double *angle) noexcept
{
  ::GdkEvent *_peel_event1 = reinterpret_cast<::GdkEvent *> (event1);
  ::GdkEvent *_peel_event2 = reinterpret_cast<::GdkEvent *> (event2);
  gboolean _peel_return = gdk_events_get_angle (_peel_event1, _peel_event2, angle);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (1, 2, 3, 4)
static bool
events_get_center (Event *event1, Event *event2, double *x, double *y) noexcept
{
  ::GdkEvent *_peel_event1 = reinterpret_cast<::GdkEvent *> (event1);
  ::GdkEvent *_peel_event2 = reinterpret_cast<::GdkEvent *> (event2);
  gboolean _peel_return = gdk_events_get_center (_peel_event1, _peel_event2, x, y);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (3) peel_nonnull_args (1, 2, 3)
static bool
events_get_distance (Event *event1, Event *event2, double *distance) noexcept
{
  ::GdkEvent *_peel_event1 = reinterpret_cast<::GdkEvent *> (event1);
  ::GdkEvent *_peel_event2 = reinterpret_cast<::GdkEvent *> (event2);
  gboolean _peel_return = gdk_events_get_distance (_peel_event1, _peel_event2, distance);
  return !!_peel_return;
}

/* gl_error_quark moved to GLError.quark */

peel_no_warn_unused peel_nonnull_args (1)
static const char *
intern_mime_type (const char *string) noexcept
{
  return gdk_intern_mime_type (string);
}

peel_no_warn_unused peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
static void
keyval_convert_case (unsigned symbol, unsigned *lower, unsigned *upper) noexcept
{
  guint *_peel_lower = reinterpret_cast<guint *> (lower);
  guint *_peel_upper = reinterpret_cast<guint *> (upper);
  gdk_keyval_convert_case (symbol, _peel_lower, _peel_upper);
}

peel_no_warn_unused peel_nonnull_args (1)
static unsigned
keyval_from_name (const char *keyval_name) noexcept
{
  return gdk_keyval_from_name (keyval_name);
}

peel_no_warn_unused
static bool
keyval_is_lower (unsigned keyval) noexcept
{
  gboolean _peel_return = gdk_keyval_is_lower (keyval);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
keyval_is_upper (unsigned keyval) noexcept
{
  gboolean _peel_return = gdk_keyval_is_upper (keyval);
  return !!_peel_return;
}

peel_no_warn_unused
static const char *
keyval_name (unsigned keyval) noexcept
{
  return gdk_keyval_name (keyval);
}

peel_no_warn_unused
static unsigned
keyval_to_lower (unsigned keyval) noexcept
{
  return gdk_keyval_to_lower (keyval);
}

peel_no_warn_unused
static uint32_t
keyval_to_unicode (unsigned keyval) noexcept
{
  return gdk_keyval_to_unicode (keyval);
}

peel_no_warn_unused
static unsigned
keyval_to_upper (unsigned keyval) noexcept
{
  return gdk_keyval_to_upper (keyval);
}

/* paintable_new_empty moved to Paintable.new_empty */

/* Unsupported for now: pango_layout_get_clip_region: explicitly skipped */

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static ::cairo_region_t *
pango_layout_line_get_clip_region (Pango::LayoutLine *line, int x_origin, int y_origin, const int *index_ranges, int n_ranges) noexcept
{
  ::PangoLayoutLine *_peel_line = reinterpret_cast<::PangoLayoutLine *> (line);
  ::cairo_region_t *_peel_return = gdk_pango_layout_line_get_clip_region (_peel_line, x_origin, y_origin, index_ranges, n_ranges);
  peel_assume (_peel_return);
  return _peel_return;
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static peel::RefPtr<GdkPixbuf::Pixbuf>
pixbuf_get_from_surface (::cairo_surface_t *surface, int src_x, int src_y, int width, int height) noexcept
{
  ::GdkPixbuf *_peel_return = gdk_pixbuf_get_from_surface (surface, src_x, src_y, width, height);
  return peel::RefPtr<GdkPixbuf::Pixbuf>::adopt_ref (reinterpret_cast<GdkPixbuf::Pixbuf *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<GdkPixbuf::Pixbuf>
pixbuf_get_from_texture (Texture *texture) noexcept
{
  ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
  ::GdkPixbuf *_peel_return = gdk_pixbuf_get_from_texture (_peel_texture);
  return peel::RefPtr<GdkPixbuf::Pixbuf>::adopt_ref (reinterpret_cast<GdkPixbuf::Pixbuf *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static void
set_allowed_backends (const char *backends) noexcept
{
  gdk_set_allowed_backends (backends);
}

/* texture_error_quark moved to TextureError.quark */

peel_no_warn_unused
static unsigned
unicode_to_keyval (uint32_t wc) noexcept
{
  return gdk_unicode_to_keyval (wc);
}

/* vulkan_error_quark moved to VulkanError.quark */



} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GObject/Object.h>
#include <peel/GObject/Value.h>
#include <peel/Gdk/ContentDeserializer.h>
#include <peel/Gdk/ContentSerializer.h>
#include <peel/Gdk/Event.h>
#include <peel/Gdk/RGBA.h>
#include <peel/Gdk/Rectangle.h>
#include <peel/Gdk/Surface.h>
#include <peel/Gdk/Texture.h>
#include <peel/GdkPixbuf/Pixbuf.h>
#include <peel/Gio/AsyncResult.h>
#include <peel/Gio/Cancellable.h>
#include <peel/Gio/InputStream.h>
#include <peel/Gio/OutputStream.h>
#include <peel/Pango/Layout.h>
#include <peel/Pango/LayoutLine.h>
