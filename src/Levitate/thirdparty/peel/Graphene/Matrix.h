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
struct Euler;
struct Matrix;
struct Point;
struct Point3D;
struct Quad;
struct Quaternion;
struct Ray;
struct Rect;
struct Sphere;
struct Vec3;
struct Vec4;
} /* namespace Graphene */

template<>
inline GObject::Type
GObject::Type::of<Graphene::Matrix> ()
{
  return graphene_matrix_get_type ();
}
template<>
struct GObject::Value::Traits<Graphene::Matrix>
{
  typedef UniquePtr<Graphene::Matrix> OwnedType;
  typedef const Graphene::Matrix * UnownedType;

  static const Graphene::Matrix *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Graphene::Matrix *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Graphene::Matrix * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Graphene::Matrix>
  dup (const ::GValue *value)
  {
    return UniquePtr<Graphene::Matrix>::adopt_ref (reinterpret_cast<Graphene::Matrix *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Graphene::Matrix> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Graphene::Matrix *
  cast_for_create (const Graphene::Matrix * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Graphene::Matrix>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Graphene::Matrix> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Graphene::Matrix>
{
  static void
  free (Graphene::Matrix *ptr)
  {
    graphene_matrix_free (reinterpret_cast<::graphene_matrix_t *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Graphene
{
struct Matrix
{
private:
  ::graphene_matrix_t inner peel_no_warn_unused;


public:
  static peel::UniquePtr<Matrix>
  alloc () noexcept
  {
    ::graphene_matrix_t *_peel_return = graphene_matrix_alloc ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Matrix>::adopt_ref (reinterpret_cast<Matrix *> (_peel_return));
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (2, 3, 4, 5, 6)
  bool
  decompose (Vec3 *translate, Vec3 *scale, Quaternion *rotate, Vec3 *shear, Vec4 *perspective) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    ::graphene_vec3_t *_peel_translate = reinterpret_cast<::graphene_vec3_t *> (translate);
    ::graphene_vec3_t *_peel_scale = reinterpret_cast<::graphene_vec3_t *> (scale);
    ::graphene_quaternion_t *_peel_rotate = reinterpret_cast<::graphene_quaternion_t *> (rotate);
    ::graphene_vec3_t *_peel_shear = reinterpret_cast<::graphene_vec3_t *> (shear);
    ::graphene_vec4_t *_peel_perspective = reinterpret_cast<::graphene_vec4_t *> (perspective);
    _Bool _peel_return = graphene_matrix_decompose (_peel_this, _peel_translate, _peel_scale, _peel_rotate, _peel_shear, _peel_perspective);
    return !!_peel_return;
  }

  float
  determinant () const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    return graphene_matrix_determinant (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Matrix *b) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_matrix_t *_peel_b = reinterpret_cast<const ::graphene_matrix_t *> (b);
    _Bool _peel_return = graphene_matrix_equal (_peel_this, _peel_b);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal_fast (const Matrix *b) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_matrix_t *_peel_b = reinterpret_cast<const ::graphene_matrix_t *> (b);
    _Bool _peel_return = graphene_matrix_equal_fast (_peel_this, _peel_b);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  peel_arg_out (3) peel_nonnull_args (3)
  void
  get_row (unsigned index_, Vec4 *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_matrix_get_row (_peel_this, index_, _peel_res);
  }

  float
  get_value (unsigned row, unsigned col) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    return graphene_matrix_get_value (_peel_this, row, col);
  }

  float
  get_x_scale () const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    return graphene_matrix_get_x_scale (_peel_this);
  }

  float
  get_x_translation () const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    return graphene_matrix_get_x_translation (_peel_this);
  }

  float
  get_y_scale () const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    return graphene_matrix_get_y_scale (_peel_this);
  }

  float
  get_y_translation () const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    return graphene_matrix_get_y_translation (_peel_this);
  }

  float
  get_z_scale () const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    return graphene_matrix_get_z_scale (_peel_this);
  }

  float
  get_z_translation () const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    return graphene_matrix_get_z_translation (_peel_this);
  }

  peel_returns_nonnull
  Matrix *
  init_from_2d (double xx, double yx, double xy, double yy, double x_0, double y_0) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_from_2d (_peel_this, xx, yx, xy, yy, x_0, y_0);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_returns_nonnull
  Matrix *
  init_from_float (const float (&v)[16]) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    const float *_peel_v = reinterpret_cast<const float *> (v);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_from_float (_peel_this, _peel_v);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Matrix *
  init_from_matrix (const Matrix *src) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    const ::graphene_matrix_t *_peel_src = reinterpret_cast<const ::graphene_matrix_t *> (src);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_from_matrix (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_arg_in (5) peel_nonnull_args (2, 3, 4, 5) peel_returns_nonnull
  Matrix *
  init_from_vec4 (const Vec4 *v0, const Vec4 *v1, const Vec4 *v2, const Vec4 *v3) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    const ::graphene_vec4_t *_peel_v0 = reinterpret_cast<const ::graphene_vec4_t *> (v0);
    const ::graphene_vec4_t *_peel_v1 = reinterpret_cast<const ::graphene_vec4_t *> (v1);
    const ::graphene_vec4_t *_peel_v2 = reinterpret_cast<const ::graphene_vec4_t *> (v2);
    const ::graphene_vec4_t *_peel_v3 = reinterpret_cast<const ::graphene_vec4_t *> (v3);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_from_vec4 (_peel_this, _peel_v0, _peel_v1, _peel_v2, _peel_v3);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_returns_nonnull
  Matrix *
  init_frustum (float left, float right, float bottom, float top, float z_near, float z_far) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_frustum (_peel_this, left, right, bottom, top, z_near, z_far);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_returns_nonnull
  Matrix *
  init_identity () noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_identity (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4) peel_returns_nonnull
  Matrix *
  init_look_at (const Vec3 *eye, const Vec3 *center, const Vec3 *up) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    const ::graphene_vec3_t *_peel_eye = reinterpret_cast<const ::graphene_vec3_t *> (eye);
    const ::graphene_vec3_t *_peel_center = reinterpret_cast<const ::graphene_vec3_t *> (center);
    const ::graphene_vec3_t *_peel_up = reinterpret_cast<const ::graphene_vec3_t *> (up);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_look_at (_peel_this, _peel_eye, _peel_center, _peel_up);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_returns_nonnull
  Matrix *
  init_ortho (float left, float right, float top, float bottom, float z_near, float z_far) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_ortho (_peel_this, left, right, top, bottom, z_near, z_far);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_returns_nonnull
  Matrix *
  init_perspective (float fovy, float aspect, float z_near, float z_far) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_perspective (_peel_this, fovy, aspect, z_near, z_far);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_arg_in (3) peel_nonnull_args (3) peel_returns_nonnull
  Matrix *
  init_rotate (float angle, const Vec3 *axis) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    const ::graphene_vec3_t *_peel_axis = reinterpret_cast<const ::graphene_vec3_t *> (axis);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_rotate (_peel_this, angle, _peel_axis);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_returns_nonnull
  Matrix *
  init_scale (float x, float y, float z) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_scale (_peel_this, x, y, z);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_returns_nonnull
  Matrix *
  init_skew (float x_skew, float y_skew) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_skew (_peel_this, x_skew, y_skew);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Matrix *
  init_translate (const Point3D *p) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    const ::graphene_point3d_t *_peel_p = reinterpret_cast<const ::graphene_point3d_t *> (p);
    ::graphene_matrix_t *_peel_return = graphene_matrix_init_translate (_peel_this, _peel_p);
    peel_assume (_peel_return);
    return reinterpret_cast<Matrix *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  interpolate (const Matrix *b, double factor, Matrix *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_matrix_t *_peel_b = reinterpret_cast<const ::graphene_matrix_t *> (b);
    ::graphene_matrix_t *_peel_res = reinterpret_cast<::graphene_matrix_t *> (res);
    graphene_matrix_interpolate (_peel_this, _peel_b, factor, _peel_res);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  inverse (Matrix *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    ::graphene_matrix_t *_peel_res = reinterpret_cast<::graphene_matrix_t *> (res);
    _Bool _peel_return = graphene_matrix_inverse (_peel_this, _peel_res);
    return !!_peel_return;
  }

  bool
  is_2d () const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    _Bool _peel_return = graphene_matrix_is_2d (_peel_this);
    return !!_peel_return;
  }

  bool
  is_backface_visible () const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    _Bool _peel_return = graphene_matrix_is_backface_visible (_peel_this);
    return !!_peel_return;
  }

  bool
  is_identity () const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    _Bool _peel_return = graphene_matrix_is_identity (_peel_this);
    return !!_peel_return;
  }

  bool
  is_singular () const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    _Bool _peel_return = graphene_matrix_is_singular (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  multiply (const Matrix *b, Matrix *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_matrix_t *_peel_b = reinterpret_cast<const ::graphene_matrix_t *> (b);
    ::graphene_matrix_t *_peel_res = reinterpret_cast<::graphene_matrix_t *> (res);
    graphene_matrix_multiply (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  near_ (const Matrix *b, float epsilon) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_matrix_t *_peel_b = reinterpret_cast<const ::graphene_matrix_t *> (b);
    _Bool _peel_return = graphene_matrix_near (_peel_this, _peel_b, epsilon);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  normalize (Matrix *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    ::graphene_matrix_t *_peel_res = reinterpret_cast<::graphene_matrix_t *> (res);
    graphene_matrix_normalize (_peel_this, _peel_res);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  perspective (float depth, Matrix *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    ::graphene_matrix_t *_peel_res = reinterpret_cast<::graphene_matrix_t *> (res);
    graphene_matrix_perspective (_peel_this, depth, _peel_res);
  }

  void
  print () const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    graphene_matrix_print (_peel_this);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  project_point (const Point *p, Point *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_point_t *_peel_p = reinterpret_cast<const ::graphene_point_t *> (p);
    ::graphene_point_t *_peel_res = reinterpret_cast<::graphene_point_t *> (res);
    graphene_matrix_project_point (_peel_this, _peel_p, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  project_rect (const Rect *r, Quad *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_rect_t *_peel_r = reinterpret_cast<const ::graphene_rect_t *> (r);
    ::graphene_quad_t *_peel_res = reinterpret_cast<::graphene_quad_t *> (res);
    graphene_matrix_project_rect (_peel_this, _peel_r, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  project_rect_bounds (const Rect *r, Rect *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_rect_t *_peel_r = reinterpret_cast<const ::graphene_rect_t *> (r);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    graphene_matrix_project_rect_bounds (_peel_this, _peel_r, _peel_res);
  }

  peel_arg_in (3) peel_nonnull_args (3)
  void
  rotate (float angle, const Vec3 *axis) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    const ::graphene_vec3_t *_peel_axis = reinterpret_cast<const ::graphene_vec3_t *> (axis);
    graphene_matrix_rotate (_peel_this, angle, _peel_axis);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  rotate_euler (const Euler *e) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    const ::graphene_euler_t *_peel_e = reinterpret_cast<const ::graphene_euler_t *> (e);
    graphene_matrix_rotate_euler (_peel_this, _peel_e);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  rotate_quaternion (const Quaternion *q) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    const ::graphene_quaternion_t *_peel_q = reinterpret_cast<const ::graphene_quaternion_t *> (q);
    graphene_matrix_rotate_quaternion (_peel_this, _peel_q);
  }

  void
  rotate_x (float angle) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    graphene_matrix_rotate_x (_peel_this, angle);
  }

  void
  rotate_y (float angle) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    graphene_matrix_rotate_y (_peel_this, angle);
  }

  void
  rotate_z (float angle) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    graphene_matrix_rotate_z (_peel_this, angle);
  }

  void
  scale (float factor_x, float factor_y, float factor_z) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    graphene_matrix_scale (_peel_this, factor_x, factor_y, factor_z);
  }

  void
  skew_xy (float factor) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    graphene_matrix_skew_xy (_peel_this, factor);
  }

  void
  skew_xz (float factor) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    graphene_matrix_skew_xz (_peel_this, factor);
  }

  void
  skew_yz (float factor) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    graphene_matrix_skew_yz (_peel_this, factor);
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_arg_out (7) peel_nonnull_args (2, 3, 4, 5, 6, 7)
  bool
  to_2d (double *xx, double *yx, double *xy, double *yy, double *x_0, double *y_0) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    _Bool _peel_return = graphene_matrix_to_2d (_peel_this, xx, yx, xy, yy, x_0, y_0);
    return !!_peel_return;
  }

  void
  to_float (float (&v)[16]) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    float *_peel_v = reinterpret_cast<float *> (v);
    graphene_matrix_to_float (_peel_this, _peel_v);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  transform_bounds (const Rect *r, Rect *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_rect_t *_peel_r = reinterpret_cast<const ::graphene_rect_t *> (r);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    graphene_matrix_transform_bounds (_peel_this, _peel_r, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  transform_box (const Box *b, Box *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_box_t *_peel_b = reinterpret_cast<const ::graphene_box_t *> (b);
    ::graphene_box_t *_peel_res = reinterpret_cast<::graphene_box_t *> (res);
    graphene_matrix_transform_box (_peel_this, _peel_b, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  transform_point (const Point *p, Point *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_point_t *_peel_p = reinterpret_cast<const ::graphene_point_t *> (p);
    ::graphene_point_t *_peel_res = reinterpret_cast<::graphene_point_t *> (res);
    graphene_matrix_transform_point (_peel_this, _peel_p, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  transform_point3d (const Point3D *p, Point3D *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_point3d_t *_peel_p = reinterpret_cast<const ::graphene_point3d_t *> (p);
    ::graphene_point3d_t *_peel_res = reinterpret_cast<::graphene_point3d_t *> (res);
    graphene_matrix_transform_point3d (_peel_this, _peel_p, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  transform_ray (const Ray *r, Ray *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_ray_t *_peel_r = reinterpret_cast<const ::graphene_ray_t *> (r);
    ::graphene_ray_t *_peel_res = reinterpret_cast<::graphene_ray_t *> (res);
    graphene_matrix_transform_ray (_peel_this, _peel_r, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  transform_rect (const Rect *r, Quad *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_rect_t *_peel_r = reinterpret_cast<const ::graphene_rect_t *> (r);
    ::graphene_quad_t *_peel_res = reinterpret_cast<::graphene_quad_t *> (res);
    graphene_matrix_transform_rect (_peel_this, _peel_r, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  transform_sphere (const Sphere *s, Sphere *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_sphere_t *_peel_s = reinterpret_cast<const ::graphene_sphere_t *> (s);
    ::graphene_sphere_t *_peel_res = reinterpret_cast<::graphene_sphere_t *> (res);
    graphene_matrix_transform_sphere (_peel_this, _peel_s, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  transform_vec3 (const Vec3 *v, Vec3 *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_vec3_t *_peel_v = reinterpret_cast<const ::graphene_vec3_t *> (v);
    ::graphene_vec3_t *_peel_res = reinterpret_cast<::graphene_vec3_t *> (res);
    graphene_matrix_transform_vec3 (_peel_this, _peel_v, _peel_res);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  transform_vec4 (const Vec4 *v, Vec4 *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_vec4_t *_peel_v = reinterpret_cast<const ::graphene_vec4_t *> (v);
    ::graphene_vec4_t *_peel_res = reinterpret_cast<::graphene_vec4_t *> (res);
    graphene_matrix_transform_vec4 (_peel_this, _peel_v, _peel_res);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  translate (const Point3D *pos) noexcept
  {
    ::graphene_matrix_t *_peel_this = reinterpret_cast<::graphene_matrix_t *> (this);
    const ::graphene_point3d_t *_peel_pos = reinterpret_cast<const ::graphene_point3d_t *> (pos);
    graphene_matrix_translate (_peel_this, _peel_pos);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  transpose (Matrix *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    ::graphene_matrix_t *_peel_res = reinterpret_cast<::graphene_matrix_t *> (res);
    graphene_matrix_transpose (_peel_this, _peel_res);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  void
  unproject_point3d (const Matrix *modelview, const Point3D *point, Point3D *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_matrix_t *_peel_modelview = reinterpret_cast<const ::graphene_matrix_t *> (modelview);
    const ::graphene_point3d_t *_peel_point = reinterpret_cast<const ::graphene_point3d_t *> (point);
    ::graphene_point3d_t *_peel_res = reinterpret_cast<::graphene_point3d_t *> (res);
    graphene_matrix_unproject_point3d (_peel_this, _peel_modelview, _peel_point, _peel_res);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  void
  untransform_bounds (const Rect *r, const Rect *bounds, Rect *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_rect_t *_peel_r = reinterpret_cast<const ::graphene_rect_t *> (r);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    ::graphene_rect_t *_peel_res = reinterpret_cast<::graphene_rect_t *> (res);
    graphene_matrix_untransform_bounds (_peel_this, _peel_r, _peel_bounds, _peel_res);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  bool
  untransform_point (const Point *p, const Rect *bounds, Point *res) const noexcept
  {
    const ::graphene_matrix_t *_peel_this = reinterpret_cast<const ::graphene_matrix_t *> (this);
    const ::graphene_point_t *_peel_p = reinterpret_cast<const ::graphene_point_t *> (p);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    ::graphene_point_t *_peel_res = reinterpret_cast<::graphene_point_t *> (res);
    _Bool _peel_return = graphene_matrix_untransform_point (_peel_this, _peel_p, _peel_bounds, _peel_res);
    return !!_peel_return;
  }
}; /* record Matrix */

static_assert (sizeof (Matrix) == sizeof (::graphene_matrix_t),
               "Matrix size mismatch");
static_assert (alignof (Matrix) == alignof (::graphene_matrix_t),
               "Matrix align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
