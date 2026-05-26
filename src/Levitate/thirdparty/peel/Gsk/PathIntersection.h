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
struct GObject::Value::Traits<Gsk::Path::Intersection>
{
  typedef Gsk::Path::Intersection UnownedType;

  static Gsk::Path::Intersection
  get (const ::GValue *value)
  {
    return static_cast<Gsk::Path::Intersection> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::Path::Intersection m)
  {
    g_value_set_enum (value, static_cast<::GskPathIntersection> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::Path::Intersection m)
  {
    set (value, m);
  }

  static Gsk::Path::Intersection
  cast_for_create (Gsk::Path::Intersection m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::Path::Intersection> ()
{
  return gsk_path_intersection_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::Path::Intersection>
{
  Gsk::Path::Intersection default_value;

  constexpr PspecTraits (Gsk::Path::Intersection default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_path_intersection_get_type (),
                              static_cast<::GskPathIntersection> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class Path::Intersection : std::underlying_type<::GskPathIntersection>::type
{
  NONE = GSK_PATH_INTERSECTION_NONE,
  NORMAL = GSK_PATH_INTERSECTION_NORMAL,
  START = GSK_PATH_INTERSECTION_START,
  END = GSK_PATH_INTERSECTION_END,
}; /* enum Path::Intersection */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
