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
enum class UriFlags : std::underlying_type<::GUriFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::UriFlags>
{
  typedef GLib::UriFlags UnownedType;

  static GLib::UriFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::UriFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::UriFlags flags)
  {
    g_value_set_flags (value, static_cast<::GUriFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::UriFlags flags)
  {
    set (value, flags);
  }

  static GLib::UriFlags
  cast_for_create (GLib::UriFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ UriFlags : std::underlying_type<::GUriFlags>::type
{
  NONE = G_URI_FLAGS_NONE,
  PARSE_RELAXED = G_URI_FLAGS_PARSE_RELAXED,
  HAS_PASSWORD = G_URI_FLAGS_HAS_PASSWORD,
  HAS_AUTH_PARAMS = G_URI_FLAGS_HAS_AUTH_PARAMS,
  ENCODED = G_URI_FLAGS_ENCODED,
  NON_DNS = G_URI_FLAGS_NON_DNS,
  ENCODED_QUERY = G_URI_FLAGS_ENCODED_QUERY,
  ENCODED_PATH = G_URI_FLAGS_ENCODED_PATH,
  ENCODED_FRAGMENT = G_URI_FLAGS_ENCODED_FRAGMENT,
  SCHEME_NORMALIZE = G_URI_FLAGS_SCHEME_NORMALIZE,
}; /* bitfield UriFlags */

static constexpr inline UriFlags
operator | (UriFlags lhs, UriFlags rhs)
{
  return UriFlags (static_cast<::GUriFlags> (lhs) | static_cast<::GUriFlags> (rhs));
}

static constexpr inline UriFlags
operator & (UriFlags lhs, UriFlags rhs)
{
  return UriFlags (static_cast<::GUriFlags> (lhs) & static_cast<::GUriFlags> (rhs));
}

static constexpr inline UriFlags
operator ^ (UriFlags lhs, UriFlags rhs)
{
  return UriFlags (static_cast<::GUriFlags> (lhs) ^ static_cast<::GUriFlags> (rhs));
}

static constexpr inline UriFlags
operator ~ (UriFlags lhs)
{
  return UriFlags (~static_cast<::GUriFlags> (lhs));
}

static inline UriFlags &
operator |= (UriFlags &lhs, UriFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline UriFlags &
operator &= (UriFlags &lhs, UriFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline UriFlags &
operator ^= (UriFlags &lhs, UriFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (UriFlags lhs)
{
  return !static_cast<::GUriFlags> (lhs);
}

static constexpr inline bool
operator + (UriFlags lhs)
{
  return !!static_cast<::GUriFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
