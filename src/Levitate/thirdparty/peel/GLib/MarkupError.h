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
enum class MarkupError : std::underlying_type<::GMarkupError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::MarkupError>
{
  typedef GLib::MarkupError UnownedType;

  static GLib::MarkupError
  get (const ::GValue *value)
  {
    return static_cast<GLib::MarkupError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::MarkupError m)
  {
    g_value_set_enum (value, static_cast<::GMarkupError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::MarkupError m)
  {
    set (value, m);
  }

  static GLib::MarkupError
  cast_for_create (GLib::MarkupError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class MarkupError : std::underlying_type<::GMarkupError>::type
{
  BAD_UTF8 = G_MARKUP_ERROR_BAD_UTF8,
  EMPTY = G_MARKUP_ERROR_EMPTY,
  PARSE = G_MARKUP_ERROR_PARSE,
  UNKNOWN_ELEMENT = G_MARKUP_ERROR_UNKNOWN_ELEMENT,
  UNKNOWN_ATTRIBUTE = G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE,
  INVALID_CONTENT = G_MARKUP_ERROR_INVALID_CONTENT,
  MISSING_ATTRIBUTE = G_MARKUP_ERROR_MISSING_ATTRIBUTE,
}; /* enum MarkupError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
