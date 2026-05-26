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
#include <peel/Gio/LoadableIcon.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
} /* namespace GLib */

namespace Gdk
{
class /* record */ ColorState;
enum class MemoryFormat : std::underlying_type<::GdkMemoryFormat>::type;
class Texture;
} /* namespace Gdk */

namespace GdkPixbuf
{
class Pixbuf;
} /* namespace GdkPixbuf */

namespace Gio
{
class /* interface */ File;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Texture> ()
{
  return gdk_texture_get_type ();
}


namespace Gdk
{
class Texture : public Gio::LoadableIcon
/* non-derivable */
/* extends GObject::Object */
/* implements Paintable, Gio::Icon, Gio::LoadableIcon */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Texture () = delete;
  Texture (const Texture &) = delete;
  Texture (Texture &&) = delete;
  Texture &
  operator = (const Texture &) = delete;
  Texture &
  operator = (Texture &&) = delete;
  ~Texture () = delete;
public:
  enum class Error : std::underlying_type<::GdkTextureError>::type;

  peel_nonnull_args (1)
  static peel::RefPtr<Texture>
  create_for_pixbuf (GdkPixbuf::Pixbuf *pixbuf) noexcept
  {
    ::GdkPixbuf *_peel_pixbuf = reinterpret_cast<::GdkPixbuf *> (pixbuf);
    ::GdkTexture *_peel_return = gdk_texture_new_for_pixbuf (_peel_pixbuf);
    peel_assume (_peel_return);
    return peel::RefPtr<Texture>::adopt_ref (reinterpret_cast<Texture *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<Texture>
  create_from_bytes (GLib::Bytes *bytes, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GError *_peel_error = nullptr;
    ::GdkTexture *_peel_return = gdk_texture_new_from_bytes (_peel_bytes, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Texture>::adopt_ref (reinterpret_cast<Texture *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Texture>
  create_from_file (Gio::File *file, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GError *_peel_error = nullptr;
    ::GdkTexture *_peel_return = gdk_texture_new_from_file (_peel_file, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Texture>::adopt_ref (reinterpret_cast<Texture *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Texture>
  create_from_filename (const char *path, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GdkTexture *_peel_return = gdk_texture_new_from_filename (path, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Texture>::adopt_ref (reinterpret_cast<Texture *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Texture>
  create_from_resource (const char *resource_path) noexcept
  {
    ::GdkTexture *_peel_return = gdk_texture_new_from_resource (resource_path);
    peel_assume (_peel_return);
    return peel::RefPtr<Texture>::adopt_ref (reinterpret_cast<Texture *> (_peel_return));
  }

  void
  download (uint8_t *data, size_t stride) noexcept
  {
    ::GdkTexture *_peel_this = reinterpret_cast<::GdkTexture *> (this);
    guchar *_peel_data = reinterpret_cast<guchar *> (data);
    gdk_texture_download (_peel_this, _peel_data, stride);
  }

  peel_returns_nonnull
  ColorState *
  get_color_state () noexcept
  {
    ::GdkTexture *_peel_this = reinterpret_cast<::GdkTexture *> (this);
    ::GdkColorState *_peel_return = gdk_texture_get_color_state (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<ColorState *> (_peel_return);
  }

  MemoryFormat
  get_format () noexcept
  {
    ::GdkTexture *_peel_this = reinterpret_cast<::GdkTexture *> (this);
    ::GdkMemoryFormat _peel_return = gdk_texture_get_format (_peel_this);
    return static_cast<MemoryFormat> (_peel_return);
  }

  int
  get_height () noexcept
  {
    ::GdkTexture *_peel_this = reinterpret_cast<::GdkTexture *> (this);
    return gdk_texture_get_height (_peel_this);
  }

  int
  get_width () noexcept
  {
    ::GdkTexture *_peel_this = reinterpret_cast<::GdkTexture *> (this);
    return gdk_texture_get_width (_peel_this);
  }

  peel_nonnull_args (2)
  bool
  save_to_png (const char *filename) noexcept
  {
    ::GdkTexture *_peel_this = reinterpret_cast<::GdkTexture *> (this);
    gboolean _peel_return = gdk_texture_save_to_png (_peel_this, filename);
    return !!_peel_return;
  }

  peel::RefPtr<GLib::Bytes>
  save_to_png_bytes () noexcept
  {
    ::GdkTexture *_peel_this = reinterpret_cast<::GdkTexture *> (this);
    ::GBytes *_peel_return = gdk_texture_save_to_png_bytes (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  save_to_tiff (const char *filename) noexcept
  {
    ::GdkTexture *_peel_this = reinterpret_cast<::GdkTexture *> (this);
    gboolean _peel_return = gdk_texture_save_to_tiff (_peel_this, filename);
    return !!_peel_return;
  }

  peel::RefPtr<GLib::Bytes>
  save_to_tiff_bytes () noexcept
  {
    ::GdkTexture *_peel_this = reinterpret_cast<::GdkTexture *> (this);
    ::GBytes *_peel_return = gdk_texture_save_to_tiff_bytes (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  static peel::Property<ColorState>
  prop_color_state ()
  {
    return peel::Property<ColorState> { "color-state" };
  }

  static peel::Property<int>
  prop_height ()
  {
    return peel::Property<int> { "height" };
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

}; /* class Texture */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
