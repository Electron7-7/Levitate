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
enum class KeyFileError : std::underlying_type<::GKeyFileError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::KeyFileError>
{
  typedef GLib::KeyFileError UnownedType;

  static GLib::KeyFileError
  get (const ::GValue *value)
  {
    return static_cast<GLib::KeyFileError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::KeyFileError m)
  {
    g_value_set_enum (value, static_cast<::GKeyFileError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::KeyFileError m)
  {
    set (value, m);
  }

  static GLib::KeyFileError
  cast_for_create (GLib::KeyFileError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class KeyFileError : std::underlying_type<::GKeyFileError>::type
{
  UNKNOWN_ENCODING = G_KEY_FILE_ERROR_UNKNOWN_ENCODING,
  PARSE = G_KEY_FILE_ERROR_PARSE,
  NOT_FOUND = G_KEY_FILE_ERROR_NOT_FOUND,
  KEY_NOT_FOUND = G_KEY_FILE_ERROR_KEY_NOT_FOUND,
  GROUP_NOT_FOUND = G_KEY_FILE_ERROR_GROUP_NOT_FOUND,
  INVALID_VALUE = G_KEY_FILE_ERROR_INVALID_VALUE,
}; /* enum KeyFileError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
