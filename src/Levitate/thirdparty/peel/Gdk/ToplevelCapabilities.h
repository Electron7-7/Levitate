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
struct GObject::Value::Traits<Gdk::Toplevel::Capabilities>
{
  typedef Gdk::Toplevel::Capabilities UnownedType;

  static Gdk::Toplevel::Capabilities
  get (const ::GValue *value)
  {
    return static_cast<Gdk::Toplevel::Capabilities> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gdk::Toplevel::Capabilities flags)
  {
    g_value_set_flags (value, static_cast<::GdkToplevelCapabilities> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::Toplevel::Capabilities flags)
  {
    set (value, flags);
  }

  static Gdk::Toplevel::Capabilities
  cast_for_create (Gdk::Toplevel::Capabilities flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::Toplevel::Capabilities> ()
{
  return gdk_toplevel_capabilities_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::Toplevel::Capabilities>
{
  Gdk::Toplevel::Capabilities default_value;

  constexpr PspecTraits (Gdk::Toplevel::Capabilities default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gdk_toplevel_capabilities_get_type (),
                               static_cast<::GdkToplevelCapabilities> (default_value),
                               basics.flags);
  }
};


namespace Gdk
{
enum class /* bitfield */ Toplevel::Capabilities : std::underlying_type<::GdkToplevelCapabilities>::type
{
  EDGE_CONSTRAINTS = GDK_TOPLEVEL_CAPABILITIES_EDGE_CONSTRAINTS,
  INHIBIT_SHORTCUTS = GDK_TOPLEVEL_CAPABILITIES_INHIBIT_SHORTCUTS,
  TITLEBAR_GESTURES = GDK_TOPLEVEL_CAPABILITIES_TITLEBAR_GESTURES,
  WINDOW_MENU = GDK_TOPLEVEL_CAPABILITIES_WINDOW_MENU,
  MAXIMIZE = GDK_TOPLEVEL_CAPABILITIES_MAXIMIZE,
  FULLSCREEN = GDK_TOPLEVEL_CAPABILITIES_FULLSCREEN,
  MINIMIZE = GDK_TOPLEVEL_CAPABILITIES_MINIMIZE,
  LOWER = GDK_TOPLEVEL_CAPABILITIES_LOWER,
}; /* bitfield Toplevel::Capabilities */

static constexpr inline Toplevel::Capabilities
operator | (Toplevel::Capabilities lhs, Toplevel::Capabilities rhs)
{
  return Toplevel::Capabilities (static_cast<::GdkToplevelCapabilities> (lhs) | static_cast<::GdkToplevelCapabilities> (rhs));
}

static constexpr inline Toplevel::Capabilities
operator & (Toplevel::Capabilities lhs, Toplevel::Capabilities rhs)
{
  return Toplevel::Capabilities (static_cast<::GdkToplevelCapabilities> (lhs) & static_cast<::GdkToplevelCapabilities> (rhs));
}

static constexpr inline Toplevel::Capabilities
operator ^ (Toplevel::Capabilities lhs, Toplevel::Capabilities rhs)
{
  return Toplevel::Capabilities (static_cast<::GdkToplevelCapabilities> (lhs) ^ static_cast<::GdkToplevelCapabilities> (rhs));
}

static constexpr inline Toplevel::Capabilities
operator ~ (Toplevel::Capabilities lhs)
{
  return Toplevel::Capabilities (~static_cast<::GdkToplevelCapabilities> (lhs));
}

static inline Toplevel::Capabilities &
operator |= (Toplevel::Capabilities &lhs, Toplevel::Capabilities rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Toplevel::Capabilities &
operator &= (Toplevel::Capabilities &lhs, Toplevel::Capabilities rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Toplevel::Capabilities &
operator ^= (Toplevel::Capabilities &lhs, Toplevel::Capabilities rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Toplevel::Capabilities lhs)
{
  return !static_cast<::GdkToplevelCapabilities> (lhs);
}

static constexpr inline bool
operator + (Toplevel::Capabilities lhs)
{
  return !!static_cast<::GdkToplevelCapabilities> (lhs);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
