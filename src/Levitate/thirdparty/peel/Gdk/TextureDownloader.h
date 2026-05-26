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
class /* record */ Bytes;
} /* namespace GLib */

namespace Gdk
{
class /* record */ ColorState;
enum class MemoryFormat : std::underlying_type<::GdkMemoryFormat>::type;
class Texture;
class /* record */ TextureDownloader;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::TextureDownloader> ()
{
  return gdk_texture_downloader_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::TextureDownloader>
{
  typedef UniquePtr<Gdk::TextureDownloader> OwnedType;
  typedef const Gdk::TextureDownloader * UnownedType;

  static const Gdk::TextureDownloader *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gdk::TextureDownloader *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gdk::TextureDownloader * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gdk::TextureDownloader>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gdk::TextureDownloader>::adopt_ref (reinterpret_cast<Gdk::TextureDownloader *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gdk::TextureDownloader> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gdk::TextureDownloader *
  cast_for_create (const Gdk::TextureDownloader * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::TextureDownloader>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gdk::TextureDownloader> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gdk::TextureDownloader>
{
  static void
  free (Gdk::TextureDownloader *ptr)
  {
    gdk_texture_downloader_free (reinterpret_cast<::GdkTextureDownloader *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gdk
{
class /* record */ TextureDownloader
{
private:
  TextureDownloader () = delete;
  TextureDownloader (const TextureDownloader &) = delete;
  TextureDownloader (TextureDownloader &&) = delete;
  ~TextureDownloader ();

public:
  peel_nonnull_args (1)
  static peel::UniquePtr<TextureDownloader>
  create (Texture *texture) noexcept
  {
    ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
    ::GdkTextureDownloader *_peel_return = gdk_texture_downloader_new (_peel_texture);
    peel_assume (_peel_return);
    return peel::UniquePtr<TextureDownloader>::adopt_ref (reinterpret_cast<TextureDownloader *> (_peel_return));
  }

  peel::UniquePtr<TextureDownloader>
  copy () const noexcept
  {
    const ::GdkTextureDownloader *_peel_this = reinterpret_cast<const ::GdkTextureDownloader *> (this);
    ::GdkTextureDownloader *_peel_return = gdk_texture_downloader_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<TextureDownloader>::adopt_ref (reinterpret_cast<TextureDownloader *> (_peel_return));
  }

  peel_arg_out (2) peel_nonnull_args (2)
  peel::RefPtr<GLib::Bytes>
  download_bytes (size_t *out_stride) const noexcept
  {
    const ::GdkTextureDownloader *_peel_this = reinterpret_cast<const ::GdkTextureDownloader *> (this);
    gsize *_peel_out_stride = reinterpret_cast<gsize *> (out_stride);
    ::GBytes *_peel_return = gdk_texture_downloader_download_bytes (_peel_this, _peel_out_stride);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  peel::RefPtr<GLib::Bytes>
  download_bytes_with_planes (size_t (&out_offsets)[4], size_t (&out_strides)[4]) const noexcept
  {
    const ::GdkTextureDownloader *_peel_this = reinterpret_cast<const ::GdkTextureDownloader *> (this);
    gsize *_peel_out_offsets = reinterpret_cast<gsize *> (out_offsets);
    gsize *_peel_out_strides = reinterpret_cast<gsize *> (out_strides);
    ::GBytes *_peel_return = gdk_texture_downloader_download_bytes_with_planes (_peel_this, _peel_out_offsets, _peel_out_strides);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  void
  download_into (uint8_t *data, size_t stride) const noexcept
  {
    const ::GdkTextureDownloader *_peel_this = reinterpret_cast<const ::GdkTextureDownloader *> (this);
    guchar *_peel_data = reinterpret_cast<guchar *> (data);
    gdk_texture_downloader_download_into (_peel_this, _peel_data, stride);
  }

  /* free bound as UniqueTraits */

  peel::RefPtr<ColorState>
  get_color_state () const noexcept
  {
    const ::GdkTextureDownloader *_peel_this = reinterpret_cast<const ::GdkTextureDownloader *> (this);
    ::GdkColorState *_peel_return = gdk_texture_downloader_get_color_state (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<ColorState>::adopt_ref (reinterpret_cast<ColorState *> (_peel_return));
  }

  MemoryFormat
  get_format () const noexcept
  {
    const ::GdkTextureDownloader *_peel_this = reinterpret_cast<const ::GdkTextureDownloader *> (this);
    ::GdkMemoryFormat _peel_return = gdk_texture_downloader_get_format (_peel_this);
    return static_cast<MemoryFormat> (_peel_return);
  }

  peel_returns_nonnull
  Texture *
  get_texture () const noexcept
  {
    const ::GdkTextureDownloader *_peel_this = reinterpret_cast<const ::GdkTextureDownloader *> (this);
    ::GdkTexture *_peel_return = gdk_texture_downloader_get_texture (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Texture *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_color_state (ColorState *color_state) noexcept
  {
    ::GdkTextureDownloader *_peel_this = reinterpret_cast<::GdkTextureDownloader *> (this);
    ::GdkColorState *_peel_color_state = reinterpret_cast<::GdkColorState *> (color_state);
    gdk_texture_downloader_set_color_state (_peel_this, _peel_color_state);
  }

  void
  set_format (MemoryFormat format) noexcept
  {
    ::GdkTextureDownloader *_peel_this = reinterpret_cast<::GdkTextureDownloader *> (this);
    ::GdkMemoryFormat _peel_format = static_cast<::GdkMemoryFormat> (format);
    gdk_texture_downloader_set_format (_peel_this, _peel_format);
  }

  peel_nonnull_args (2)
  void
  set_texture (Texture *texture) noexcept
  {
    ::GdkTextureDownloader *_peel_this = reinterpret_cast<::GdkTextureDownloader *> (this);
    ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
    gdk_texture_downloader_set_texture (_peel_this, _peel_texture);
  }
}; /* record TextureDownloader */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/Gdk/ColorState.h>
