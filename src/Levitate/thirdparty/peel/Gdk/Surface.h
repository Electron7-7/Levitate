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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gdk
{
class CairoContext;
class Cursor;
class Device;
class Display;
class Event;
class FrameClock;
class GLContext;
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
class Monitor;
class Surface;
class VulkanContext;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Surface> ()
{
  return gdk_surface_get_type ();
}


namespace Gdk
{
class Surface : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Surface () = delete;
  Surface (const Surface &) = delete;
  Surface (Surface &&) = delete;
  Surface &
  operator = (const Surface &) = delete;
  Surface &
  operator = (Surface &&) = delete;
  ~Surface () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<Surface>
  create_popup (Surface *parent, bool autohide) noexcept
  {
    ::GdkSurface *_peel_parent = reinterpret_cast<::GdkSurface *> (parent);
    gboolean _peel_autohide = static_cast<gboolean> (autohide);
    ::GdkSurface *_peel_return = gdk_surface_new_popup (_peel_parent, _peel_autohide);
    peel_assume (_peel_return);
    return peel::RefPtr<Surface>::adopt_ref (reinterpret_cast<Surface *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Surface>
  create_toplevel (Display *display) noexcept
  {
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    ::GdkSurface *_peel_return = gdk_surface_new_toplevel (_peel_display);
    peel_assume (_peel_return);
    return peel::RefPtr<Surface>::adopt_ref (reinterpret_cast<Surface *> (_peel_return));
  }

  void
  beep () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    gdk_surface_beep (_peel_this);
  }

  peel::RefPtr<CairoContext>
  create_cairo_context () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    ::GdkCairoContext *_peel_return = gdk_surface_create_cairo_context (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<CairoContext>::adopt_ref (reinterpret_cast<CairoContext *> (_peel_return));
  }

  peel::RefPtr<GLContext>
  create_gl_context (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    ::GError *_peel_error = nullptr;
    ::GdkGLContext *_peel_return = gdk_surface_create_gl_context (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GLContext>::adopt_ref (reinterpret_cast<GLContext *> (_peel_return));
  }

  ::cairo_surface_t *
  create_similar_surface (::cairo_content_t content, int width, int height) noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    ::cairo_content_t _peel_content = static_cast<::cairo_content_t> (content);
    ::cairo_surface_t *_peel_return = gdk_surface_create_similar_surface (_peel_this, _peel_content, width, height);
    peel_assume (_peel_return);
    return _peel_return;
  }

  peel::RefPtr<VulkanContext>
  create_vulkan_context (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    ::GError *_peel_error = nullptr;
    ::GdkVulkanContext *_peel_return = gdk_surface_create_vulkan_context (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<VulkanContext>::adopt_ref (reinterpret_cast<VulkanContext *> (_peel_return));
  }

  void
  destroy () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    gdk_surface_destroy (_peel_this);
  }

  Cursor *
  get_cursor () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    ::GdkCursor *_peel_return = gdk_surface_get_cursor (_peel_this);
    return reinterpret_cast<Cursor *> (_peel_return);
  }

  peel_nonnull_args (2)
  Cursor *
  get_device_cursor (Device *device) noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    ::GdkDevice *_peel_device = reinterpret_cast<::GdkDevice *> (device);
    ::GdkCursor *_peel_return = gdk_surface_get_device_cursor (_peel_this, _peel_device);
    return reinterpret_cast<Cursor *> (_peel_return);
  }

  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2)
  bool
  get_device_position (Device *device, double *x, double *y, ModifierType *mask) noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    ::GdkDevice *_peel_device = reinterpret_cast<::GdkDevice *> (device);
    ::GdkModifierType *_peel_mask = reinterpret_cast<::GdkModifierType *> (mask);
    gboolean _peel_return = gdk_surface_get_device_position (_peel_this, _peel_device, x, y, _peel_mask);
    return !!_peel_return;
  }

  peel_returns_nonnull
  Display *
  get_display () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    ::GdkDisplay *_peel_return = gdk_surface_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Display *> (_peel_return);
  }

  peel_returns_nonnull
  FrameClock *
  get_frame_clock () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    ::GdkFrameClock *_peel_return = gdk_surface_get_frame_clock (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<FrameClock *> (_peel_return);
  }

  int
  get_height () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    return gdk_surface_get_height (_peel_this);
  }

  bool
  get_mapped () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    gboolean _peel_return = gdk_surface_get_mapped (_peel_this);
    return !!_peel_return;
  }

  double
  get_scale () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    return gdk_surface_get_scale (_peel_this);
  }

  int
  get_scale_factor () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    return gdk_surface_get_scale_factor (_peel_this);
  }

  int
  get_width () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    return gdk_surface_get_width (_peel_this);
  }

  void
  hide () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    gdk_surface_hide (_peel_this);
  }

  bool
  is_destroyed () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    gboolean _peel_return = gdk_surface_is_destroyed (_peel_this);
    return !!_peel_return;
  }

  void
  queue_render () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    gdk_surface_queue_render (_peel_this);
  }

  void
  request_layout () noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    gdk_surface_request_layout (_peel_this);
  }

  void
  set_cursor (Cursor *cursor) noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    ::GdkCursor *_peel_cursor = reinterpret_cast<::GdkCursor *> (cursor);
    gdk_surface_set_cursor (_peel_this, _peel_cursor);
  }

  peel_nonnull_args (2, 3)
  void
  set_device_cursor (Device *device, Cursor *cursor) noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    ::GdkDevice *_peel_device = reinterpret_cast<::GdkDevice *> (device);
    ::GdkCursor *_peel_cursor = reinterpret_cast<::GdkCursor *> (cursor);
    gdk_surface_set_device_cursor (_peel_this, _peel_device, _peel_cursor);
  }

  peel_arg_in (2)
  void
  set_input_region (::cairo_region_t *region) noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    gdk_surface_set_input_region (_peel_this, region);
  }

  peel_arg_in (2)
  void
  set_opaque_region (::cairo_region_t *region) noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    gdk_surface_set_opaque_region (_peel_this, region);
  }

  peel_arg_inout (3) peel_arg_inout (4) peel_nonnull_args (2, 3, 4)
  bool
  translate_coordinates (Surface *to, double *x, double *y) noexcept
  {
    ::GdkSurface *_peel_this = reinterpret_cast<::GdkSurface *> (this);
    ::GdkSurface *_peel_to = reinterpret_cast<::GdkSurface *> (to);
    gboolean _peel_return = gdk_surface_translate_coordinates (_peel_this, _peel_to, x, y);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_enter_monitor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Surface, void (Monitor *)>::_peel_connect_by_name (this, "enter-monitor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_enter_monitor (HandlerObject *object, void (HandlerObject::*handler_method) (Surface *, Monitor *), bool after = false) noexcept
  {
    return Signal<Surface, void (Monitor *)>::_peel_connect_by_name (this, "enter-monitor", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_event (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Surface, bool (Event *)>::_peel_connect_by_name (this, "event", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_event (HandlerObject *object, bool (HandlerObject::*handler_method) (Surface *, Event *), bool after = false) noexcept
  {
    return Signal<Surface, bool (Event *)>::_peel_connect_by_name (this, "event", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_layout (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Surface, void (int, int)>::_peel_connect_by_name (this, "layout", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_layout (HandlerObject *object, void (HandlerObject::*handler_method) (Surface *, int, int), bool after = false) noexcept
  {
    return Signal<Surface, void (int, int)>::_peel_connect_by_name (this, "layout", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_leave_monitor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Surface, void (Monitor *)>::_peel_connect_by_name (this, "leave-monitor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_leave_monitor (HandlerObject *object, void (HandlerObject::*handler_method) (Surface *, Monitor *), bool after = false) noexcept
  {
    return Signal<Surface, void (Monitor *)>::_peel_connect_by_name (this, "leave-monitor", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_render (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Surface, bool (const ::cairo_region_t *)>::_peel_connect_by_name (this, "render", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_render (HandlerObject *object, bool (HandlerObject::*handler_method) (Surface *, const ::cairo_region_t *), bool after = false) noexcept
  {
    return Signal<Surface, bool (const ::cairo_region_t *)>::_peel_connect_by_name (this, "render", object, handler_method, after);
  }

  static peel::Property<Cursor>
  prop_cursor ()
  {
    return peel::Property<Cursor> { "cursor" };
  }

  static peel::Property<Display>
  prop_display ()
  {
    return peel::Property<Display> { "display" };
  }

  static peel::Property<FrameClock>
  prop_frame_clock ()
  {
    return peel::Property<FrameClock> { "frame-clock" };
  }

  static peel::Property<int>
  prop_height ()
  {
    return peel::Property<int> { "height" };
  }

  static peel::Property<bool>
  prop_mapped ()
  {
    return peel::Property<bool> { "mapped" };
  }

  static peel::Property<double>
  prop_scale ()
  {
    return peel::Property<double> { "scale" };
  }

  static peel::Property<int>
  prop_scale_factor ()
  {
    return peel::Property<int> { "scale-factor" };
  }

  static peel::Property<int>
  prop_width ()
  {
    return peel::Property<int> { "width" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class Surface */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gdk/CairoContext.h>
#include <peel/Gdk/GLContext.h>
#include <peel/Gdk/VulkanContext.h>
