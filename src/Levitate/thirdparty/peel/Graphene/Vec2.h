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
struct Vec2;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Vec2> ()
{
  return graphene_vec2_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Vec2>
{
  typedef UniquePtr<Graphene::Vec2> OwnedType;
  typedef const Graphene::Vec2 * UnownedType;

  static const Graphene::Vec2 *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Vec2 *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Vec2 * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Vec2>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Vec2>::adopt_ref (reinterpret_cast<Graphene::Vec2 *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Vec2> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Vec2 *
  cast_for_create (const Graphene::Vec2 * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Vec2>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Vec2> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Vec2>
{
  static void
  free (Graphene::Vec2 *ptr)
  {
    graphene_vec2_free (reinterpret_cast<::graphene_vec2_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Vec2
{
private:
  ::graphene_vec2_t inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Vec2>
  alloc () noexcept
  {
    ::graphene_vec2_t *_peel_return = graphene_vec2_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Vec2>::adopt_ref (reinterpret_cast<Vec2 *> (_peel_return));
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  add (const Vec2 *b, Vec2 *res) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    const ::graphene_vec2_t *_peel_b = reinterpret_cast<const ::graphene_vec2_t *> (b);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    graphene_vec2_add (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  divide (const Vec2 *b, Vec2 *res) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    const ::graphene_vec2_t *_peel_b = reinterpret_cast<const ::graphene_vec2_t *> (b);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    graphene_vec2_divide (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  float
  dot (const Vec2 *b) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    const ::graphene_vec2_t *_peel_b = reinterpret_cast<const ::graphene_vec2_t *> (b);
    return graphene_vec2_dot (_peel_this, _peel_b);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Vec2 *v2) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    const ::graphene_vec2_t *_peel_v2 = reinterpret_cast<const ::graphene_vec2_t *> (v2);
    _Bool _peel_return = graphene_vec2_equal (_peel_this, _peel_v2);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  float
  get_x () const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    return graphene_vec2_get_x (_peel_this);
  }

  float
  get_y () const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    return graphene_vec2_get_y (_peel_this);
  }

  peel_returns_nonnull
  Vec2 *
  init (float x, float y) noexcept
  {
    ::graphene_vec2_t *_peel_this = reinterpret_cast<::graphene_vec2_t *> (this);
    ::graphene_vec2_t *_peel_return = graphene_vec2_init (_peel_this, x, y);
    peel_assume (_peel_return);
    return reinterpret_cast<Vec2 *> (_peel_return);
  }

  peel_returns_nonnull
  Vec2 *
  init_from_float (const float (&src)[2]) noexcept
  {
    ::graphene_vec2_t *_peel_this = reinterpret_cast<::graphene_vec2_t *> (this);
    const float *_peel_src = reinterpret_cast<const float *> (src);
    ::graphene_vec2_t *_peel_return = graphene_vec2_init_from_float (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Vec2 *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Vec2 *
  init_from_vec2 (const Vec2 *src) noexcept
  {
    ::graphene_vec2_t *_peel_this = reinterpret_cast<::graphene_vec2_t *> (this);
    const ::graphene_vec2_t *_peel_src = reinterpret_cast<const ::graphene_vec2_t *> (src);
    ::graphene_vec2_t *_peel_return = graphene_vec2_init_from_vec2 (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Vec2 *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  interpolate (const Vec2 *v2, double factor, Vec2 *res) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    const ::graphene_vec2_t *_peel_v2 = reinterpret_cast<const ::graphene_vec2_t *> (v2);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    graphene_vec2_interpolate (_peel_this, _peel_v2, factor, _peel_res);
  }

  float
  length () const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    return graphene_vec2_length (_peel_this);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  max_ (const Vec2 *b, Vec2 *res) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    const ::graphene_vec2_t *_peel_b = reinterpret_cast<const ::graphene_vec2_t *> (b);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    graphene_vec2_max (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  min_ (const Vec2 *b, Vec2 *res) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    const ::graphene_vec2_t *_peel_b = reinterpret_cast<const ::graphene_vec2_t *> (b);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    graphene_vec2_min (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  multiply (const Vec2 *b, Vec2 *res) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    const ::graphene_vec2_t *_peel_b = reinterpret_cast<const ::graphene_vec2_t *> (b);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    graphene_vec2_multiply (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  near_ (const Vec2 *v2, float epsilon) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    const ::graphene_vec2_t *_peel_v2 = reinterpret_cast<const ::graphene_vec2_t *> (v2);
    _Bool _peel_return = graphene_vec2_near (_peel_this, _peel_v2, epsilon);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  negate (Vec2 *res) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    graphene_vec2_negate (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  normalize (Vec2 *res) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    graphene_vec2_normalize (_peel_this, _peel_res);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  scale (float factor, Vec2 *res) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    graphene_vec2_scale (_peel_this, factor, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  subtract (const Vec2 *b, Vec2 *res) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    const ::graphene_vec2_t *_peel_b = reinterpret_cast<const ::graphene_vec2_t *> (b);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    graphene_vec2_subtract (_peel_this, _peel_b, _peel_res);
  }

  void
  to_float (float (&dest)[2]) const noexcept
  {
    const ::graphene_vec2_t *_peel_this = reinterpret_cast<const ::graphene_vec2_t *> (this);
    float *_peel_dest = reinterpret_cast<float *> (dest);
    graphene_vec2_to_float (_peel_this, _peel_dest);
  }

  peel_returns_nonnull
  static const Vec2 *
  one () noexcept
  {
    const ::graphene_vec2_t *_peel_return = graphene_vec2_one ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec2 *> (_peel_return);
  }

  peel_returns_nonnull
  static const Vec2 *
  x_axis () noexcept
  {
    const ::graphene_vec2_t *_peel_return = graphene_vec2_x_axis ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec2 *> (_peel_return);
  }

  peel_returns_nonnull
  static const Vec2 *
  y_axis () noexcept
  {
    const ::graphene_vec2_t *_peel_return = graphene_vec2_y_axis ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec2 *> (_peel_return);
  }

  peel_returns_nonnull
  static const Vec2 *
  zero () noexcept
  {
    const ::graphene_vec2_t *_peel_return = graphene_vec2_zero ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec2 *> (_peel_return);
  }
}; /* record Vec2 */

static_assert (sizeof (Vec2) == sizeof (::graphene_vec2_t),
               "Vec2 size mismatch");
static_assert (alignof (Vec2) == alignof (::graphene_vec2_t),
               "Vec2 align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
