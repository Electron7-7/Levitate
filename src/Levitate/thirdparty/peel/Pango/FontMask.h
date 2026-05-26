#pragma once

/* Auto-generated, do not modify */
/* Package pango */

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
#include <pango/pango.h>

peel_begin_header

namespace peel
{
namespace Pango
{
enum class FontMask : std::underlying_type<::PangoFontMask>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::FontMask>
{
  typedef Pango::FontMask UnownedType;

  static Pango::FontMask
  get (const ::GValue *value)
  {
    return static_cast<Pango::FontMask> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Pango::FontMask flags)
  {
    g_value_set_flags (value, static_cast<::PangoFontMask> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Pango::FontMask flags)
  {
    set (value, flags);
  }

  static Pango::FontMask
  cast_for_create (Pango::FontMask flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::FontMask> ()
{
  return pango_font_mask_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::FontMask>
{
  Pango::FontMask default_value;

  constexpr PspecTraits (Pango::FontMask default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               pango_font_mask_get_type (),
                               static_cast<::PangoFontMask> (default_value),
                               basics.flags);
  }
};


namespace Pango
{
enum class /* bitfield */ FontMask : std::underlying_type<::PangoFontMask>::type
{
  FAMILY = PANGO_FONT_MASK_FAMILY,
  STYLE = PANGO_FONT_MASK_STYLE,
  VARIANT = PANGO_FONT_MASK_VARIANT,
  WEIGHT = PANGO_FONT_MASK_WEIGHT,
  STRETCH = PANGO_FONT_MASK_STRETCH,
  SIZE = PANGO_FONT_MASK_SIZE,
  GRAVITY = PANGO_FONT_MASK_GRAVITY,
  VARIATIONS = PANGO_FONT_MASK_VARIATIONS,
  FEATURES = PANGO_FONT_MASK_FEATURES,
  COLOR = PANGO_FONT_MASK_COLOR,
}; /* bitfield FontMask */

static constexpr inline FontMask
operator | (FontMask lhs, FontMask rhs)
{
  return FontMask (static_cast<::PangoFontMask> (lhs) | static_cast<::PangoFontMask> (rhs));
}

static constexpr inline FontMask
operator & (FontMask lhs, FontMask rhs)
{
  return FontMask (static_cast<::PangoFontMask> (lhs) & static_cast<::PangoFontMask> (rhs));
}

static constexpr inline FontMask
operator ^ (FontMask lhs, FontMask rhs)
{
  return FontMask (static_cast<::PangoFontMask> (lhs) ^ static_cast<::PangoFontMask> (rhs));
}

static constexpr inline FontMask
operator ~ (FontMask lhs)
{
  return FontMask (~static_cast<::PangoFontMask> (lhs));
}

static inline FontMask &
operator |= (FontMask &lhs, FontMask rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline FontMask &
operator &= (FontMask &lhs, FontMask rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline FontMask &
operator ^= (FontMask &lhs, FontMask rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (FontMask lhs)
{
  return !static_cast<::PangoFontMask> (lhs);
}

static constexpr inline bool
operator + (FontMask lhs)
{
  return !!static_cast<::PangoFontMask> (lhs);
}


} /* namespace Pango */
} /* namespace peel */

peel_end_header
