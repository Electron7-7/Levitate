#pragma once

/* Auto-generated, do not modify */
/* Package graphene-gobject-1.0 */

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
#include <graphene-gobject.h>

peel_begin_header

namespace peel
{
namespace Graphene
{
enum class RayIntersectionKind : std::underlying_type<::graphene_ray_intersection_kind_t>::type;
} /* namespace Graphene */

template<>
struct GObject::Value::Traits<Graphene::RayIntersectionKind>
{
  typedef Graphene::RayIntersectionKind UnownedType;

  static Graphene::RayIntersectionKind
  get (const ::GValue *value)
  {
    return static_cast<Graphene::RayIntersectionKind> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Graphene::RayIntersectionKind m)
  {
    g_value_set_enum (value, static_cast<::graphene_ray_intersection_kind_t> (m));
  }

  static void
  set_marshal_return (::GValue *value, Graphene::RayIntersectionKind m)
  {
    set (value, m);
  }

  static Graphene::RayIntersectionKind
  cast_for_create (Graphene::RayIntersectionKind m) noexcept
  {
    return m;
  }
};


namespace Graphene
{
enum class RayIntersectionKind : std::underlying_type<::graphene_ray_intersection_kind_t>::type
{
  NONE = GRAPHENE_RAY_INTERSECTION_KIND_NONE,
  ENTER = GRAPHENE_RAY_INTERSECTION_KIND_ENTER,
  LEAVE = GRAPHENE_RAY_INTERSECTION_KIND_LEAVE,
}; /* enum RayIntersectionKind */


} /* namespace Graphene */
} /* namespace peel */

peel_end_header
