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
struct Point;
struct Vec2;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Point> ()
{
  return graphene_point_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Point>
{
  typedef UniquePtr<Graphene::Point> OwnedType;
  typedef const Graphene::Point * UnownedType;

  static const Graphene::Point *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Point *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Point * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Point>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Point>::adopt_ref (reinterpret_cast<Graphene::Point *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Point> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Point *
  cast_for_create (const Graphene::Point * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Point>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Point> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Point>
{
  static void
  free (Graphene::Point *ptr)
  {
    graphene_point_free (reinterpret_cast<::graphene_point_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Point
{
private:

public:
  float x;
  float y;

  static peel::UniquePtr<Point>
  alloc () noexcept
  {
    ::graphene_point_t *_peel_return = graphene_point_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Point>::adopt_ref (reinterpret_cast<Point *> (_peel_return));
  }

  peel_arg_in (2) peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  float
  distance (const Point *b, float *d_x, float *d_y) const noexcept
  {
    const ::graphene_point_t *_peel_this = reinterpret_cast<const ::graphene_point_t *> (this);
    const ::graphene_point_t *_peel_b = reinterpret_cast<const ::graphene_point_t *> (b);
    return graphene_point_distance (_peel_this, _peel_b, d_x, d_y);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Point *b) const noexcept
  {
    const ::graphene_point_t *_peel_this = reinterpret_cast<const ::graphene_point_t *> (this);
    const ::graphene_point_t *_peel_b = reinterpret_cast<const ::graphene_point_t *> (b);
    _Bool _peel_return = graphene_point_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  peel_returns_nonnull
  Point *
  init (float x, float y) noexcept
  {
    ::graphene_point_t *_peel_this = reinterpret_cast<::graphene_point_t *> (this);
    ::graphene_point_t *_peel_return = graphene_point_init (_peel_this, x, y);
    peel_assume (_peel_return);
    return reinterpret_cast<Point *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Point *
  init_from_point (const Point *src) noexcept
  {
    ::graphene_point_t *_peel_this = reinterpret_cast<::graphene_point_t *> (this);
    const ::graphene_point_t *_peel_src = reinterpret_cast<const ::graphene_point_t *> (src);
    ::graphene_point_t *_peel_return = graphene_point_init_from_point (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Point *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Point *
  init_from_vec2 (const Vec2 *src) noexcept
  {
    ::graphene_point_t *_peel_this = reinterpret_cast<::graphene_point_t *> (this);
    const ::graphene_vec2_t *_peel_src = reinterpret_cast<const ::graphene_vec2_t *> (src);
    ::graphene_point_t *_peel_return = graphene_point_init_from_vec2 (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Point *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  interpolate (const Point *b, double factor, Point *res) const noexcept
  {
    const ::graphene_point_t *_peel_this = reinterpret_cast<const ::graphene_point_t *> (this);
    const ::graphene_point_t *_peel_b = reinterpret_cast<const ::graphene_point_t *> (b);
    ::graphene_point_t *_peel_res = reinterpret_cast<::graphene_point_t *> (res);
    graphene_point_interpolate (_peel_this, _peel_b, factor, _peel_res);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  near_ (const Point *b, float epsilon) const noexcept
  {
    const ::graphene_point_t *_peel_this = reinterpret_cast<const ::graphene_point_t *> (this);
    const ::graphene_point_t *_peel_b = reinterpret_cast<const ::graphene_point_t *> (b);
    _Bool _peel_return = graphene_point_near (_peel_this, _peel_b, epsilon);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  to_vec2 (Vec2 *v) const noexcept
  {
    const ::graphene_point_t *_peel_this = reinterpret_cast<const ::graphene_point_t *> (this);
    ::graphene_vec2_t *_peel_v = reinterpret_cast<::graphene_vec2_t *> (v);
    graphene_point_to_vec2 (_peel_this, _peel_v);
  }

  peel_returns_nonnull
  static const Point *
  zero () noexcept
  {
    const ::graphene_point_t *_peel_return = graphene_point_zero ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Point *> (_peel_return);
  }
}; /* record Point */

static_assert (sizeof (Point) == sizeof (::graphene_point_t),
               "Point size mismatch");
static_assert (alignof (Point) == alignof (::graphene_point_t),
               "Point align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
