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
enum class NumberParserError : std::underlying_type<::GNumberParserError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::NumberParserError>
{
  typedef GLib::NumberParserError UnownedType;

  static GLib::NumberParserError
  get (const ::GValue *value)
  {
    return static_cast<GLib::NumberParserError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::NumberParserError m)
  {
    g_value_set_enum (value, static_cast<::GNumberParserError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::NumberParserError m)
  {
    set (value, m);
  }

  static GLib::NumberParserError
  cast_for_create (GLib::NumberParserError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class NumberParserError : std::underlying_type<::GNumberParserError>::type
{
  INVALID = G_NUMBER_PARSER_ERROR_INVALID,
  OUT_OF_BOUNDS = G_NUMBER_PARSER_ERROR_OUT_OF_BOUNDS,
}; /* enum NumberParserError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
