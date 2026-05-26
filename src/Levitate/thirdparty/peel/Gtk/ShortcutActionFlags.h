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
#include <peel/Gtk/ShortcutAction.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::ShortcutAction::Flags>
{
  typedef Gtk::ShortcutAction::Flags UnownedType;

  static Gtk::ShortcutAction::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::ShortcutAction::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::ShortcutAction::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GtkShortcutActionFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::ShortcutAction::Flags flags)
  {
    set (value, flags);
  }

  static Gtk::ShortcutAction::Flags
  cast_for_create (Gtk::ShortcutAction::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::ShortcutAction::Flags> ()
{
  return gtk_shortcut_action_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::ShortcutAction::Flags>
{
  Gtk::ShortcutAction::Flags default_value;

  constexpr PspecTraits (Gtk::ShortcutAction::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_shortcut_action_flags_get_type (),
                               static_cast<::GtkShortcutActionFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ ShortcutAction::Flags : std::underlying_type<::GtkShortcutActionFlags>::type
{
  EXCLUSIVE = GTK_SHORTCUT_ACTION_EXCLUSIVE,
}; /* bitfield ShortcutAction::Flags */

static constexpr inline ShortcutAction::Flags
operator | (ShortcutAction::Flags lhs, ShortcutAction::Flags rhs)
{
  return ShortcutAction::Flags (static_cast<::GtkShortcutActionFlags> (lhs) | static_cast<::GtkShortcutActionFlags> (rhs));
}

static constexpr inline ShortcutAction::Flags
operator & (ShortcutAction::Flags lhs, ShortcutAction::Flags rhs)
{
  return ShortcutAction::Flags (static_cast<::GtkShortcutActionFlags> (lhs) & static_cast<::GtkShortcutActionFlags> (rhs));
}

static constexpr inline ShortcutAction::Flags
operator ^ (ShortcutAction::Flags lhs, ShortcutAction::Flags rhs)
{
  return ShortcutAction::Flags (static_cast<::GtkShortcutActionFlags> (lhs) ^ static_cast<::GtkShortcutActionFlags> (rhs));
}

static constexpr inline ShortcutAction::Flags
operator ~ (ShortcutAction::Flags lhs)
{
  return ShortcutAction::Flags (~static_cast<::GtkShortcutActionFlags> (lhs));
}

static inline ShortcutAction::Flags &
operator |= (ShortcutAction::Flags &lhs, ShortcutAction::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline ShortcutAction::Flags &
operator &= (ShortcutAction::Flags &lhs, ShortcutAction::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline ShortcutAction::Flags &
operator ^= (ShortcutAction::Flags &lhs, ShortcutAction::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (ShortcutAction::Flags lhs)
{
  return !static_cast<::GtkShortcutActionFlags> (lhs);
}

static constexpr inline bool
operator + (ShortcutAction::Flags lhs)
{
  return !!static_cast<::GtkShortcutActionFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
