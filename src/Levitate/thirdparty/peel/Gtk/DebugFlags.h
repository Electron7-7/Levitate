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
enum class DebugFlags : std::underlying_type<::GtkDebugFlags>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::DebugFlags>
{
  typedef Gtk::DebugFlags UnownedType;

  static Gtk::DebugFlags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::DebugFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::DebugFlags flags)
  {
    g_value_set_flags (value, static_cast<::GtkDebugFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::DebugFlags flags)
  {
    set (value, flags);
  }

  static Gtk::DebugFlags
  cast_for_create (Gtk::DebugFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::DebugFlags> ()
{
  return gtk_debug_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::DebugFlags>
{
  Gtk::DebugFlags default_value;

  constexpr PspecTraits (Gtk::DebugFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_debug_flags_get_type (),
                               static_cast<::GtkDebugFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ DebugFlags : std::underlying_type<::GtkDebugFlags>::type
{
  TEXT = GTK_DEBUG_TEXT,
  TREE = GTK_DEBUG_TREE,
  KEYBINDINGS = GTK_DEBUG_KEYBINDINGS,
  MODULES = GTK_DEBUG_MODULES,
  GEOMETRY = GTK_DEBUG_GEOMETRY,
  ICONTHEME = GTK_DEBUG_ICONTHEME,
  PRINTING = GTK_DEBUG_PRINTING,
  BUILDER_TRACE = GTK_DEBUG_BUILDER_TRACE,
  SIZE_REQUEST = GTK_DEBUG_SIZE_REQUEST,
  NO_CSS_CACHE = GTK_DEBUG_NO_CSS_CACHE,
  INTERACTIVE = GTK_DEBUG_INTERACTIVE,
  TOUCHSCREEN = GTK_DEBUG_TOUCHSCREEN,
  ACTIONS = GTK_DEBUG_ACTIONS,
  LAYOUT = GTK_DEBUG_LAYOUT,
  SNAPSHOT = GTK_DEBUG_SNAPSHOT,
  CONSTRAINTS = GTK_DEBUG_CONSTRAINTS,
  BUILDER_OBJECTS = GTK_DEBUG_BUILDER_OBJECTS,
  A11Y = GTK_DEBUG_A11Y,
  ICONFALLBACK = GTK_DEBUG_ICONFALLBACK,
  INVERT_TEXT_DIR = GTK_DEBUG_INVERT_TEXT_DIR,
  CSS = GTK_DEBUG_CSS,
  BUILDER = GTK_DEBUG_BUILDER,
  SESSION = GTK_DEBUG_SESSION,
}; /* bitfield DebugFlags */

static constexpr inline DebugFlags
operator | (DebugFlags lhs, DebugFlags rhs)
{
  return DebugFlags (static_cast<::GtkDebugFlags> (lhs) | static_cast<::GtkDebugFlags> (rhs));
}

static constexpr inline DebugFlags
operator & (DebugFlags lhs, DebugFlags rhs)
{
  return DebugFlags (static_cast<::GtkDebugFlags> (lhs) & static_cast<::GtkDebugFlags> (rhs));
}

static constexpr inline DebugFlags
operator ^ (DebugFlags lhs, DebugFlags rhs)
{
  return DebugFlags (static_cast<::GtkDebugFlags> (lhs) ^ static_cast<::GtkDebugFlags> (rhs));
}

static constexpr inline DebugFlags
operator ~ (DebugFlags lhs)
{
  return DebugFlags (~static_cast<::GtkDebugFlags> (lhs));
}

static inline DebugFlags &
operator |= (DebugFlags &lhs, DebugFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DebugFlags &
operator &= (DebugFlags &lhs, DebugFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DebugFlags &
operator ^= (DebugFlags &lhs, DebugFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DebugFlags lhs)
{
  return !static_cast<::GtkDebugFlags> (lhs);
}

static constexpr inline bool
operator + (DebugFlags lhs)
{
  return !!static_cast<::GtkDebugFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
