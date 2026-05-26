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
struct Triangle;
struct Vec2;
struct Vec3;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Triangle> ()
{
  return graphene_triangle_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Triangle>
{
  typedef UniquePtr<Graphene::Triangle> OwnedType;
  typedef const Graphene::Triangle * UnownedType;

  static const Graphene::Triangle *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Triangle *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Triangle * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Triangle>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Triangle>::adopt_ref (reinterpret_cast<Graphene::Triangle *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Triangle> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Triangle *
  cast_for_create (const Graphene::Triangle * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Triangle>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Triangle> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Triangle>
{
  static void
  free (Graphene::Triangle *ptr)
  {
    graphene_triangle_free (reinterpret_cast<::graphene_triangle_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Triangle
{
private:
  ::graphene_triangle_t inner peel_no_warn_unused;

  Triangle () = delete;
  Triangle (const Triangle &) = delete;
  Triangle (Triangle &&) = delete;
  ~Triangle ();

public:
  static peel::UniquePtr<Triangle>
  alloc () noexcept
  {
    ::graphene_triangle_t *_peel_return = graphene_triangle_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Triangle>::adopt_ref (reinterpret_cast<Triangle *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  contains_point (const Point3D *p) const noexcept
  {
    const ::graphene_triangle_t *_peel_this = reinterpret_cast<const ::graphene_triangle_t *> (this);
    const ::graphene_point3d_t *_peel_p = reinterpret_cast<const ::graphene_point3d_t *> (p);
    _Bool _peel_return = graphene_triangle_contains_point (_peel_this, _peel_p);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Triangle *b) const noexcept
  {
    const ::graphene_triangle_t *_peel_this = reinterpret_cast<const ::graphene_triangle_t *> (this);
    const ::graphene_triangle_t *_peel_b = reinterpret_cast<const ::graphene_triangle_t *> (b);
    _Bool _peel_return = graphene_triangle_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  float
  get_area () const noexcept
  {
    const ::graphene_triangle_t *_peel_this = reinterpret_cast<const ::graphene_triangle_t *> (this);
    return graphene_triangle_get_area (_peel_this);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (3)
  bool
  get_barycoords (const Point3D *p, Vec2 *res) const noexcept
  {
    const ::graphene_triangle_t *_peel_this = reinterpret_cast<const ::graphene_triangle_t *> (this);
    const ::graphene_point3d_t *_peel_p = reinterpret_cast<const ::graphene_point3d_t *> (p);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    _Bool _peel_return = graphene_triangle_get_barycoords (_peel_this, _peel_p, _peel_res);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_bounding_box (Box *res) const noexcept
  {
    const ::graphene_triangle_t *_peel_this = reinterpret_cast<const ::graphene_triangle_t *> (this);
    ::graphene_box_t *_peel_res = reinterpret_cast<::graphene_box_t *> (res);
    graphene_triangle_get_bounding_box (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_midpoint (Point3D *res) const noexcept
  {
    const ::graphene_triangle_t *_peel_this = reinterpret_cast<const ::graphene_triangle_t *> (this);
    ::graphene_point3d_t *_peel_res = reinterpret_cast<::graphene_point3d_t *> (res);
    graphene_triangle_get_midpoint (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_normal (Vec3 *res) const noexcept
  {
    const ::graphene_triangle_t *_peel_this = reinterpret_cast<const ::graphene_triangle_t *> (this);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_triangle_get_normal (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_plane (Plane *res) const noexcept
  {
    const ::graphene_triangle_t *_peel_this = reinterpret_cast<const ::graphene_triangle_t *> (this);
    ::graphene_plane_t *_peel_res = reinterpret_cast<::graphene_plane_t *> (res);
    graphene_triangle_get_plane (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4)
  void
  get_points (Point3D *a, Point3D *b, Point3D *c) const noexcept
  {
    const ::graphene_triangle_t *_peel_this = reinterpret_cast<const ::graphene_triangle_t *> (this);
    ::graphene_point3d_t *_peel_a = reinterpret_cast<::graphene_point3d_t *> (a);
    ::graphene_point3d_t *_peel_b = reinterpret_cast<::graphene_point3d_t *> (b);
    ::graphene_point3d_t *_peel_c = reinterpret_cast<::graphene_point3d_t *> (c);
    graphene_triangle_get_points (_peel_this, _peel_a, _peel_b, _peel_c);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_arg_in (5) peel_arg_out (6) peel_nonnull_args (3, 4, 5, 6)
  bool
  get_uv (const Point3D *p, const Vec2 *uv_a, const Vec2 *uv_b, const Vec2 *uv_c, Vec2 *res) const noexcept
  {
    const ::graphene_triangle_t *_peel_this = reinterpret_cast<const ::graphene_triangle_t *> (this);
    const ::graphene_point3d_t *_peel_p = reinterpret_cast<const ::graphene_point3d_t *> (p);
    const ::graphene_vec2_t *_peel_uv_a = reinterpret_cast<const ::graphene_vec2_t *> (uv_a);
    const ::graphene_vec2_t *_peel_uv_b = reinterpret_cast<const ::graphene_vec2_t *> (uv_b);
    const ::graphene_vec2_t *_peel_uv_c = reinterpret_cast<const ::graphene_vec2_t *> (uv_c);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    _Bool _peel_return = graphene_triangle_get_uv (_peel_this, _peel_p, _peel_uv_a, _peel_uv_b, _peel_uv_c, _peel_res);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4)
  void
  get_vertices (Vec3 *a, Vec3 *b, Vec3 *c) const noexcept
  {
    const ::graphene_triangle_t *_peel_this = reinterpret_cast<const ::graphene_triangle_t *> (this);
    ::graphene_vec3_t *_peel_a = reinterpret_cast<::graphene_vec3_t *> (a);
    ::graphene_vec3_t *_peel_b = reinterpret_cast<::graphene_vec3_t *> (b);
    ::graphene_vec3_t *_peel_c = reinterpret_cast<::graphene_vec3_t *> (c);
    graphene_triangle_get_vertices (_peel_this, _peel_a, _peel_b, _peel_c);
  }

  peel_returns_nonnull
  Triangle *
  init_from_float (const float (&a)[3], const float (&b)[3], const float (&c)[3]) noexcept
  {
    ::graphene_triangle_t *_peel_this = reinterpret_cast<::graphene_triangle_t *> (this);
    const float *_peel_a = reinterpret_cast<const float *> (a);
    const float *_peel_b = reinterpret_cast<const float *> (b);
    const float *_peel_c = reinterpret_cast<const float *> (c);
    ::graphene_triangle_t *_peel_return = graphene_triangle_init_from_float (_peel_this, _peel_a, _peel_b, _peel_c);
    peel_assume (_peel_return);
    return reinterpret_cast<Triangle *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_returns_nonnull
  Triangle *
  init_from_point3d (const Point3D *a, const Point3D *b, const Point3D *c) noexcept
  {
    ::graphene_triangle_t *_peel_this = reinterpret_cast<::graphene_triangle_t *> (this);
    const ::graphene_point3d_t *_peel_a = reinterpret_cast<const ::graphene_point3d_t *> (a);
    const ::graphene_point3d_t *_peel_b = reinterpret_cast<const ::graphene_point3d_t *> (b);
    const ::graphene_point3d_t *_peel_c = reinterpret_cast<const ::graphene_point3d_t *> (c);
    ::graphene_triangle_t *_peel_return = graphene_triangle_init_from_point3d (_peel_this, _peel_a, _peel_b, _peel_c);
    peel_assume (_peel_return);
    return reinterpret_cast<Triangle *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_returns_nonnull
  Triangle *
  init_from_vec3 (const Vec3 *a, const Vec3 *b, const Vec3 *c) noexcept
  {
    ::graphene_triangle_t *_peel_this = reinterpret_cast<::graphene_triangle_t *> (this);
    const ::graphene_vec3_t *_peel_a = reinterpret_cast<const ::graphene_vec3_t *> (a);
    const ::graphene_vec3_t *_peel_b = reinterpret_cast<const ::graphene_vec3_t *> (b);
    const ::graphene_vec3_t *_peel_c = reinterpret_cast<const ::graphene_vec3_t *> (c);
    ::graphene_triangle_t *_peel_return = graphene_triangle_init_from_vec3 (_peel_this, _peel_a, _peel_b, _peel_c);
    peel_assume (_peel_return);
    return reinterpret_cast<Triangle *> (_peel_return);
  }
}; /* record Triangle */

static_assert (sizeof (Triangle) == sizeof (::graphene_triangle_t),
               "Triangle size mismatch");
static_assert (alignof (Triangle) == alignof (::graphene_triangle_t),
               "Triangle align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
