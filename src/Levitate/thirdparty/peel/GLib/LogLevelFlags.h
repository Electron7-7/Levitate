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
enum class LogLevelFlags : std::underlying_type<::GLogLevelFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::LogLevelFlags>
{
  typedef GLib::LogLevelFlags UnownedType;

  static GLib::LogLevelFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::LogLevelFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::LogLevelFlags flags)
  {
    g_value_set_flags (value, static_cast<::GLogLevelFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::LogLevelFlags flags)
  {
    set (value, flags);
  }

  static GLib::LogLevelFlags
  cast_for_create (GLib::LogLevelFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ LogLevelFlags : std::underlying_type<::GLogLevelFlags>::type
{
  FLAG_RECURSION = G_LOG_FLAG_RECURSION,
  FLAG_FATAL = G_LOG_FLAG_FATAL,
  LEVEL_ERROR = G_LOG_LEVEL_ERROR,
  LEVEL_CRITICAL = G_LOG_LEVEL_CRITICAL,
  LEVEL_WARNING = G_LOG_LEVEL_WARNING,
  LEVEL_MESSAGE = G_LOG_LEVEL_MESSAGE,
  LEVEL_INFO = G_LOG_LEVEL_INFO,
  LEVEL_DEBUG = G_LOG_LEVEL_DEBUG,
  LEVEL_MASK = G_LOG_LEVEL_MASK,
}; /* bitfield LogLevelFlags */

static constexpr inline LogLevelFlags
operator | (LogLevelFlags lhs, LogLevelFlags rhs)
{
  return LogLevelFlags (static_cast<::GLogLevelFlags> (lhs) | static_cast<::GLogLevelFlags> (rhs));
}

static constexpr inline LogLevelFlags
operator & (LogLevelFlags lhs, LogLevelFlags rhs)
{
  return LogLevelFlags (static_cast<::GLogLevelFlags> (lhs) & static_cast<::GLogLevelFlags> (rhs));
}

static constexpr inline LogLevelFlags
operator ^ (LogLevelFlags lhs, LogLevelFlags rhs)
{
  return LogLevelFlags (static_cast<::GLogLevelFlags> (lhs) ^ static_cast<::GLogLevelFlags> (rhs));
}

static constexpr inline LogLevelFlags
operator ~ (LogLevelFlags lhs)
{
  return LogLevelFlags (~static_cast<::GLogLevelFlags> (lhs));
}

static inline LogLevelFlags &
operator |= (LogLevelFlags &lhs, LogLevelFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline LogLevelFlags &
operator &= (LogLevelFlags &lhs, LogLevelFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline LogLevelFlags &
operator ^= (LogLevelFlags &lhs, LogLevelFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (LogLevelFlags lhs)
{
  return !static_cast<::GLogLevelFlags> (lhs);
}

static constexpr inline bool
operator + (LogLevelFlags lhs)
{
  return !!static_cast<::GLogLevelFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
