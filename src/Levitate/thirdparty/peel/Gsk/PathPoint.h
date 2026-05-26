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
#include <peel/Gsk/Path.h>

peel_begin_header

namespace peel
{
namespace Graphene
{
struct Point;
struct Vec2;
} /* namespace Graphene */

namespace Gsk
{
class /* record */ Path;
class /* record */ PathMeasure;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::Path::Point> ()
{
  return gsk_path_point_get_type ();
}
template<>
struct GObject::Value::Traits<Gsk::Path::Point>
{
  typedef UniquePtr<Gsk::Path::Point> OwnedType;
  typedef const Gsk::Path::Point * UnownedType;

  static const Gsk::Path::Point *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gsk::Path::Point *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gsk::Path::Point * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gsk::Path::Point>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gsk::Path::Point>::adopt_ref (reinterpret_cast<Gsk::Path::Point *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gsk::Path::Point> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gsk::Path::Point *
  cast_for_create (const Gsk::Path::Point * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gsk::Path::Point>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gsk::Path::Point> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gsk::Path::Point>
{
  static void
  free (Gsk::Path::Point *ptr)
  {
    gsk_path_point_free (reinterpret_cast<::GskPathPoint *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gsk
{
struct Path::Point
{
private:
  ::GskPathPoint inner peel_no_warn_unused;


  /* Some fields not yet supported */
public:
  peel_arg_in (2) peel_nonnull_args (2)
  int
  compare (const Path::Point *point2) const noexcept
  {
    const ::GskPathPoint *_peel_this = reinterpret_cast<const ::GskPathPoint *> (this);
    const ::GskPathPoint *_peel_point2 = reinterpret_cast<const ::GskPathPoint *> (point2);
    return gsk_path_point_compare (_peel_this, _peel_point2);
  }

  peel::UniquePtr<Path::Point>
  copy () noexcept
  {
    ::GskPathPoint *_peel_this = reinterpret_cast<::GskPathPoint *> (this);
    ::GskPathPoint *_peel_return = gsk_path_point_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<Path::Point>::adopt_ref (reinterpret_cast<Path::Point *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Path::Point *point2) const noexcept
  {
    const ::GskPathPoint *_peel_this = reinterpret_cast<const ::GskPathPoint *> (this);
    const ::GskPathPoint *_peel_point2 = reinterpret_cast<const ::GskPathPoint *> (point2);
    gboolean _peel_return = gsk_path_point_equal (_peel_this, _peel_point2);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  float
  get_curvature (Path *path, Path::Direction direction, Graphene::Point *center) const noexcept
  {
    const ::GskPathPoint *_peel_this = reinterpret_cast<const ::GskPathPoint *> (this);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    ::GskPathDirection _peel_direction = static_cast<::GskPathDirection> (direction);
    ::graphene_point_t *_peel_center = reinterpret_cast<::graphene_point_t *> (center);
    return gsk_path_point_get_curvature (_peel_this, _peel_path, _peel_direction, _peel_center);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  float
  get_distance (PathMeasure *measure) const noexcept
  {
    const ::GskPathPoint *_peel_this = reinterpret_cast<const ::GskPathPoint *> (this);
    ::GskPathMeasure *_peel_measure = reinterpret_cast<::GskPathMeasure *> (measure);
    return gsk_path_point_get_distance (_peel_this, _peel_measure);
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_position (Path *path, Graphene::Point *position) const noexcept
  {
    const ::GskPathPoint *_peel_this = reinterpret_cast<const ::GskPathPoint *> (this);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    ::graphene_point_t *_peel_position = reinterpret_cast<::graphene_point_t *> (position);
    gsk_path_point_get_position (_peel_this, _peel_path, _peel_position);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  float
  get_rotation (Path *path, Path::Direction direction) const noexcept
  {
    const ::GskPathPoint *_peel_this = reinterpret_cast<const ::GskPathPoint *> (this);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    ::GskPathDirection _peel_direction = static_cast<::GskPathDirection> (direction);
    return gsk_path_point_get_rotation (_peel_this, _peel_path, _peel_direction);
  }

  peel_arg_in (2) peel_arg_out (4) peel_nonnull_args (2, 4)
  void
  get_tangent (Path *path, Path::Direction direction, Graphene::Vec2 *tangent) const noexcept
  {
    const ::GskPathPoint *_peel_this = reinterpret_cast<const ::GskPathPoint *> (this);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    ::GskPathDirection _peel_direction = static_cast<::GskPathDirection> (direction);
    ::graphene_vec2_t *_peel_tangent = reinterpret_cast<::graphene_vec2_t *> (tangent);
    gsk_path_point_get_tangent (_peel_this, _peel_path, _peel_direction, _peel_tangent);
  }
}; /* record Path::Point */

static_assert (sizeof (Path::Point) == sizeof (::GskPathPoint),
               "Path::Point size mismatch");
static_assert (alignof (Path::Point) == alignof (::GskPathPoint),
               "Path::Point align mismatch");

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
