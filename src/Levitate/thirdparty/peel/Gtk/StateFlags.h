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
#include <gtk/gtk.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class StateFlags : std::underlying_type<::GtkStateFlags>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::StateFlags>
{
  typedef Gtk::StateFlags UnownedType;

  static Gtk::StateFlags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::StateFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::StateFlags flags)
  {
    g_value_set_flags (value, static_cast<::GtkStateFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::StateFlags flags)
  {
    set (value, flags);
  }

  static Gtk::StateFlags
  cast_for_create (Gtk::StateFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::StateFlags> ()
{
  return gtk_state_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::StateFlags>
{
  Gtk::StateFlags default_value;

  constexpr PspecTraits (Gtk::StateFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_state_flags_get_type (),
                               static_cast<::GtkStateFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ StateFlags : std::underlying_type<::GtkStateFlags>::type
{
  NORMAL = GTK_STATE_FLAG_NORMAL,
  ACTIVE = GTK_STATE_FLAG_ACTIVE,
  PRELIGHT = GTK_STATE_FLAG_PRELIGHT,
  SELECTED = GTK_STATE_FLAG_SELECTED,
  INSENSITIVE = GTK_STATE_FLAG_INSENSITIVE,
  INCONSISTENT = GTK_STATE_FLAG_INCONSISTENT,
  FOCUSED = GTK_STATE_FLAG_FOCUSED,
  BACKDROP = GTK_STATE_FLAG_BACKDROP,
  DIR_LTR = GTK_STATE_FLAG_DIR_LTR,
  DIR_RTL = GTK_STATE_FLAG_DIR_RTL,
  LINK = GTK_STATE_FLAG_LINK,
  VISITED = GTK_STATE_FLAG_VISITED,
  CHECKED = GTK_STATE_FLAG_CHECKED,
  DROP_ACTIVE = GTK_STATE_FLAG_DROP_ACTIVE,
  FOCUS_VISIBLE = GTK_STATE_FLAG_FOCUS_VISIBLE,
  FOCUS_WITHIN = GTK_STATE_FLAG_FOCUS_WITHIN,
}; /* bitfield StateFlags */

static constexpr inline StateFlags
operator | (StateFlags lhs, StateFlags rhs)
{
  return StateFlags (static_cast<::GtkStateFlags> (lhs) | static_cast<::GtkStateFlags> (rhs));
}

static constexpr inline StateFlags
operator & (StateFlags lhs, StateFlags rhs)
{
  return StateFlags (static_cast<::GtkStateFlags> (lhs) & static_cast<::GtkStateFlags> (rhs));
}

static constexpr inline StateFlags
operator ^ (StateFlags lhs, StateFlags rhs)
{
  return StateFlags (static_cast<::GtkStateFlags> (lhs) ^ static_cast<::GtkStateFlags> (rhs));
}

static constexpr inline StateFlags
operator ~ (StateFlags lhs)
{
  return StateFlags (~static_cast<::GtkStateFlags> (lhs));
}

static inline StateFlags &
operator |= (StateFlags &lhs, StateFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline StateFlags &
operator &= (StateFlags &lhs, StateFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline StateFlags &
operator ^= (StateFlags &lhs, StateFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (StateFlags lhs)
{
  return !static_cast<::GtkStateFlags> (lhs);
}

static constexpr inline bool
operator + (StateFlags lhs)
{
  return !!static_cast<::GtkStateFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
