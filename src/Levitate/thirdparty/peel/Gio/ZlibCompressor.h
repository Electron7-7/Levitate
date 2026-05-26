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
class ZlibCompressor;
enum class ZlibCompressorFormat : std::underlying_type<::GZlibCompressorFormat>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ZlibCompressor> ()
{
  return g_zlib_compressor_get_type ();
}


namespace Gio
{
class ZlibCompressor : public Converter
/* non-derivable */
/* extends GObject::Object */
/* implements Converter */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ZlibCompressor () = delete;
  ZlibCompressor (const ZlibCompressor &) = delete;
  ZlibCompressor (ZlibCompressor &&) = delete;
  ZlibCompressor &
  operator = (const ZlibCompressor &) = delete;
  ZlibCompressor &
  operator = (ZlibCompressor &&) = delete;
  ~ZlibCompressor () = delete;
public:

  static peel::RefPtr<ZlibCompressor>
  create (ZlibCompressorFormat format, int level) noexcept
  {
    ::GZlibCompressorFormat _peel_format = static_cast<::GZlibCompressorFormat> (format);
    ::GZlibCompressor *_peel_return = g_zlib_compressor_new (_peel_format, level);
    peel_assume (_peel_return);
    return peel::RefPtr<ZlibCompressor>::adopt_ref (reinterpret_cast<ZlibCompressor *> (_peel_return));
  }

  FileInfo *
  get_file_info () noexcept
  {
    ::GZlibCompressor *_peel_this = reinterpret_cast<::GZlibCompressor *> (this);
    ::GFileInfo *_peel_return = g_zlib_compressor_get_file_info (_peel_this);
    return reinterpret_cast<FileInfo *> (_peel_return);
  }

  int
  get_os () noexcept
  {
    ::GZlibCompressor *_peel_this = reinterpret_cast<::GZlibCompressor *> (this);
    return g_zlib_compressor_get_os (_peel_this);
  }

  void
  set_file_info (FileInfo *file_info) noexcept
  {
    ::GZlibCompressor *_peel_this = reinterpret_cast<::GZlibCompressor *> (this);
    ::GFileInfo *_peel_file_info = reinterpret_cast<::GFileInfo *> (file_info);
    g_zlib_compressor_set_file_info (_peel_this, _peel_file_info);
  }

  void
  set_os (int os) noexcept
  {
    ::GZlibCompressor *_peel_this = reinterpret_cast<::GZlibCompressor *> (this);
    g_zlib_compressor_set_os (_peel_this, os);
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

  static peel::Property<int>
  prop_level ()
  {
    return peel::Property<int> { "level" };
  }

  static peel::Property<int>
  prop_os ()
  {
    return peel::Property<int> { "os" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GZlibCompressorClass),
                 "ZlibCompressor::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GZlibCompressorClass),
                 "ZlibCompressor::Class align mismatch");
}; /* class ZlibCompressor */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
