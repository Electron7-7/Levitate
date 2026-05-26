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
class /* record */ ColorState;
class GLContext;
class GLTextureBuilder;
enum class MemoryFormat : std::underlying_type<::GdkMemoryFormat>::type;
class Texture;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::GLTextureBuilder> ()
{
  return gdk_gl_texture_builder_get_type ();
}


namespace Gdk
{
class GLTextureBuilder : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GLTextureBuilder () = delete;
  GLTextureBuilder (const GLTextureBuilder &) = delete;
  GLTextureBuilder (GLTextureBuilder &&) = delete;
  GLTextureBuilder &
  operator = (const GLTextureBuilder &) = delete;
  GLTextureBuilder &
  operator = (GLTextureBuilder &&) = delete;
  ~GLTextureBuilder () = delete;
public:

  static peel::RefPtr<GLTextureBuilder>
  create () noexcept
  {
    ::GdkGLTextureBuilder *_peel_return = gdk_gl_texture_builder_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<GLTextureBuilder>::adopt_ref (reinterpret_cast<GLTextureBuilder *> (_peel_return));
  }

  peel::RefPtr<Texture>
  build (::GDestroyNotify destroy, void *data) noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    ::GdkTexture *_peel_return = gdk_gl_texture_builder_build (_peel_this, destroy, data);
    peel_assume (_peel_return);
    return peel::RefPtr<Texture>::adopt_ref (reinterpret_cast<Texture *> (_peel_return));
  }

  peel_returns_nonnull
  ColorState *
  get_color_state () noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    ::GdkColorState *_peel_return = gdk_gl_texture_builder_get_color_state (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<ColorState *> (_peel_return);
  }

  GLContext *
  get_context () noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    ::GdkGLContext *_peel_return = gdk_gl_texture_builder_get_context (_peel_this);
    return reinterpret_cast<GLContext *> (_peel_return);
  }

  MemoryFormat
  get_format () noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    ::GdkMemoryFormat _peel_return = gdk_gl_texture_builder_get_format (_peel_this);
    return static_cast<MemoryFormat> (_peel_return);
  }

  bool
  get_has_mipmap () noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    gboolean _peel_return = gdk_gl_texture_builder_get_has_mipmap (_peel_this);
    return !!_peel_return;
  }

  int
  get_height () noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    return gdk_gl_texture_builder_get_height (_peel_this);
  }

  unsigned
  get_id () noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    return gdk_gl_texture_builder_get_id (_peel_this);
  }

  void *
  get_sync () noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    return gdk_gl_texture_builder_get_sync (_peel_this);
  }

  ::cairo_region_t *
  get_update_region () noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    return gdk_gl_texture_builder_get_update_region (_peel_this);
  }

  Texture *
  get_update_texture () noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    ::GdkTexture *_peel_return = gdk_gl_texture_builder_get_update_texture (_peel_this);
    return reinterpret_cast<Texture *> (_peel_return);
  }

  int
  get_width () noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    return gdk_gl_texture_builder_get_width (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_color_state (ColorState *color_state) noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    ::GdkColorState *_peel_color_state = reinterpret_cast<::GdkColorState *> (color_state);
    gdk_gl_texture_builder_set_color_state (_peel_this, _peel_color_state);
  }

  void
  set_context (GLContext *context) noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    ::GdkGLContext *_peel_context = reinterpret_cast<::GdkGLContext *> (context);
    gdk_gl_texture_builder_set_context (_peel_this, _peel_context);
  }

  void
  set_format (MemoryFormat format) noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    ::GdkMemoryFormat _peel_format = static_cast<::GdkMemoryFormat> (format);
    gdk_gl_texture_builder_set_format (_peel_this, _peel_format);
  }

  void
  set_has_mipmap (bool has_mipmap) noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    gboolean _peel_has_mipmap = static_cast<gboolean> (has_mipmap);
    gdk_gl_texture_builder_set_has_mipmap (_peel_this, _peel_has_mipmap);
  }

  void
  set_height (int height) noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    gdk_gl_texture_builder_set_height (_peel_this, height);
  }

  void
  set_id (unsigned id) noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    gdk_gl_texture_builder_set_id (_peel_this, id);
  }

  void
  set_sync (void *sync) noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    gdk_gl_texture_builder_set_sync (_peel_this, sync);
  }

  peel_arg_in (2)
  void
  set_update_region (::cairo_region_t *region) noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    gdk_gl_texture_builder_set_update_region (_peel_this, region);
  }

  void
  set_update_texture (Texture *texture) noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
    gdk_gl_texture_builder_set_update_texture (_peel_this, _peel_texture);
  }

  void
  set_width (int width) noexcept
  {
    ::GdkGLTextureBuilder *_peel_this = reinterpret_cast<::GdkGLTextureBuilder *> (this);
    gdk_gl_texture_builder_set_width (_peel_this, width);
  }

  static peel::Property<ColorState>
  prop_color_state ()
  {
    return peel::Property<ColorState> { "color-state" };
  }

  static peel::Property<GLContext>
  prop_context ()
  {
    return peel::Property<GLContext> { "context" };
  }

  static peel::Property<MemoryFormat>
  prop_format ()
  {
    return peel::Property<MemoryFormat> { "format" };
  }

  static peel::Property<bool>
  prop_has_mipmap ()
  {
    return peel::Property<bool> { "has-mipmap" };
  }

  static peel::Property<int>
  prop_height ()
  {
    return peel::Property<int> { "height" };
  }

  static peel::Property<unsigned>
  prop_id ()
  {
    return peel::Property<unsigned> { "id" };
  }

  static peel::Property<void *>
  prop_sync ()
  {
    return peel::Property<void *> { "sync" };
  }

  static peel::Property<::cairo_region_t *>
  prop_update_region ()
  {
    return peel::Property<::cairo_region_t *> { "update-region" };
  }

  static peel::Property<Texture>
  prop_update_texture ()
  {
    return peel::Property<Texture> { "update-texture" };
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

}; /* class GLTextureBuilder */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/Texture.h>
