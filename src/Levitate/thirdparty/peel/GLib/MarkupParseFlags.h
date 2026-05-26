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
enum class MarkupParseFlags : std::underlying_type<::GMarkupParseFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::MarkupParseFlags>
{
  typedef GLib::MarkupParseFlags UnownedType;

  static GLib::MarkupParseFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::MarkupParseFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::MarkupParseFlags flags)
  {
    g_value_set_flags (value, static_cast<::GMarkupParseFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::MarkupParseFlags flags)
  {
    set (value, flags);
  }

  static GLib::MarkupParseFlags
  cast_for_create (GLib::MarkupParseFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ MarkupParseFlags : std::underlying_type<::GMarkupParseFlags>::type
{
  DEFAULT_FLAGS = G_MARKUP_DEFAULT_FLAGS,
  DO_NOT_USE_THIS_UNSUPPORTED_FLAG = G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG,
  TREAT_CDATA_AS_TEXT = G_MARKUP_TREAT_CDATA_AS_TEXT,
  PREFIX_ERROR_POSITION = G_MARKUP_PREFIX_ERROR_POSITION,
  IGNORE_QUALIFIED = G_MARKUP_IGNORE_QUALIFIED,
}; /* bitfield MarkupParseFlags */

static constexpr inline MarkupParseFlags
operator | (MarkupParseFlags lhs, MarkupParseFlags rhs)
{
  return MarkupParseFlags (static_cast<::GMarkupParseFlags> (lhs) | static_cast<::GMarkupParseFlags> (rhs));
}

static constexpr inline MarkupParseFlags
operator & (MarkupParseFlags lhs, MarkupParseFlags rhs)
{
  return MarkupParseFlags (static_cast<::GMarkupParseFlags> (lhs) & static_cast<::GMarkupParseFlags> (rhs));
}

static constexpr inline MarkupParseFlags
operator ^ (MarkupParseFlags lhs, MarkupParseFlags rhs)
{
  return MarkupParseFlags (static_cast<::GMarkupParseFlags> (lhs) ^ static_cast<::GMarkupParseFlags> (rhs));
}

static constexpr inline MarkupParseFlags
operator ~ (MarkupParseFlags lhs)
{
  return MarkupParseFlags (~static_cast<::GMarkupParseFlags> (lhs));
}

static inline MarkupParseFlags &
operator |= (MarkupParseFlags &lhs, MarkupParseFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline MarkupParseFlags &
operator &= (MarkupParseFlags &lhs, MarkupParseFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline MarkupParseFlags &
operator ^= (MarkupParseFlags &lhs, MarkupParseFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (MarkupParseFlags lhs)
{
  return !static_cast<::GMarkupParseFlags> (lhs);
}

static constexpr inline bool
operator + (MarkupParseFlags lhs)
{
  return !!static_cast<::GMarkupParseFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
