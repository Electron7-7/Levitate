#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/Gio/Converter.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class FileInfo;
enum class ZlibCompressorFormat : std::underlying_type<::GZlibCompressorFormat>::type;
class ZlibDecompressor;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ZlibDecompressor> ()
{
  return g_zlib_decompressor_get_type ();
}


namespace Gio
{
class ZlibDecompressor : public Converter
/* non-derivable */
/* extends GObject::Object */
/* implements Converter */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ZlibDecompressor () = delete;
  ZlibDecompressor (const ZlibDecompressor &) = delete;
  ZlibDecompressor (ZlibDecompressor &&) = delete;
  ZlibDecompressor &
  operator = (const ZlibDecompressor &) = delete;
  ZlibDecompressor &
  operator = (ZlibDecompressor &&) = delete;
  ~ZlibDecompressor () = delete;
public:

  static peel::RefPtr<ZlibDecompressor>
  create (ZlibCompressorFormat format) noexcept
  {
    ::GZlibCompressorFormat _peel_format = static_cast<::GZlibCompressorFormat> (format);
    ::GZlibDecompressor *_peel_return = g_zlib_decompressor_new (_peel_format);
    peel_assume (_peel_return);
    return peel::RefPtr<ZlibDecompressor>::adopt_ref (reinterpret_cast<ZlibDecompressor *> (_peel_return));
  }

  FileInfo *
  get_file_info () noexcept
  {
    ::GZlibDecompressor *_peel_this = reinterpret_cast<::GZlibDecompressor *> (this);
    ::GFileInfo *_peel_return = g_zlib_decompressor_get_file_info (_peel_this);
    return reinterpret_cast<FileInfo *> (_peel_return);
  }

  static peel::Property<FileInfo>
  prop_file_info ()
  {
    return peel::Property<FileInfo> { "file-info" };
  }

  static peel::Property<ZlibCompressorFormat>
  prop_format ()
  {
    return peel::Property<ZlibCompressorFormat> { "format" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GZlibDecompressorClass),
                 "ZlibDecompressor::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GZlibDecompressorClass),
                 "ZlibDecompressor::Class align mismatch");
}; /* class ZlibDecompressor */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
