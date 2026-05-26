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
enum class UriHideFlags : std::underlying_type<::GUriHideFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::UriHideFlags>
{
  typedef GLib::UriHideFlags UnownedType;

  static GLib::UriHideFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::UriHideFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::UriHideFlags flags)
  {
    g_value_set_flags (value, static_cast<::GUriHideFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::UriHideFlags flags)
  {
    set (value, flags);
  }

  static GLib::UriHideFlags
  cast_for_create (GLib::UriHideFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ UriHideFlags : std::underlying_type<::GUriHideFlags>::type
{
  NONE = G_URI_HIDE_NONE,
  USERINFO = G_URI_HIDE_USERINFO,
  PASSWORD = G_URI_HIDE_PASSWORD,
  AUTH_PARAMS = G_URI_HIDE_AUTH_PARAMS,
  QUERY = G_URI_HIDE_QUERY,
  FRAGMENT = G_URI_HIDE_FRAGMENT,
}; /* bitfield UriHideFlags */

static constexpr inline UriHideFlags
operator | (UriHideFlags lhs, UriHideFlags rhs)
{
  return UriHideFlags (static_cast<::GUriHideFlags> (lhs) | static_cast<::GUriHideFlags> (rhs));
}

static constexpr inline UriHideFlags
operator & (UriHideFlags lhs, UriHideFlags rhs)
{
  return UriHideFlags (static_cast<::GUriHideFlags> (lhs) & static_cast<::GUriHideFlags> (rhs));
}

static constexpr inline UriHideFlags
operator ^ (UriHideFlags lhs, UriHideFlags rhs)
{
  return UriHideFlags (static_cast<::GUriHideFlags> (lhs) ^ static_cast<::GUriHideFlags> (rhs));
}

static constexpr inline UriHideFlags
operator ~ (UriHideFlags lhs)
{
  return UriHideFlags (~static_cast<::GUriHideFlags> (lhs));
}

static inline UriHideFlags &
operator |= (UriHideFlags &lhs, UriHideFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline UriHideFlags &
operator &= (UriHideFlags &lhs, UriHideFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline UriHideFlags &
operator ^= (UriHideFlags &lhs, UriHideFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (UriHideFlags lhs)
{
  return !static_cast<::GUriHideFlags> (lhs);
}

static constexpr inline bool
operator + (UriHideFlags lhs)
{
  return !!static_cast<::GUriHideFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
