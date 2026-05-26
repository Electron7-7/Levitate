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
enum class ConvertError : std::underlying_type<::GConvertError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::ConvertError>
{
  typedef GLib::ConvertError UnownedType;

  static GLib::ConvertError
  get (const ::GValue *value)
  {
    return static_cast<GLib::ConvertError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::ConvertError m)
  {
    g_value_set_enum (value, static_cast<::GConvertError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::ConvertError m)
  {
    set (value, m);
  }

  static GLib::ConvertError
  cast_for_create (GLib::ConvertError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class ConvertError : std::underlying_type<::GConvertError>::type
{
  NO_CONVERSION = G_CONVERT_ERROR_NO_CONVERSION,
  ILLEGAL_SEQUENCE = G_CONVERT_ERROR_ILLEGAL_SEQUENCE,
  FAILED = G_CONVERT_ERROR_FAILED,
  PARTIAL_INPUT = G_CONVERT_ERROR_PARTIAL_INPUT,
  BAD_URI = G_CONVERT_ERROR_BAD_URI,
  NOT_ABSOLUTE_PATH = G_CONVERT_ERROR_NOT_ABSOLUTE_PATH,
  NO_MEMORY = G_CONVERT_ERROR_NO_MEMORY,
  EMBEDDED_NUL = G_CONVERT_ERROR_EMBEDDED_NUL,
}; /* enum ConvertError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
