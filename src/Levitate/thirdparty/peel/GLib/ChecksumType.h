#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
enum class ChecksumType : std::underlying_type<::GChecksumType>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::ChecksumType>
{
  typedef GLib::ChecksumType UnownedType;

  static GLib::ChecksumType
  get (const ::GValue *value)
  {
    return static_cast<GLib::ChecksumType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::ChecksumType m)
  {
    g_value_set_enum (value, static_cast<::GChecksumType> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::ChecksumType m)
  {
    set (value, m);
  }

  static GLib::ChecksumType
  cast_for_create (GLib::ChecksumType m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class ChecksumType : std::underlying_type<::GChecksumType>::type
{
  MD5 = G_CHECKSUM_MD5,
  SHA1 = G_CHECKSUM_SHA1,
  SHA256 = G_CHECKSUM_SHA256,
  SHA512 = G_CHECKSUM_SHA512,
  SHA384 = G_CHECKSUM_SHA384,
}; /* enum ChecksumType */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
