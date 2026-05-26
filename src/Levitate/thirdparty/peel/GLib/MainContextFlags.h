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
#include <peel/GLib/MainContext.h>

peel_begin_header

namespace peel
{
namespace GLib
{
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::MainContext::Flags>
{
  typedef GLib::MainContext::Flags UnownedType;

  static GLib::MainContext::Flags
  get (const ::GValue *value)
  {
    return static_cast<GLib::MainContext::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::MainContext::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GMainContextFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::MainContext::Flags flags)
  {
    set (value, flags);
  }

  static GLib::MainContext::Flags
  cast_for_create (GLib::MainContext::Flags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ MainContext::Flags : std::underlying_type<::GMainContextFlags>::type
{
  NONE = G_MAIN_CONTEXT_FLAGS_NONE,
  OWNERLESS_POLLING = G_MAIN_CONTEXT_FLAGS_OWNERLESS_POLLING,
}; /* bitfield MainContext::Flags */

static constexpr inline MainContext::Flags
operator | (MainContext::Flags lhs, MainContext::Flags rhs)
{
  return MainContext::Flags (static_cast<::GMainContextFlags> (lhs) | static_cast<::GMainContextFlags> (rhs));
}

static constexpr inline MainContext::Flags
operator & (MainContext::Flags lhs, MainContext::Flags rhs)
{
  return MainContext::Flags (static_cast<::GMainContextFlags> (lhs) & static_cast<::GMainContextFlags> (rhs));
}

static constexpr inline MainContext::Flags
operator ^ (MainContext::Flags lhs, MainContext::Flags rhs)
{
  return MainContext::Flags (static_cast<::GMainContextFlags> (lhs) ^ static_cast<::GMainContextFlags> (rhs));
}

static constexpr inline MainContext::Flags
operator ~ (MainContext::Flags lhs)
{
  return MainContext::Flags (~static_cast<::GMainContextFlags> (lhs));
}

static inline MainContext::Flags &
operator |= (MainContext::Flags &lhs, MainContext::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline MainContext::Flags &
operator &= (MainContext::Flags &lhs, MainContext::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline MainContext::Flags &
operator ^= (MainContext::Flags &lhs, MainContext::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (MainContext::Flags lhs)
{
  return !static_cast<::GMainContextFlags> (lhs);
}

static constexpr inline bool
operator + (MainContext::Flags lhs)
{
  return !!static_cast<::GMainContextFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
