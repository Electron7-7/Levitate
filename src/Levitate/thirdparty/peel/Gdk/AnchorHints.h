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

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class AnchorHints : std::underlying_type<::GdkAnchorHints>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::AnchorHints>
{
  typedef Gdk::AnchorHints UnownedType;

  static Gdk::AnchorHints
  get (const ::GValue *value)
  {
    return static_cast<Gdk::AnchorHints> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gdk::AnchorHints flags)
  {
    g_value_set_flags (value, static_cast<::GdkAnchorHints> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::AnchorHints flags)
  {
    set (value, flags);
  }

  static Gdk::AnchorHints
  cast_for_create (Gdk::AnchorHints flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::AnchorHints> ()
{
  return gdk_anchor_hints_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::AnchorHints>
{
  Gdk::AnchorHints default_value;

  constexpr PspecTraits (Gdk::AnchorHints default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gdk_anchor_hints_get_type (),
                               static_cast<::GdkAnchorHints> (default_value),
                               basics.flags);
  }
};


namespace Gdk
{
enum class /* bitfield */ AnchorHints : std::underlying_type<::GdkAnchorHints>::type
{
  FLIP_X = GDK_ANCHOR_FLIP_X,
  FLIP_Y = GDK_ANCHOR_FLIP_Y,
  SLIDE_X = GDK_ANCHOR_SLIDE_X,
  SLIDE_Y = GDK_ANCHOR_SLIDE_Y,
  RESIZE_X = GDK_ANCHOR_RESIZE_X,
  RESIZE_Y = GDK_ANCHOR_RESIZE_Y,
  FLIP = GDK_ANCHOR_FLIP,
  SLIDE = GDK_ANCHOR_SLIDE,
  RESIZE = GDK_ANCHOR_RESIZE,
}; /* bitfield AnchorHints */

static constexpr inline AnchorHints
operator | (AnchorHints lhs, AnchorHints rhs)
{
  return AnchorHints (static_cast<::GdkAnchorHints> (lhs) | static_cast<::GdkAnchorHints> (rhs));
}

static constexpr inline AnchorHints
operator & (AnchorHints lhs, AnchorHints rhs)
{
  return AnchorHints (static_cast<::GdkAnchorHints> (lhs) & static_cast<::GdkAnchorHints> (rhs));
}

static constexpr inline AnchorHints
operator ^ (AnchorHints lhs, AnchorHints rhs)
{
  return AnchorHints (static_cast<::GdkAnchorHints> (lhs) ^ static_cast<::GdkAnchorHints> (rhs));
}

static constexpr inline AnchorHints
operator ~ (AnchorHints lhs)
{
  return AnchorHints (~static_cast<::GdkAnchorHints> (lhs));
}

static inline AnchorHints &
operator |= (AnchorHints &lhs, AnchorHints rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline AnchorHints &
operator &= (AnchorHints &lhs, AnchorHints rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline AnchorHints &
operator ^= (AnchorHints &lhs, AnchorHints rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (AnchorHints lhs)
{
  return !static_cast<::GdkAnchorHints> (lhs);
}

static constexpr inline bool
operator + (AnchorHints lhs)
{
  return !!static_cast<::GdkAnchorHints> (lhs);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
