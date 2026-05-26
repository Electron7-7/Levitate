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
enum class ShowFlags : std::underlying_type<::PangoShowFlags>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::ShowFlags>
{
  typedef Pango::ShowFlags UnownedType;

  static Pango::ShowFlags
  get (const ::GValue *value)
  {
    return static_cast<Pango::ShowFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Pango::ShowFlags flags)
  {
    g_value_set_flags (value, static_cast<::PangoShowFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Pango::ShowFlags flags)
  {
    set (value, flags);
  }

  static Pango::ShowFlags
  cast_for_create (Pango::ShowFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::ShowFlags> ()
{
  return pango_show_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::ShowFlags>
{
  Pango::ShowFlags default_value;

  constexpr PspecTraits (Pango::ShowFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               pango_show_flags_get_type (),
                               static_cast<::PangoShowFlags> (default_value),
                               basics.flags);
  }
};


namespace Pango
{
enum class /* bitfield */ ShowFlags : std::underlying_type<::PangoShowFlags>::type
{
  NONE = PANGO_SHOW_NONE,
  SPACES = PANGO_SHOW_SPACES,
  LINE_BREAKS = PANGO_SHOW_LINE_BREAKS,
  IGNORABLES = PANGO_SHOW_IGNORABLES,
}; /* bitfield ShowFlags */

static constexpr inline ShowFlags
operator | (ShowFlags lhs, ShowFlags rhs)
{
  return ShowFlags (static_cast<::PangoShowFlags> (lhs) | static_cast<::PangoShowFlags> (rhs));
}

static constexpr inline ShowFlags
operator & (ShowFlags lhs, ShowFlags rhs)
{
  return ShowFlags (static_cast<::PangoShowFlags> (lhs) & static_cast<::PangoShowFlags> (rhs));
}

static constexpr inline ShowFlags
operator ^ (ShowFlags lhs, ShowFlags rhs)
{
  return ShowFlags (static_cast<::PangoShowFlags> (lhs) ^ static_cast<::PangoShowFlags> (rhs));
}

static constexpr inline ShowFlags
operator ~ (ShowFlags lhs)
{
  return ShowFlags (~static_cast<::PangoShowFlags> (lhs));
}

static inline ShowFlags &
operator |= (ShowFlags &lhs, ShowFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline ShowFlags &
operator &= (ShowFlags &lhs, ShowFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline ShowFlags &
operator ^= (ShowFlags &lhs, ShowFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (ShowFlags lhs)
{
  return !static_cast<::PangoShowFlags> (lhs);
}

static constexpr inline bool
operator + (ShowFlags lhs)
{
  return !!static_cast<::PangoShowFlags> (lhs);
}


} /* namespace Pango */
} /* namespace peel */

peel_end_header
