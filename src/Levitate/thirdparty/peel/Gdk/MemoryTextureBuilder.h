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
class /* record */ Bytes;
} /* namespace GLib */

namespace Gdk
{
class /* record */ ColorState;
enum class MemoryFormat : std::underlying_type<::GdkMemoryFormat>::type;
class MemoryTextureBuilder;
class Texture;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::MemoryTextureBuilder> ()
{
  return gdk_memory_texture_builder_get_type ();
}


namespace Gdk
{
class MemoryTextureBuilder : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MemoryTextureBuilder () = delete;
  MemoryTextureBuilder (const MemoryTextureBuilder &) = delete;
  MemoryTextureBuilder (MemoryTextureBuilder &&) = delete;
  MemoryTextureBuilder &
  operator = (const MemoryTextureBuilder &) = delete;
  MemoryTextureBuilder &
  operator = (MemoryTextureBuilder &&) = delete;
  ~MemoryTextureBuilder () = delete;
public:

  static peel::RefPtr<MemoryTextureBuilder>
  create () noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_return = gdk_memory_texture_builder_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<MemoryTextureBuilder>::adopt_ref (reinterpret_cast<MemoryTextureBuilder *> (_peel_return));
  }

  peel::RefPtr<Texture>
  build () noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    ::GdkTexture *_peel_return = gdk_memory_texture_builder_build (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Texture>::adopt_ref (reinterpret_cast<Texture *> (_peel_return));
  }

  GLib::Bytes *
  get_bytes () noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    ::GBytes *_peel_return = gdk_memory_texture_builder_get_bytes (_peel_this);
    return reinterpret_cast<GLib::Bytes *> (_peel_return);
  }

  peel_returns_nonnull
  ColorState *
  get_color_state () noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    ::GdkColorState *_peel_return = gdk_memory_texture_builder_get_color_state (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<ColorState *> (_peel_return);
  }

  MemoryFormat
  get_format () noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    ::GdkMemoryFormat _peel_return = gdk_memory_texture_builder_get_format (_peel_this);
    return static_cast<MemoryFormat> (_peel_return);
  }

  int
  get_height () noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    return gdk_memory_texture_builder_get_height (_peel_this);
  }

  size_t
  get_offset (unsigned plane) noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    return gdk_memory_texture_builder_get_offset (_peel_this, plane);
  }

  size_t
  get_stride () noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    return gdk_memory_texture_builder_get_stride (_peel_this);
  }

  size_t
  get_stride_for_plane (unsigned plane) noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    return gdk_memory_texture_builder_get_stride_for_plane (_peel_this, plane);
  }

  ::cairo_region_t *
  get_update_region () noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    return gdk_memory_texture_builder_get_update_region (_peel_this);
  }

  Texture *
  get_update_texture () noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    ::GdkTexture *_peel_return = gdk_memory_texture_builder_get_update_texture (_peel_this);
    return reinterpret_cast<Texture *> (_peel_return);
  }

  int
  get_width () noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    return gdk_memory_texture_builder_get_width (_peel_this);
  }

  peel_arg_in (2)
  void
  set_bytes (GLib::Bytes *bytes) noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    gdk_memory_texture_builder_set_bytes (_peel_this, _peel_bytes);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_color_state (ColorState *color_state) noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    ::GdkColorState *_peel_color_state = reinterpret_cast<::GdkColorState *> (color_state);
    gdk_memory_texture_builder_set_color_state (_peel_this, _peel_color_state);
  }

  void
  set_format (MemoryFormat format) noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    ::GdkMemoryFormat _peel_format = static_cast<::GdkMemoryFormat> (format);
    gdk_memory_texture_builder_set_format (_peel_this, _peel_format);
  }

  void
  set_height (int height) noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    gdk_memory_texture_builder_set_height (_peel_this, height);
  }

  void
  set_offset (unsigned plane, size_t offset) noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    gdk_memory_texture_builder_set_offset (_peel_this, plane, offset);
  }

  void
  set_stride (size_t stride) noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    gdk_memory_texture_builder_set_stride (_peel_this, stride);
  }

  void
  set_stride_for_plane (unsigned plane, size_t stride) noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    gdk_memory_texture_builder_set_stride_for_plane (_peel_this, plane, stride);
  }

  peel_arg_in (2)
  void
  set_update_region (::cairo_region_t *region) noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    gdk_memory_texture_builder_set_update_region (_peel_this, region);
  }

  void
  set_update_texture (Texture *texture) noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
    gdk_memory_texture_builder_set_update_texture (_peel_this, _peel_texture);
  }

  void
  set_width (int width) noexcept
  {
    ::GdkMemoryTextureBuilder *_peel_this = reinterpret_cast<::GdkMemoryTextureBuilder *> (this);
    gdk_memory_texture_builder_set_width (_peel_this, width);
  }

  static peel::Property<GLib::Bytes>
  prop_bytes ()
  {
    return peel::Property<GLib::Bytes> { "bytes" };
  }

  static peel::Property<ColorState>
  prop_color_state ()
  {
    return peel::Property<ColorState> { "color-state" };
  }

  static peel::Property<MemoryFormat>
  prop_format ()
  {
    return peel::Property<MemoryFormat> { "format" };
  }

  static peel::Property<int>
  prop_height ()
  {
    return peel::Property<int> { "height" };
  }

  static peel::Property<uint64_t>
  prop_stride ()
  {
    return peel::Property<uint64_t> { "stride" };
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

}; /* class MemoryTextureBuilder */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/Texture.h>
