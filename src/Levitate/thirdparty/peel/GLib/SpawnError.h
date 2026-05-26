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
enum class SpawnError : std::underlying_type<::GSpawnError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::SpawnError>
{
  typedef GLib::SpawnError UnownedType;

  static GLib::SpawnError
  get (const ::GValue *value)
  {
    return static_cast<GLib::SpawnError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::SpawnError m)
  {
    g_value_set_enum (value, static_cast<::GSpawnError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::SpawnError m)
  {
    set (value, m);
  }

  static GLib::SpawnError
  cast_for_create (GLib::SpawnError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class SpawnError : std::underlying_type<::GSpawnError>::type
{
  FORK = G_SPAWN_ERROR_FORK,
  READ = G_SPAWN_ERROR_READ,
  CHDIR = G_SPAWN_ERROR_CHDIR,
  ACCES = G_SPAWN_ERROR_ACCES,
  PERM = G_SPAWN_ERROR_PERM,
  TOO_BIG = G_SPAWN_ERROR_TOO_BIG,
  _2BIG = G_SPAWN_ERROR_2BIG,
  NOEXEC = G_SPAWN_ERROR_NOEXEC,
  NAMETOOLONG = G_SPAWN_ERROR_NAMETOOLONG,
  NOENT = G_SPAWN_ERROR_NOENT,
  NOMEM = G_SPAWN_ERROR_NOMEM,
  NOTDIR = G_SPAWN_ERROR_NOTDIR,
  LOOP = G_SPAWN_ERROR_LOOP,
  TXTBUSY = G_SPAWN_ERROR_TXTBUSY,
  IO = G_SPAWN_ERROR_IO,
  NFILE = G_SPAWN_ERROR_NFILE,
  MFILE = G_SPAWN_ERROR_MFILE,
  INVAL = G_SPAWN_ERROR_INVAL,
  ISDIR = G_SPAWN_ERROR_ISDIR,
  LIBBAD = G_SPAWN_ERROR_LIBBAD,
  FAILED = G_SPAWN_ERROR_FAILED,
}; /* enum SpawnError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
