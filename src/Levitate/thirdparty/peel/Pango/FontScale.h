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
enum class FontScale : std::underlying_type<::PangoFontScale>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::FontScale>
{
  typedef Pango::FontScale UnownedType;

  static Pango::FontScale
  get (const ::GValue *value)
  {
    return static_cast<Pango::FontScale> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::FontScale m)
  {
    g_value_set_enum (value, static_cast<::PangoFontScale> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::FontScale m)
  {
    set (value, m);
  }

  static Pango::FontScale
  cast_for_create (Pango::FontScale m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::FontScale> ()
{
  return pango_font_scale_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::FontScale>
{
  Pango::FontScale default_value;

  constexpr PspecTraits (Pango::FontScale default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_font_scale_get_type (),
                              static_cast<::PangoFontScale> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class FontScale : std::underlying_type<::PangoFontScale>::type
{
  NONE = PANGO_FONT_SCALE_NONE,
  SUPERSCRIPT = PANGO_FONT_SCALE_SUPERSCRIPT,
  SUBSCRIPT = PANGO_FONT_SCALE_SUBSCRIPT,
  SMALL_CAPS = PANGO_FONT_SCALE_SMALL_CAPS,
}; /* enum FontScale */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
