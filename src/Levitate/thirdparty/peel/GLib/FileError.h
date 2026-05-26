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
enum class FileError : std::underlying_type<::GFileError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::FileError>
{
  typedef GLib::FileError UnownedType;

  static GLib::FileError
  get (const ::GValue *value)
  {
    return static_cast<GLib::FileError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::FileError m)
  {
    g_value_set_enum (value, static_cast<::GFileError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::FileError m)
  {
    set (value, m);
  }

  static GLib::FileError
  cast_for_create (GLib::FileError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class FileError : std::underlying_type<::GFileError>::type
{
  EXIST = G_FILE_ERROR_EXIST,
  ISDIR = G_FILE_ERROR_ISDIR,
  ACCES = G_FILE_ERROR_ACCES,
  NAMETOOLONG = G_FILE_ERROR_NAMETOOLONG,
  NOENT = G_FILE_ERROR_NOENT,
  NOTDIR = G_FILE_ERROR_NOTDIR,
  NXIO = G_FILE_ERROR_NXIO,
  NODEV_ = G_FILE_ERROR_NODEV,
  ROFS = G_FILE_ERROR_ROFS,
  TXTBSY = G_FILE_ERROR_TXTBSY,
  FAULT = G_FILE_ERROR_FAULT,
  LOOP = G_FILE_ERROR_LOOP,
  NOSPC = G_FILE_ERROR_NOSPC,
  NOMEM = G_FILE_ERROR_NOMEM,
  MFILE = G_FILE_ERROR_MFILE,
  NFILE = G_FILE_ERROR_NFILE,
  BADF = G_FILE_ERROR_BADF,
  INVAL = G_FILE_ERROR_INVAL,
  PIPE = G_FILE_ERROR_PIPE,
  AGAIN = G_FILE_ERROR_AGAIN,
  INTR = G_FILE_ERROR_INTR,
  IO = G_FILE_ERROR_IO,
  PERM = G_FILE_ERROR_PERM,
  NOSYS = G_FILE_ERROR_NOSYS,
  FAILED = G_FILE_ERROR_FAILED,
}; /* enum FileError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
