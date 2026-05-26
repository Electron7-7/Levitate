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
enum class ScalingFilter : std::underlying_type<::GskScalingFilter>::type;
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::ScalingFilter>
{
  typedef Gsk::ScalingFilter UnownedType;

  static Gsk::ScalingFilter
  get (const ::GValue *value)
  {
    return static_cast<Gsk::ScalingFilter> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::ScalingFilter m)
  {
    g_value_set_enum (value, static_cast<::GskScalingFilter> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::ScalingFilter m)
  {
    set (value, m);
  }

  static Gsk::ScalingFilter
  cast_for_create (Gsk::ScalingFilter m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::ScalingFilter> ()
{
  return gsk_scaling_filter_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::ScalingFilter>
{
  Gsk::ScalingFilter default_value;

  constexpr PspecTraits (Gsk::ScalingFilter default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_scaling_filter_get_type (),
                              static_cast<::GskScalingFilter> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class ScalingFilter : std::underlying_type<::GskScalingFilter>::type
{
  LINEAR = GSK_SCALING_FILTER_LINEAR,
  NEAREST = GSK_SCALING_FILTER_NEAREST,
  TRILINEAR = GSK_SCALING_FILTER_TRILINEAR,
}; /* enum ScalingFilter */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
