#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gsk/gsk.h>
#include <peel/Gsk/Path.h>

peel_begin_header

namespace peel
{
namespace Gsk
{
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::Path::ForeachFlags>
{
  typedef Gsk::Path::ForeachFlags UnownedType;

  static Gsk::Path::ForeachFlags
  get (const ::GValue *value)
  {
    return static_cast<Gsk::Path::ForeachFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gsk::Path::ForeachFlags flags)
  {
    g_value_set_flags (value, static_cast<::GskPathForeachFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::Path::ForeachFlags flags)
  {
    set (value, flags);
  }

  static Gsk::Path::ForeachFlags
  cast_for_create (Gsk::Path::ForeachFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::Path::ForeachFlags> ()
{
  return gsk_path_foreach_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::Path::ForeachFlags>
{
  Gsk::Path::ForeachFlags default_value;

  constexpr PspecTraits (Gsk::Path::ForeachFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gsk_path_foreach_flags_get_type (),
                               static_cast<::GskPathForeachFlags> (default_value),
                               basics.flags);
  }
};


namespace Gsk
{
enum class /* bitfield */ Path::ForeachFlags : std::underlying_type<::GskPathForeachFlags>::type
{
  ONLY_LINES = GSK_PATH_FOREACH_ALLOW_ONLY_LINES,
  QUAD = GSK_PATH_FOREACH_ALLOW_QUAD,
  CUBIC = GSK_PATH_FOREACH_ALLOW_CUBIC,
  CONIC = GSK_PATH_FOREACH_ALLOW_CONIC,
}; /* bitfield Path::ForeachFlags */

static constexpr inline Path::ForeachFlags
operator | (Path::ForeachFlags lhs, Path::ForeachFlags rhs)
{
  return Path::ForeachFlags (static_cast<::GskPathForeachFlags> (lhs) | static_cast<::GskPathForeachFlags> (rhs));
}

static constexpr inline Path::ForeachFlags
operator & (Path::ForeachFlags lhs, Path::ForeachFlags rhs)
{
  return Path::ForeachFlags (static_cast<::GskPathForeachFlags> (lhs) & static_cast<::GskPathForeachFlags> (rhs));
}

static constexpr inline Path::ForeachFlags
operator ^ (Path::ForeachFlags lhs, Path::ForeachFlags rhs)
{
  return Path::ForeachFlags (static_cast<::GskPathForeachFlags> (lhs) ^ static_cast<::GskPathForeachFlags> (rhs));
}

static constexpr inline Path::ForeachFlags
operator ~ (Path::ForeachFlags lhs)
{
  return Path::ForeachFlags (~static_cast<::GskPathForeachFlags> (lhs));
}

static inline Path::ForeachFlags &
operator |= (Path::ForeachFlags &lhs, Path::ForeachFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Path::ForeachFlags &
operator &= (Path::ForeachFlags &lhs, Path::ForeachFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Path::ForeachFlags &
operator ^= (Path::ForeachFlags &lhs, Path::ForeachFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Path::ForeachFlags lhs)
{
  return !static_cast<::GskPathForeachFlags> (lhs);
}

static constexpr inline bool
operator + (Path::ForeachFlags lhs)
{
  return !!static_cast<::GskPathForeachFlags> (lhs);
}


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
