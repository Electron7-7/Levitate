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
enum class TextSearchFlags : std::underlying_type<::GtkTextSearchFlags>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::TextSearchFlags>
{
  typedef Gtk::TextSearchFlags UnownedType;

  static Gtk::TextSearchFlags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::TextSearchFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::TextSearchFlags flags)
  {
    g_value_set_flags (value, static_cast<::GtkTextSearchFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::TextSearchFlags flags)
  {
    set (value, flags);
  }

  static Gtk::TextSearchFlags
  cast_for_create (Gtk::TextSearchFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::TextSearchFlags> ()
{
  return gtk_text_search_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::TextSearchFlags>
{
  Gtk::TextSearchFlags default_value;

  constexpr PspecTraits (Gtk::TextSearchFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_text_search_flags_get_type (),
                               static_cast<::GtkTextSearchFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ TextSearchFlags : std::underlying_type<::GtkTextSearchFlags>::type
{
  VISIBLE_ONLY = GTK_TEXT_SEARCH_VISIBLE_ONLY,
  TEXT_ONLY = GTK_TEXT_SEARCH_TEXT_ONLY,
  CASE_INSENSITIVE = GTK_TEXT_SEARCH_CASE_INSENSITIVE,
}; /* bitfield TextSearchFlags */

static constexpr inline TextSearchFlags
operator | (TextSearchFlags lhs, TextSearchFlags rhs)
{
  return TextSearchFlags (static_cast<::GtkTextSearchFlags> (lhs) | static_cast<::GtkTextSearchFlags> (rhs));
}

static constexpr inline TextSearchFlags
operator & (TextSearchFlags lhs, TextSearchFlags rhs)
{
  return TextSearchFlags (static_cast<::GtkTextSearchFlags> (lhs) & static_cast<::GtkTextSearchFlags> (rhs));
}

static constexpr inline TextSearchFlags
operator ^ (TextSearchFlags lhs, TextSearchFlags rhs)
{
  return TextSearchFlags (static_cast<::GtkTextSearchFlags> (lhs) ^ static_cast<::GtkTextSearchFlags> (rhs));
}

static constexpr inline TextSearchFlags
operator ~ (TextSearchFlags lhs)
{
  return TextSearchFlags (~static_cast<::GtkTextSearchFlags> (lhs));
}

static inline TextSearchFlags &
operator |= (TextSearchFlags &lhs, TextSearchFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TextSearchFlags &
operator &= (TextSearchFlags &lhs, TextSearchFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TextSearchFlags &
operator ^= (TextSearchFlags &lhs, TextSearchFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TextSearchFlags lhs)
{
  return !static_cast<::GtkTextSearchFlags> (lhs);
}

static constexpr inline bool
operator + (TextSearchFlags lhs)
{
  return !!static_cast<::GtkTextSearchFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
