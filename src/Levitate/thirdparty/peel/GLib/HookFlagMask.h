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
enum class HookFlagMask : std::underlying_type<::GHookFlagMask>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::HookFlagMask>
{
  typedef GLib::HookFlagMask UnownedType;

  static GLib::HookFlagMask
  get (const ::GValue *value)
  {
    return static_cast<GLib::HookFlagMask> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::HookFlagMask flags)
  {
    g_value_set_flags (value, static_cast<::GHookFlagMask> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::HookFlagMask flags)
  {
    set (value, flags);
  }

  static GLib::HookFlagMask
  cast_for_create (GLib::HookFlagMask flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ HookFlagMask : std::underlying_type<::GHookFlagMask>::type
{
  ACTIVE = G_HOOK_FLAG_ACTIVE,
  IN_CALL = G_HOOK_FLAG_IN_CALL,
  RESERVED1 = G_HOOK_FLAG_RESERVED1,
}; /* bitfield HookFlagMask */

static constexpr inline HookFlagMask
operator | (HookFlagMask lhs, HookFlagMask rhs)
{
  return HookFlagMask (static_cast<::GHookFlagMask> (lhs) | static_cast<::GHookFlagMask> (rhs));
}

static constexpr inline HookFlagMask
operator & (HookFlagMask lhs, HookFlagMask rhs)
{
  return HookFlagMask (static_cast<::GHookFlagMask> (lhs) & static_cast<::GHookFlagMask> (rhs));
}

static constexpr inline HookFlagMask
operator ^ (HookFlagMask lhs, HookFlagMask rhs)
{
  return HookFlagMask (static_cast<::GHookFlagMask> (lhs) ^ static_cast<::GHookFlagMask> (rhs));
}

static constexpr inline HookFlagMask
operator ~ (HookFlagMask lhs)
{
  return HookFlagMask (~static_cast<::GHookFlagMask> (lhs));
}

static inline HookFlagMask &
operator |= (HookFlagMask &lhs, HookFlagMask rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline HookFlagMask &
operator &= (HookFlagMask &lhs, HookFlagMask rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline HookFlagMask &
operator ^= (HookFlagMask &lhs, HookFlagMask rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (HookFlagMask lhs)
{
  return !static_cast<::GHookFlagMask> (lhs);
}

static constexpr inline bool
operator + (HookFlagMask lhs)
{
  return !!static_cast<::GHookFlagMask> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
