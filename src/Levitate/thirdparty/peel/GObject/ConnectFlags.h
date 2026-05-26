#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
enum class ConnectFlags : std::underlying_type<::GConnectFlags>::type;
} /* namespace GObject */

template<>
struct GObject::Value::Traits<GObject::ConnectFlags>
{
  typedef GObject::ConnectFlags UnownedType;

  static GObject::ConnectFlags
  get (const ::GValue *value)
  {
    return static_cast<GObject::ConnectFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GObject::ConnectFlags flags)
  {
    g_value_set_flags (value, static_cast<::GConnectFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GObject::ConnectFlags flags)
  {
    set (value, flags);
  }

  static GObject::ConnectFlags
  cast_for_create (GObject::ConnectFlags flags) noexcept
  {
    return flags;
  }
};


namespace GObject
{
enum class /* bitfield */ ConnectFlags : std::underlying_type<::GConnectFlags>::type
{
  DEFAULT = G_CONNECT_DEFAULT,
  AFTER = G_CONNECT_AFTER,
  SWAPPED = G_CONNECT_SWAPPED,
}; /* bitfield ConnectFlags */

static constexpr inline ConnectFlags
operator | (ConnectFlags lhs, ConnectFlags rhs)
{
  return ConnectFlags (static_cast<::GConnectFlags> (lhs) | static_cast<::GConnectFlags> (rhs));
}

static constexpr inline ConnectFlags
operator & (ConnectFlags lhs, ConnectFlags rhs)
{
  return ConnectFlags (static_cast<::GConnectFlags> (lhs) & static_cast<::GConnectFlags> (rhs));
}

static constexpr inline ConnectFlags
operator ^ (ConnectFlags lhs, ConnectFlags rhs)
{
  return ConnectFlags (static_cast<::GConnectFlags> (lhs) ^ static_cast<::GConnectFlags> (rhs));
}

static constexpr inline ConnectFlags
operator ~ (ConnectFlags lhs)
{
  return ConnectFlags (~static_cast<::GConnectFlags> (lhs));
}

static inline ConnectFlags &
operator |= (ConnectFlags &lhs, ConnectFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline ConnectFlags &
operator &= (ConnectFlags &lhs, ConnectFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline ConnectFlags &
operator ^= (ConnectFlags &lhs, ConnectFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (ConnectFlags lhs)
{
  return !static_cast<::GConnectFlags> (lhs);
}

static constexpr inline bool
operator + (ConnectFlags lhs)
{
  return !!static_cast<::GConnectFlags> (lhs);
}


} /* namespace GObject */
} /* namespace peel */

peel_end_header
