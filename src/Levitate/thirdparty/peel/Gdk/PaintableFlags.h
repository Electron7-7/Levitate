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
#include <gdk/gdk.h>
#include <peel/Gdk/Paintable.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::Paintable::Flags>
{
  typedef Gdk::Paintable::Flags UnownedType;

  static Gdk::Paintable::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gdk::Paintable::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gdk::Paintable::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GdkPaintableFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::Paintable::Flags flags)
  {
    set (value, flags);
  }

  static Gdk::Paintable::Flags
  cast_for_create (Gdk::Paintable::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::Paintable::Flags> ()
{
  return gdk_paintable_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::Paintable::Flags>
{
  Gdk::Paintable::Flags default_value;

  constexpr PspecTraits (Gdk::Paintable::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gdk_paintable_flags_get_type (),
                               static_cast<::GdkPaintableFlags> (default_value),
                               basics.flags);
  }
};


namespace Gdk
{
enum class /* bitfield */ Paintable::Flags : std::underlying_type<::GdkPaintableFlags>::type
{
  STATIC_SIZE = GDK_PAINTABLE_STATIC_SIZE,
  STATIC_CONTENTS = GDK_PAINTABLE_STATIC_CONTENTS,
}; /* bitfield Paintable::Flags */

static constexpr inline Paintable::Flags
operator | (Paintable::Flags lhs, Paintable::Flags rhs)
{
  return Paintable::Flags (static_cast<::GdkPaintableFlags> (lhs) | static_cast<::GdkPaintableFlags> (rhs));
}

static constexpr inline Paintable::Flags
operator & (Paintable::Flags lhs, Paintable::Flags rhs)
{
  return Paintable::Flags (static_cast<::GdkPaintableFlags> (lhs) & static_cast<::GdkPaintableFlags> (rhs));
}

static constexpr inline Paintable::Flags
operator ^ (Paintable::Flags lhs, Paintable::Flags rhs)
{
  return Paintable::Flags (static_cast<::GdkPaintableFlags> (lhs) ^ static_cast<::GdkPaintableFlags> (rhs));
}

static constexpr inline Paintable::Flags
operator ~ (Paintable::Flags lhs)
{
  return Paintable::Flags (~static_cast<::GdkPaintableFlags> (lhs));
}

static inline Paintable::Flags &
operator |= (Paintable::Flags &lhs, Paintable::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Paintable::Flags &
operator &= (Paintable::Flags &lhs, Paintable::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Paintable::Flags &
operator ^= (Paintable::Flags &lhs, Paintable::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Paintable::Flags lhs)
{
  return !static_cast<::GdkPaintableFlags> (lhs);
}

static constexpr inline bool
operator + (Paintable::Flags lhs)
{
  return !!static_cast<::GdkPaintableFlags> (lhs);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
