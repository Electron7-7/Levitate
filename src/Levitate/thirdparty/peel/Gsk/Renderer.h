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
#include <gsk/gsk.h>
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
class Display;
class Surface;
class Texture;
} /* namespace Gdk */

namespace Graphene
{
struct Rect;
} /* namespace Graphene */

namespace Gsk
{
class RenderNode;
class Renderer;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::Renderer> ()
{
  return gsk_renderer_get_type ();
}


namespace Gsk
{
class Renderer : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Renderer () = delete;
  Renderer (const Renderer &) = delete;
  Renderer (Renderer &&) = delete;
  Renderer &
  operator = (const Renderer &) = delete;
  Renderer &
  operator = (Renderer &&) = delete;
  ~Renderer () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<Renderer>
  create_for_surface (Gdk::Surface *surface) noexcept
  {
    ::GdkSurface *_peel_surface = reinterpret_cast<::GdkSurface *> (surface);
    ::GskRenderer *_peel_return = gsk_renderer_new_for_surface (_peel_surface);
    return peel::RefPtr<Renderer>::adopt_ref (reinterpret_cast<Renderer *> (_peel_return));
  }

  Gdk::Surface *
  get_surface () noexcept
  {
    ::GskRenderer *_peel_this = reinterpret_cast<::GskRenderer *> (this);
    ::GdkSurface *_peel_return = gsk_renderer_get_surface (_peel_this);
    return reinterpret_cast<Gdk::Surface *> (_peel_return);
  }

  bool
  is_realized () noexcept
  {
    ::GskRenderer *_peel_this = reinterpret_cast<::GskRenderer *> (this);
    gboolean _peel_return = gsk_renderer_is_realized (_peel_this);
    return !!_peel_return;
  }

  bool
  realize (Gdk::Surface *surface, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GskRenderer *_peel_this = reinterpret_cast<::GskRenderer *> (this);
    ::GdkSurface *_peel_surface = reinterpret_cast<::GdkSurface *> (surface);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gsk_renderer_realize (_peel_this, _peel_surface, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  realize_for_display (Gdk::Display *display, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GskRenderer *_peel_this = reinterpret_cast<::GskRenderer *> (this);
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gsk_renderer_realize_for_display (_peel_this, _peel_display, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_in (3) peel_nonnull_args (2)
  void
  render (RenderNode *root, const ::cairo_region_t *region) noexcept
  {
    ::GskRenderer *_peel_this = reinterpret_cast<::GskRenderer *> (this);
    ::GskRenderNode *_peel_root = reinterpret_cast<::GskRenderNode *> (root);
    gsk_renderer_render (_peel_this, _peel_root, region);
  }

  peel_arg_in (3) peel_nonnull_args (2)
  peel::RefPtr<Gdk::Texture>
  render_texture (RenderNode *root, const Graphene::Rect *viewport) noexcept
  {
    ::GskRenderer *_peel_this = reinterpret_cast<::GskRenderer *> (this);
    ::GskRenderNode *_peel_root = reinterpret_cast<::GskRenderNode *> (root);
    const ::graphene_rect_t *_peel_viewport = reinterpret_cast<const ::graphene_rect_t *> (viewport);
    ::GdkTexture *_peel_return = gsk_renderer_render_texture (_peel_this, _peel_root, _peel_viewport);
    peel_assume (_peel_return);
    return peel::RefPtr<Gdk::Texture>::adopt_ref (reinterpret_cast<Gdk::Texture *> (_peel_return));
  }

  void
  unrealize () noexcept
  {
    ::GskRenderer *_peel_this = reinterpret_cast<::GskRenderer *> (this);
    gsk_renderer_unrealize (_peel_this);
  }

  static peel::Property<bool>
  prop_realized ()
  {
    return peel::Property<bool> { "realized" };
  }

  static peel::Property<Gdk::Surface>
  prop_surface ()
  {
    return peel::Property<Gdk::Surface> { "surface" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class Renderer */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gdk/Texture.h>
