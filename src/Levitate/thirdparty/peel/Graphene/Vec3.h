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
GObject::Type::of<Graphene::Vec3> ()
{
  return graphene_vec3_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Vec3>
{
  typedef UniquePtr<Graphene::Vec3> OwnedType;
  typedef const Graphene::Vec3 * UnownedType;

  static const Graphene::Vec3 *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Vec3 *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Vec3 * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Vec3>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Vec3>::adopt_ref (reinterpret_cast<Graphene::Vec3 *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Vec3> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Vec3 *
  cast_for_create (const Graphene::Vec3 * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Vec3>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Vec3> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Vec3>
{
  static void
  free (Graphene::Vec3 *ptr)
  {
    graphene_vec3_free (reinterpret_cast<::graphene_vec3_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Vec3
{
private:
  ::graphene_vec3_t inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Vec3>
  alloc () noexcept
  {
    ::graphene_vec3_t *_peel_return = graphene_vec3_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Vec3>::adopt_ref (reinterpret_cast<Vec3 *> (_peel_return));
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  add (const Vec3 *b, Vec3 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    const ::graphene_vec3_t *_peel_b = reinterpret_cast<const ::graphene_vec3_t *> (b);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec3_add (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  cross (const Vec3 *b, Vec3 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    const ::graphene_vec3_t *_peel_b = reinterpret_cast<const ::graphene_vec3_t *> (b);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec3_cross (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  divide (const Vec3 *b, Vec3 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    const ::graphene_vec3_t *_peel_b = reinterpret_cast<const ::graphene_vec3_t *> (b);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec3_divide (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  float
  dot (const Vec3 *b) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    const ::graphene_vec3_t *_peel_b = reinterpret_cast<const ::graphene_vec3_t *> (b);
    return graphene_vec3_dot (_peel_this, _peel_b);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Vec3 *v2) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    const ::graphene_vec3_t *_peel_v2 = reinterpret_cast<const ::graphene_vec3_t *> (v2);
    _Bool _peel_return = graphene_vec3_equal (_peel_this, _peel_v2);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  float
  get_x () const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    return graphene_vec3_get_x (_peel_this);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_xy (Vec2 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    ::graphene_vec2_t *_peel_res = reinterpret_cast<::graphene_vec2_t *> (res);
    graphene_vec3_get_xy (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_xy0 (Vec3 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec3_get_xy0 (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_xyz0 (Vec4 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec3_get_xyz0 (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_xyz1 (Vec4 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec3_get_xyz1 (_peel_this, _peel_res);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  get_xyzw (float w, Vec4 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_vec3_get_xyzw (_peel_this, w, _peel_res);
  }

  float
  get_y () const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    return graphene_vec3_get_y (_peel_this);
  }

  float
  get_z () const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    return graphene_vec3_get_z (_peel_this);
  }

  peel_returns_nonnull
  Vec3 *
  init (float x, float y, float z) noexcept
  {
    ::graphene_vec3_t *_peel_this = reinterpret_cast<::graphene_vec3_t *> (this);
    ::graphene_vec3_t *_peel_return = graphene_vec3_init (_peel_this, x, y, z);
    peel_assume (_peel_return);
    return reinterpret_cast<Vec3 *> (_peel_return);
  }

  peel_returns_nonnull
  Vec3 *
  init_from_float (const float (&src)[3]) noexcept
  {
    ::graphene_vec3_t *_peel_this = reinterpret_cast<::graphene_vec3_t *> (this);
    const float *_peel_src = reinterpret_cast<const float *> (src);
    ::graphene_vec3_t *_peel_return = graphene_vec3_init_from_float (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Vec3 *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Vec3 *
  init_from_vec3 (const Vec3 *src) noexcept
  {
    ::graphene_vec3_t *_peel_this = reinterpret_cast<::graphene_vec3_t *> (this);
    const ::graphene_vec3_t *_peel_src = reinterpret_cast<const ::graphene_vec3_t *> (src);
    ::graphene_vec3_t *_peel_return = graphene_vec3_init_from_vec3 (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Vec3 *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  interpolate (const Vec3 *v2, double factor, Vec3 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    const ::graphene_vec3_t *_peel_v2 = reinterpret_cast<const ::graphene_vec3_t *> (v2);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec3_interpolate (_peel_this, _peel_v2, factor, _peel_res);
  }

  float
  length () const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    return graphene_vec3_length (_peel_this);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  max_ (const Vec3 *b, Vec3 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    const ::graphene_vec3_t *_peel_b = reinterpret_cast<const ::graphene_vec3_t *> (b);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec3_max (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  min_ (const Vec3 *b, Vec3 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    const ::graphene_vec3_t *_peel_b = reinterpret_cast<const ::graphene_vec3_t *> (b);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec3_min (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  multiply (const Vec3 *b, Vec3 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    const ::graphene_vec3_t *_peel_b = reinterpret_cast<const ::graphene_vec3_t *> (b);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec3_multiply (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  near_ (const Vec3 *v2, float epsilon) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    const ::graphene_vec3_t *_peel_v2 = reinterpret_cast<const ::graphene_vec3_t *> (v2);
    _Bool _peel_return = graphene_vec3_near (_peel_this, _peel_v2, epsilon);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  negate (Vec3 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec3_negate (_peel_this, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  normalize (Vec3 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec3_normalize (_peel_this, _peel_res);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  scale (float factor, Vec3 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec3_scale (_peel_this, factor, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  subtract (const Vec3 *b, Vec3 *res) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    const ::graphene_vec3_t *_peel_b = reinterpret_cast<const ::graphene_vec3_t *> (b);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_vec3_subtract (_peel_this, _peel_b, _peel_res);
  }

  void
  to_float (float (&dest)[3]) const noexcept
  {
    const ::graphene_vec3_t *_peel_this = reinterpret_cast<const ::graphene_vec3_t *> (this);
    float *_peel_dest = reinterpret_cast<float *> (dest);
    graphene_vec3_to_float (_peel_this, _peel_dest);
  }

  peel_returns_nonnull
  static const Vec3 *
  one () noexcept
  {
    const ::graphene_vec3_t *_peel_return = graphene_vec3_one ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec3 *> (_peel_return);
  }

  peel_returns_nonnull
  static const Vec3 *
  x_axis () noexcept
  {
    const ::graphene_vec3_t *_peel_return = graphene_vec3_x_axis ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec3 *> (_peel_return);
  }

  peel_returns_nonnull
  static const Vec3 *
  y_axis () noexcept
  {
    const ::graphene_vec3_t *_peel_return = graphene_vec3_y_axis ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec3 *> (_peel_return);
  }

  peel_returns_nonnull
  static const Vec3 *
  z_axis () noexcept
  {
    const ::graphene_vec3_t *_peel_return = graphene_vec3_z_axis ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec3 *> (_peel_return);
  }

  peel_returns_nonnull
  static const Vec3 *
  zero () noexcept
  {
    const ::graphene_vec3_t *_peel_return = graphene_vec3_zero ();
    peel_assume (_peel_return);
    return reinterpret_cast<const Vec3 *> (_peel_return);
  }
}; /* record Vec3 */

static_assert (sizeof (Vec3) == sizeof (::graphene_vec3_t),
               "Vec3 size mismatch");
static_assert (alignof (Vec3) == alignof (::graphene_vec3_t),
               "Vec3 align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
