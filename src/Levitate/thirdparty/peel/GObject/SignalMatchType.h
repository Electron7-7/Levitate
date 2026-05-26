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
enum class SignalMatchType : std::underlying_type<::GSignalMatchType>::type;
} /* namespace GObject */

template<>
struct GObject::Value::Traits<GObject::SignalMatchType>
{
  typedef GObject::SignalMatchType UnownedType;

  static GObject::SignalMatchType
  get (const ::GValue *value)
  {
    return static_cast<GObject::SignalMatchType> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GObject::SignalMatchType flags)
  {
    g_value_set_flags (value, static_cast<::GSignalMatchType> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GObject::SignalMatchType flags)
  {
    set (value, flags);
  }

  static GObject::SignalMatchType
  cast_for_create (GObject::SignalMatchType flags) noexcept
  {
    return flags;
  }
};


namespace GObject
{
enum class /* bitfield */ SignalMatchType : std::underlying_type<::GSignalMatchType>::type
{
  ID = G_SIGNAL_MATCH_ID,
  DETAIL = G_SIGNAL_MATCH_DETAIL,
  CLOSURE = G_SIGNAL_MATCH_CLOSURE,
  FUNC = G_SIGNAL_MATCH_FUNC,
  DATA = G_SIGNAL_MATCH_DATA,
  UNBLOCKED = G_SIGNAL_MATCH_UNBLOCKED,
}; /* bitfield SignalMatchType */

static constexpr inline SignalMatchType
operator | (SignalMatchType lhs, SignalMatchType rhs)
{
  return SignalMatchType (static_cast<::GSignalMatchType> (lhs) | static_cast<::GSignalMatchType> (rhs));
}

static constexpr inline SignalMatchType
operator & (SignalMatchType lhs, SignalMatchType rhs)
{
  return SignalMatchType (static_cast<::GSignalMatchType> (lhs) & static_cast<::GSignalMatchType> (rhs));
}

static constexpr inline SignalMatchType
operator ^ (SignalMatchType lhs, SignalMatchType rhs)
{
  return SignalMatchType (static_cast<::GSignalMatchType> (lhs) ^ static_cast<::GSignalMatchType> (rhs));
}

static constexpr inline SignalMatchType
operator ~ (SignalMatchType lhs)
{
  return SignalMatchType (~static_cast<::GSignalMatchType> (lhs));
}

static inline SignalMatchType &
operator |= (SignalMatchType &lhs, SignalMatchType rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline SignalMatchType &
operator &= (SignalMatchType &lhs, SignalMatchType rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline SignalMatchType &
operator ^= (SignalMatchType &lhs, SignalMatchType rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (SignalMatchType lhs)
{
  return !static_cast<::GSignalMatchType> (lhs);
}

static constexpr inline bool
operator + (SignalMatchType lhs)
{
  return !!static_cast<::GSignalMatchType> (lhs);
}


} /* namespace GObject */
} /* namespace peel */

peel_end_header
