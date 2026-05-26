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
namespace GLib
{
class /* record */ Bytes;
} /* namespace GLib */

namespace Gdk
{
enum class MemoryFormat : std::underlying_type<::GdkMemoryFormat>::type;
class MemoryTexture;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::MemoryTexture> ()
{
  return gdk_memory_texture_get_type ();
}


namespace Gdk
{
class MemoryTexture : public Texture
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

  MemoryTexture () = delete;
  MemoryTexture (const MemoryTexture &) = delete;
  MemoryTexture (MemoryTexture &&) = delete;
  MemoryTexture &
  operator = (const MemoryTexture &) = delete;
  MemoryTexture &
  operator = (MemoryTexture &&) = delete;
  ~MemoryTexture () = delete;
public:

  peel_arg_in (4) peel_nonnull_args (4)
  static peel::RefPtr<MemoryTexture>
  create (int width, int height, MemoryFormat format, GLib::Bytes *bytes, size_t stride) noexcept
  {
    ::GdkMemoryFormat _peel_format = static_cast<::GdkMemoryFormat> (format);
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GdkTexture *_peel_return = gdk_memory_texture_new (width, height, _peel_format, _peel_bytes, stride);
    peel_assume (_peel_return);
    return peel::RefPtr<MemoryTexture>::adopt_ref (reinterpret_cast<MemoryTexture *> (_peel_return));
  }

  class Class : public Texture::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class MemoryTexture */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
