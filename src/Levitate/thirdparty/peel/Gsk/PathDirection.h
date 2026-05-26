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
#include <peel/Gsk/Path.h>

peel_begin_header

namespace peel
{
namespace Gsk
{
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::Path::Direction>
{
  typedef Gsk::Path::Direction UnownedType;

  static Gsk::Path::Direction
  get (const ::GValue *value)
  {
    return static_cast<Gsk::Path::Direction> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::Path::Direction m)
  {
    g_value_set_enum (value, static_cast<::GskPathDirection> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::Path::Direction m)
  {
    set (value, m);
  }

  static Gsk::Path::Direction
  cast_for_create (Gsk::Path::Direction m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::Path::Direction> ()
{
  return gsk_path_direction_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::Path::Direction>
{
  Gsk::Path::Direction default_value;

  constexpr PspecTraits (Gsk::Path::Direction default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_path_direction_get_type (),
                              static_cast<::GskPathDirection> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class Path::Direction : std::underlying_type<::GskPathDirection>::type
{
  FROM_START = GSK_PATH_FROM_START,
  TO_START = GSK_PATH_TO_START,
  TO_END = GSK_PATH_TO_END,
  FROM_END = GSK_PATH_FROM_END,
}; /* enum Path::Direction */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
