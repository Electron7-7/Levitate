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
enum class TraverseFlags : std::underlying_type<::GTraverseFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::TraverseFlags>
{
  typedef GLib::TraverseFlags UnownedType;

  static GLib::TraverseFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::TraverseFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::TraverseFlags flags)
  {
    g_value_set_flags (value, static_cast<::GTraverseFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::TraverseFlags flags)
  {
    set (value, flags);
  }

  static GLib::TraverseFlags
  cast_for_create (GLib::TraverseFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ TraverseFlags : std::underlying_type<::GTraverseFlags>::type
{
  LEAVES = G_TRAVERSE_LEAVES,
  NON_LEAVES = G_TRAVERSE_NON_LEAVES,
  ALL = G_TRAVERSE_ALL,
  MASK = G_TRAVERSE_MASK,
  LEAFS = G_TRAVERSE_LEAFS,
  NON_LEAFS = G_TRAVERSE_NON_LEAFS,
}; /* bitfield TraverseFlags */

static constexpr inline TraverseFlags
operator | (TraverseFlags lhs, TraverseFlags rhs)
{
  return TraverseFlags (static_cast<::GTraverseFlags> (lhs) | static_cast<::GTraverseFlags> (rhs));
}

static constexpr inline TraverseFlags
operator & (TraverseFlags lhs, TraverseFlags rhs)
{
  return TraverseFlags (static_cast<::GTraverseFlags> (lhs) & static_cast<::GTraverseFlags> (rhs));
}

static constexpr inline TraverseFlags
operator ^ (TraverseFlags lhs, TraverseFlags rhs)
{
  return TraverseFlags (static_cast<::GTraverseFlags> (lhs) ^ static_cast<::GTraverseFlags> (rhs));
}

static constexpr inline TraverseFlags
operator ~ (TraverseFlags lhs)
{
  return TraverseFlags (~static_cast<::GTraverseFlags> (lhs));
}

static inline TraverseFlags &
operator |= (TraverseFlags &lhs, TraverseFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TraverseFlags &
operator &= (TraverseFlags &lhs, TraverseFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TraverseFlags &
operator ^= (TraverseFlags &lhs, TraverseFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TraverseFlags lhs)
{
  return !static_cast<::GTraverseFlags> (lhs);
}

static constexpr inline bool
operator + (TraverseFlags lhs)
{
  return !!static_cast<::GTraverseFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
