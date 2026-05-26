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
#include <peel/Graphene/Point.h>
#include <peel/Graphene/Size.h>

peel_begin_header

namespace peel
{
namespace Graphene
{
struct Point;
struct Rect;
struct Size;
struct Vec2;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Rect> ()
{
  return graphene_rect_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Rect>
{
  typedef UniquePtr<Graphene::Rect> OwnedType;
  typedef const Graphene::Rect * UnownedType;

  static const Graphene::Rect *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Rect *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Rect * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Rect>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Rect>::adopt_ref (reinterpret_cast<Graphene::Rect *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Rect> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Rect *
  cast_for_create (const Graphene::Rect * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Rect>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Rect> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Rect>
{
  static void
  free (Graphene::Rect *ptr)
  {
    graphene_rect_free (reinterpret_cast<::graphene_rect_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Rect
{
private:

public:
  Point origin;
  Size size;

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  contains_point (const Point *p) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    const ::graphene_point_t *_peel_p = reinterpret_cast<const ::graphene_point_t *> (p);
    _Bool _peel_return = graphene_rect_contains_point (_peel_this, _peel_p);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  contains_rect (const Rect *b) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    const ::graphene_rect_t *_peel_b = reinterpret_cast<const ::graphene_rect_t *> (b);
    _Bool _peel_return = graphene_rect_contains_rect (_peel_this, _peel_b);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Rect *b) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    const ::graphene_rect_t *_peel_b = reinterpret_cast<const ::graphene_rect_t *> (b);
    _Bool _peel_return = graphene_rect_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  expand (const Point *p, Rect *res) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    const ::graphene_point_t *_peel_p = reinterpret_cast<const ::graphene_point_t *> (p);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    graphene_rect_expand (_peel_this, _peel_p, _peel_res);
  }

  /* free bound as UniqueTraits */

  float
  get_area () const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    return graphene_rect_get_area (_peel_this);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_bottom_left (Point *p) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    ::graphene_point_t *_peel_p = reinterpret_cast<::graphene_point_t *> (p);
    graphene_rect_get_bottom_left (_peel_this, _peel_p);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_bottom_right (Point *p) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    ::graphene_point_t *_peel_p = reinterpret_cast<::graphene_point_t *> (p);
    graphene_rect_get_bottom_right (_peel_this, _peel_p);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_center (Point *p) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    ::graphene_point_t *_peel_p = reinterpret_cast<::graphene_point_t *> (p);
    graphene_rect_get_center (_peel_this, _peel_p);
  }

  float
  get_height () const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    return graphene_rect_get_height (_peel_this);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_top_left (Point *p) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    ::graphene_point_t *_peel_p = reinterpret_cast<::graphene_point_t *> (p);
    graphene_rect_get_top_left (_peel_this, _peel_p);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_top_right (Point *p) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    ::graphene_point_t *_peel_p = reinterpret_cast<::graphene_point_t *> (p);
    graphene_rect_get_top_right (_peel_this, _peel_p);
  }

  void
  get_vertices (Vec2 (&vertices)[4]) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    ::graphene_vec2_t *_peel_vertices = reinterpret_cast<::graphene_vec2_t *> (vertices);
    graphene_rect_get_vertices (_peel_this, _peel_vertices);
  }

  float
  get_width () const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    return graphene_rect_get_width (_peel_this);
  }

  float
  get_x () const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    return graphene_rect_get_x (_peel_this);
  }

  float
  get_y () const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    return graphene_rect_get_y (_peel_this);
  }

  peel_returns_nonnull
  Rect *
  init (float x, float y, float width, float height) noexcept
  {
    ::graphene_rect_t *_peel_this = reinterpret_cast<::graphene_rect_t *> (this);
    ::graphene_rect_t *_peel_return = graphene_rect_init (_peel_this, x, y, width, height);
    peel_assume (_peel_return);
    return reinterpret_cast<Rect *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Rect *
  init_from_rect (const Rect *src) noexcept
  {
    ::graphene_rect_t *_peel_this = reinterpret_cast<::graphene_rect_t *> (this);
    const ::graphene_rect_t *_peel_src = reinterpret_cast<const ::graphene_rect_t *> (src);
    ::graphene_rect_t *_peel_return = graphene_rect_init_from_rect (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Rect *> (_peel_return);
  }

  peel_returns_nonnull
  Rect *
  inset (float d_x, float d_y) noexcept
  {
    ::graphene_rect_t *_peel_this = reinterpret_cast<::graphene_rect_t *> (this);
    ::graphene_rect_t *_peel_return = graphene_rect_inset (_peel_this, d_x, d_y);
    peel_assume (_peel_return);
    return reinterpret_cast<Rect *> (_peel_return);
  }

  peel_arg_out (4) peel_nonnull_args (4)
  void
  inset_r (float d_x, float d_y, Rect *res) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    graphene_rect_inset_r (_peel_this, d_x, d_y, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  interpolate (const Rect *b, double factor, Rect *res) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    const ::graphene_rect_t *_peel_b = reinterpret_cast<const ::graphene_rect_t *> (b);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    graphene_rect_interpolate (_peel_this, _peel_b, factor, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2)
  bool
  intersection (const Rect *b, Rect *res) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    const ::graphene_rect_t *_peel_b = reinterpret_cast<const ::graphene_rect_t *> (b);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    _Bool _peel_return = graphene_rect_intersection (_peel_this, _peel_b, _peel_res);
    return !!_peel_return;
  }

  peel_returns_nonnull
  Rect *
  normalize () noexcept
  {
    ::graphene_rect_t *_peel_this = reinterpret_cast<::graphene_rect_t *> (this);
    ::graphene_rect_t *_peel_return = graphene_rect_normalize (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Rect *> (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  normalize_r (Rect *res) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    graphene_rect_normalize_r (_peel_this, _peel_res);
  }

  peel_returns_nonnull
  Rect *
  offset (float d_x, float d_y) noexcept
  {
    ::graphene_rect_t *_peel_this = reinterpret_cast<::graphene_rect_t *> (this);
    ::graphene_rect_t *_peel_return = graphene_rect_offset (_peel_this, d_x, d_y);
    peel_assume (_peel_return);
    return reinterpret_cast<Rect *> (_peel_return);
  }

  peel_arg_out (4) peel_nonnull_args (4)
  void
  offset_r (float d_x, float d_y, Rect *res) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    graphene_rect_offset_r (_peel_this, d_x, d_y, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  round (Rect *res) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    graphene_rect_round (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  round_extents (Rect *res) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    graphene_rect_round_extents (_peel_this, _peel_res);
  }

  peel_returns_nonnull
  Rect *
  round_to_pixel () noexcept
  {
    ::graphene_rect_t *_peel_this = reinterpret_cast<::graphene_rect_t *> (this);
    ::graphene_rect_t *_peel_return = graphene_rect_round_to_pixel (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Rect *> (_peel_return);
  }

  peel_arg_out (4) peel_nonnull_args (4)
  void
  scale (float s_h, float s_v, Rect *res) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    graphene_rect_scale (_peel_this, s_h, s_v, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  union_ (const Rect *b, Rect *res) const noexcept
  {
    const ::graphene_rect_t *_peel_this = reinterpret_cast<const ::graphene_rect_t *> (this);
    const ::graphene_rect_t *_peel_b = reinterpret_cast<const ::graphene_rect_t *> (b);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    graphene_rect_union (_peel_this, _peel_b, _peel_res);
  }

  static peel::UniquePtr<Rect>
  alloc () noexcept
  {
    ::graphene_rect_t *_peel_return = graphene_rect_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Rect>::adopt_ref (reinterpret_cast<Rect *> (_peel_return));
  }

  peel_returns_nonnull
  static const Rect *
  zero () noexcept
  {
    const ::graphene_rect_t *_peel_return = graphene_rect_zero ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Rect *> (_peel_return);
  }
}; /* record Rect */

static_assert (sizeof (Rect) == sizeof (::graphene_rect_t),
               "Rect size mismatch");
static_assert (alignof (Rect) == alignof (::graphene_rect_t),
               "Rect align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
