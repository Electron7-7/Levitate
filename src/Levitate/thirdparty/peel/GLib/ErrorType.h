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
enum class ErrorType : std::underlying_type<::GErrorType>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::ErrorType>
{
  typedef GLib::ErrorType UnownedType;

  static GLib::ErrorType
  get (const ::GValue *value)
  {
    return static_cast<GLib::ErrorType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::ErrorType m)
  {
    g_value_set_enum (value, static_cast<::GErrorType> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::ErrorType m)
  {
    set (value, m);
  }

  static GLib::ErrorType
  cast_for_create (GLib::ErrorType m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class ErrorType : std::underlying_type<::GErrorType>::type
{
  UNKNOWN = G_ERR_UNKNOWN,
  UNEXP_EOF = G_ERR_UNEXP_EOF,
  UNEXP_EOF_IN_STRING = G_ERR_UNEXP_EOF_IN_STRING,
  UNEXP_EOF_IN_COMMENT = G_ERR_UNEXP_EOF_IN_COMMENT,
  NON_DIGIT_IN_CONST = G_ERR_NON_DIGIT_IN_CONST,
  DIGIT_RADIX = G_ERR_DIGIT_RADIX,
  FLOAT_RADIX = G_ERR_FLOAT_RADIX,
  FLOAT_MALFORMED = G_ERR_FLOAT_MALFORMED,
}; /* enum ErrorType */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
