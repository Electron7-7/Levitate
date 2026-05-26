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
#include <gsk/gsk.h>

peel_begin_header

namespace peel
{
namespace Gsk
{
enum class BlendMode : std::underlying_type<::GskBlendMode>::type;
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::BlendMode>
{
  typedef Gsk::BlendMode UnownedType;

  static Gsk::BlendMode
  get (const ::GValue *value)
  {
    return static_cast<Gsk::BlendMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::BlendMode m)
  {
    g_value_set_enum (value, static_cast<::GskBlendMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::BlendMode m)
  {
    set (value, m);
  }

  static Gsk::BlendMode
  cast_for_create (Gsk::BlendMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::BlendMode> ()
{
  return gsk_blend_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::BlendMode>
{
  Gsk::BlendMode default_value;

  constexpr PspecTraits (Gsk::BlendMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_blend_mode_get_type (),
                              static_cast<::GskBlendMode> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class BlendMode : std::underlying_type<::GskBlendMode>::type
{
  DEFAULT = GSK_BLEND_MODE_DEFAULT,
  MULTIPLY = GSK_BLEND_MODE_MULTIPLY,
  SCREEN = GSK_BLEND_MODE_SCREEN,
  OVERLAY = GSK_BLEND_MODE_OVERLAY,
  DARKEN = GSK_BLEND_MODE_DARKEN,
  LIGHTEN = GSK_BLEND_MODE_LIGHTEN,
  COLOR_DODGE = GSK_BLEND_MODE_COLOR_DODGE,
  COLOR_BURN = GSK_BLEND_MODE_COLOR_BURN,
  HARD_LIGHT = GSK_BLEND_MODE_HARD_LIGHT,
  SOFT_LIGHT = GSK_BLEND_MODE_SOFT_LIGHT,
  DIFFERENCE_ = GSK_BLEND_MODE_DIFFERENCE,
  EXCLUSION = GSK_BLEND_MODE_EXCLUSION,
  COLOR = GSK_BLEND_MODE_COLOR,
  HUE = GSK_BLEND_MODE_HUE,
  SATURATION = GSK_BLEND_MODE_SATURATION,
  LUMINOSITY = GSK_BLEND_MODE_LUMINOSITY,
}; /* enum BlendMode */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
