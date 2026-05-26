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
struct Vec3;
struct Vec4;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Vec4> ()
{
  return graphene_vec4_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Vec4>
{
  typedef UniquePtr<Graphene::Vec4> OwnedType;
  typedef const Graphene::Vec4 * UnownedType;

  static const Graphene::Vec4 *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Vec4 *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Vec4 * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Vec4>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Vec4>::adopt_ref (reinterpret_cast<Graphene::Vec4 *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Vec4> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Vec4 *
  cast_for_create (const Graphene::Vec4 * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Vec4>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Vec4> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Vec4>
{
  static void
  free (Graphene::Vec4 *ptr)
  {
    graphene_vec4_free (reinterpret_cast<::graphene_vec4_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Vec4
{
private:
  ::graphene_vec4_t inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Vec4>
  alloc () noexcept
  {
    ::graphene_vec4_t *_peel_return = graphene_vec4_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Vec4>::adopt_ref (reinterpret_cast<Vec4 *> (_peel_return));
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  add (const Vec4 *b, Vec4 *res) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    const ::graphene_vec4_t *_peel_b = reinterpret_cast<const ::graphene_vec4_t *> (b);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec4_add (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  divide (const Vec4 *b, Vec4 *res) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    const ::graphene_vec4_t *_peel_b = reinterpret_cast<const ::graphene_vec4_t *> (b);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec4_divide (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  float
  dot (const Vec4 *b) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    const ::graphene_vec4_t *_peel_b = reinterpret_cast<const ::graphene_vec4_t *> (b);
    return graphene_vec4_dot (_peel_this, _peel_b);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Vec4 *v2) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    const ::graphene_vec4_t *_peel_v2 = reinterpret_cast<const ::graphene_vec4_t *> (v2);
    _Bool _peel_return = graphene_vec4_equal (_peel_this, _peel_v2);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  float
  get_w () const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    return graphene_vec4_get_w (_peel_this);
  }

  float
  get_x () const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    return graphene_vec4_get_x (_peel_this);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_xy (Vec2 *res) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    graphene_vec4_get_xy (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_xyz (Vec3 *res) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec4_get_xyz (_peel_this, _peel_res);
  }

  float
  get_y () const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    return graphene_vec4_get_y (_peel_this);
  }

  float
  get_z () const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    return graphene_vec4_get_z (_peel_this);
  }

  peel_returns_nonnull
  Vec4 *
  init (float x, float y, float z, float w) noexcept
  {
    ::graphene_vec4_t *_peel_this = reinterpret_cast<::graphene_vec4_t *> (this);
    ::graphene_vec4_t *_peel_return = graphene_vec4_init (_peel_this, x, y, z, w);
    peel_assume (_peel_return);
    return reinterpret_cast<Vec4 *> (_peel_return);
  }

  peel_returns_nonnull
  Vec4 *
  init_from_float (const float (&src)[4]) noexcept
  {
    ::graphene_vec4_t *_peel_this = reinterpret_cast<::graphene_vec4_t *> (this);
    const float *_peel_src = reinterpret_cast<const float *> (src);
    ::graphene_vec4_t *_peel_return = graphene_vec4_init_from_float (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Vec4 *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Vec4 *
  init_from_vec2 (const Vec2 *src, float z, float w) noexcept
  {
    ::graphene_vec4_t *_peel_this = reinterpret_cast<::graphene_vec4_t *> (this);
    const ::graphene_vec2_t *_peel_src = reinterpret_cast<const ::graphene_vec2_t *> (src);
    ::graphene_vec4_t *_peel_return = graphene_vec4_init_from_vec2 (_peel_this, _peel_src, z, w);
    peel_assume (_peel_return);
    return reinterpret_cast<Vec4 *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Vec4 *
  init_from_vec3 (const Vec3 *src, float w) noexcept
  {
    ::graphene_vec4_t *_peel_this = reinterpret_cast<::graphene_vec4_t *> (this);
    const ::graphene_vec3_t *_peel_src = reinterpret_cast<const ::graphene_vec3_t *> (src);
    ::graphene_vec4_t *_peel_return = graphene_vec4_init_from_vec3 (_peel_this, _peel_src, w);
    peel_assume (_peel_return);
    return reinterpret_cast<Vec4 *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Vec4 *
  init_from_vec4 (const Vec4 *src) noexcept
  {
    ::graphene_vec4_t *_peel_this = reinterpret_cast<::graphene_vec4_t *> (this);
    const ::graphene_vec4_t *_peel_src = reinterpret_cast<const ::graphene_vec4_t *> (src);
    ::graphene_vec4_t *_peel_return = graphene_vec4_init_from_vec4 (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Vec4 *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  interpolate (const Vec4 *v2, double factor, Vec4 *res) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    const ::graphene_vec4_t *_peel_v2 = reinterpret_cast<const ::graphene_vec4_t *> (v2);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec4_interpolate (_peel_this, _peel_v2, factor, _peel_res);
  }

  float
  length () const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    return graphene_vec4_length (_peel_this);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  max_ (const Vec4 *b, Vec4 *res) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    const ::graphene_vec4_t *_peel_b = reinterpret_cast<const ::graphene_vec4_t *> (b);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec4_max (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  min_ (const Vec4 *b, Vec4 *res) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    const ::graphene_vec4_t *_peel_b = reinterpret_cast<const ::graphene_vec4_t *> (b);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec4_min (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  multiply (const Vec4 *b, Vec4 *res) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    const ::graphene_vec4_t *_peel_b = reinterpret_cast<const ::graphene_vec4_t *> (b);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec4_multiply (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  near_ (const Vec4 *v2, float epsilon) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    const ::graphene_vec4_t *_peel_v2 = reinterpret_cast<const ::graphene_vec4_t *> (v2);
    _Bool _peel_return = graphene_vec4_near (_peel_this, _peel_v2, epsilon);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  negate (Vec4 *res) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec4_negate (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  normalize (Vec4 *res) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec4_normalize (_peel_this, _peel_res);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  scale (float factor, Vec4 *res) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec4_scale (_peel_this, factor, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  subtract (const Vec4 *b, Vec4 *res) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    const ::graphene_vec4_t *_peel_b = reinterpret_cast<const ::graphene_vec4_t *> (b);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec4_subtract (_peel_this, _peel_b, _peel_res);
  }

  void
  to_float (float (&dest)[4]) const noexcept
  {
    const ::graphene_vec4_t *_peel_this = reinterpret_cast<const ::graphene_vec4_t *> (this);
    float *_peel_dest = reinterpret_cast<float *> (dest);
    graphene_vec4_to_float (_peel_this, _peel_dest);
  }

  peel_returns_nonnull
  static const Vec4 *
  one () noexcept
  {
    const ::graphene_vec4_t *_peel_return = graphene_vec4_one ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec4 *> (_peel_return);
  }

  peel_returns_nonnull
  static const Vec4 *
  w_axis () noexcept
  {
    const ::graphene_vec4_t *_peel_return = graphene_vec4_w_axis ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec4 *> (_peel_return);
  }

  peel_returns_nonnull
  static const Vec4 *
  x_axis () noexcept
  {
    const ::graphene_vec4_t *_peel_return = graphene_vec4_x_axis ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec4 *> (_peel_return);
  }

  peel_returns_nonnull
  static const Vec4 *
  y_axis () noexcept
  {
    const ::graphene_vec4_t *_peel_return = graphene_vec4_y_axis ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec4 *> (_peel_return);
  }

  peel_returns_nonnull
  static const Vec4 *
  z_axis () noexcept
  {
    const ::graphene_vec4_t *_peel_return = graphene_vec4_z_axis ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec4 *> (_peel_return);
  }

  peel_returns_nonnull
  static const Vec4 *
  zero () noexcept
  {
    const ::graphene_vec4_t *_peel_return = graphene_vec4_zero ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec4 *> (_peel_return);
  }
}; /* record Vec4 */

static_assert (sizeof (Vec4) == sizeof (::graphene_vec4_t),
               "Vec4 size mismatch");
static_assert (alignof (Vec4) == alignof (::graphene_vec4_t),
               "Vec4 align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
