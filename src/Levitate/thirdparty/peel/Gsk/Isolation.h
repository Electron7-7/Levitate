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

peel_begin_header

namespace peel
{
namespace Gsk
{
enum class Isolation : std::underlying_type<::GskIsolation>::type;
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::Isolation>
{
  typedef Gsk::Isolation UnownedType;

  static Gsk::Isolation
  get (const ::GValue *value)
  {
    return static_cast<Gsk::Isolation> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gsk::Isolation flags)
  {
    g_value_set_flags (value, static_cast<::GskIsolation> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::Isolation flags)
  {
    set (value, flags);
  }

  static Gsk::Isolation
  cast_for_create (Gsk::Isolation flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::Isolation> ()
{
  return gsk_isolation_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::Isolation>
{
  Gsk::Isolation default_value;

  constexpr PspecTraits (Gsk::Isolation default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gsk_isolation_get_type (),
                               static_cast<::GskIsolation> (default_value),
                               basics.flags);
  }
};


namespace Gsk
{
enum class /* bitfield */ Isolation : std::underlying_type<::GskIsolation>::type
{
  NONE = GSK_ISOLATION_NONE,
  BACKGROUND = GSK_ISOLATION_BACKGROUND,
  COPY_PASTE = GSK_ISOLATION_COPY_PASTE,
  ALL = GSK_ISOLATION_ALL,
}; /* bitfield Isolation */

static constexpr inline Isolation
operator | (Isolation lhs, Isolation rhs)
{
  return Isolation (static_cast<::GskIsolation> (lhs) | static_cast<::GskIsolation> (rhs));
}

static constexpr inline Isolation
operator & (Isolation lhs, Isolation rhs)
{
  return Isolation (static_cast<::GskIsolation> (lhs) & static_cast<::GskIsolation> (rhs));
}

static constexpr inline Isolation
operator ^ (Isolation lhs, Isolation rhs)
{
  return Isolation (static_cast<::GskIsolation> (lhs) ^ static_cast<::GskIsolation> (rhs));
}

static constexpr inline Isolation
operator ~ (Isolation lhs)
{
  return Isolation (~static_cast<::GskIsolation> (lhs));
}

static inline Isolation &
operator |= (Isolation &lhs, Isolation rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Isolation &
operator &= (Isolation &lhs, Isolation rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Isolation &
operator ^= (Isolation &lhs, Isolation rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Isolation lhs)
{
  return !static_cast<::GskIsolation> (lhs);
}

static constexpr inline bool
operator + (Isolation lhs)
{
  return !!static_cast<::GskIsolation> (lhs);
}


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
