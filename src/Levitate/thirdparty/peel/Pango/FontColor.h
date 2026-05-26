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
enum class FontColor : std::underlying_type<::PangoFontColor>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::FontColor>
{
  typedef Pango::FontColor UnownedType;

  static Pango::FontColor
  get (const ::GValue *value)
  {
    return static_cast<Pango::FontColor> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::FontColor m)
  {
    g_value_set_enum (value, static_cast<::PangoFontColor> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::FontColor m)
  {
    set (value, m);
  }

  static Pango::FontColor
  cast_for_create (Pango::FontColor m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::FontColor> ()
{
  return pango_font_color_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::FontColor>
{
  Pango::FontColor default_value;

  constexpr PspecTraits (Pango::FontColor default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_font_color_get_type (),
                              static_cast<::PangoFontColor> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class FontColor : std::underlying_type<::PangoFontColor>::type
{
  FORBIDDEN = PANGO_FONT_COLOR_FORBIDDEN,
  REQUIRED = PANGO_FONT_COLOR_REQUIRED,
  DONT_CARE = PANGO_FONT_COLOR_DONT_CARE,
}; /* enum FontColor */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
