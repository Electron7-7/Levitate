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
GObject::Type::of<Graphene::Box> ()
{
  return graphene_box_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Box>
{
  typedef UniquePtr<Graphene::Box> OwnedType;
  typedef const Graphene::Box * UnownedType;

  static const Graphene::Box *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Box *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Box * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Box>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Box>::adopt_ref (reinterpret_cast<Graphene::Box *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Box> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Box *
  cast_for_create (const Graphene::Box * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Box>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Box> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Box>
{
  static void
  free (Graphene::Box *ptr)
  {
    graphene_box_free (reinterpret_cast<::graphene_box_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Box
{
private:
  ::graphene_box_t inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Box>
  alloc () noexcept
  {
    ::graphene_box_t *_peel_return = graphene_box_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Box>::adopt_ref (reinterpret_cast<Box *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  contains_box (const Box *b) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    const ::graphene_box_t *_peel_b = reinterpret_cast<const ::graphene_box_t *> (b);
    _Bool _peel_return = graphene_box_contains_box (_peel_this, _peel_b);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  contains_point (const Point3D *point) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    const ::graphene_point3d_t *_peel_point = reinterpret_cast<const ::graphene_point3d_t *> (point);
    _Bool _peel_return = graphene_box_contains_point (_peel_this, _peel_point);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Box *b) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    const ::graphene_box_t *_peel_b = reinterpret_cast<const ::graphene_box_t *> (b);
    _Bool _peel_return = graphene_box_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  expand (const Point3D *point, Box *res) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    const ::graphene_point3d_t *_peel_point = reinterpret_cast<const ::graphene_point3d_t *> (point);
    ::graphene_box_t *_peel_res = reinterpret_cast<::graphene_box_t *> (res);
    graphene_box_expand (_peel_this, _peel_point, _peel_res);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  expand_scalar (float scalar, Box *res) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    ::graphene_box_t *_peel_res = reinterpret_cast<::graphene_box_t *> (res);
    graphene_box_expand_scalar (_peel_this, scalar, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  expand_vec3 (const Vec3 *vec, Box *res) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    const ::graphene_vec3_t *_peel_vec = reinterpret_cast<const ::graphene_vec3_t *> (vec);
    ::graphene_box_t *_peel_res = reinterpret_cast<::graphene_box_t *> (res);
    graphene_box_expand_vec3 (_peel_this, _peel_vec, _peel_res);
  }

  /* free bound as UniqueTraits */

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_bounding_sphere (Sphere *sphere) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    ::graphene_sphere_t *_peel_sphere = reinterpret_cast<::graphene_sphere_t *> (sphere);
    graphene_box_get_bounding_sphere (_peel_this, _peel_sphere);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_center (Point3D *center) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    ::graphene_point3d_t *_peel_center = reinterpret_cast<::graphene_point3d_t *> (center);
    graphene_box_get_center (_peel_this, _peel_center);
  }

  float
  get_depth () const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    return graphene_box_get_depth (_peel_this);
  }

  float
  get_height () const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    return graphene_box_get_height (_peel_this);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_max (Point3D *max) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    ::graphene_point3d_t *_peel_max = reinterpret_cast<::graphene_point3d_t *> (max);
    graphene_box_get_max (_peel_this, _peel_max);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_min (Point3D *min) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    ::graphene_point3d_t *_peel_min = reinterpret_cast<::graphene_point3d_t *> (min);
    graphene_box_get_min (_peel_this, _peel_min);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_size (Vec3 *size) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    ::graphene_vec3_t *_peel_size = reinterpret_cast<::graphene_vec3_t *> (size);
    graphene_box_get_size (_peel_this, _peel_size);
  }

  void
  get_vertices (Vec3 (&vertices)[8]) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    ::graphene_vec3_t *_peel_vertices = reinterpret_cast<::graphene_vec3_t *> (vertices);
    graphene_box_get_vertices (_peel_this, _peel_vertices);
  }

  float
  get_width () const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    return graphene_box_get_width (_peel_this);
  }

  peel_arg_in (2) peel_arg_in (3) peel_returns_nonnull
  Box *
  init (const Point3D *min, const Point3D *max) noexcept
  {
    ::graphene_box_t *_peel_this = reinterpret_cast<::graphene_box_t *> (this);
    const ::graphene_point3d_t *_peel_min = reinterpret_cast<const ::graphene_point3d_t *> (min);
    const ::graphene_point3d_t *_peel_max = reinterpret_cast<const ::graphene_point3d_t *> (max);
    ::graphene_box_t *_peel_return = graphene_box_init (_peel_this, _peel_min, _peel_max);
    peel_assume (_peel_return);
    return reinterpret_cast<Box *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Box *
  init_from_box (const Box *src) noexcept
  {
    ::graphene_box_t *_peel_this = reinterpret_cast<::graphene_box_t *> (this);
    const ::graphene_box_t *_peel_src = reinterpret_cast<const ::graphene_box_t *> (src);
    ::graphene_box_t *_peel_return = graphene_box_init_from_box (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Box *> (_peel_return);
  }

  peel_returns_nonnull
  Box *
  init_from_points (peel::ArrayRef<const Point3D> points) noexcept
  {
    unsigned int _peel_n_points;
    ::graphene_box_t *_peel_this = reinterpret_cast<::graphene_box_t *> (this);
    const ::graphene_point3d_t *_peel_points = (_peel_n_points = points.size (), reinterpret_cast<const ::graphene_point3d_t *> (points.data ()));
    ::graphene_box_t *_peel_return = graphene_box_init_from_points (_peel_this, _peel_n_points, _peel_points);
    peel_assume (_peel_return);
    return reinterpret_cast<Box *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3) peel_returns_nonnull
  Box *
  init_from_vec3 (const Vec3 *min, const Vec3 *max) noexcept
  {
    ::graphene_box_t *_peel_this = reinterpret_cast<::graphene_box_t *> (this);
    const ::graphene_vec3_t *_peel_min = reinterpret_cast<const ::graphene_vec3_t *> (min);
    const ::graphene_vec3_t *_peel_max = reinterpret_cast<const ::graphene_vec3_t *> (max);
    ::graphene_box_t *_peel_return = graphene_box_init_from_vec3 (_peel_this, _peel_min, _peel_max);
    peel_assume (_peel_return);
    return reinterpret_cast<Box *> (_peel_return);
  }

  peel_returns_nonnull
  Box *
  init_from_vectors (peel::ArrayRef<const Vec3> vectors) noexcept
  {
    unsigned int _peel_n_vectors;
    ::graphene_box_t *_peel_this = reinterpret_cast<::graphene_box_t *> (this);
    const ::graphene_vec3_t *_peel_vectors = (_peel_n_vectors = vectors.size (), reinterpret_cast<const ::graphene_vec3_t *> (vectors.data ()));
    ::graphene_box_t *_peel_return = graphene_box_init_from_vectors (_peel_this, _peel_n_vectors, _peel_vectors);
    peel_assume (_peel_return);
    return reinterpret_cast<Box *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2)
  bool
  intersection (const Box *b, Box *res) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    const ::graphene_box_t *_peel_b = reinterpret_cast<const ::graphene_box_t *> (b);
    ::graphene_box_t *_peel_res = reinterpret_cast<::graphene_box_t *> (res);
    _Bool _peel_return = graphene_box_intersection (_peel_this, _peel_b, _peel_res);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  union_ (const Box *b, Box *res) const noexcept
  {
    const ::graphene_box_t *_peel_this = reinterpret_cast<const ::graphene_box_t *> (this);
    const ::graphene_box_t *_peel_b = reinterpret_cast<const ::graphene_box_t *> (b);
    ::graphene_box_t *_peel_res = reinterpret_cast<::graphene_box_t *> (res);
    graphene_box_union (_peel_this, _peel_b, _peel_res);
  }

  peel_returns_nonnull
  static const Box *
  empty () noexcept
  {
    const ::graphene_box_t *_peel_return = graphene_box_empty ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Box *> (_peel_return);
  }

  peel_returns_nonnull
  static const Box *
  infinite () noexcept
  {
    const ::graphene_box_t *_peel_return = graphene_box_infinite ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Box *> (_peel_return);
  }

  peel_returns_nonnull
  static const Box *
  minus_one () noexcept
  {
    const ::graphene_box_t *_peel_return = graphene_box_minus_one ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Box *> (_peel_return);
  }

  peel_returns_nonnull
  static const Box *
  one () noexcept
  {
    const ::graphene_box_t *_peel_return = graphene_box_one ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Box *> (_peel_return);
  }

  peel_returns_nonnull
  static const Box *
  one_minus_one () noexcept
  {
    const ::graphene_box_t *_peel_return = graphene_box_one_minus_one ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Box *> (_peel_return);
  }

  peel_returns_nonnull
  static const Box *
  zero () noexcept
  {
    const ::graphene_box_t *_peel_return = graphene_box_zero ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Box *> (_peel_return);
  }
}; /* record Box */

static_assert (sizeof (Box) == sizeof (::graphene_box_t),
               "Box size mismatch");
static_assert (alignof (Box) == alignof (::graphene_box_t),
               "Box align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
