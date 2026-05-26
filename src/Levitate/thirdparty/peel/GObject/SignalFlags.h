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
enum class SignalFlags : std::underlying_type<::GSignalFlags>::type;
} /* namespace GObject */

template<>
struct GObject::Value::Traits<GObject::SignalFlags>
{
  typedef GObject::SignalFlags UnownedType;

  static GObject::SignalFlags
  get (const ::GValue *value)
  {
    return static_cast<GObject::SignalFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GObject::SignalFlags flags)
  {
    g_value_set_flags (value, static_cast<::GSignalFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GObject::SignalFlags flags)
  {
    set (value, flags);
  }

  static GObject::SignalFlags
  cast_for_create (GObject::SignalFlags flags) noexcept
  {
    return flags;
  }
};


namespace GObject
{
enum class /* bitfield */ SignalFlags : std::underlying_type<::GSignalFlags>::type
{
  RUN_FIRST = G_SIGNAL_RUN_FIRST,
  RUN_LAST = G_SIGNAL_RUN_LAST,
  RUN_CLEANUP = G_SIGNAL_RUN_CLEANUP,
  NO_RECURSE = G_SIGNAL_NO_RECURSE,
  DETAILED = G_SIGNAL_DETAILED,
  ACTION = G_SIGNAL_ACTION,
  NO_HOOKS = G_SIGNAL_NO_HOOKS,
  MUST_COLLECT = G_SIGNAL_MUST_COLLECT,
  DEPRECATED = G_SIGNAL_DEPRECATED,
  ACCUMULATOR_FIRST_RUN = G_SIGNAL_ACCUMULATOR_FIRST_RUN,
}; /* bitfield SignalFlags */

static constexpr inline SignalFlags
operator | (SignalFlags lhs, SignalFlags rhs)
{
  return SignalFlags (static_cast<::GSignalFlags> (lhs) | static_cast<::GSignalFlags> (rhs));
}

static constexpr inline SignalFlags
operator & (SignalFlags lhs, SignalFlags rhs)
{
  return SignalFlags (static_cast<::GSignalFlags> (lhs) & static_cast<::GSignalFlags> (rhs));
}

static constexpr inline SignalFlags
operator ^ (SignalFlags lhs, SignalFlags rhs)
{
  return SignalFlags (static_cast<::GSignalFlags> (lhs) ^ static_cast<::GSignalFlags> (rhs));
}

static constexpr inline SignalFlags
operator ~ (SignalFlags lhs)
{
  return SignalFlags (~static_cast<::GSignalFlags> (lhs));
}

static inline SignalFlags &
operator |= (SignalFlags &lhs, SignalFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline SignalFlags &
operator &= (SignalFlags &lhs, SignalFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline SignalFlags &
operator ^= (SignalFlags &lhs, SignalFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (SignalFlags lhs)
{
  return !static_cast<::GSignalFlags> (lhs);
}

static constexpr inline bool
operator + (SignalFlags lhs)
{
  return !!static_cast<::GSignalFlags> (lhs);
}


} /* namespace GObject */
} /* namespace peel */

peel_end_header
