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
enum class IOCondition : std::underlying_type<::GIOCondition>::type;
} /* namespace GObject */

template<>
struct GObject::Value::Traits<GObject::IOCondition>
{
  typedef GObject::IOCondition UnownedType;

  static GObject::IOCondition
  get (const ::GValue *value)
  {
    return static_cast<GObject::IOCondition> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GObject::IOCondition flags)
  {
    g_value_set_flags (value, static_cast<::GIOCondition> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GObject::IOCondition flags)
  {
    set (value, flags);
  }

  static GObject::IOCondition
  cast_for_create (GObject::IOCondition flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<GObject::IOCondition> ()
{
  return g_io_condition_get_type ();
}
template<>
struct peel::internals::PspecTraits<GObject::IOCondition>
{
  GObject::IOCondition default_value;

  constexpr PspecTraits (GObject::IOCondition default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_io_condition_get_type (),
                               static_cast<::GIOCondition> (default_value),
                               basics.flags);
  }
};


namespace GObject
{
enum class /* bitfield */ IOCondition : std::underlying_type<::GIOCondition>::type
{
  IN_ = G_IO_IN,
  OUT_ = G_IO_OUT,
  PRI = G_IO_PRI,
  ERR = G_IO_ERR,
  HUP = G_IO_HUP,
  NVAL = G_IO_NVAL,
}; /* bitfield IOCondition */

static constexpr inline IOCondition
operator | (IOCondition lhs, IOCondition rhs)
{
  return IOCondition (static_cast<::GIOCondition> (lhs) | static_cast<::GIOCondition> (rhs));
}

static constexpr inline IOCondition
operator & (IOCondition lhs, IOCondition rhs)
{
  return IOCondition (static_cast<::GIOCondition> (lhs) & static_cast<::GIOCondition> (rhs));
}

static constexpr inline IOCondition
operator ^ (IOCondition lhs, IOCondition rhs)
{
  return IOCondition (static_cast<::GIOCondition> (lhs) ^ static_cast<::GIOCondition> (rhs));
}

static constexpr inline IOCondition
operator ~ (IOCondition lhs)
{
  return IOCondition (~static_cast<::GIOCondition> (lhs));
}

static inline IOCondition &
operator |= (IOCondition &lhs, IOCondition rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline IOCondition &
operator &= (IOCondition &lhs, IOCondition rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline IOCondition &
operator ^= (IOCondition &lhs, IOCondition rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (IOCondition lhs)
{
  return !static_cast<::GIOCondition> (lhs);
}

static constexpr inline bool
operator + (IOCondition lhs)
{
  return !!static_cast<::GIOCondition> (lhs);
}


} /* namespace GObject */
} /* namespace peel */

peel_end_header
