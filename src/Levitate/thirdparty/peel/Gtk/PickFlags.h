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
enum class PickFlags : std::underlying_type<::GtkPickFlags>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PickFlags>
{
  typedef Gtk::PickFlags UnownedType;

  static Gtk::PickFlags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PickFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::PickFlags flags)
  {
    g_value_set_flags (value, static_cast<::GtkPickFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PickFlags flags)
  {
    set (value, flags);
  }

  static Gtk::PickFlags
  cast_for_create (Gtk::PickFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PickFlags> ()
{
  return gtk_pick_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PickFlags>
{
  Gtk::PickFlags default_value;

  constexpr PspecTraits (Gtk::PickFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_pick_flags_get_type (),
                               static_cast<::GtkPickFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ PickFlags : std::underlying_type<::GtkPickFlags>::type
{
  DEFAULT = GTK_PICK_DEFAULT,
  INSENSITIVE = GTK_PICK_INSENSITIVE,
  NON_TARGETABLE = GTK_PICK_NON_TARGETABLE,
}; /* bitfield PickFlags */

static constexpr inline PickFlags
operator | (PickFlags lhs, PickFlags rhs)
{
  return PickFlags (static_cast<::GtkPickFlags> (lhs) | static_cast<::GtkPickFlags> (rhs));
}

static constexpr inline PickFlags
operator & (PickFlags lhs, PickFlags rhs)
{
  return PickFlags (static_cast<::GtkPickFlags> (lhs) & static_cast<::GtkPickFlags> (rhs));
}

static constexpr inline PickFlags
operator ^ (PickFlags lhs, PickFlags rhs)
{
  return PickFlags (static_cast<::GtkPickFlags> (lhs) ^ static_cast<::GtkPickFlags> (rhs));
}

static constexpr inline PickFlags
operator ~ (PickFlags lhs)
{
  return PickFlags (~static_cast<::GtkPickFlags> (lhs));
}

static inline PickFlags &
operator |= (PickFlags &lhs, PickFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline PickFlags &
operator &= (PickFlags &lhs, PickFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline PickFlags &
operator ^= (PickFlags &lhs, PickFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (PickFlags lhs)
{
  return !static_cast<::GtkPickFlags> (lhs);
}

static constexpr inline bool
operator + (PickFlags lhs)
{
  return !!static_cast<::GtkPickFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
