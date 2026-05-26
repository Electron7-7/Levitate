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
enum class Corner : std::underlying_type<::GskCorner>::type;
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::Corner>
{
  typedef Gsk::Corner UnownedType;

  static Gsk::Corner
  get (const ::GValue *value)
  {
    return static_cast<Gsk::Corner> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::Corner m)
  {
    g_value_set_enum (value, static_cast<::GskCorner> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::Corner m)
  {
    set (value, m);
  }

  static Gsk::Corner
  cast_for_create (Gsk::Corner m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::Corner> ()
{
  return gsk_corner_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::Corner>
{
  Gsk::Corner default_value;

  constexpr PspecTraits (Gsk::Corner default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_corner_get_type (),
                              static_cast<::GskCorner> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class Corner : std::underlying_type<::GskCorner>::type
{
  TOP_LEFT = GSK_CORNER_TOP_LEFT,
  TOP_RIGHT = GSK_CORNER_TOP_RIGHT,
  BOTTOM_RIGHT = GSK_CORNER_BOTTOM_RIGHT,
  BOTTOM_LEFT = GSK_CORNER_BOTTOM_LEFT,
}; /* enum Corner */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
