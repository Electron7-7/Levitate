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
enum class IOError : std::underlying_type<::GIOError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::IOError>
{
  typedef GLib::IOError UnownedType;

  static GLib::IOError
  get (const ::GValue *value)
  {
    return static_cast<GLib::IOError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::IOError m)
  {
    g_value_set_enum (value, static_cast<::GIOError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::IOError m)
  {
    set (value, m);
  }

  static GLib::IOError
  cast_for_create (GLib::IOError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class IOError : std::underlying_type<::GIOError>::type
{
  NONE = G_IO_ERROR_NONE,
  AGAIN = G_IO_ERROR_AGAIN,
  INVAL = G_IO_ERROR_INVAL,
  UNKNOWN = G_IO_ERROR_UNKNOWN,
}; /* enum IOError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
