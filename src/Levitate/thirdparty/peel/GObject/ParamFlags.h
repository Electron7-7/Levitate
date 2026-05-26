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
enum class ParamFlags : std::underlying_type<::GParamFlags>::type;
} /* namespace GObject */

template<>
struct GObject::Value::Traits<GObject::ParamFlags>
{
  typedef GObject::ParamFlags UnownedType;

  static GObject::ParamFlags
  get (const ::GValue *value)
  {
    return static_cast<GObject::ParamFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GObject::ParamFlags flags)
  {
    g_value_set_flags (value, static_cast<::GParamFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GObject::ParamFlags flags)
  {
    set (value, flags);
  }

  static GObject::ParamFlags
  cast_for_create (GObject::ParamFlags flags) noexcept
  {
    return flags;
  }
};


namespace GObject
{
enum class /* bitfield */ ParamFlags : std::underlying_type<::GParamFlags>::type
{
  READABLE = G_PARAM_READABLE,
  WRITABLE = G_PARAM_WRITABLE,
  READWRITE = G_PARAM_READWRITE,
  CONSTRUCT = G_PARAM_CONSTRUCT,
  CONSTRUCT_ONLY = G_PARAM_CONSTRUCT_ONLY,
  LAX_VALIDATION = G_PARAM_LAX_VALIDATION,
  STATIC_NAME = G_PARAM_STATIC_NAME,
  PRIVATE = G_PARAM_PRIVATE,
  STATIC_NICK = G_PARAM_STATIC_NICK,
  STATIC_BLURB = G_PARAM_STATIC_BLURB,
  EXPLICIT_NOTIFY = G_PARAM_EXPLICIT_NOTIFY,
  DEPRECATED = G_PARAM_DEPRECATED,
}; /* bitfield ParamFlags */

static constexpr inline ParamFlags
operator | (ParamFlags lhs, ParamFlags rhs)
{
  return ParamFlags (static_cast<::GParamFlags> (lhs) | static_cast<::GParamFlags> (rhs));
}

static constexpr inline ParamFlags
operator & (ParamFlags lhs, ParamFlags rhs)
{
  return ParamFlags (static_cast<::GParamFlags> (lhs) & static_cast<::GParamFlags> (rhs));
}

static constexpr inline ParamFlags
operator ^ (ParamFlags lhs, ParamFlags rhs)
{
  return ParamFlags (static_cast<::GParamFlags> (lhs) ^ static_cast<::GParamFlags> (rhs));
}

static constexpr inline ParamFlags
operator ~ (ParamFlags lhs)
{
  return ParamFlags (~static_cast<::GParamFlags> (lhs));
}

static inline ParamFlags &
operator |= (ParamFlags &lhs, ParamFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline ParamFlags &
operator &= (ParamFlags &lhs, ParamFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline ParamFlags &
operator ^= (ParamFlags &lhs, ParamFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (ParamFlags lhs)
{
  return !static_cast<::GParamFlags> (lhs);
}

static constexpr inline bool
operator + (ParamFlags lhs)
{
  return !!static_cast<::GParamFlags> (lhs);
}


} /* namespace GObject */
} /* namespace peel */

peel_end_header
