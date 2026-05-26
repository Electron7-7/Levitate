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
struct Point3D;
struct Sphere;
struct Vec3;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Sphere> ()
{
  return graphene_sphere_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Sphere>
{
  typedef UniquePtr<Graphene::Sphere> OwnedType;
  typedef const Graphene::Sphere * UnownedType;

  static const Graphene::Sphere *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Sphere *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Sphere * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Sphere>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Sphere>::adopt_ref (reinterpret_cast<Graphene::Sphere *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Sphere> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Sphere *
  cast_for_create (const Graphene::Sphere * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Sphere>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Sphere> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Sphere>
{
  static void
  free (Graphene::Sphere *ptr)
  {
    graphene_sphere_free (reinterpret_cast<::graphene_sphere_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Sphere
{
private:
  ::graphene_sphere_t inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Sphere>
  alloc () noexcept
  {
    ::graphene_sphere_t *_peel_return = graphene_sphere_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Sphere>::adopt_ref (reinterpret_cast<Sphere *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  contains_point (const Point3D *point) const noexcept
  {
    const ::graphene_sphere_t *_peel_this = reinterpret_cast<const ::graphene_sphere_t *> (this);
    const ::graphene_point3d_t *_peel_point = reinterpret_cast<const ::graphene_point3d_t *> (point);
    _Bool _peel_return = graphene_sphere_contains_point (_peel_this, _peel_point);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  float
  distance (const Point3D *point) const noexcept
  {
    const ::graphene_sphere_t *_peel_this = reinterpret_cast<const ::graphene_sphere_t *> (this);
    const ::graphene_point3d_t *_peel_point = reinterpret_cast<const ::graphene_point3d_t *> (point);
    return graphene_sphere_distance (_peel_this, _peel_point);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Sphere *b) const noexcept
  {
    const ::graphene_sphere_t *_peel_this = reinterpret_cast<const ::graphene_sphere_t *> (this);
    const ::graphene_sphere_t *_peel_b = reinterpret_cast<const ::graphene_sphere_t *> (b);
    _Bool _peel_return = graphene_sphere_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_bounding_box (Box *box) const noexcept
  {
    const ::graphene_sphere_t *_peel_this = reinterpret_cast<const ::graphene_sphere_t *> (this);
    ::graphene_box_t *_peel_box = reinterpret_cast<::graphene_box_t *> (box);
    graphene_sphere_get_bounding_box (_peel_this, _peel_box);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_center (Point3D *center) const noexcept
  {
    const ::graphene_sphere_t *_peel_this = reinterpret_cast<const ::graphene_sphere_t *> (this);
    ::graphene_point3d_t *_peel_center = reinterpret_cast<::graphene_point3d_t *> (center);
    graphene_sphere_get_center (_peel_this, _peel_center);
  }

  float
  get_radius () const noexcept
  {
    const ::graphene_sphere_t *_peel_this = reinterpret_cast<const ::graphene_sphere_t *> (this);
    return graphene_sphere_get_radius (_peel_this);
  }

  peel_arg_in (2) peel_returns_nonnull
  Sphere *
  init (const Point3D *center, float radius) noexcept
  {
    ::graphene_sphere_t *_peel_this = reinterpret_cast<::graphene_sphere_t *> (this);
    const ::graphene_point3d_t *_peel_center = reinterpret_cast<const ::graphene_point3d_t *> (center);
    ::graphene_sphere_t *_peel_return = graphene_sphere_init (_peel_this, _peel_center, radius);
    peel_assume (_peel_return);
    return reinterpret_cast<Sphere *> (_peel_return);
  }

  peel_arg_in (3) peel_returns_nonnull
  Sphere *
  init_from_points (peel::ArrayRef<const Point3D> points, const Point3D *center) noexcept
  {
    unsigned int _peel_n_points;
    ::graphene_sphere_t *_peel_this = reinterpret_cast<::graphene_sphere_t *> (this);
    const ::graphene_point3d_t *_peel_points = (_peel_n_points = points.size (), reinterpret_cast<const ::graphene_point3d_t *> (points.data ()));
    const ::graphene_point3d_t *_peel_center = reinterpret_cast<const ::graphene_point3d_t *> (center);
    ::graphene_sphere_t *_peel_return = graphene_sphere_init_from_points (_peel_this, _peel_n_points, _peel_points, _peel_center);
    peel_assume (_peel_return);
    return reinterpret_cast<Sphere *> (_peel_return);
  }

  peel_arg_in (3) peel_returns_nonnull
  Sphere *
  init_from_vectors (peel::ArrayRef<const Vec3> vectors, const Point3D *center) noexcept
  {
    unsigned int _peel_n_vectors;
    ::graphene_sphere_t *_peel_this = reinterpret_cast<::graphene_sphere_t *> (this);
    const ::graphene_vec3_t *_peel_vectors = (_peel_n_vectors = vectors.size (), reinterpret_cast<const ::graphene_vec3_t *> (vectors.data ()));
    const ::graphene_point3d_t *_peel_center = reinterpret_cast<const ::graphene_point3d_t *> (center);
    ::graphene_sphere_t *_peel_return = graphene_sphere_init_from_vectors (_peel_this, _peel_n_vectors, _peel_vectors, _peel_center);
    peel_assume (_peel_return);
    return reinterpret_cast<Sphere *> (_peel_return);
  }

  bool
  is_empty () const noexcept
  {
    const ::graphene_sphere_t *_peel_this = reinterpret_cast<const ::graphene_sphere_t *> (this);
    _Bool _peel_return = graphene_sphere_is_empty (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  translate (const Point3D *point, Sphere *res) const noexcept
  {
    const ::graphene_sphere_t *_peel_this = reinterpret_cast<const ::graphene_sphere_t *> (this);
    const ::graphene_point3d_t *_peel_point = reinterpret_cast<const ::graphene_point3d_t *> (point);
    ::graphene_sphere_t *_peel_res = reinterpret_cast<::graphene_sphere_t *> (res);
    graphene_sphere_translate (_peel_this, _peel_point, _peel_res);
  }
}; /* record Sphere */

static_assert (sizeof (Sphere) == sizeof (::graphene_sphere_t),
               "Sphere size mismatch");
static_assert (alignof (Sphere) == alignof (::graphene_sphere_t),
               "Sphere align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
