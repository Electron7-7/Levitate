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
struct GObject::Value::Traits<Pango::Layout::SerializeFlags>
{
  typedef Pango::Layout::SerializeFlags UnownedType;

  static Pango::Layout::SerializeFlags
  get (const ::GValue *value)
  {
    return static_cast<Pango::Layout::SerializeFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Pango::Layout::SerializeFlags flags)
  {
    g_value_set_flags (value, static_cast<::PangoLayoutSerializeFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Pango::Layout::SerializeFlags flags)
  {
    set (value, flags);
  }

  static Pango::Layout::SerializeFlags
  cast_for_create (Pango::Layout::SerializeFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::Layout::SerializeFlags> ()
{
  return pango_layout_serialize_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::Layout::SerializeFlags>
{
  Pango::Layout::SerializeFlags default_value;

  constexpr PspecTraits (Pango::Layout::SerializeFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               pango_layout_serialize_flags_get_type (),
                               static_cast<::PangoLayoutSerializeFlags> (default_value),
                               basics.flags);
  }
};


namespace Pango
{
enum class /* bitfield */ Layout::SerializeFlags : std::underlying_type<::PangoLayoutSerializeFlags>::type
{
  DEFAULT = PANGO_LAYOUT_SERIALIZE_DEFAULT,
  CONTEXT = PANGO_LAYOUT_SERIALIZE_CONTEXT,
  OUTPUT = PANGO_LAYOUT_SERIALIZE_OUTPUT,
}; /* bitfield Layout::SerializeFlags */

static constexpr inline Layout::SerializeFlags
operator | (Layout::SerializeFlags lhs, Layout::SerializeFlags rhs)
{
  return Layout::SerializeFlags (static_cast<::PangoLayoutSerializeFlags> (lhs) | static_cast<::PangoLayoutSerializeFlags> (rhs));
}

static constexpr inline Layout::SerializeFlags
operator & (Layout::SerializeFlags lhs, Layout::SerializeFlags rhs)
{
  return Layout::SerializeFlags (static_cast<::PangoLayoutSerializeFlags> (lhs) & static_cast<::PangoLayoutSerializeFlags> (rhs));
}

static constexpr inline Layout::SerializeFlags
operator ^ (Layout::SerializeFlags lhs, Layout::SerializeFlags rhs)
{
  return Layout::SerializeFlags (static_cast<::PangoLayoutSerializeFlags> (lhs) ^ static_cast<::PangoLayoutSerializeFlags> (rhs));
}

static constexpr inline Layout::SerializeFlags
operator ~ (Layout::SerializeFlags lhs)
{
  return Layout::SerializeFlags (~static_cast<::PangoLayoutSerializeFlags> (lhs));
}

static inline Layout::SerializeFlags &
operator |= (Layout::SerializeFlags &lhs, Layout::SerializeFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Layout::SerializeFlags &
operator &= (Layout::SerializeFlags &lhs, Layout::SerializeFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Layout::SerializeFlags &
operator ^= (Layout::SerializeFlags &lhs, Layout::SerializeFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Layout::SerializeFlags lhs)
{
  return !static_cast<::PangoLayoutSerializeFlags> (lhs);
}

static constexpr inline bool
operator + (Layout::SerializeFlags lhs)
{
  return !!static_cast<::PangoLayoutSerializeFlags> (lhs);
}


} /* namespace Pango */
} /* namespace peel */

peel_end_header
