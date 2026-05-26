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
enum class IOChannelError : std::underlying_type<::GIOChannelError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::IOChannelError>
{
  typedef GLib::IOChannelError UnownedType;

  static GLib::IOChannelError
  get (const ::GValue *value)
  {
    return static_cast<GLib::IOChannelError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::IOChannelError m)
  {
    g_value_set_enum (value, static_cast<::GIOChannelError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::IOChannelError m)
  {
    set (value, m);
  }

  static GLib::IOChannelError
  cast_for_create (GLib::IOChannelError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class IOChannelError : std::underlying_type<::GIOChannelError>::type
{
  FBIG = G_IO_CHANNEL_ERROR_FBIG,
  INVAL = G_IO_CHANNEL_ERROR_INVAL,
  IO = G_IO_CHANNEL_ERROR_IO,
  ISDIR = G_IO_CHANNEL_ERROR_ISDIR,
  NOSPC = G_IO_CHANNEL_ERROR_NOSPC,
  NXIO = G_IO_CHANNEL_ERROR_NXIO,
  OVERFLOW_ = G_IO_CHANNEL_ERROR_OVERFLOW,
  PIPE = G_IO_CHANNEL_ERROR_PIPE,
  FAILED = G_IO_CHANNEL_ERROR_FAILED,
}; /* enum IOChannelError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
