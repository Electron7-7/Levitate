#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gsk/gsk.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct String;
} /* namespace GLib */

namespace Graphene
{
struct Matrix;
struct Point;
struct Point3D;
struct Rect;
struct Vec3;
} /* namespace Graphene */

namespace Gsk
{
class /* record */ Transform;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::Transform> ()
{
  return gsk_transform_get_type ();
}
template<>
struct GObject::Value::Traits<Gsk::Transform>
{
  typedef RefPtr<Gsk::Transform> OwnedType;
  typedef Gsk::Transform * UnownedType;

  static Gsk::Transform *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gsk::Transform *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gsk::Transform * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gsk::Transform>
  dup (const ::GValue *value)
  {
    return RefPtr<Gsk::Transform>::adopt_ref (reinterpret_cast<Gsk::Transform *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gsk::Transform> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gsk::Transform *
  cast_for_create (Gsk::Transform * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gsk::Transform>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gsk::Transform> (), basics.flags);
  }
};

template<>
struct RefTraits<Gsk::Transform, void>
{
  static void
  ref (Gsk::Transform *ptr)
  {
    gsk_transform_ref (reinterpret_cast<::GskTransform *> (ptr));
  }

  constexpr static
  bool can_ref_null = true;

  static void
  unref (Gsk::Transform *ptr)
  {
    gsk_transform_unref (reinterpret_cast<::GskTransform *> (ptr));
  }

  constexpr static
  bool can_unref_null = true;
};


namespace Gsk
{
class /* record */ Transform
{
private:
  Transform () = delete;
  Transform (const Transform &) = delete;
  Transform (Transform &&) = delete;
  ~Transform ();

public:
  enum class Category : std::underlying_type<::GskTransformCategory>::type;

  static peel::RefPtr<Transform>
  create () noexcept
  {
    ::GskTransform *_peel_return = gsk_transform_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  peel_arg_in (2)
  bool
  equal (Transform *second) noexcept
  {
    ::GskTransform *_peel_this = reinterpret_cast<::GskTransform *> (this);
    ::GskTransform *_peel_second = reinterpret_cast<::GskTransform *> (second);
    gboolean _peel_return = gsk_transform_equal (_peel_this, _peel_second);
    return !!_peel_return;
  }

  Transform::Category
  get_category () noexcept
  {
    ::GskTransform *_peel_this = reinterpret_cast<::GskTransform *> (this);
    ::GskTransformCategory _peel_return = gsk_transform_get_category (_peel_this);
    return static_cast<Transform::Category> (_peel_return);
  }

  static peel::RefPtr<Transform>
  invert (peel::RefPtr<Transform> self) noexcept
  {
    ::GskTransform *_peel_self = reinterpret_cast<::GskTransform *> (std::move (self).release_ref ());
    ::GskTransform *_peel_return = gsk_transform_invert (_peel_self);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  static peel::RefPtr<Transform>
  matrix (peel::RefPtr<Transform> next, const Graphene::Matrix *matrix) noexcept
  {
    ::GskTransform *_peel_next = reinterpret_cast<::GskTransform *> (std::move (next).release_ref ());
    const ::graphene_matrix_t *_peel_matrix = reinterpret_cast<const ::graphene_matrix_t *> (matrix);
    ::GskTransform *_peel_return = gsk_transform_matrix (_peel_next, _peel_matrix);
    peel_assume (_peel_return);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  static peel::RefPtr<Transform>
  matrix_2d (peel::RefPtr<Transform> next, float xx, float yx, float xy, float yy, float dx, float dy) noexcept
  {
    ::GskTransform *_peel_next = reinterpret_cast<::GskTransform *> (std::move (next).release_ref ());
    ::GskTransform *_peel_return = gsk_transform_matrix_2d (_peel_next, xx, yx, xy, yy, dx, dy);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  static peel::RefPtr<Transform>
  perspective (peel::RefPtr<Transform> next, float depth) noexcept
  {
    ::GskTransform *_peel_next = reinterpret_cast<::GskTransform *> (std::move (next).release_ref ());
    ::GskTransform *_peel_return = gsk_transform_perspective (_peel_next, depth);
    peel_assume (_peel_return);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  print (GLib::String *string) noexcept
  {
    ::GskTransform *_peel_this = reinterpret_cast<::GskTransform *> (this);
    ::GString *_peel_string = reinterpret_cast<::GString *> (string);
    gsk_transform_print (_peel_this, _peel_string);
  }

  /* ref bound as RefTraits */

  static peel::RefPtr<Transform>
  rotate (peel::RefPtr<Transform> next, float angle) noexcept
  {
    ::GskTransform *_peel_next = reinterpret_cast<::GskTransform *> (std::move (next).release_ref ());
    ::GskTransform *_peel_return = gsk_transform_rotate (_peel_next, angle);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  peel_arg_in (3) peel_nonnull_args (3)
  static peel::RefPtr<Transform>
  rotate_3d (peel::RefPtr<Transform> next, float angle, const Graphene::Vec3 *axis) noexcept
  {
    ::GskTransform *_peel_next = reinterpret_cast<::GskTransform *> (std::move (next).release_ref ());
    const ::graphene_vec3_t *_peel_axis = reinterpret_cast<const ::graphene_vec3_t *> (axis);
    ::GskTransform *_peel_return = gsk_transform_rotate_3d (_peel_next, angle, _peel_axis);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  static peel::RefPtr<Transform>
  scale (peel::RefPtr<Transform> next, float factor_x, float factor_y) noexcept
  {
    ::GskTransform *_peel_next = reinterpret_cast<::GskTransform *> (std::move (next).release_ref ());
    ::GskTransform *_peel_return = gsk_transform_scale (_peel_next, factor_x, factor_y);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  static peel::RefPtr<Transform>
  scale_3d (peel::RefPtr<Transform> next, float factor_x, float factor_y, float factor_z) noexcept
  {
    ::GskTransform *_peel_next = reinterpret_cast<::GskTransform *> (std::move (next).release_ref ());
    ::GskTransform *_peel_return = gsk_transform_scale_3d (_peel_next, factor_x, factor_y, factor_z);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  static peel::RefPtr<Transform>
  skew (peel::RefPtr<Transform> next, float skew_x, float skew_y) noexcept
  {
    ::GskTransform *_peel_next = reinterpret_cast<::GskTransform *> (std::move (next).release_ref ());
    ::GskTransform *_peel_return = gsk_transform_skew (_peel_next, skew_x, skew_y);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_arg_out (7) peel_nonnull_args (2, 3, 4, 5, 6, 7)
  void
  to_2d (float *out_xx, float *out_yx, float *out_xy, float *out_yy, float *out_dx, float *out_dy) noexcept
  {
    ::GskTransform *_peel_this = reinterpret_cast<::GskTransform *> (this);
    gsk_transform_to_2d (_peel_this, out_xx, out_yx, out_xy, out_yy, out_dx, out_dy);
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_arg_out (7) peel_arg_out (8) peel_nonnull_args (2, 3, 4, 5, 6, 7, 8)
  void
  to_2d_components (float *out_skew_x, float *out_skew_y, float *out_scale_x, float *out_scale_y, float *out_angle, float *out_dx, float *out_dy) noexcept
  {
    ::GskTransform *_peel_this = reinterpret_cast<::GskTransform *> (this);
    gsk_transform_to_2d_components (_peel_this, out_skew_x, out_skew_y, out_scale_x, out_scale_y, out_angle, out_dx, out_dy);
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2, 3, 4, 5)
  void
  to_affine (float *out_scale_x, float *out_scale_y, float *out_dx, float *out_dy) noexcept
  {
    ::GskTransform *_peel_this = reinterpret_cast<::GskTransform *> (this);
    gsk_transform_to_affine (_peel_this, out_scale_x, out_scale_y, out_dx, out_dy);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  to_matrix (Graphene::Matrix *out_matrix) noexcept
  {
    ::GskTransform *_peel_this = reinterpret_cast<::GskTransform *> (this);
    ::graphene_matrix_t *_peel_out_matrix = reinterpret_cast<::graphene_matrix_t *> (out_matrix);
    gsk_transform_to_matrix (_peel_this, _peel_out_matrix);
  }

  peel::String
  to_string () noexcept
  {
    ::GskTransform *_peel_this = reinterpret_cast<::GskTransform *> (this);
    char *_peel_return = gsk_transform_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  to_translate (float *out_dx, float *out_dy) noexcept
  {
    ::GskTransform *_peel_this = reinterpret_cast<::GskTransform *> (this);
    gsk_transform_to_translate (_peel_this, out_dx, out_dy);
  }

  peel_arg_in (2)
  static peel::RefPtr<Transform>
  transform (peel::RefPtr<Transform> next, Transform *other) noexcept
  {
    ::GskTransform *_peel_next = reinterpret_cast<::GskTransform *> (std::move (next).release_ref ());
    ::GskTransform *_peel_other = reinterpret_cast<::GskTransform *> (other);
    ::GskTransform *_peel_return = gsk_transform_transform (_peel_next, _peel_other);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  transform_bounds (const Graphene::Rect *rect, Graphene::Rect *out_rect) noexcept
  {
    ::GskTransform *_peel_this = reinterpret_cast<::GskTransform *> (this);
    const ::graphene_rect_t *_peel_rect = reinterpret_cast<const ::graphene_rect_t *> (rect);
    ::graphene_rect_t *_peel_out_rect = reinterpret_cast<::graphene_rect_t *> (out_rect);
    gsk_transform_transform_bounds (_peel_this, _peel_rect, _peel_out_rect);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  transform_point (const Graphene::Point *point, Graphene::Point *out_point) noexcept
  {
    ::GskTransform *_peel_this = reinterpret_cast<::GskTransform *> (this);
    const ::graphene_point_t *_peel_point = reinterpret_cast<const ::graphene_point_t *> (point);
    ::graphene_point_t *_peel_out_point = reinterpret_cast<::graphene_point_t *> (out_point);
    gsk_transform_transform_point (_peel_this, _peel_point, _peel_out_point);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  static peel::RefPtr<Transform>
  translate (peel::RefPtr<Transform> next, const Graphene::Point *point) noexcept
  {
    ::GskTransform *_peel_next = reinterpret_cast<::GskTransform *> (std::move (next).release_ref ());
    const ::graphene_point_t *_peel_point = reinterpret_cast<const ::graphene_point_t *> (point);
    ::GskTransform *_peel_return = gsk_transform_translate (_peel_next, _peel_point);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  static peel::RefPtr<Transform>
  translate_3d (peel::RefPtr<Transform> next, const Graphene::Point3D *point) noexcept
  {
    ::GskTransform *_peel_next = reinterpret_cast<::GskTransform *> (std::move (next).release_ref ());
    const ::graphene_point3d_t *_peel_point = reinterpret_cast<const ::graphene_point3d_t *> (point);
    ::GskTransform *_peel_return = gsk_transform_translate_3d (_peel_next, _peel_point);
    return peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_return));
  }

  /* unref bound as RefTraits */

  peel_arg_out (2) peel_nonnull_args (1, 2)
  static bool
  parse (const char *string, peel::RefPtr<Transform> *out_transform) noexcept
  {
    ::GskTransform *_peel_out_transform;
    gboolean _peel_return = gsk_transform_parse (string, &_peel_out_transform);
    *out_transform = peel::RefPtr<Transform>::adopt_ref (reinterpret_cast<Transform *> (_peel_out_transform));
    return !!_peel_return;
  }
}; /* record Transform */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
