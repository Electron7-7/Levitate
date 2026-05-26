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
enum class Style : std::underlying_type<::PangoStyle>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::Style>
{
  typedef Pango::Style UnownedType;

  static Pango::Style
  get (const ::GValue *value)
  {
    return static_cast<Pango::Style> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::Style m)
  {
    g_value_set_enum (value, static_cast<::PangoStyle> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::Style m)
  {
    set (value, m);
  }

  static Pango::Style
  cast_for_create (Pango::Style m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::Style> ()
{
  return pango_style_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::Style>
{
  Pango::Style default_value;

  constexpr PspecTraits (Pango::Style default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_style_get_type (),
                              static_cast<::PangoStyle> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class Style : std::underlying_type<::PangoStyle>::type
{
  NORMAL = PANGO_STYLE_NORMAL,
  OBLIQUE = PANGO_STYLE_OBLIQUE,
  ITALIC = PANGO_STYLE_ITALIC,
}; /* enum Style */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
