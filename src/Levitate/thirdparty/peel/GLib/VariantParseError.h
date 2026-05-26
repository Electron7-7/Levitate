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
enum class VariantParseError : std::underlying_type<::GVariantParseError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::VariantParseError>
{
  typedef GLib::VariantParseError UnownedType;

  static GLib::VariantParseError
  get (const ::GValue *value)
  {
    return static_cast<GLib::VariantParseError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::VariantParseError m)
  {
    g_value_set_enum (value, static_cast<::GVariantParseError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::VariantParseError m)
  {
    set (value, m);
  }

  static GLib::VariantParseError
  cast_for_create (GLib::VariantParseError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class VariantParseError : std::underlying_type<::GVariantParseError>::type
{
  FAILED = G_VARIANT_PARSE_ERROR_FAILED,
  BASIC_TYPE_EXPECTED = G_VARIANT_PARSE_ERROR_BASIC_TYPE_EXPECTED,
  CANNOT_INFER_TYPE = G_VARIANT_PARSE_ERROR_CANNOT_INFER_TYPE,
  DEFINITE_TYPE_EXPECTED = G_VARIANT_PARSE_ERROR_DEFINITE_TYPE_EXPECTED,
  INPUT_NOT_AT_END = G_VARIANT_PARSE_ERROR_INPUT_NOT_AT_END,
  INVALID_CHARACTER = G_VARIANT_PARSE_ERROR_INVALID_CHARACTER,
  INVALID_FORMAT_STRING = G_VARIANT_PARSE_ERROR_INVALID_FORMAT_STRING,
  INVALID_OBJECT_PATH = G_VARIANT_PARSE_ERROR_INVALID_OBJECT_PATH,
  INVALID_SIGNATURE = G_VARIANT_PARSE_ERROR_INVALID_SIGNATURE,
  INVALID_TYPE_STRING = G_VARIANT_PARSE_ERROR_INVALID_TYPE_STRING,
  NO_COMMON_TYPE = G_VARIANT_PARSE_ERROR_NO_COMMON_TYPE,
  NUMBER_OUT_OF_RANGE = G_VARIANT_PARSE_ERROR_NUMBER_OUT_OF_RANGE,
  NUMBER_TOO_BIG = G_VARIANT_PARSE_ERROR_NUMBER_TOO_BIG,
  TYPE_ERROR = G_VARIANT_PARSE_ERROR_TYPE_ERROR,
  UNEXPECTED_TOKEN = G_VARIANT_PARSE_ERROR_UNEXPECTED_TOKEN,
  UNKNOWN_KEYWORD = G_VARIANT_PARSE_ERROR_UNKNOWN_KEYWORD,
  UNTERMINATED_STRING_CONSTANT = G_VARIANT_PARSE_ERROR_UNTERMINATED_STRING_CONSTANT,
  VALUE_EXPECTED = G_VARIANT_PARSE_ERROR_VALUE_EXPECTED,
  RECURSION = G_VARIANT_PARSE_ERROR_RECURSION,
}; /* enum VariantParseError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
