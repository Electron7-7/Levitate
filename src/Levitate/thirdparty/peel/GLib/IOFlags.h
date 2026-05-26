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
enum class IOFlags : std::underlying_type<::GIOFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::IOFlags>
{
  typedef GLib::IOFlags UnownedType;

  static GLib::IOFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::IOFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::IOFlags flags)
  {
    g_value_set_flags (value, static_cast<::GIOFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::IOFlags flags)
  {
    set (value, flags);
  }

  static GLib::IOFlags
  cast_for_create (GLib::IOFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ IOFlags : std::underlying_type<::GIOFlags>::type
{
  NONE = G_IO_FLAG_NONE,
  APPEND = G_IO_FLAG_APPEND,
  NONBLOCK = G_IO_FLAG_NONBLOCK,
  IS_READABLE = G_IO_FLAG_IS_READABLE,
  IS_WRITABLE = G_IO_FLAG_IS_WRITABLE,
  IS_WRITEABLE = G_IO_FLAG_IS_WRITEABLE,
  IS_SEEKABLE = G_IO_FLAG_IS_SEEKABLE,
  MASK = G_IO_FLAG_MASK,
  GET_MASK = G_IO_FLAG_GET_MASK,
  SET_MASK = G_IO_FLAG_SET_MASK,
}; /* bitfield IOFlags */

static constexpr inline IOFlags
operator | (IOFlags lhs, IOFlags rhs)
{
  return IOFlags (static_cast<::GIOFlags> (lhs) | static_cast<::GIOFlags> (rhs));
}

static constexpr inline IOFlags
operator & (IOFlags lhs, IOFlags rhs)
{
  return IOFlags (static_cast<::GIOFlags> (lhs) & static_cast<::GIOFlags> (rhs));
}

static constexpr inline IOFlags
operator ^ (IOFlags lhs, IOFlags rhs)
{
  return IOFlags (static_cast<::GIOFlags> (lhs) ^ static_cast<::GIOFlags> (rhs));
}

static constexpr inline IOFlags
operator ~ (IOFlags lhs)
{
  return IOFlags (~static_cast<::GIOFlags> (lhs));
}

static inline IOFlags &
operator |= (IOFlags &lhs, IOFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline IOFlags &
operator &= (IOFlags &lhs, IOFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline IOFlags &
operator ^= (IOFlags &lhs, IOFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (IOFlags lhs)
{
  return !static_cast<::GIOFlags> (lhs);
}

static constexpr inline bool
operator + (IOFlags lhs)
{
  return !!static_cast<::GIOFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
