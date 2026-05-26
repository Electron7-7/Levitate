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
struct Matrix;
struct Plane;
struct Point3D;
struct Vec3;
struct Vec4;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Plane> ()
{
  return graphene_plane_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Plane>
{
  typedef UniquePtr<Graphene::Plane> OwnedType;
  typedef const Graphene::Plane * UnownedType;

  static const Graphene::Plane *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Plane *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Plane * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Plane>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Plane>::adopt_ref (reinterpret_cast<Graphene::Plane *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Plane> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Plane *
  cast_for_create (const Graphene::Plane * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Plane>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Plane> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Plane>
{
  static void
  free (Graphene::Plane *ptr)
  {
    graphene_plane_free (reinterpret_cast<::graphene_plane_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Plane
{
private:
  ::graphene_plane_t inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Plane>
  alloc () noexcept
  {
    ::graphene_plane_t *_peel_return = graphene_plane_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Plane>::adopt_ref (reinterpret_cast<Plane *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  float
  distance (const Point3D *point) const noexcept
  {
    const ::graphene_plane_t *_peel_this = reinterpret_cast<const ::graphene_plane_t *> (this);
    const ::graphene_point3d_t *_peel_point = reinterpret_cast<const ::graphene_point3d_t *> (point);
    return graphene_plane_distance (_peel_this, _peel_point);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Plane *b) const noexcept
  {
    const ::graphene_plane_t *_peel_this = reinterpret_cast<const ::graphene_plane_t *> (this);
    const ::graphene_plane_t *_peel_b = reinterpret_cast<const ::graphene_plane_t *> (b);
    _Bool _peel_return = graphene_plane_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  float
  get_constant () const noexcept
  {
    const ::graphene_plane_t *_peel_this = reinterpret_cast<const ::graphene_plane_t *> (this);
    return graphene_plane_get_constant (_peel_this);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_normal (Vec3 *normal) const noexcept
  {
    const ::graphene_plane_t *_peel_this = reinterpret_cast<const ::graphene_plane_t *> (this);
    ::graphene_vec3_t *_peel_normal = reinterpret_cast<::graphene_vec3_t *> (normal);
    graphene_plane_get_normal (_peel_this, _peel_normal);
  }

  peel_arg_in (2) peel_returns_nonnull
  Plane *
  init (const Vec3 *normal, float constant) noexcept
  {
    ::graphene_plane_t *_peel_this = reinterpret_cast<::graphene_plane_t *> (this);
    const ::graphene_vec3_t *_peel_normal = reinterpret_cast<const ::graphene_vec3_t *> (normal);
    ::graphene_plane_t *_peel_return = graphene_plane_init (_peel_this, _peel_normal, constant);
    peel_assume (_peel_return);
    return reinterpret_cast<Plane *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Plane *
  init_from_plane (const Plane *src) noexcept
  {
    ::graphene_plane_t *_peel_this = reinterpret_cast<::graphene_plane_t *> (this);
    const ::graphene_plane_t *_peel_src = reinterpret_cast<const ::graphene_plane_t *> (src);
    ::graphene_plane_t *_peel_return = graphene_plane_init_from_plane (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Plane *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3) peel_returns_nonnull
  Plane *
  init_from_point (const Vec3 *normal, const Point3D *point) noexcept
  {
    ::graphene_plane_t *_peel_this = reinterpret_cast<::graphene_plane_t *> (this);
    const ::graphene_vec3_t *_peel_normal = reinterpret_cast<const ::graphene_vec3_t *> (normal);
    const ::graphene_point3d_t *_peel_point = reinterpret_cast<const ::graphene_point3d_t *> (point);
    ::graphene_plane_t *_peel_return = graphene_plane_init_from_point (_peel_this, _peel_normal, _peel_point);
    peel_assume (_peel_return);
    return reinterpret_cast<Plane *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4) peel_returns_nonnull
  Plane *
  init_from_points (const Point3D *a, const Point3D *b, const Point3D *c) noexcept
  {
    ::graphene_plane_t *_peel_this = reinterpret_cast<::graphene_plane_t *> (this);
    const ::graphene_point3d_t *_peel_a = reinterpret_cast<const ::graphene_point3d_t *> (a);
    const ::graphene_point3d_t *_peel_b = reinterpret_cast<const ::graphene_point3d_t *> (b);
    const ::graphene_point3d_t *_peel_c = reinterpret_cast<const ::graphene_point3d_t *> (c);
    ::graphene_plane_t *_peel_return = graphene_plane_init_from_points (_peel_this, _peel_a, _peel_b, _peel_c);
    peel_assume (_peel_return);
    return reinterpret_cast<Plane *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Plane *
  init_from_vec4 (const Vec4 *src) noexcept
  {
    ::graphene_plane_t *_peel_this = reinterpret_cast<::graphene_plane_t *> (this);
    const ::graphene_vec4_t *_peel_src = reinterpret_cast<const ::graphene_vec4_t *> (src);
    ::graphene_plane_t *_peel_return = graphene_plane_init_from_vec4 (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Plane *> (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  negate (Plane *res) const noexcept
  {
    const ::graphene_plane_t *_peel_this = reinterpret_cast<const ::graphene_plane_t *> (this);
    ::graphene_plane_t *_peel_res = reinterpret_cast<::graphene_plane_t *> (res);
    graphene_plane_negate (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  normalize (Plane *res) const noexcept
  {
    const ::graphene_plane_t *_peel_this = reinterpret_cast<const ::graphene_plane_t *> (this);
    ::graphene_plane_t *_peel_res = reinterpret_cast<::graphene_plane_t *> (res);
    graphene_plane_normalize (_peel_this, _peel_res);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  transform (const Matrix *matrix, const Matrix *normal_matrix, Plane *res) const noexcept
  {
    const ::graphene_plane_t *_peel_this = reinterpret_cast<const ::graphene_plane_t *> (this);
    const ::graphene_matrix_t *_peel_matrix = reinterpret_cast<const ::graphene_matrix_t *> (matrix);
    const ::graphene_matrix_t *_peel_normal_matrix = reinterpret_cast<const ::graphene_matrix_t *> (normal_matrix);
    ::graphene_plane_t *_peel_res = reinterpret_cast<::graphene_plane_t *> (res);
    graphene_plane_transform (_peel_this, _peel_matrix, _peel_normal_matrix, _peel_res);
  }
}; /* record Plane */

static_assert (sizeof (Plane) == sizeof (::graphene_plane_t),
               "Plane size mismatch");
static_assert (alignof (Plane) == alignof (::graphene_plane_t),
               "Plane align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
