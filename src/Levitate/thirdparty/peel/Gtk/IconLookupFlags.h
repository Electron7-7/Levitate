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
enum class IconLookupFlags : std::underlying_type<::GtkIconLookupFlags>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::IconLookupFlags>
{
  typedef Gtk::IconLookupFlags UnownedType;

  static Gtk::IconLookupFlags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::IconLookupFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::IconLookupFlags flags)
  {
    g_value_set_flags (value, static_cast<::GtkIconLookupFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::IconLookupFlags flags)
  {
    set (value, flags);
  }

  static Gtk::IconLookupFlags
  cast_for_create (Gtk::IconLookupFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::IconLookupFlags> ()
{
  return gtk_icon_lookup_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::IconLookupFlags>
{
  Gtk::IconLookupFlags default_value;

  constexpr PspecTraits (Gtk::IconLookupFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_icon_lookup_flags_get_type (),
                               static_cast<::GtkIconLookupFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ IconLookupFlags : std::underlying_type<::GtkIconLookupFlags>::type
{
  NONE = GTK_ICON_LOOKUP_NONE,
  FORCE_REGULAR = GTK_ICON_LOOKUP_FORCE_REGULAR,
  FORCE_SYMBOLIC = GTK_ICON_LOOKUP_FORCE_SYMBOLIC,
  PRELOAD = GTK_ICON_LOOKUP_PRELOAD,
}; /* bitfield IconLookupFlags */

static constexpr inline IconLookupFlags
operator | (IconLookupFlags lhs, IconLookupFlags rhs)
{
  return IconLookupFlags (static_cast<::GtkIconLookupFlags> (lhs) | static_cast<::GtkIconLookupFlags> (rhs));
}

static constexpr inline IconLookupFlags
operator & (IconLookupFlags lhs, IconLookupFlags rhs)
{
  return IconLookupFlags (static_cast<::GtkIconLookupFlags> (lhs) & static_cast<::GtkIconLookupFlags> (rhs));
}

static constexpr inline IconLookupFlags
operator ^ (IconLookupFlags lhs, IconLookupFlags rhs)
{
  return IconLookupFlags (static_cast<::GtkIconLookupFlags> (lhs) ^ static_cast<::GtkIconLookupFlags> (rhs));
}

static constexpr inline IconLookupFlags
operator ~ (IconLookupFlags lhs)
{
  return IconLookupFlags (~static_cast<::GtkIconLookupFlags> (lhs));
}

static inline IconLookupFlags &
operator |= (IconLookupFlags &lhs, IconLookupFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline IconLookupFlags &
operator &= (IconLookupFlags &lhs, IconLookupFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline IconLookupFlags &
operator ^= (IconLookupFlags &lhs, IconLookupFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (IconLookupFlags lhs)
{
  return !static_cast<::GtkIconLookupFlags> (lhs);
}

static constexpr inline bool
operator + (IconLookupFlags lhs)
{
  return !!static_cast<::GtkIconLookupFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
