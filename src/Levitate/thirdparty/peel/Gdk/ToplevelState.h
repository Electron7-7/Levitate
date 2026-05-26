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
#include <peel/Gdk/Toplevel.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::Toplevel::State>
{
  typedef Gdk::Toplevel::State UnownedType;

  static Gdk::Toplevel::State
  get (const ::GValue *value)
  {
    return static_cast<Gdk::Toplevel::State> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gdk::Toplevel::State flags)
  {
    g_value_set_flags (value, static_cast<::GdkToplevelState> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::Toplevel::State flags)
  {
    set (value, flags);
  }

  static Gdk::Toplevel::State
  cast_for_create (Gdk::Toplevel::State flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::Toplevel::State> ()
{
  return gdk_toplevel_state_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::Toplevel::State>
{
  Gdk::Toplevel::State default_value;

  constexpr PspecTraits (Gdk::Toplevel::State default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gdk_toplevel_state_get_type (),
                               static_cast<::GdkToplevelState> (default_value),
                               basics.flags);
  }
};


namespace Gdk
{
enum class /* bitfield */ Toplevel::State : std::underlying_type<::GdkToplevelState>::type
{
  MINIMIZED = GDK_TOPLEVEL_STATE_MINIMIZED,
  MAXIMIZED = GDK_TOPLEVEL_STATE_MAXIMIZED,
  STICKY = GDK_TOPLEVEL_STATE_STICKY,
  FULLSCREEN = GDK_TOPLEVEL_STATE_FULLSCREEN,
  ABOVE = GDK_TOPLEVEL_STATE_ABOVE,
  BELOW = GDK_TOPLEVEL_STATE_BELOW,
  FOCUSED = GDK_TOPLEVEL_STATE_FOCUSED,
  TILED = GDK_TOPLEVEL_STATE_TILED,
  TOP_TILED = GDK_TOPLEVEL_STATE_TOP_TILED,
  TOP_RESIZABLE = GDK_TOPLEVEL_STATE_TOP_RESIZABLE,
  RIGHT_TILED = GDK_TOPLEVEL_STATE_RIGHT_TILED,
  RIGHT_RESIZABLE = GDK_TOPLEVEL_STATE_RIGHT_RESIZABLE,
  BOTTOM_TILED = GDK_TOPLEVEL_STATE_BOTTOM_TILED,
  BOTTOM_RESIZABLE = GDK_TOPLEVEL_STATE_BOTTOM_RESIZABLE,
  LEFT_TILED = GDK_TOPLEVEL_STATE_LEFT_TILED,
  LEFT_RESIZABLE = GDK_TOPLEVEL_STATE_LEFT_RESIZABLE,
  SUSPENDED = GDK_TOPLEVEL_STATE_SUSPENDED,
}; /* bitfield Toplevel::State */

static constexpr inline Toplevel::State
operator | (Toplevel::State lhs, Toplevel::State rhs)
{
  return Toplevel::State (static_cast<::GdkToplevelState> (lhs) | static_cast<::GdkToplevelState> (rhs));
}

static constexpr inline Toplevel::State
operator & (Toplevel::State lhs, Toplevel::State rhs)
{
  return Toplevel::State (static_cast<::GdkToplevelState> (lhs) & static_cast<::GdkToplevelState> (rhs));
}

static constexpr inline Toplevel::State
operator ^ (Toplevel::State lhs, Toplevel::State rhs)
{
  return Toplevel::State (static_cast<::GdkToplevelState> (lhs) ^ static_cast<::GdkToplevelState> (rhs));
}

static constexpr inline Toplevel::State
operator ~ (Toplevel::State lhs)
{
  return Toplevel::State (~static_cast<::GdkToplevelState> (lhs));
}

static inline Toplevel::State &
operator |= (Toplevel::State &lhs, Toplevel::State rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Toplevel::State &
operator &= (Toplevel::State &lhs, Toplevel::State rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Toplevel::State &
operator ^= (Toplevel::State &lhs, Toplevel::State rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Toplevel::State lhs)
{
  return !static_cast<::GdkToplevelState> (lhs);
}

static constexpr inline bool
operator + (Toplevel::State lhs)
{
  return !!static_cast<::GdkToplevelState> (lhs);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
