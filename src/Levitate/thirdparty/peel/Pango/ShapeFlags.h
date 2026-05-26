#pragma once

/* Auto-generated, do not modify */
/* Package pango */

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
#include <pango/pango.h>

peel_begin_header

namespace peel
{
namespace Pango
{
enum class ShapeFlags : std::underlying_type<::PangoShapeFlags>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::ShapeFlags>
{
  typedef Pango::ShapeFlags UnownedType;

  static Pango::ShapeFlags
  get (const ::GValue *value)
  {
    return static_cast<Pango::ShapeFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Pango::ShapeFlags flags)
  {
    g_value_set_flags (value, static_cast<::PangoShapeFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Pango::ShapeFlags flags)
  {
    set (value, flags);
  }

  static Pango::ShapeFlags
  cast_for_create (Pango::ShapeFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::ShapeFlags> ()
{
  return pango_shape_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::ShapeFlags>
{
  Pango::ShapeFlags default_value;

  constexpr PspecTraits (Pango::ShapeFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               pango_shape_flags_get_type (),
                               static_cast<::PangoShapeFlags> (default_value),
                               basics.flags);
  }
};


namespace Pango
{
enum class /* bitfield */ ShapeFlags : std::underlying_type<::PangoShapeFlags>::type
{
  NONE = PANGO_SHAPE_NONE,
  ROUND_POSITIONS = PANGO_SHAPE_ROUND_POSITIONS,
}; /* bitfield ShapeFlags */

static constexpr inline ShapeFlags
operator | (ShapeFlags lhs, ShapeFlags rhs)
{
  return ShapeFlags (static_cast<::PangoShapeFlags> (lhs) | static_cast<::PangoShapeFlags> (rhs));
}

static constexpr inline ShapeFlags
operator & (ShapeFlags lhs, ShapeFlags rhs)
{
  return ShapeFlags (static_cast<::PangoShapeFlags> (lhs) & static_cast<::PangoShapeFlags> (rhs));
}

static constexpr inline ShapeFlags
operator ^ (ShapeFlags lhs, ShapeFlags rhs)
{
  return ShapeFlags (static_cast<::PangoShapeFlags> (lhs) ^ static_cast<::PangoShapeFlags> (rhs));
}

static constexpr inline ShapeFlags
operator ~ (ShapeFlags lhs)
{
  return ShapeFlags (~static_cast<::PangoShapeFlags> (lhs));
}

static inline ShapeFlags &
operator |= (ShapeFlags &lhs, ShapeFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline ShapeFlags &
operator &= (ShapeFlags &lhs, ShapeFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline ShapeFlags &
operator ^= (ShapeFlags &lhs, ShapeFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (ShapeFlags lhs)
{
  return !static_cast<::PangoShapeFlags> (lhs);
}

static constexpr inline bool
operator + (ShapeFlags lhs)
{
  return !!static_cast<::PangoShapeFlags> (lhs);
}


} /* namespace Pango */
} /* namespace peel */

peel_end_header
