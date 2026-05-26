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
struct Box;
struct Plane;
struct Point3D;
struct Ray;
enum class RayIntersectionKind : std::underlying_type<::graphene_ray_intersection_kind_t>::type;
struct Sphere;
struct Triangle;
struct Vec3;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Ray> ()
{
  return graphene_ray_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Ray>
{
  typedef UniquePtr<Graphene::Ray> OwnedType;
  typedef const Graphene::Ray * UnownedType;

  static const Graphene::Ray *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Ray *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Ray * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Ray>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Ray>::adopt_ref (reinterpret_cast<Graphene::Ray *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Ray> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Ray *
  cast_for_create (const Graphene::Ray * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Ray>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Ray> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Ray>
{
  static void
  free (Graphene::Ray *ptr)
  {
    graphene_ray_free (reinterpret_cast<::graphene_ray_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Ray
{
private:
  ::graphene_ray_t inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Ray>
  alloc () noexcept
  {
    ::graphene_ray_t *_peel_return = graphene_ray_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Ray>::adopt_ref (reinterpret_cast<Ray *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Ray *b) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    const ::graphene_ray_t *_peel_b = reinterpret_cast<const ::graphene_ray_t *> (b);
    _Bool _peel_return = graphene_ray_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_closest_point_to_point (const Point3D *p, Point3D *res) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    const ::graphene_point3d_t *_peel_p = reinterpret_cast<const ::graphene_point3d_t *> (p);
    ::graphene_point3d_t *_peel_res = reinterpret_cast<::graphene_point3d_t *> (res);
    graphene_ray_get_closest_point_to_point (_peel_this, _peel_p, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_direction (Vec3 *direction) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    ::graphene_vec3_t *_peel_direction = reinterpret_cast<::graphene_vec3_t *> (direction);
    graphene_ray_get_direction (_peel_this, _peel_direction);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  float
  get_distance_to_plane (const Plane *p) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    const ::graphene_plane_t *_peel_p = reinterpret_cast<const ::graphene_plane_t *> (p);
    return graphene_ray_get_distance_to_plane (_peel_this, _peel_p);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  float
  get_distance_to_point (const Point3D *p) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    const ::graphene_point3d_t *_peel_p = reinterpret_cast<const ::graphene_point3d_t *> (p);
    return graphene_ray_get_distance_to_point (_peel_this, _peel_p);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_origin (Point3D *origin) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    ::graphene_point3d_t *_peel_origin = reinterpret_cast<::graphene_point3d_t *> (origin);
    graphene_ray_get_origin (_peel_this, _peel_origin);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  get_position_at (float t, Point3D *position) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    ::graphene_point3d_t *_peel_position = reinterpret_cast<::graphene_point3d_t *> (position);
    graphene_ray_get_position_at (_peel_this, t, _peel_position);
  }

  peel_arg_in (2) peel_arg_in (3) peel_returns_nonnull
  Ray *
  init (const Point3D *origin, const Vec3 *direction) noexcept
  {
    ::graphene_ray_t *_peel_this = reinterpret_cast<::graphene_ray_t *> (this);
    const ::graphene_point3d_t *_peel_origin = reinterpret_cast<const ::graphene_point3d_t *> (origin);
    const ::graphene_vec3_t *_peel_direction = reinterpret_cast<const ::graphene_vec3_t *> (direction);
    ::graphene_ray_t *_peel_return = graphene_ray_init (_peel_this, _peel_origin, _peel_direction);
    peel_assume (_peel_return);
    return reinterpret_cast<Ray *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Ray *
  init_from_ray (const Ray *src) noexcept
  {
    ::graphene_ray_t *_peel_this = reinterpret_cast<::graphene_ray_t *> (this);
    const ::graphene_ray_t *_peel_src = reinterpret_cast<const ::graphene_ray_t *> (src);
    ::graphene_ray_t *_peel_return = graphene_ray_init_from_ray (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Ray *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3) peel_returns_nonnull
  Ray *
  init_from_vec3 (const Vec3 *origin, const Vec3 *direction) noexcept
  {
    ::graphene_ray_t *_peel_this = reinterpret_cast<::graphene_ray_t *> (this);
    const ::graphene_vec3_t *_peel_origin = reinterpret_cast<const ::graphene_vec3_t *> (origin);
    const ::graphene_vec3_t *_peel_direction = reinterpret_cast<const ::graphene_vec3_t *> (direction);
    ::graphene_ray_t *_peel_return = graphene_ray_init_from_vec3 (_peel_this, _peel_origin, _peel_direction);
    peel_assume (_peel_return);
    return reinterpret_cast<Ray *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  RayIntersectionKind
  intersect_box (const Box *b, float *t_out) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    const ::graphene_box_t *_peel_b = reinterpret_cast<const ::graphene_box_t *> (b);
    ::graphene_ray_intersection_kind_t _peel_return = graphene_ray_intersect_box (_peel_this, _peel_b, t_out);
    return static_cast<RayIntersectionKind> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  RayIntersectionKind
  intersect_sphere (const Sphere *s, float *t_out) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    const ::graphene_sphere_t *_peel_s = reinterpret_cast<const ::graphene_sphere_t *> (s);
    ::graphene_ray_intersection_kind_t _peel_return = graphene_ray_intersect_sphere (_peel_this, _peel_s, t_out);
    return static_cast<RayIntersectionKind> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  RayIntersectionKind
  intersect_triangle (const Triangle *t, float *t_out) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    const ::graphene_triangle_t *_peel_t = reinterpret_cast<const ::graphene_triangle_t *> (t);
    ::graphene_ray_intersection_kind_t _peel_return = graphene_ray_intersect_triangle (_peel_this, _peel_t, t_out);
    return static_cast<RayIntersectionKind> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  intersects_box (const Box *b) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    const ::graphene_box_t *_peel_b = reinterpret_cast<const ::graphene_box_t *> (b);
    _Bool _peel_return = graphene_ray_intersects_box (_peel_this, _peel_b);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  intersects_sphere (const Sphere *s) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    const ::graphene_sphere_t *_peel_s = reinterpret_cast<const ::graphene_sphere_t *> (s);
    _Bool _peel_return = graphene_ray_intersects_sphere (_peel_this, _peel_s);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  intersects_triangle (const Triangle *t) const noexcept
  {
    const ::graphene_ray_t *_peel_this = reinterpret_cast<const ::graphene_ray_t *> (this);
    const ::graphene_triangle_t *_peel_t = reinterpret_cast<const ::graphene_triangle_t *> (t);
    _Bool _peel_return = graphene_ray_intersects_triangle (_peel_this, _peel_t);
    return !!_peel_return;
  }
}; /* record Ray */

static_assert (sizeof (Ray) == sizeof (::graphene_ray_t),
               "Ray size mismatch");
static_assert (alignof (Ray) == alignof (::graphene_ray_t),
               "Ray align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
