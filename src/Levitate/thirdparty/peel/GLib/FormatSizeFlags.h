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
enum class FormatSizeFlags : std::underlying_type<::GFormatSizeFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::FormatSizeFlags>
{
  typedef GLib::FormatSizeFlags UnownedType;

  static GLib::FormatSizeFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::FormatSizeFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::FormatSizeFlags flags)
  {
    g_value_set_flags (value, static_cast<::GFormatSizeFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::FormatSizeFlags flags)
  {
    set (value, flags);
  }

  static GLib::FormatSizeFlags
  cast_for_create (GLib::FormatSizeFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ FormatSizeFlags : std::underlying_type<::GFormatSizeFlags>::type
{
  DEFAULT = G_FORMAT_SIZE_DEFAULT,
  LONG_FORMAT = G_FORMAT_SIZE_LONG_FORMAT,
  IEC_UNITS = G_FORMAT_SIZE_IEC_UNITS,
  BITS = G_FORMAT_SIZE_BITS,
  ONLY_VALUE = G_FORMAT_SIZE_ONLY_VALUE,
  ONLY_UNIT = G_FORMAT_SIZE_ONLY_UNIT,
}; /* bitfield FormatSizeFlags */

static constexpr inline FormatSizeFlags
operator | (FormatSizeFlags lhs, FormatSizeFlags rhs)
{
  return FormatSizeFlags (static_cast<::GFormatSizeFlags> (lhs) | static_cast<::GFormatSizeFlags> (rhs));
}

static constexpr inline FormatSizeFlags
operator & (FormatSizeFlags lhs, FormatSizeFlags rhs)
{
  return FormatSizeFlags (static_cast<::GFormatSizeFlags> (lhs) & static_cast<::GFormatSizeFlags> (rhs));
}

static constexpr inline FormatSizeFlags
operator ^ (FormatSizeFlags lhs, FormatSizeFlags rhs)
{
  return FormatSizeFlags (static_cast<::GFormatSizeFlags> (lhs) ^ static_cast<::GFormatSizeFlags> (rhs));
}

static constexpr inline FormatSizeFlags
operator ~ (FormatSizeFlags lhs)
{
  return FormatSizeFlags (~static_cast<::GFormatSizeFlags> (lhs));
}

static inline FormatSizeFlags &
operator |= (FormatSizeFlags &lhs, FormatSizeFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline FormatSizeFlags &
operator &= (FormatSizeFlags &lhs, FormatSizeFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline FormatSizeFlags &
operator ^= (FormatSizeFlags &lhs, FormatSizeFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (FormatSizeFlags lhs)
{
  return !static_cast<::GFormatSizeFlags> (lhs);
}

static constexpr inline bool
operator + (FormatSizeFlags lhs)
{
  return !!static_cast<::GFormatSizeFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
