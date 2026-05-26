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
struct Quad;
struct Rect;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Quad> ()
{
  return graphene_quad_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Quad>
{
  typedef UniquePtr<Graphene::Quad> OwnedType;
  typedef const Graphene::Quad * UnownedType;

  static const Graphene::Quad *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Quad *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Quad * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Quad>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Quad>::adopt_ref (reinterpret_cast<Graphene::Quad *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Quad> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Quad *
  cast_for_create (const Graphene::Quad * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Quad>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Quad> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Quad>
{
  static void
  free (Graphene::Quad *ptr)
  {
    graphene_quad_free (reinterpret_cast<::graphene_quad_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Quad
{
private:
  ::graphene_quad_t inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Quad>
  alloc () noexcept
  {
    ::graphene_quad_t *_peel_return = graphene_quad_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Quad>::adopt_ref (reinterpret_cast<Quad *> (_peel_return));
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  bounds (Rect *r) const noexcept
  {
    const ::graphene_quad_t *_peel_this = reinterpret_cast<const ::graphene_quad_t *> (this);
    ::graphene_rect_t *_peel_r = reinterpret_cast<::graphene_rect_t *> (r);
    graphene_quad_bounds (_peel_this, _peel_r);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  contains (const Point *p) const noexcept
  {
    const ::graphene_quad_t *_peel_this = reinterpret_cast<const ::graphene_quad_t *> (this);
    const ::graphene_point_t *_peel_p = reinterpret_cast<const ::graphene_point_t *> (p);
    _Bool _peel_return = graphene_quad_contains (_peel_this, _peel_p);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  peel_returns_nonnull
  const Point *
  get_point (unsigned index_) const noexcept
  {
    const ::graphene_quad_t *_peel_this = reinterpret_cast<const ::graphene_quad_t *> (this);
    const ::graphene_point_t *_peel_return = graphene_quad_get_point (_peel_this, index_);
    peel_assume (_peel_return);
    return reinterpret_cast<const Point *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_arg_in (5) peel_nonnull_args (2, 3, 4, 5) peel_returns_nonnull
  Quad *
  init (const Point *p1, const Point *p2, const Point *p3, const Point *p4) noexcept
  {
    ::graphene_quad_t *_peel_this = reinterpret_cast<::graphene_quad_t *> (this);
    const ::graphene_point_t *_peel_p1 = reinterpret_cast<const ::graphene_point_t *> (p1);
    const ::graphene_point_t *_peel_p2 = reinterpret_cast<const ::graphene_point_t *> (p2);
    const ::graphene_point_t *_peel_p3 = reinterpret_cast<const ::graphene_point_t *> (p3);
    const ::graphene_point_t *_peel_p4 = reinterpret_cast<const ::graphene_point_t *> (p4);
    ::graphene_quad_t *_peel_return = graphene_quad_init (_peel_this, _peel_p1, _peel_p2, _peel_p3, _peel_p4);
    peel_assume (_peel_return);
    return reinterpret_cast<Quad *> (_peel_return);
  }

  peel_returns_nonnull
  Quad *
  init_from_points (const Point (&points)[4]) noexcept
  {
    ::graphene_quad_t *_peel_this = reinterpret_cast<::graphene_quad_t *> (this);
    const ::graphene_point_t *_peel_points = reinterpret_cast<const ::graphene_point_t *> (points);
    ::graphene_quad_t *_peel_return = graphene_quad_init_from_points (_peel_this, _peel_points);
    peel_assume (_peel_return);
    return reinterpret_cast<Quad *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Quad *
  init_from_rect (const Rect *r) noexcept
  {
    ::graphene_quad_t *_peel_this = reinterpret_cast<::graphene_quad_t *> (this);
    const ::graphene_rect_t *_peel_r = reinterpret_cast<const ::graphene_rect_t *> (r);
    ::graphene_quad_t *_peel_return = graphene_quad_init_from_rect (_peel_this, _peel_r);
    peel_assume (_peel_return);
    return reinterpret_cast<Quad *> (_peel_return);
  }
}; /* record Quad */

static_assert (sizeof (Quad) == sizeof (::graphene_quad_t),
               "Quad size mismatch");
static_assert (alignof (Quad) == alignof (::graphene_quad_t),
               "Quad align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
