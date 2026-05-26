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

peel_begin_header

namespace peel
{
namespace Gio
{
enum class ZlibCompressorFormat : std::underlying_type<::GZlibCompressorFormat>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::ZlibCompressorFormat>
{
  typedef Gio::ZlibCompressorFormat UnownedType;

  static Gio::ZlibCompressorFormat
  get (const ::GValue *value)
  {
    return static_cast<Gio::ZlibCompressorFormat> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::ZlibCompressorFormat m)
  {
    g_value_set_enum (value, static_cast<::GZlibCompressorFormat> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::ZlibCompressorFormat m)
  {
    set (value, m);
  }

  static Gio::ZlibCompressorFormat
  cast_for_create (Gio::ZlibCompressorFormat m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::ZlibCompressorFormat> ()
{
  return g_zlib_compressor_format_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::ZlibCompressorFormat>
{
  Gio::ZlibCompressorFormat default_value;

  constexpr PspecTraits (Gio::ZlibCompressorFormat default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_zlib_compressor_format_get_type (),
                              static_cast<::GZlibCompressorFormat> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class ZlibCompressorFormat : std::underlying_type<::GZlibCompressorFormat>::type
{
  ZLIB = G_ZLIB_COMPRESSOR_FORMAT_ZLIB,
  GZIP = G_ZLIB_COMPRESSOR_FORMAT_GZIP,
  RAW = G_ZLIB_COMPRESSOR_FORMAT_RAW,
}; /* enum ZlibCompressorFormat */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
