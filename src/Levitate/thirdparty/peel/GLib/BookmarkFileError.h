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
enum class BookmarkFileError : std::underlying_type<::GBookmarkFileError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::BookmarkFileError>
{
  typedef GLib::BookmarkFileError UnownedType;

  static GLib::BookmarkFileError
  get (const ::GValue *value)
  {
    return static_cast<GLib::BookmarkFileError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::BookmarkFileError m)
  {
    g_value_set_enum (value, static_cast<::GBookmarkFileError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::BookmarkFileError m)
  {
    set (value, m);
  }

  static GLib::BookmarkFileError
  cast_for_create (GLib::BookmarkFileError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class BookmarkFileError : std::underlying_type<::GBookmarkFileError>::type
{
  INVALID_URI = G_BOOKMARK_FILE_ERROR_INVALID_URI,
  INVALID_VALUE = G_BOOKMARK_FILE_ERROR_INVALID_VALUE,
  APP_NOT_REGISTERED = G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED,
  URI_NOT_FOUND = G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND,
  READ = G_BOOKMARK_FILE_ERROR_READ,
  UNKNOWN_ENCODING = G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING,
  WRITE = G_BOOKMARK_FILE_ERROR_WRITE,
  FILE_NOT_FOUND = G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND,
}; /* enum BookmarkFileError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
