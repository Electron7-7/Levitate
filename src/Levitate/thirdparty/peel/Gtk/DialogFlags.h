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
#include <peel/Gtk/Dialog.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Dialog::Flags>
{
  typedef Gtk::Dialog::Flags UnownedType;

  static Gtk::Dialog::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Dialog::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::Dialog::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GtkDialogFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Dialog::Flags flags)
  {
    set (value, flags);
  }

  static Gtk::Dialog::Flags
  cast_for_create (Gtk::Dialog::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Dialog::Flags> ()
{
  return gtk_dialog_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Dialog::Flags>
{
  Gtk::Dialog::Flags default_value;

  constexpr PspecTraits (Gtk::Dialog::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_dialog_flags_get_type (),
                               static_cast<::GtkDialogFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ Dialog::Flags : std::underlying_type<::GtkDialogFlags>::type
{
  MODAL = GTK_DIALOG_MODAL,
  DESTROY_WITH_PARENT = GTK_DIALOG_DESTROY_WITH_PARENT,
  USE_HEADER_BAR = GTK_DIALOG_USE_HEADER_BAR,
}; /* bitfield Dialog::Flags */

static constexpr inline Dialog::Flags
operator | (Dialog::Flags lhs, Dialog::Flags rhs)
{
  return Dialog::Flags (static_cast<::GtkDialogFlags> (lhs) | static_cast<::GtkDialogFlags> (rhs));
}

static constexpr inline Dialog::Flags
operator & (Dialog::Flags lhs, Dialog::Flags rhs)
{
  return Dialog::Flags (static_cast<::GtkDialogFlags> (lhs) & static_cast<::GtkDialogFlags> (rhs));
}

static constexpr inline Dialog::Flags
operator ^ (Dialog::Flags lhs, Dialog::Flags rhs)
{
  return Dialog::Flags (static_cast<::GtkDialogFlags> (lhs) ^ static_cast<::GtkDialogFlags> (rhs));
}

static constexpr inline Dialog::Flags
operator ~ (Dialog::Flags lhs)
{
  return Dialog::Flags (~static_cast<::GtkDialogFlags> (lhs));
}

static inline Dialog::Flags &
operator |= (Dialog::Flags &lhs, Dialog::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Dialog::Flags &
operator &= (Dialog::Flags &lhs, Dialog::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Dialog::Flags &
operator ^= (Dialog::Flags &lhs, Dialog::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Dialog::Flags lhs)
{
  return !static_cast<::GtkDialogFlags> (lhs);
}

static constexpr inline bool
operator + (Dialog::Flags lhs)
{
  return !!static_cast<::GtkDialogFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
