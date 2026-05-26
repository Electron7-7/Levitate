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
enum class TypeDebugFlags : std::underlying_type<::GTypeDebugFlags>::type;
} /* namespace GObject */

template<>
struct GObject::Value::Traits<GObject::TypeDebugFlags>
{
  typedef GObject::TypeDebugFlags UnownedType;

  static GObject::TypeDebugFlags
  get (const ::GValue *value)
  {
    return static_cast<GObject::TypeDebugFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GObject::TypeDebugFlags flags)
  {
    g_value_set_flags (value, static_cast<::GTypeDebugFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GObject::TypeDebugFlags flags)
  {
    set (value, flags);
  }

  static GObject::TypeDebugFlags
  cast_for_create (GObject::TypeDebugFlags flags) noexcept
  {
    return flags;
  }
};


namespace GObject
{
enum class /* bitfield */ TypeDebugFlags : std::underlying_type<::GTypeDebugFlags>::type
{
  NONE = G_TYPE_DEBUG_NONE,
  OBJECTS = G_TYPE_DEBUG_OBJECTS,
  SIGNALS = G_TYPE_DEBUG_SIGNALS,
  INSTANCE_COUNT = G_TYPE_DEBUG_INSTANCE_COUNT,
  MASK = G_TYPE_DEBUG_MASK,
}; /* bitfield TypeDebugFlags */

static constexpr inline TypeDebugFlags
operator | (TypeDebugFlags lhs, TypeDebugFlags rhs)
{
  return TypeDebugFlags (static_cast<::GTypeDebugFlags> (lhs) | static_cast<::GTypeDebugFlags> (rhs));
}

static constexpr inline TypeDebugFlags
operator & (TypeDebugFlags lhs, TypeDebugFlags rhs)
{
  return TypeDebugFlags (static_cast<::GTypeDebugFlags> (lhs) & static_cast<::GTypeDebugFlags> (rhs));
}

static constexpr inline TypeDebugFlags
operator ^ (TypeDebugFlags lhs, TypeDebugFlags rhs)
{
  return TypeDebugFlags (static_cast<::GTypeDebugFlags> (lhs) ^ static_cast<::GTypeDebugFlags> (rhs));
}

static constexpr inline TypeDebugFlags
operator ~ (TypeDebugFlags lhs)
{
  return TypeDebugFlags (~static_cast<::GTypeDebugFlags> (lhs));
}

static inline TypeDebugFlags &
operator |= (TypeDebugFlags &lhs, TypeDebugFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TypeDebugFlags &
operator &= (TypeDebugFlags &lhs, TypeDebugFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TypeDebugFlags &
operator ^= (TypeDebugFlags &lhs, TypeDebugFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TypeDebugFlags lhs)
{
  return !static_cast<::GTypeDebugFlags> (lhs);
}

static constexpr inline bool
operator + (TypeDebugFlags lhs)
{
  return !!static_cast<::GTypeDebugFlags> (lhs);
}


} /* namespace GObject */
} /* namespace peel */

peel_end_header
