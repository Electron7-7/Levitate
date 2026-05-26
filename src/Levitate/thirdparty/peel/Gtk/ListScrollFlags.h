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
enum class ListScrollFlags : std::underlying_type<::GtkListScrollFlags>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::ListScrollFlags>
{
  typedef Gtk::ListScrollFlags UnownedType;

  static Gtk::ListScrollFlags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::ListScrollFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::ListScrollFlags flags)
  {
    g_value_set_flags (value, static_cast<::GtkListScrollFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::ListScrollFlags flags)
  {
    set (value, flags);
  }

  static Gtk::ListScrollFlags
  cast_for_create (Gtk::ListScrollFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::ListScrollFlags> ()
{
  return gtk_list_scroll_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::ListScrollFlags>
{
  Gtk::ListScrollFlags default_value;

  constexpr PspecTraits (Gtk::ListScrollFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_list_scroll_flags_get_type (),
                               static_cast<::GtkListScrollFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ ListScrollFlags : std::underlying_type<::GtkListScrollFlags>::type
{
  NONE = GTK_LIST_SCROLL_NONE,
  FOCUS = GTK_LIST_SCROLL_FOCUS,
  SELECT = GTK_LIST_SCROLL_SELECT,
}; /* bitfield ListScrollFlags */

static constexpr inline ListScrollFlags
operator | (ListScrollFlags lhs, ListScrollFlags rhs)
{
  return ListScrollFlags (static_cast<::GtkListScrollFlags> (lhs) | static_cast<::GtkListScrollFlags> (rhs));
}

static constexpr inline ListScrollFlags
operator & (ListScrollFlags lhs, ListScrollFlags rhs)
{
  return ListScrollFlags (static_cast<::GtkListScrollFlags> (lhs) & static_cast<::GtkListScrollFlags> (rhs));
}

static constexpr inline ListScrollFlags
operator ^ (ListScrollFlags lhs, ListScrollFlags rhs)
{
  return ListScrollFlags (static_cast<::GtkListScrollFlags> (lhs) ^ static_cast<::GtkListScrollFlags> (rhs));
}

static constexpr inline ListScrollFlags
operator ~ (ListScrollFlags lhs)
{
  return ListScrollFlags (~static_cast<::GtkListScrollFlags> (lhs));
}

static inline ListScrollFlags &
operator |= (ListScrollFlags &lhs, ListScrollFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline ListScrollFlags &
operator &= (ListScrollFlags &lhs, ListScrollFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline ListScrollFlags &
operator ^= (ListScrollFlags &lhs, ListScrollFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (ListScrollFlags lhs)
{
  return !static_cast<::GtkListScrollFlags> (lhs);
}

static constexpr inline bool
operator + (ListScrollFlags lhs)
{
  return !!static_cast<::GtkListScrollFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
