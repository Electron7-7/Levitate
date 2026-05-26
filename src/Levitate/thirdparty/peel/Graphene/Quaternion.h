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
struct Euler;
struct Matrix;
struct Quaternion;
struct Vec3;
struct Vec4;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Quaternion> ()
{
  return graphene_quaternion_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Quaternion>
{
  typedef UniquePtr<Graphene::Quaternion> OwnedType;
  typedef const Graphene::Quaternion * UnownedType;

  static const Graphene::Quaternion *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Quaternion *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Quaternion * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Quaternion>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Quaternion>::adopt_ref (reinterpret_cast<Graphene::Quaternion *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Quaternion> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Quaternion *
  cast_for_create (const Graphene::Quaternion * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Quaternion>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Quaternion> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Quaternion>
{
  static void
  free (Graphene::Quaternion *ptr)
  {
    graphene_quaternion_free (reinterpret_cast<::graphene_quaternion_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Quaternion
{
private:
  ::graphene_quaternion_t inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Quaternion>
  alloc () noexcept
  {
    ::graphene_quaternion_t *_peel_return = graphene_quaternion_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Quaternion>::adopt_ref (reinterpret_cast<Quaternion *> (_peel_return));
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  add (const Quaternion *b, Quaternion *res) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    const ::graphene_quaternion_t *_peel_b = reinterpret_cast<const ::graphene_quaternion_t *> (b);
    ::graphene_quaternion_t *_peel_res = reinterpret_cast<::graphene_quaternion_t *> (res);
    graphene_quaternion_add (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  float
  dot (const Quaternion *b) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    const ::graphene_quaternion_t *_peel_b = reinterpret_cast<const ::graphene_quaternion_t *> (b);
    return graphene_quaternion_dot (_peel_this, _peel_b);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Quaternion *b) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    const ::graphene_quaternion_t *_peel_b = reinterpret_cast<const ::graphene_quaternion_t *> (b);
    _Bool _peel_return = graphene_quaternion_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  peel_returns_nonnull
  Quaternion *
  init (float x, float y, float z, float w) noexcept
  {
    ::graphene_quaternion_t *_peel_this = reinterpret_cast<::graphene_quaternion_t *> (this);
    ::graphene_quaternion_t *_peel_return = graphene_quaternion_init (_peel_this, x, y, z, w);
    peel_assume (_peel_return);
    return reinterpret_cast<Quaternion *> (_peel_return);
  }

  peel_arg_in (3) peel_nonnull_args (3) peel_returns_nonnull
  Quaternion *
  init_from_angle_vec3 (float angle, const Vec3 *axis) noexcept
  {
    ::graphene_quaternion_t *_peel_this = reinterpret_cast<::graphene_quaternion_t *> (this);
    const ::graphene_vec3_t *_peel_axis = reinterpret_cast<const ::graphene_vec3_t *> (axis);
    ::graphene_quaternion_t *_peel_return = graphene_quaternion_init_from_angle_vec3 (_peel_this, angle, _peel_axis);
    peel_assume (_peel_return);
    return reinterpret_cast<Quaternion *> (_peel_return);
  }

  peel_returns_nonnull
  Quaternion *
  init_from_angles (float deg_x, float deg_y, float deg_z) noexcept
  {
    ::graphene_quaternion_t *_peel_this = reinterpret_cast<::graphene_quaternion_t *> (this);
    ::graphene_quaternion_t *_peel_return = graphene_quaternion_init_from_angles (_peel_this, deg_x, deg_y, deg_z);
    peel_assume (_peel_return);
    return reinterpret_cast<Quaternion *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Quaternion *
  init_from_euler (const Euler *e) noexcept
  {
    ::graphene_quaternion_t *_peel_this = reinterpret_cast<::graphene_quaternion_t *> (this);
    const ::graphene_euler_t *_peel_e = reinterpret_cast<const ::graphene_euler_t *> (e);
    ::graphene_quaternion_t *_peel_return = graphene_quaternion_init_from_euler (_peel_this, _peel_e);
    peel_assume (_peel_return);
    return reinterpret_cast<Quaternion *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Quaternion *
  init_from_matrix (const Matrix *m) noexcept
  {
    ::graphene_quaternion_t *_peel_this = reinterpret_cast<::graphene_quaternion_t *> (this);
    const ::graphene_matrix_t *_peel_m = reinterpret_cast<const ::graphene_matrix_t *> (m);
    ::graphene_quaternion_t *_peel_return = graphene_quaternion_init_from_matrix (_peel_this, _peel_m);
    peel_assume (_peel_return);
    return reinterpret_cast<Quaternion *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Quaternion *
  init_from_quaternion (const Quaternion *src) noexcept
  {
    ::graphene_quaternion_t *_peel_this = reinterpret_cast<::graphene_quaternion_t *> (this);
    const ::graphene_quaternion_t *_peel_src = reinterpret_cast<const ::graphene_quaternion_t *> (src);
    ::graphene_quaternion_t *_peel_return = graphene_quaternion_init_from_quaternion (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Quaternion *> (_peel_return);
  }

  peel_returns_nonnull
  Quaternion *
  init_from_radians (float rad_x, float rad_y, float rad_z) noexcept
  {
    ::graphene_quaternion_t *_peel_this = reinterpret_cast<::graphene_quaternion_t *> (this);
    ::graphene_quaternion_t *_peel_return = graphene_quaternion_init_from_radians (_peel_this, rad_x, rad_y, rad_z);
    peel_assume (_peel_return);
    return reinterpret_cast<Quaternion *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Quaternion *
  init_from_vec4 (const Vec4 *src) noexcept
  {
    ::graphene_quaternion_t *_peel_this = reinterpret_cast<::graphene_quaternion_t *> (this);
    const ::graphene_vec4_t *_peel_src = reinterpret_cast<const ::graphene_vec4_t *> (src);
    ::graphene_quaternion_t *_peel_return = graphene_quaternion_init_from_vec4 (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Quaternion *> (_peel_return);
  }

  peel_returns_nonnull
  Quaternion *
  init_identity () noexcept
  {
    ::graphene_quaternion_t *_peel_this = reinterpret_cast<::graphene_quaternion_t *> (this);
    ::graphene_quaternion_t *_peel_return = graphene_quaternion_init_identity (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Quaternion *> (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  invert (Quaternion *res) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    ::graphene_quaternion_t *_peel_res = reinterpret_cast<::graphene_quaternion_t *> (res);
    graphene_quaternion_invert (_peel_this, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  multiply (const Quaternion *b, Quaternion *res) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    const ::graphene_quaternion_t *_peel_b = reinterpret_cast<const ::graphene_quaternion_t *> (b);
    ::graphene_quaternion_t *_peel_res = reinterpret_cast<::graphene_quaternion_t *> (res);
    graphene_quaternion_multiply (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  normalize (Quaternion *res) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    ::graphene_quaternion_t *_peel_res = reinterpret_cast<::graphene_quaternion_t *> (res);
    graphene_quaternion_normalize (_peel_this, _peel_res);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  scale (float factor, Quaternion *res) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    ::graphene_quaternion_t *_peel_res = reinterpret_cast<::graphene_quaternion_t *> (res);
    graphene_quaternion_scale (_peel_this, factor, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  slerp (const Quaternion *b, float factor, Quaternion *res) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    const ::graphene_quaternion_t *_peel_b = reinterpret_cast<const ::graphene_quaternion_t *> (b);
    ::graphene_quaternion_t *_peel_res = reinterpret_cast<::graphene_quaternion_t *> (res);
    graphene_quaternion_slerp (_peel_this, _peel_b, factor, _peel_res);
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  to_angle_vec3 (float *angle, Vec3 *axis) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    ::graphene_vec3_t *_peel_axis = reinterpret_cast<::graphene_vec3_t *> (axis);
    graphene_quaternion_to_angle_vec3 (_peel_this, angle, _peel_axis);
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4)
  void
  to_angles (float *deg_x, float *deg_y, float *deg_z) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    graphene_quaternion_to_angles (_peel_this, deg_x, deg_y, deg_z);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  to_matrix (Matrix *m) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    ::graphene_matrix_t *_peel_m = reinterpret_cast<::graphene_matrix_t *> (m);
    graphene_quaternion_to_matrix (_peel_this, _peel_m);
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4)
  void
  to_radians (float *rad_x, float *rad_y, float *rad_z) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    graphene_quaternion_to_radians (_peel_this, rad_x, rad_y, rad_z);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  to_vec4 (Vec4 *res) const noexcept
  {
    const ::graphene_quaternion_t *_peel_this = reinterpret_cast<const ::graphene_quaternion_t *> (this);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_quaternion_to_vec4 (_peel_this, _peel_res);
  }
}; /* record Quaternion */

static_assert (sizeof (Quaternion) == sizeof (::graphene_quaternion_t),
               "Quaternion size mismatch");
static_assert (alignof (Quaternion) == alignof (::graphene_quaternion_t),
               "Quaternion align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
