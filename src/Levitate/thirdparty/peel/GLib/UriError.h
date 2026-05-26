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
enum class UriError : std::underlying_type<::GUriError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::UriError>
{
  typedef GLib::UriError UnownedType;

  static GLib::UriError
  get (const ::GValue *value)
  {
    return static_cast<GLib::UriError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::UriError m)
  {
    g_value_set_enum (value, static_cast<::GUriError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::UriError m)
  {
    set (value, m);
  }

  static GLib::UriError
  cast_for_create (GLib::UriError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class UriError : std::underlying_type<::GUriError>::type
{
  FAILED = G_URI_ERROR_FAILED,
  BAD_SCHEME = G_URI_ERROR_BAD_SCHEME,
  BAD_USER = G_URI_ERROR_BAD_USER,
  BAD_PASSWORD = G_URI_ERROR_BAD_PASSWORD,
  BAD_AUTH_PARAMS = G_URI_ERROR_BAD_AUTH_PARAMS,
  BAD_HOST = G_URI_ERROR_BAD_HOST,
  BAD_PORT = G_URI_ERROR_BAD_PORT,
  BAD_PATH = G_URI_ERROR_BAD_PATH,
  BAD_QUERY = G_URI_ERROR_BAD_QUERY,
  BAD_FRAGMENT = G_URI_ERROR_BAD_FRAGMENT,
}; /* enum UriError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
