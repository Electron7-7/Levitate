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
class /* record */ ColorState;
class Display;
class DmabufTextureBuilder;
class Texture;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::DmabufTextureBuilder> ()
{
  return gdk_dmabuf_texture_builder_get_type ();
}


namespace Gdk
{
class DmabufTextureBuilder : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DmabufTextureBuilder () = delete;
  DmabufTextureBuilder (const DmabufTextureBuilder &) = delete;
  DmabufTextureBuilder (DmabufTextureBuilder &&) = delete;
  DmabufTextureBuilder &
  operator = (const DmabufTextureBuilder &) = delete;
  DmabufTextureBuilder &
  operator = (DmabufTextureBuilder &&) = delete;
  ~DmabufTextureBuilder () = delete;
public:

  static peel::RefPtr<DmabufTextureBuilder>
  create () noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_return = gdk_dmabuf_texture_builder_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<DmabufTextureBuilder>::adopt_ref (reinterpret_cast<DmabufTextureBuilder *> (_peel_return));
  }

  peel::RefPtr<Texture>
  build (::GDestroyNotify destroy, void *data, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    ::GError *_peel_error = nullptr;
    ::GdkTexture *_peel_return = gdk_dmabuf_texture_builder_build (_peel_this, destroy, data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Texture>::adopt_ref (reinterpret_cast<Texture *> (_peel_return));
  }

  ColorState *
  get_color_state () noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    ::GdkColorState *_peel_return = gdk_dmabuf_texture_builder_get_color_state (_peel_this);
    return reinterpret_cast<ColorState *> (_peel_return);
  }

  peel_returns_nonnull
  Display *
  get_display () noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    ::GdkDisplay *_peel_return = gdk_dmabuf_texture_builder_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Display *> (_peel_return);
  }

  int
  get_fd (unsigned plane) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    return gdk_dmabuf_texture_builder_get_fd (_peel_this, plane);
  }

  uint32_t
  get_fourcc () noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    return gdk_dmabuf_texture_builder_get_fourcc (_peel_this);
  }

  unsigned
  get_height () noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    return gdk_dmabuf_texture_builder_get_height (_peel_this);
  }

  uint64_t
  get_modifier () noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    return gdk_dmabuf_texture_builder_get_modifier (_peel_this);
  }

  unsigned
  get_n_planes () noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    return gdk_dmabuf_texture_builder_get_n_planes (_peel_this);
  }

  unsigned
  get_offset (unsigned plane) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    return gdk_dmabuf_texture_builder_get_offset (_peel_this, plane);
  }

  bool
  get_premultiplied () noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    gboolean _peel_return = gdk_dmabuf_texture_builder_get_premultiplied (_peel_this);
    return !!_peel_return;
  }

  unsigned
  get_stride (unsigned plane) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    return gdk_dmabuf_texture_builder_get_stride (_peel_this, plane);
  }

  ::cairo_region_t *
  get_update_region () noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    return gdk_dmabuf_texture_builder_get_update_region (_peel_this);
  }

  Texture *
  get_update_texture () noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    ::GdkTexture *_peel_return = gdk_dmabuf_texture_builder_get_update_texture (_peel_this);
    return reinterpret_cast<Texture *> (_peel_return);
  }

  unsigned
  get_width () noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    return gdk_dmabuf_texture_builder_get_width (_peel_this);
  }

  peel_arg_in (2)
  void
  set_color_state (ColorState *color_state) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    ::GdkColorState *_peel_color_state = reinterpret_cast<::GdkColorState *> (color_state);
    gdk_dmabuf_texture_builder_set_color_state (_peel_this, _peel_color_state);
  }

  peel_nonnull_args (2)
  void
  set_display (Display *display) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    gdk_dmabuf_texture_builder_set_display (_peel_this, _peel_display);
  }

  void
  set_fd (unsigned plane, int fd) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    gdk_dmabuf_texture_builder_set_fd (_peel_this, plane, fd);
  }

  void
  set_fourcc (uint32_t fourcc) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    gdk_dmabuf_texture_builder_set_fourcc (_peel_this, fourcc);
  }

  void
  set_height (unsigned height) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    gdk_dmabuf_texture_builder_set_height (_peel_this, height);
  }

  void
  set_modifier (uint64_t modifier) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    gdk_dmabuf_texture_builder_set_modifier (_peel_this, modifier);
  }

  void
  set_n_planes (unsigned n_planes) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    gdk_dmabuf_texture_builder_set_n_planes (_peel_this, n_planes);
  }

  void
  set_offset (unsigned plane, unsigned offset) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    gdk_dmabuf_texture_builder_set_offset (_peel_this, plane, offset);
  }

  void
  set_premultiplied (bool premultiplied) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    gboolean _peel_premultiplied = static_cast<gboolean> (premultiplied);
    gdk_dmabuf_texture_builder_set_premultiplied (_peel_this, _peel_premultiplied);
  }

  void
  set_stride (unsigned plane, unsigned stride) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    gdk_dmabuf_texture_builder_set_stride (_peel_this, plane, stride);
  }

  peel_arg_in (2)
  void
  set_update_region (::cairo_region_t *region) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    gdk_dmabuf_texture_builder_set_update_region (_peel_this, region);
  }

  void
  set_update_texture (Texture *texture) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
    gdk_dmabuf_texture_builder_set_update_texture (_peel_this, _peel_texture);
  }

  void
  set_width (unsigned width) noexcept
  {
    ::GdkDmabufTextureBuilder *_peel_this = reinterpret_cast<::GdkDmabufTextureBuilder *> (this);
    gdk_dmabuf_texture_builder_set_width (_peel_this, width);
  }

  static peel::Property<ColorState>
  prop_color_state ()
  {
    return peel::Property<ColorState> { "color-state" };
  }

  static peel::Property<Display>
  prop_display ()
  {
    return peel::Property<Display> { "display" };
  }

  static peel::Property<unsigned>
  prop_fourcc ()
  {
    return peel::Property<unsigned> { "fourcc" };
  }

  static peel::Property<unsigned>
  prop_height ()
  {
    return peel::Property<unsigned> { "height" };
  }

  static peel::Property<uint64_t>
  prop_modifier ()
  {
    return peel::Property<uint64_t> { "modifier" };
  }

  static peel::Property<unsigned>
  prop_n_planes ()
  {
    return peel::Property<unsigned> { "n-planes" };
  }

  static peel::Property<bool>
  prop_premultiplied ()
  {
    return peel::Property<bool> { "premultiplied" };
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

  static peel::Property<unsigned>
  prop_width ()
  {
    return peel::Property<unsigned> { "width" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class DmabufTextureBuilder */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gdk/Texture.h>
