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
enum class TypeFlags : std::underlying_type<::GTypeFlags>::type;
} /* namespace GObject */

template<>
struct GObject::Value::Traits<GObject::TypeFlags>
{
  typedef GObject::TypeFlags UnownedType;

  static GObject::TypeFlags
  get (const ::GValue *value)
  {
    return static_cast<GObject::TypeFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GObject::TypeFlags flags)
  {
    g_value_set_flags (value, static_cast<::GTypeFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GObject::TypeFlags flags)
  {
    set (value, flags);
  }

  static GObject::TypeFlags
  cast_for_create (GObject::TypeFlags flags) noexcept
  {
    return flags;
  }
};


namespace GObject
{
enum class /* bitfield */ TypeFlags : std::underlying_type<::GTypeFlags>::type
{
  NONE = G_TYPE_FLAG_NONE,
  ABSTRACT = G_TYPE_FLAG_ABSTRACT,
  VALUE_ABSTRACT = G_TYPE_FLAG_VALUE_ABSTRACT,
  FINAL = G_TYPE_FLAG_FINAL,
  DEPRECATED = G_TYPE_FLAG_DEPRECATED,
}; /* bitfield TypeFlags */

static constexpr inline TypeFlags
operator | (TypeFlags lhs, TypeFlags rhs)
{
  return TypeFlags (static_cast<::GTypeFlags> (lhs) | static_cast<::GTypeFlags> (rhs));
}

static constexpr inline TypeFlags
operator & (TypeFlags lhs, TypeFlags rhs)
{
  return TypeFlags (static_cast<::GTypeFlags> (lhs) & static_cast<::GTypeFlags> (rhs));
}

static constexpr inline TypeFlags
operator ^ (TypeFlags lhs, TypeFlags rhs)
{
  return TypeFlags (static_cast<::GTypeFlags> (lhs) ^ static_cast<::GTypeFlags> (rhs));
}

static constexpr inline TypeFlags
operator ~ (TypeFlags lhs)
{
  return TypeFlags (~static_cast<::GTypeFlags> (lhs));
}

static inline TypeFlags &
operator |= (TypeFlags &lhs, TypeFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TypeFlags &
operator &= (TypeFlags &lhs, TypeFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TypeFlags &
operator ^= (TypeFlags &lhs, TypeFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TypeFlags lhs)
{
  return !static_cast<::GTypeFlags> (lhs);
}

static constexpr inline bool
operator + (TypeFlags lhs)
{
  return !!static_cast<::GTypeFlags> (lhs);
}


} /* namespace GObject */
} /* namespace peel */

peel_end_header
