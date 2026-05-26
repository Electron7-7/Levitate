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
#include <peel/Gdk/Drag.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::Drag::Action>
{
  typedef Gdk::Drag::Action UnownedType;

  static Gdk::Drag::Action
  get (const ::GValue *value)
  {
    return static_cast<Gdk::Drag::Action> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gdk::Drag::Action flags)
  {
    g_value_set_flags (value, static_cast<::GdkDragAction> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::Drag::Action flags)
  {
    set (value, flags);
  }

  static Gdk::Drag::Action
  cast_for_create (Gdk::Drag::Action flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::Drag::Action> ()
{
  return gdk_drag_action_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::Drag::Action>
{
  Gdk::Drag::Action default_value;

  constexpr PspecTraits (Gdk::Drag::Action default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gdk_drag_action_get_type (),
                               static_cast<::GdkDragAction> (default_value),
                               basics.flags);
  }
};


namespace Gdk
{
enum class /* bitfield */ Drag::Action : std::underlying_type<::GdkDragAction>::type
{
  NONE = GDK_ACTION_NONE,
  COPY = GDK_ACTION_COPY,
  MOVE = GDK_ACTION_MOVE,
  LINK = GDK_ACTION_LINK,
  ASK = GDK_ACTION_ASK,
}; /* bitfield Drag::Action */

static constexpr inline Drag::Action
operator | (Drag::Action lhs, Drag::Action rhs)
{
  return Drag::Action (static_cast<::GdkDragAction> (lhs) | static_cast<::GdkDragAction> (rhs));
}

static constexpr inline Drag::Action
operator & (Drag::Action lhs, Drag::Action rhs)
{
  return Drag::Action (static_cast<::GdkDragAction> (lhs) & static_cast<::GdkDragAction> (rhs));
}

static constexpr inline Drag::Action
operator ^ (Drag::Action lhs, Drag::Action rhs)
{
  return Drag::Action (static_cast<::GdkDragAction> (lhs) ^ static_cast<::GdkDragAction> (rhs));
}

static constexpr inline Drag::Action
operator ~ (Drag::Action lhs)
{
  return Drag::Action (~static_cast<::GdkDragAction> (lhs));
}

static inline Drag::Action &
operator |= (Drag::Action &lhs, Drag::Action rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Drag::Action &
operator &= (Drag::Action &lhs, Drag::Action rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Drag::Action &
operator ^= (Drag::Action &lhs, Drag::Action rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Drag::Action lhs)
{
  return !static_cast<::GdkDragAction> (lhs);
}

static constexpr inline bool
operator + (Drag::Action lhs)
{
  return !!static_cast<::GdkDragAction> (lhs);
}

peel_no_warn_unused
static bool
drag_action_is_unique (Drag::Action action) noexcept
{
  ::GdkDragAction _peel_action = static_cast<::GdkDragAction> (action);
  gboolean _peel_return = gdk_drag_action_is_unique (_peel_action);
  return !!_peel_return;
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
