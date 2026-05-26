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
#include <peel/Gdk/Texture.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class GLContext;
class GLTexture;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::GLTexture> ()
{
  return gdk_gl_texture_get_type ();
}


namespace Gdk
{
class GLTexture : public Texture
/* non-derivable */
/* implements Paintable, Gio::Icon, Gio::LoadableIcon */
{
private:
  using Texture::create_for_pixbuf;
  using Texture::create_from_bytes;
  using Texture::create_from_file;
  using Texture::create_from_filename;
  using Texture::create_from_resource;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GLTexture () = delete;
  GLTexture (const GLTexture &) = delete;
  GLTexture (GLTexture &&) = delete;
  GLTexture &
  operator = (const GLTexture &) = delete;
  GLTexture &
  operator = (GLTexture &&) = delete;
  ~GLTexture () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<GLTexture>
  create (GLContext *context, unsigned id, int width, int height, ::GDestroyNotify destroy, void *data) noexcept
  {
    ::GdkGLContext *_peel_context = reinterpret_cast<::GdkGLContext *> (context);
    ::GdkTexture *_peel_return = gdk_gl_texture_new (_peel_context, id, width, height, destroy, data);
    peel_assume (_peel_return);
    return peel::RefPtr<GLTexture>::adopt_ref (reinterpret_cast<GLTexture *> (_peel_return));
  }

  void
  release () noexcept
  {
    ::GdkGLTexture *_peel_this = reinterpret_cast<::GdkGLTexture *> (this);
    gdk_gl_texture_release (_peel_this);
  }

  class Class : public Texture::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class GLTexture */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
