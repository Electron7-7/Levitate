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
enum class AttrType : std::underlying_type<::PangoAttrType>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::AttrType>
{
  typedef Pango::AttrType UnownedType;

  static Pango::AttrType
  get (const ::GValue *value)
  {
    return static_cast<Pango::AttrType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::AttrType m)
  {
    g_value_set_enum (value, static_cast<::PangoAttrType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::AttrType m)
  {
    set (value, m);
  }

  static Pango::AttrType
  cast_for_create (Pango::AttrType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::AttrType> ()
{
  return pango_attr_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::AttrType>
{
  Pango::AttrType default_value;

  constexpr PspecTraits (Pango::AttrType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_attr_type_get_type (),
                              static_cast<::PangoAttrType> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class AttrType : std::underlying_type<::PangoAttrType>::type
{
  INVALID = PANGO_ATTR_INVALID,
  LANGUAGE = PANGO_ATTR_LANGUAGE,
  FAMILY = PANGO_ATTR_FAMILY,
  STYLE = PANGO_ATTR_STYLE,
  WEIGHT = PANGO_ATTR_WEIGHT,
  VARIANT = PANGO_ATTR_VARIANT,
  STRETCH = PANGO_ATTR_STRETCH,
  SIZE = PANGO_ATTR_SIZE,
  FONT_DESC = PANGO_ATTR_FONT_DESC,
  FOREGROUND = PANGO_ATTR_FOREGROUND,
  BACKGROUND = PANGO_ATTR_BACKGROUND,
  UNDERLINE = PANGO_ATTR_UNDERLINE,
  STRIKETHROUGH = PANGO_ATTR_STRIKETHROUGH,
  RISE = PANGO_ATTR_RISE,
  SHAPE = PANGO_ATTR_SHAPE,
  SCALE = PANGO_ATTR_SCALE,
  FALLBACK = PANGO_ATTR_FALLBACK,
  LETTER_SPACING = PANGO_ATTR_LETTER_SPACING,
  UNDERLINE_COLOR = PANGO_ATTR_UNDERLINE_COLOR,
  STRIKETHROUGH_COLOR = PANGO_ATTR_STRIKETHROUGH_COLOR,
  ABSOLUTE_SIZE = PANGO_ATTR_ABSOLUTE_SIZE,
  GRAVITY = PANGO_ATTR_GRAVITY,
  GRAVITY_HINT = PANGO_ATTR_GRAVITY_HINT,
  FONT_FEATURES = PANGO_ATTR_FONT_FEATURES,
  FOREGROUND_ALPHA = PANGO_ATTR_FOREGROUND_ALPHA,
  BACKGROUND_ALPHA = PANGO_ATTR_BACKGROUND_ALPHA,
  ALLOW_BREAKS = PANGO_ATTR_ALLOW_BREAKS,
  SHOW = PANGO_ATTR_SHOW,
  INSERT_HYPHENS = PANGO_ATTR_INSERT_HYPHENS,
  OVERLINE = PANGO_ATTR_OVERLINE,
  OVERLINE_COLOR = PANGO_ATTR_OVERLINE_COLOR,
  LINE_HEIGHT = PANGO_ATTR_LINE_HEIGHT,
  ABSOLUTE_LINE_HEIGHT = PANGO_ATTR_ABSOLUTE_LINE_HEIGHT,
  TEXT_TRANSFORM = PANGO_ATTR_TEXT_TRANSFORM,
  WORD = PANGO_ATTR_WORD,
  SENTENCE = PANGO_ATTR_SENTENCE,
  BASELINE_SHIFT = PANGO_ATTR_BASELINE_SHIFT,
  FONT_SCALE = PANGO_ATTR_FONT_SCALE,
}; /* enum AttrType */

peel_no_warn_unused
static const char *
attr_type_get_name (AttrType type) noexcept
{
  ::PangoAttrType _peel_type = static_cast<::PangoAttrType> (type);
  return pango_attr_type_get_name (_peel_type);
}

peel_no_warn_unused peel_nonnull_args (1)
static AttrType
attr_type_register (const char *name) noexcept
{
  ::PangoAttrType _peel_return = pango_attr_type_register (name);
  return static_cast<AttrType> (_peel_return);
}


} /* namespace Pango */
} /* namespace peel */

peel_end_header
