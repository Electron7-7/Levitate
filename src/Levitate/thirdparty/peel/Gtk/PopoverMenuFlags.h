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
#include <peel/Gtk/PopoverMenu.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PopoverMenu::Flags>
{
  typedef Gtk::PopoverMenu::Flags UnownedType;

  static Gtk::PopoverMenu::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PopoverMenu::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::PopoverMenu::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GtkPopoverMenuFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PopoverMenu::Flags flags)
  {
    set (value, flags);
  }

  static Gtk::PopoverMenu::Flags
  cast_for_create (Gtk::PopoverMenu::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PopoverMenu::Flags> ()
{
  return gtk_popover_menu_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PopoverMenu::Flags>
{
  Gtk::PopoverMenu::Flags default_value;

  constexpr PspecTraits (Gtk::PopoverMenu::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_popover_menu_flags_get_type (),
                               static_cast<::GtkPopoverMenuFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ PopoverMenu::Flags : std::underlying_type<::GtkPopoverMenuFlags>::type
{
  SLIDING = GTK_POPOVER_MENU_SLIDING,
  NESTED = GTK_POPOVER_MENU_NESTED,
}; /* bitfield PopoverMenu::Flags */

static constexpr inline PopoverMenu::Flags
operator | (PopoverMenu::Flags lhs, PopoverMenu::Flags rhs)
{
  return PopoverMenu::Flags (static_cast<::GtkPopoverMenuFlags> (lhs) | static_cast<::GtkPopoverMenuFlags> (rhs));
}

static constexpr inline PopoverMenu::Flags
operator & (PopoverMenu::Flags lhs, PopoverMenu::Flags rhs)
{
  return PopoverMenu::Flags (static_cast<::GtkPopoverMenuFlags> (lhs) & static_cast<::GtkPopoverMenuFlags> (rhs));
}

static constexpr inline PopoverMenu::Flags
operator ^ (PopoverMenu::Flags lhs, PopoverMenu::Flags rhs)
{
  return PopoverMenu::Flags (static_cast<::GtkPopoverMenuFlags> (lhs) ^ static_cast<::GtkPopoverMenuFlags> (rhs));
}

static constexpr inline PopoverMenu::Flags
operator ~ (PopoverMenu::Flags lhs)
{
  return PopoverMenu::Flags (~static_cast<::GtkPopoverMenuFlags> (lhs));
}

static inline PopoverMenu::Flags &
operator |= (PopoverMenu::Flags &lhs, PopoverMenu::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline PopoverMenu::Flags &
operator &= (PopoverMenu::Flags &lhs, PopoverMenu::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline PopoverMenu::Flags &
operator ^= (PopoverMenu::Flags &lhs, PopoverMenu::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (PopoverMenu::Flags lhs)
{
  return !static_cast<::GtkPopoverMenuFlags> (lhs);
}

static constexpr inline bool
operator + (PopoverMenu::Flags lhs)
{
  return !!static_cast<::GtkPopoverMenuFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
