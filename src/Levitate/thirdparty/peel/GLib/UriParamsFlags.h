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
enum class UriParamsFlags : std::underlying_type<::GUriParamsFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::UriParamsFlags>
{
  typedef GLib::UriParamsFlags UnownedType;

  static GLib::UriParamsFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::UriParamsFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::UriParamsFlags flags)
  {
    g_value_set_flags (value, static_cast<::GUriParamsFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::UriParamsFlags flags)
  {
    set (value, flags);
  }

  static GLib::UriParamsFlags
  cast_for_create (GLib::UriParamsFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ UriParamsFlags : std::underlying_type<::GUriParamsFlags>::type
{
  NONE = G_URI_PARAMS_NONE,
  CASE_INSENSITIVE = G_URI_PARAMS_CASE_INSENSITIVE,
  WWW_FORM = G_URI_PARAMS_WWW_FORM,
  PARSE_RELAXED = G_URI_PARAMS_PARSE_RELAXED,
}; /* bitfield UriParamsFlags */

static constexpr inline UriParamsFlags
operator | (UriParamsFlags lhs, UriParamsFlags rhs)
{
  return UriParamsFlags (static_cast<::GUriParamsFlags> (lhs) | static_cast<::GUriParamsFlags> (rhs));
}

static constexpr inline UriParamsFlags
operator & (UriParamsFlags lhs, UriParamsFlags rhs)
{
  return UriParamsFlags (static_cast<::GUriParamsFlags> (lhs) & static_cast<::GUriParamsFlags> (rhs));
}

static constexpr inline UriParamsFlags
operator ^ (UriParamsFlags lhs, UriParamsFlags rhs)
{
  return UriParamsFlags (static_cast<::GUriParamsFlags> (lhs) ^ static_cast<::GUriParamsFlags> (rhs));
}

static constexpr inline UriParamsFlags
operator ~ (UriParamsFlags lhs)
{
  return UriParamsFlags (~static_cast<::GUriParamsFlags> (lhs));
}

static inline UriParamsFlags &
operator |= (UriParamsFlags &lhs, UriParamsFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline UriParamsFlags &
operator &= (UriParamsFlags &lhs, UriParamsFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline UriParamsFlags &
operator ^= (UriParamsFlags &lhs, UriParamsFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (UriParamsFlags lhs)
{
  return !static_cast<::GUriParamsFlags> (lhs);
}

static constexpr inline bool
operator + (UriParamsFlags lhs)
{
  return !!static_cast<::GUriParamsFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
