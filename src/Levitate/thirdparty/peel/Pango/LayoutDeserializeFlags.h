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
#include <peel/Pango/Layout.h>

peel_begin_header

namespace peel
{
namespace Pango
{
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::Layout::DeserializeFlags>
{
  typedef Pango::Layout::DeserializeFlags UnownedType;

  static Pango::Layout::DeserializeFlags
  get (const ::GValue *value)
  {
    return static_cast<Pango::Layout::DeserializeFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Pango::Layout::DeserializeFlags flags)
  {
    g_value_set_flags (value, static_cast<::PangoLayoutDeserializeFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Pango::Layout::DeserializeFlags flags)
  {
    set (value, flags);
  }

  static Pango::Layout::DeserializeFlags
  cast_for_create (Pango::Layout::DeserializeFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::Layout::DeserializeFlags> ()
{
  return pango_layout_deserialize_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::Layout::DeserializeFlags>
{
  Pango::Layout::DeserializeFlags default_value;

  constexpr PspecTraits (Pango::Layout::DeserializeFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               pango_layout_deserialize_flags_get_type (),
                               static_cast<::PangoLayoutDeserializeFlags> (default_value),
                               basics.flags);
  }
};


namespace Pango
{
enum class /* bitfield */ Layout::DeserializeFlags : std::underlying_type<::PangoLayoutDeserializeFlags>::type
{
  DEFAULT = PANGO_LAYOUT_DESERIALIZE_DEFAULT,
  CONTEXT = PANGO_LAYOUT_DESERIALIZE_CONTEXT,
}; /* bitfield Layout::DeserializeFlags */

static constexpr inline Layout::DeserializeFlags
operator | (Layout::DeserializeFlags lhs, Layout::DeserializeFlags rhs)
{
  return Layout::DeserializeFlags (static_cast<::PangoLayoutDeserializeFlags> (lhs) | static_cast<::PangoLayoutDeserializeFlags> (rhs));
}

static constexpr inline Layout::DeserializeFlags
operator & (Layout::DeserializeFlags lhs, Layout::DeserializeFlags rhs)
{
  return Layout::DeserializeFlags (static_cast<::PangoLayoutDeserializeFlags> (lhs) & static_cast<::PangoLayoutDeserializeFlags> (rhs));
}

static constexpr inline Layout::DeserializeFlags
operator ^ (Layout::DeserializeFlags lhs, Layout::DeserializeFlags rhs)
{
  return Layout::DeserializeFlags (static_cast<::PangoLayoutDeserializeFlags> (lhs) ^ static_cast<::PangoLayoutDeserializeFlags> (rhs));
}

static constexpr inline Layout::DeserializeFlags
operator ~ (Layout::DeserializeFlags lhs)
{
  return Layout::DeserializeFlags (~static_cast<::PangoLayoutDeserializeFlags> (lhs));
}

static inline Layout::DeserializeFlags &
operator |= (Layout::DeserializeFlags &lhs, Layout::DeserializeFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Layout::DeserializeFlags &
operator &= (Layout::DeserializeFlags &lhs, Layout::DeserializeFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Layout::DeserializeFlags &
operator ^= (Layout::DeserializeFlags &lhs, Layout::DeserializeFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Layout::DeserializeFlags lhs)
{
  return !static_cast<::PangoLayoutDeserializeFlags> (lhs);
}

static constexpr inline bool
operator + (Layout::DeserializeFlags lhs)
{
  return !!static_cast<::PangoLayoutDeserializeFlags> (lhs);
}


} /* namespace Pango */
} /* namespace peel */

peel_end_header
