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
struct Frustum;
struct Matrix;
struct Plane;
struct Point3D;
struct Sphere;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Frustum> ()
{
  return graphene_frustum_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Frustum>
{
  typedef UniquePtr<Graphene::Frustum> OwnedType;
  typedef const Graphene::Frustum * UnownedType;

  static const Graphene::Frustum *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Frustum *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Frustum * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Frustum>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Frustum>::adopt_ref (reinterpret_cast<Graphene::Frustum *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Frustum> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Frustum *
  cast_for_create (const Graphene::Frustum * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Frustum>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Frustum> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Frustum>
{
  static void
  free (Graphene::Frustum *ptr)
  {
    graphene_frustum_free (reinterpret_cast<::graphene_frustum_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Frustum
{
private:
  ::graphene_frustum_t inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Frustum>
  alloc () noexcept
  {
    ::graphene_frustum_t *_peel_return = graphene_frustum_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Frustum>::adopt_ref (reinterpret_cast<Frustum *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  contains_point (const Point3D *point) const noexcept
  {
    const ::graphene_frustum_t *_peel_this = reinterpret_cast<const ::graphene_frustum_t *> (this);
    const ::graphene_point3d_t *_peel_point = reinterpret_cast<const ::graphene_point3d_t *> (point);
    _Bool _peel_return = graphene_frustum_contains_point (_peel_this, _peel_point);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Frustum *b) const noexcept
  {
    const ::graphene_frustum_t *_peel_this = reinterpret_cast<const ::graphene_frustum_t *> (this);
    const ::graphene_frustum_t *_peel_b = reinterpret_cast<const ::graphene_frustum_t *> (b);
    _Bool _peel_return = graphene_frustum_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  void
  get_planes (Plane (&planes)[6]) const noexcept
  {
    const ::graphene_frustum_t *_peel_this = reinterpret_cast<const ::graphene_frustum_t *> (this);
    ::graphene_plane_t *_peel_planes = reinterpret_cast<::graphene_plane_t *> (planes);
    graphene_frustum_get_planes (_peel_this, _peel_planes);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_arg_in (5) peel_arg_in (6) peel_arg_in (7) peel_nonnull_args (2, 3, 4, 5, 6, 7) peel_returns_nonnull
  Frustum *
  init (const Plane *p0, const Plane *p1, const Plane *p2, const Plane *p3, const Plane *p4, const Plane *p5) noexcept
  {
    ::graphene_frustum_t *_peel_this = reinterpret_cast<::graphene_frustum_t *> (this);
    const ::graphene_plane_t *_peel_p0 = reinterpret_cast<const ::graphene_plane_t *> (p0);
    const ::graphene_plane_t *_peel_p1 = reinterpret_cast<const ::graphene_plane_t *> (p1);
    const ::graphene_plane_t *_peel_p2 = reinterpret_cast<const ::graphene_plane_t *> (p2);
    const ::graphene_plane_t *_peel_p3 = reinterpret_cast<const ::graphene_plane_t *> (p3);
    const ::graphene_plane_t *_peel_p4 = reinterpret_cast<const ::graphene_plane_t *> (p4);
    const ::graphene_plane_t *_peel_p5 = reinterpret_cast<const ::graphene_plane_t *> (p5);
    ::graphene_frustum_t *_peel_return = graphene_frustum_init (_peel_this, _peel_p0, _peel_p1, _peel_p2, _peel_p3, _peel_p4, _peel_p5);
    peel_assume (_peel_return);
    return reinterpret_cast<Frustum *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Frustum *
  init_from_frustum (const Frustum *src) noexcept
  {
    ::graphene_frustum_t *_peel_this = reinterpret_cast<::graphene_frustum_t *> (this);
    const ::graphene_frustum_t *_peel_src = reinterpret_cast<const ::graphene_frustum_t *> (src);
    ::graphene_frustum_t *_peel_return = graphene_frustum_init_from_frustum (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Frustum *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Frustum *
  init_from_matrix (const Matrix *matrix) noexcept
  {
    ::graphene_frustum_t *_peel_this = reinterpret_cast<::graphene_frustum_t *> (this);
    const ::graphene_matrix_t *_peel_matrix = reinterpret_cast<const ::graphene_matrix_t *> (matrix);
    ::graphene_frustum_t *_peel_return = graphene_frustum_init_from_matrix (_peel_this, _peel_matrix);
    peel_assume (_peel_return);
    return reinterpret_cast<Frustum *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  intersects_box (const Box *box) const noexcept
  {
    const ::graphene_frustum_t *_peel_this = reinterpret_cast<const ::graphene_frustum_t *> (this);
    const ::graphene_box_t *_peel_box = reinterpret_cast<const ::graphene_box_t *> (box);
    _Bool _peel_return = graphene_frustum_intersects_box (_peel_this, _peel_box);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  intersects_sphere (const Sphere *sphere) const noexcept
  {
    const ::graphene_frustum_t *_peel_this = reinterpret_cast<const ::graphene_frustum_t *> (this);
    const ::graphene_sphere_t *_peel_sphere = reinterpret_cast<const ::graphene_sphere_t *> (sphere);
    _Bool _peel_return = graphene_frustum_intersects_sphere (_peel_this, _peel_sphere);
    return !!_peel_return;
  }
}; /* record Frustum */

static_assert (sizeof (Frustum) == sizeof (::graphene_frustum_t),
               "Frustum size mismatch");
static_assert (alignof (Frustum) == alignof (::graphene_frustum_t),
               "Frustum align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
