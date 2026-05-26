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
#include <peel/Gtk/StyleContext.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::StyleContext::PrintFlags>
{
  typedef Gtk::StyleContext::PrintFlags UnownedType;

  static Gtk::StyleContext::PrintFlags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::StyleContext::PrintFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::StyleContext::PrintFlags flags)
  {
    g_value_set_flags (value, static_cast<::GtkStyleContextPrintFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::StyleContext::PrintFlags flags)
  {
    set (value, flags);
  }

  static Gtk::StyleContext::PrintFlags
  cast_for_create (Gtk::StyleContext::PrintFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::StyleContext::PrintFlags> ()
{
  return gtk_style_context_print_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::StyleContext::PrintFlags>
{
  Gtk::StyleContext::PrintFlags default_value;

  constexpr PspecTraits (Gtk::StyleContext::PrintFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_style_context_print_flags_get_type (),
                               static_cast<::GtkStyleContextPrintFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ StyleContext::PrintFlags : std::underlying_type<::GtkStyleContextPrintFlags>::type
{
  NONE = GTK_STYLE_CONTEXT_PRINT_NONE,
  RECURSE = GTK_STYLE_CONTEXT_PRINT_RECURSE,
  SHOW_STYLE = GTK_STYLE_CONTEXT_PRINT_SHOW_STYLE,
  SHOW_CHANGE = GTK_STYLE_CONTEXT_PRINT_SHOW_CHANGE,
}; /* bitfield StyleContext::PrintFlags */

static constexpr inline StyleContext::PrintFlags
operator | (StyleContext::PrintFlags lhs, StyleContext::PrintFlags rhs)
{
  return StyleContext::PrintFlags (static_cast<::GtkStyleContextPrintFlags> (lhs) | static_cast<::GtkStyleContextPrintFlags> (rhs));
}

static constexpr inline StyleContext::PrintFlags
operator & (StyleContext::PrintFlags lhs, StyleContext::PrintFlags rhs)
{
  return StyleContext::PrintFlags (static_cast<::GtkStyleContextPrintFlags> (lhs) & static_cast<::GtkStyleContextPrintFlags> (rhs));
}

static constexpr inline StyleContext::PrintFlags
operator ^ (StyleContext::PrintFlags lhs, StyleContext::PrintFlags rhs)
{
  return StyleContext::PrintFlags (static_cast<::GtkStyleContextPrintFlags> (lhs) ^ static_cast<::GtkStyleContextPrintFlags> (rhs));
}

static constexpr inline StyleContext::PrintFlags
operator ~ (StyleContext::PrintFlags lhs)
{
  return StyleContext::PrintFlags (~static_cast<::GtkStyleContextPrintFlags> (lhs));
}

static inline StyleContext::PrintFlags &
operator |= (StyleContext::PrintFlags &lhs, StyleContext::PrintFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline StyleContext::PrintFlags &
operator &= (StyleContext::PrintFlags &lhs, StyleContext::PrintFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline StyleContext::PrintFlags &
operator ^= (StyleContext::PrintFlags &lhs, StyleContext::PrintFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (StyleContext::PrintFlags lhs)
{
  return !static_cast<::GtkStyleContextPrintFlags> (lhs);
}

static constexpr inline bool
operator + (StyleContext::PrintFlags lhs)
{
  return !!static_cast<::GtkStyleContextPrintFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
