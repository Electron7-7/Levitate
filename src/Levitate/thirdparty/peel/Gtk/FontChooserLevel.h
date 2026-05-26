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
#include <peel/Gtk/FontChooser.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::FontChooser::Level>
{
  typedef Gtk::FontChooser::Level UnownedType;

  static Gtk::FontChooser::Level
  get (const ::GValue *value)
  {
    return static_cast<Gtk::FontChooser::Level> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::FontChooser::Level flags)
  {
    g_value_set_flags (value, static_cast<::GtkFontChooserLevel> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::FontChooser::Level flags)
  {
    set (value, flags);
  }

  static Gtk::FontChooser::Level
  cast_for_create (Gtk::FontChooser::Level flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::FontChooser::Level> ()
{
  return gtk_font_chooser_level_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::FontChooser::Level>
{
  Gtk::FontChooser::Level default_value;

  constexpr PspecTraits (Gtk::FontChooser::Level default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_font_chooser_level_get_type (),
                               static_cast<::GtkFontChooserLevel> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ FontChooser::Level : std::underlying_type<::GtkFontChooserLevel>::type
{
  FAMILY = GTK_FONT_CHOOSER_LEVEL_FAMILY,
  STYLE = GTK_FONT_CHOOSER_LEVEL_STYLE,
  SIZE = GTK_FONT_CHOOSER_LEVEL_SIZE,
  VARIATIONS = GTK_FONT_CHOOSER_LEVEL_VARIATIONS,
  FEATURES = GTK_FONT_CHOOSER_LEVEL_FEATURES,
}; /* bitfield FontChooser::Level */

static constexpr inline FontChooser::Level
operator | (FontChooser::Level lhs, FontChooser::Level rhs)
{
  return FontChooser::Level (static_cast<::GtkFontChooserLevel> (lhs) | static_cast<::GtkFontChooserLevel> (rhs));
}

static constexpr inline FontChooser::Level
operator & (FontChooser::Level lhs, FontChooser::Level rhs)
{
  return FontChooser::Level (static_cast<::GtkFontChooserLevel> (lhs) & static_cast<::GtkFontChooserLevel> (rhs));
}

static constexpr inline FontChooser::Level
operator ^ (FontChooser::Level lhs, FontChooser::Level rhs)
{
  return FontChooser::Level (static_cast<::GtkFontChooserLevel> (lhs) ^ static_cast<::GtkFontChooserLevel> (rhs));
}

static constexpr inline FontChooser::Level
operator ~ (FontChooser::Level lhs)
{
  return FontChooser::Level (~static_cast<::GtkFontChooserLevel> (lhs));
}

static inline FontChooser::Level &
operator |= (FontChooser::Level &lhs, FontChooser::Level rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline FontChooser::Level &
operator &= (FontChooser::Level &lhs, FontChooser::Level rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline FontChooser::Level &
operator ^= (FontChooser::Level &lhs, FontChooser::Level rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (FontChooser::Level lhs)
{
  return !static_cast<::GtkFontChooserLevel> (lhs);
}

static constexpr inline bool
operator + (FontChooser::Level lhs)
{
  return !!static_cast<::GtkFontChooserLevel> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
