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
class DmabufTexture;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::DmabufTexture> ()
{
  return gdk_dmabuf_texture_get_type ();
}


namespace Gdk
{
class DmabufTexture : public Texture
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

  DmabufTexture () = delete;
  DmabufTexture (const DmabufTexture &) = delete;
  DmabufTexture (DmabufTexture &&) = delete;
  DmabufTexture &
  operator = (const DmabufTexture &) = delete;
  DmabufTexture &
  operator = (DmabufTexture &&) = delete;
  ~DmabufTexture () = delete;
public:

  class Class : public Texture::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class DmabufTexture */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
