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
struct Point3D;
struct Rect;
struct Vec3;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Point3D> ()
{
  return graphene_point3d_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Point3D>
{
  typedef UniquePtr<Graphene::Point3D> OwnedType;
  typedef const Graphene::Point3D * UnownedType;

  static const Graphene::Point3D *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Point3D *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Point3D * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Point3D>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Point3D>::adopt_ref (reinterpret_cast<Graphene::Point3D *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Point3D> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Point3D *
  cast_for_create (const Graphene::Point3D * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Point3D>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Point3D> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Point3D>
{
  static void
  free (Graphene::Point3D *ptr)
  {
    graphene_point3d_free (reinterpret_cast<::graphene_point3d_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Point3D
{
private:

public:
  float x;
  float y;
  float z;

  static peel::UniquePtr<Point3D>
  alloc () noexcept
  {
    ::graphene_point3d_t *_peel_return = graphene_point3d_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Point3D>::adopt_ref (reinterpret_cast<Point3D *> (_peel_return));
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  cross (const Point3D *b, Point3D *res) const noexcept
  {
    const ::graphene_point3d_t *_peel_this = reinterpret_cast<const ::graphene_point3d_t *> (this);
    const ::graphene_point3d_t *_peel_b = reinterpret_cast<const ::graphene_point3d_t *> (b);
    ::graphene_point3d_t *_peel_res = reinterpret_cast<::graphene_point3d_t *> (res);
    graphene_point3d_cross (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2)
  float
  distance (const Point3D *b, Vec3 *delta) const noexcept
  {
    const ::graphene_point3d_t *_peel_this = reinterpret_cast<const ::graphene_point3d_t *> (this);
    const ::graphene_point3d_t *_peel_b = reinterpret_cast<const ::graphene_point3d_t *> (b);
    ::graphene_vec3_t *_peel_delta = reinterpret_cast<::graphene_vec3_t *> (delta);
    return graphene_point3d_distance (_peel_this, _peel_b, _peel_delta);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  float
  dot (const Point3D *b) const noexcept
  {
    const ::graphene_point3d_t *_peel_this = reinterpret_cast<const ::graphene_point3d_t *> (this);
    const ::graphene_point3d_t *_peel_b = reinterpret_cast<const ::graphene_point3d_t *> (b);
    return graphene_point3d_dot (_peel_this, _peel_b);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Point3D *b) const noexcept
  {
    const ::graphene_point3d_t *_peel_this = reinterpret_cast<const ::graphene_point3d_t *> (this);
    const ::graphene_point3d_t *_peel_b = reinterpret_cast<const ::graphene_point3d_t *> (b);
    _Bool _peel_return = graphene_point3d_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  peel_returns_nonnull
  Point3D *
  init (float x, float y, float z) noexcept
  {
    ::graphene_point3d_t *_peel_this = reinterpret_cast<::graphene_point3d_t *> (this);
    ::graphene_point3d_t *_peel_return = graphene_point3d_init (_peel_this, x, y, z);
    peel_assume (_peel_return);
    return reinterpret_cast<Point3D *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Point3D *
  init_from_point (const Point3D *src) noexcept
  {
    ::graphene_point3d_t *_peel_this = reinterpret_cast<::graphene_point3d_t *> (this);
    const ::graphene_point3d_t *_peel_src = reinterpret_cast<const ::graphene_point3d_t *> (src);
    ::graphene_point3d_t *_peel_return = graphene_point3d_init_from_point (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Point3D *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Point3D *
  init_from_vec3 (const Vec3 *v) noexcept
  {
    ::graphene_point3d_t *_peel_this = reinterpret_cast<::graphene_point3d_t *> (this);
    const ::graphene_vec3_t *_peel_v = reinterpret_cast<const ::graphene_vec3_t *> (v);
    ::graphene_point3d_t *_peel_return = graphene_point3d_init_from_vec3 (_peel_this, _peel_v);
    peel_assume (_peel_return);
    return reinterpret_cast<Point3D *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  interpolate (const Point3D *b, double factor, Point3D *res) const noexcept
  {
    const ::graphene_point3d_t *_peel_this = reinterpret_cast<const ::graphene_point3d_t *> (this);
    const ::graphene_point3d_t *_peel_b = reinterpret_cast<const ::graphene_point3d_t *> (b);
    ::graphene_point3d_t *_peel_res = reinterpret_cast<::graphene_point3d_t *> (res);
    graphene_point3d_interpolate (_peel_this, _peel_b, factor, _peel_res);
  }

  float
  length () const noexcept
  {
    const ::graphene_point3d_t *_peel_this = reinterpret_cast<const ::graphene_point3d_t *> (this);
    return graphene_point3d_length (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  near_ (const Point3D *b, float epsilon) const noexcept
  {
    const ::graphene_point3d_t *_peel_this = reinterpret_cast<const ::graphene_point3d_t *> (this);
    const ::graphene_point3d_t *_peel_b = reinterpret_cast<const ::graphene_point3d_t *> (b);
    _Bool _peel_return = graphene_point3d_near (_peel_this, _peel_b, epsilon);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  normalize (Point3D *res) const noexcept
  {
    const ::graphene_point3d_t *_peel_this = reinterpret_cast<const ::graphene_point3d_t *> (this);
    ::graphene_point3d_t *_peel_res = reinterpret_cast<::graphene_point3d_t *> (res);
    graphene_point3d_normalize (_peel_this, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (5) peel_nonnull_args (2, 5)
  void
  normalize_viewport (const Rect *viewport, float z_near, float z_far, Point3D *res) const noexcept
  {
    const ::graphene_point3d_t *_peel_this = reinterpret_cast<const ::graphene_point3d_t *> (this);
    const ::graphene_rect_t *_peel_viewport = reinterpret_cast<const ::graphene_rect_t *> (viewport);
    ::graphene_point3d_t *_peel_res = reinterpret_cast<::graphene_point3d_t *> (res);
    graphene_point3d_normalize_viewport (_peel_this, _peel_viewport, z_near, z_far, _peel_res);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  scale (float factor, Point3D *res) const noexcept
  {
    const ::graphene_point3d_t *_peel_this = reinterpret_cast<const ::graphene_point3d_t *> (this);
    ::graphene_point3d_t *_peel_res = reinterpret_cast<::graphene_point3d_t *> (res);
    graphene_point3d_scale (_peel_this, factor, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  to_vec3 (Vec3 *v) const noexcept
  {
    const ::graphene_point3d_t *_peel_this = reinterpret_cast<const ::graphene_point3d_t *> (this);
    ::graphene_vec3_t *_peel_v = reinterpret_cast<::graphene_vec3_t *> (v);
    graphene_point3d_to_vec3 (_peel_this, _peel_v);
  }

  peel_returns_nonnull
  static const Point3D *
  zero () noexcept
  {
    const ::graphene_point3d_t *_peel_return = graphene_point3d_zero ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Point3D *> (_peel_return);
  }
}; /* record Point3D */

static_assert (sizeof (Point3D) == sizeof (::graphene_point3d_t),
               "Point3D size mismatch");
static_assert (alignof (Point3D) == alignof (::graphene_point3d_t),
               "Point3D align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
