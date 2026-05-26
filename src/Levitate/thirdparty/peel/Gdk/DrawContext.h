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
namespace Gdk
{
class Display;
class DrawContext;
class Surface;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::DrawContext> ()
{
  return gdk_draw_context_get_type ();
}


namespace Gdk
{
class DrawContext : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DrawContext () = delete;
  DrawContext (const DrawContext &) = delete;
  DrawContext (DrawContext &&) = delete;
  DrawContext &
  operator = (const DrawContext &) = delete;
  DrawContext &
  operator = (DrawContext &&) = delete;
  ~DrawContext () = delete;
public:

  peel_arg_in (2) peel_nonnull_args (2)
  void
  begin_frame (const ::cairo_region_t *region) noexcept
  {
    ::GdkDrawContext *_peel_this = reinterpret_cast<::GdkDrawContext *> (this);
    gdk_draw_context_begin_frame (_peel_this, region);
  }

  void
  end_frame () noexcept
  {
    ::GdkDrawContext *_peel_this = reinterpret_cast<::GdkDrawContext *> (this);
    gdk_draw_context_end_frame (_peel_this);
  }

  Display *
  get_display () noexcept
  {
    ::GdkDrawContext *_peel_this = reinterpret_cast<::GdkDrawContext *> (this);
    ::GdkDisplay *_peel_return = gdk_draw_context_get_display (_peel_this);
    return reinterpret_cast<Display *> (_peel_return);
  }

  const ::cairo_region_t *
  get_frame_region () noexcept
  {
    ::GdkDrawContext *_peel_this = reinterpret_cast<::GdkDrawContext *> (this);
    return gdk_draw_context_get_frame_region (_peel_this);
  }

  Surface *
  get_surface () noexcept
  {
    ::GdkDrawContext *_peel_this = reinterpret_cast<::GdkDrawContext *> (this);
    ::GdkSurface *_peel_return = gdk_draw_context_get_surface (_peel_this);
    return reinterpret_cast<Surface *> (_peel_return);
  }

  bool
  is_in_frame () noexcept
  {
    ::GdkDrawContext *_peel_this = reinterpret_cast<::GdkDrawContext *> (this);
    gboolean _peel_return = gdk_draw_context_is_in_frame (_peel_this);
    return !!_peel_return;
  }

  static peel::Property<Display>
  prop_display ()
  {
    return peel::Property<Display> { "display" };
  }

  static peel::Property<Surface>
  prop_surface ()
  {
    return peel::Property<Surface> { "surface" };
  }
}; /* class DrawContext */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
