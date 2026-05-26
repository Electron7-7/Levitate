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
enum class IOCondition : std::underlying_type<::GIOCondition>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::IOCondition>
{
  typedef GLib::IOCondition UnownedType;

  static GLib::IOCondition
  get (const ::GValue *value)
  {
    return static_cast<GLib::IOCondition> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::IOCondition flags)
  {
    g_value_set_flags (value, static_cast<::GIOCondition> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::IOCondition flags)
  {
    set (value, flags);
  }

  static GLib::IOCondition
  cast_for_create (GLib::IOCondition flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<GLib::IOCondition> ()
{
  return g_io_condition_get_type ();
}
template<>
struct peel::internals::PspecTraits<GLib::IOCondition>
{
  GLib::IOCondition default_value;

  constexpr PspecTraits (GLib::IOCondition default_value)
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


namespace GLib
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


} /* namespace GLib */
} /* namespace peel */

peel_end_header
