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
enum class SpawnFlags : std::underlying_type<::GSpawnFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::SpawnFlags>
{
  typedef GLib::SpawnFlags UnownedType;

  static GLib::SpawnFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::SpawnFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::SpawnFlags flags)
  {
    g_value_set_flags (value, static_cast<::GSpawnFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::SpawnFlags flags)
  {
    set (value, flags);
  }

  static GLib::SpawnFlags
  cast_for_create (GLib::SpawnFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ SpawnFlags : std::underlying_type<::GSpawnFlags>::type
{
  DEFAULT = G_SPAWN_DEFAULT,
  LEAVE_DESCRIPTORS_OPEN = G_SPAWN_LEAVE_DESCRIPTORS_OPEN,
  DO_NOT_REAP_CHILD = G_SPAWN_DO_NOT_REAP_CHILD,
  SEARCH_PATH = G_SPAWN_SEARCH_PATH,
  STDOUT_TO_DEV_NULL = G_SPAWN_STDOUT_TO_DEV_NULL,
  STDERR_TO_DEV_NULL = G_SPAWN_STDERR_TO_DEV_NULL,
  CHILD_INHERITS_STDIN = G_SPAWN_CHILD_INHERITS_STDIN,
  FILE_AND_ARGV_ZERO = G_SPAWN_FILE_AND_ARGV_ZERO,
  SEARCH_PATH_FROM_ENVP = G_SPAWN_SEARCH_PATH_FROM_ENVP,
  CLOEXEC_PIPES = G_SPAWN_CLOEXEC_PIPES,
  CHILD_INHERITS_STDOUT = G_SPAWN_CHILD_INHERITS_STDOUT,
  CHILD_INHERITS_STDERR = G_SPAWN_CHILD_INHERITS_STDERR,
  STDIN_FROM_DEV_NULL = G_SPAWN_STDIN_FROM_DEV_NULL,
}; /* bitfield SpawnFlags */

static constexpr inline SpawnFlags
operator | (SpawnFlags lhs, SpawnFlags rhs)
{
  return SpawnFlags (static_cast<::GSpawnFlags> (lhs) | static_cast<::GSpawnFlags> (rhs));
}

static constexpr inline SpawnFlags
operator & (SpawnFlags lhs, SpawnFlags rhs)
{
  return SpawnFlags (static_cast<::GSpawnFlags> (lhs) & static_cast<::GSpawnFlags> (rhs));
}

static constexpr inline SpawnFlags
operator ^ (SpawnFlags lhs, SpawnFlags rhs)
{
  return SpawnFlags (static_cast<::GSpawnFlags> (lhs) ^ static_cast<::GSpawnFlags> (rhs));
}

static constexpr inline SpawnFlags
operator ~ (SpawnFlags lhs)
{
  return SpawnFlags (~static_cast<::GSpawnFlags> (lhs));
}

static inline SpawnFlags &
operator |= (SpawnFlags &lhs, SpawnFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline SpawnFlags &
operator &= (SpawnFlags &lhs, SpawnFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline SpawnFlags &
operator ^= (SpawnFlags &lhs, SpawnFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (SpawnFlags lhs)
{
  return !static_cast<::GSpawnFlags> (lhs);
}

static constexpr inline bool
operator + (SpawnFlags lhs)
{
  return !!static_cast<::GSpawnFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
