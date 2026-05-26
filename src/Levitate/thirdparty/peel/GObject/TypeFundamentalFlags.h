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
enum class TypeFundamentalFlags : std::underlying_type<::GTypeFundamentalFlags>::type;
} /* namespace GObject */

template<>
struct GObject::Value::Traits<GObject::TypeFundamentalFlags>
{
  typedef GObject::TypeFundamentalFlags UnownedType;

  static GObject::TypeFundamentalFlags
  get (const ::GValue *value)
  {
    return static_cast<GObject::TypeFundamentalFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GObject::TypeFundamentalFlags flags)
  {
    g_value_set_flags (value, static_cast<::GTypeFundamentalFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GObject::TypeFundamentalFlags flags)
  {
    set (value, flags);
  }

  static GObject::TypeFundamentalFlags
  cast_for_create (GObject::TypeFundamentalFlags flags) noexcept
  {
    return flags;
  }
};


namespace GObject
{
enum class /* bitfield */ TypeFundamentalFlags : std::underlying_type<::GTypeFundamentalFlags>::type
{
  CLASSED = G_TYPE_FLAG_CLASSED,
  INSTANTIATABLE = G_TYPE_FLAG_INSTANTIATABLE,
  DERIVABLE = G_TYPE_FLAG_DERIVABLE,
  DEEP_DERIVABLE = G_TYPE_FLAG_DEEP_DERIVABLE,
}; /* bitfield TypeFundamentalFlags */

static constexpr inline TypeFundamentalFlags
operator | (TypeFundamentalFlags lhs, TypeFundamentalFlags rhs)
{
  return TypeFundamentalFlags (static_cast<::GTypeFundamentalFlags> (lhs) | static_cast<::GTypeFundamentalFlags> (rhs));
}

static constexpr inline TypeFundamentalFlags
operator & (TypeFundamentalFlags lhs, TypeFundamentalFlags rhs)
{
  return TypeFundamentalFlags (static_cast<::GTypeFundamentalFlags> (lhs) & static_cast<::GTypeFundamentalFlags> (rhs));
}

static constexpr inline TypeFundamentalFlags
operator ^ (TypeFundamentalFlags lhs, TypeFundamentalFlags rhs)
{
  return TypeFundamentalFlags (static_cast<::GTypeFundamentalFlags> (lhs) ^ static_cast<::GTypeFundamentalFlags> (rhs));
}

static constexpr inline TypeFundamentalFlags
operator ~ (TypeFundamentalFlags lhs)
{
  return TypeFundamentalFlags (~static_cast<::GTypeFundamentalFlags> (lhs));
}

static inline TypeFundamentalFlags &
operator |= (TypeFundamentalFlags &lhs, TypeFundamentalFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TypeFundamentalFlags &
operator &= (TypeFundamentalFlags &lhs, TypeFundamentalFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TypeFundamentalFlags &
operator ^= (TypeFundamentalFlags &lhs, TypeFundamentalFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TypeFundamentalFlags lhs)
{
  return !static_cast<::GTypeFundamentalFlags> (lhs);
}

static constexpr inline bool
operator + (TypeFundamentalFlags lhs)
{
  return !!static_cast<::GTypeFundamentalFlags> (lhs);
}


} /* namespace GObject */
} /* namespace peel */

peel_end_header
