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
enum class MarkupCollectType : std::underlying_type<::GMarkupCollectType>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::MarkupCollectType>
{
  typedef GLib::MarkupCollectType UnownedType;

  static GLib::MarkupCollectType
  get (const ::GValue *value)
  {
    return static_cast<GLib::MarkupCollectType> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::MarkupCollectType flags)
  {
    g_value_set_flags (value, static_cast<::GMarkupCollectType> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::MarkupCollectType flags)
  {
    set (value, flags);
  }

  static GLib::MarkupCollectType
  cast_for_create (GLib::MarkupCollectType flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ MarkupCollectType : std::underlying_type<::GMarkupCollectType>::type
{
  INVALID = G_MARKUP_COLLECT_INVALID,
  STRING = G_MARKUP_COLLECT_STRING,
  STRDUP = G_MARKUP_COLLECT_STRDUP,
  BOOLEAN = G_MARKUP_COLLECT_BOOLEAN,
  TRISTATE = G_MARKUP_COLLECT_TRISTATE,
  OPTIONAL_ = G_MARKUP_COLLECT_OPTIONAL,
}; /* bitfield MarkupCollectType */

static constexpr inline MarkupCollectType
operator | (MarkupCollectType lhs, MarkupCollectType rhs)
{
  return MarkupCollectType (static_cast<::GMarkupCollectType> (lhs) | static_cast<::GMarkupCollectType> (rhs));
}

static constexpr inline MarkupCollectType
operator & (MarkupCollectType lhs, MarkupCollectType rhs)
{
  return MarkupCollectType (static_cast<::GMarkupCollectType> (lhs) & static_cast<::GMarkupCollectType> (rhs));
}

static constexpr inline MarkupCollectType
operator ^ (MarkupCollectType lhs, MarkupCollectType rhs)
{
  return MarkupCollectType (static_cast<::GMarkupCollectType> (lhs) ^ static_cast<::GMarkupCollectType> (rhs));
}

static constexpr inline MarkupCollectType
operator ~ (MarkupCollectType lhs)
{
  return MarkupCollectType (~static_cast<::GMarkupCollectType> (lhs));
}

static inline MarkupCollectType &
operator |= (MarkupCollectType &lhs, MarkupCollectType rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline MarkupCollectType &
operator &= (MarkupCollectType &lhs, MarkupCollectType rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline MarkupCollectType &
operator ^= (MarkupCollectType &lhs, MarkupCollectType rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (MarkupCollectType lhs)
{
  return !static_cast<::GMarkupCollectType> (lhs);
}

static constexpr inline bool
operator + (MarkupCollectType lhs)
{
  return !!static_cast<::GMarkupCollectType> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
