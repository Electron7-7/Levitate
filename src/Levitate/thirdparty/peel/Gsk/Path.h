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
struct Point;
struct Rect;
} /* namespace Graphene */

namespace Gsk
{
enum class FillRule : std::underlying_type<::GskFillRule>::type;
class /* record */ Path;
class /* record */ Stroke;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::Path> ()
{
  return gsk_path_get_type ();
}
template<>
struct GObject::Value::Traits<Gsk::Path>
{
  typedef RefPtr<Gsk::Path> OwnedType;
  typedef Gsk::Path * UnownedType;

  static Gsk::Path *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gsk::Path *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gsk::Path * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gsk::Path>
  dup (const ::GValue *value)
  {
    return RefPtr<Gsk::Path>::adopt_ref (reinterpret_cast<Gsk::Path *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gsk::Path> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gsk::Path *
  cast_for_create (Gsk::Path * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gsk::Path>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gsk::Path> (), basics.flags);
  }
};

template<>
struct RefTraits<Gsk::Path, void>
{
  static void
  ref (Gsk::Path *ptr)
  {
    gsk_path_ref (reinterpret_cast<::GskPath *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gsk::Path *ptr)
  {
    gsk_path_unref (reinterpret_cast<::GskPath *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gsk
{
class /* record */ Path
{
private:
  Path () = delete;
  Path (const Path &) = delete;
  Path (Path &&) = delete;
  ~Path ();

public:
  enum class Direction : std::underlying_type<::GskPathDirection>::type;
  enum class ForeachFlags : std::underlying_type<::GskPathForeachFlags>::type;
  enum class Operation : std::underlying_type<::GskPathOperation>::type;
  enum class Intersection : std::underlying_type<::GskPathIntersection>::type;
  struct Point;

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Path *path2) const noexcept
  {
    const ::GskPath *_peel_this = reinterpret_cast<const ::GskPath *> (this);
    const ::GskPath *_peel_path2 = reinterpret_cast<const ::GskPath *> (path2);
    gboolean _peel_return = gsk_path_equal (_peel_this, _peel_path2);
    return !!_peel_return;
  }

  template<typename PathForeachFunc>
  bool
  foreach (Path::ForeachFlags flags, PathForeachFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    ::GskPathForeachFlags _peel_flags = static_cast<::GskPathForeachFlags> (flags);
    ::GskPathForeachFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GskPathOperation, const ::graphene_point_t *, gsize, float>::wrap_call_callback (
      static_cast<PathForeachFunc &&> (func),
      [] (::GskPathOperation op, const ::graphene_point_t *pts, gsize n_pts, float weight, gpointer user_data) -> gboolean
      {
        PathForeachFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<PathForeachFunc>::type *> (user_data);
        Path::Operation _peel_op = static_cast<Path::Operation> (op);
        peel::ArrayRef<const Graphene::Point> _peel_pts = peel::ArrayRef<const Graphene::Point> (reinterpret_cast<const Graphene::Point *> (pts), n_pts);
        bool _peel_return = _peel_captured_func (_peel_op, _peel_pts, weight);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<PathForeachFunc, void, Path::Operation, peel::ArrayRef<const Graphene::Point>, size_t, float>::value);
    gboolean _peel_return = gsk_path_foreach (_peel_this, _peel_flags, _peel_func, _peel_user_data);
    return !!_peel_return;
  }

  template<typename PathIntersectionFunc>
  peel_arg_in (2)
  bool
  foreach_intersection (Path *path2, PathIntersectionFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    ::GskPath *_peel_path2 = reinterpret_cast<::GskPath *> (path2);
    ::GskPathIntersectionFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GskPath *, const ::GskPathPoint *, ::GskPath *, const ::GskPathPoint *, ::GskPathIntersection>::wrap_call_callback (
      static_cast<PathIntersectionFunc &&> (func),
      [] (::GskPath *path1, const ::GskPathPoint *point1, ::GskPath *path2, const ::GskPathPoint *point2, ::GskPathIntersection kind, gpointer user_data) -> gboolean
      {
        PathIntersectionFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<PathIntersectionFunc>::type *> (user_data);
        Path *_peel_path1 = reinterpret_cast<Path *> (path1);
        const Path::Point *_peel_point1 = reinterpret_cast<const Path::Point *> (point1);
        Path *_peel_path2 = reinterpret_cast<Path *> (path2);
        const Path::Point *_peel_point2 = reinterpret_cast<const Path::Point *> (point2);
        Path::Intersection _peel_kind = static_cast<Path::Intersection> (kind);
        bool _peel_return = _peel_captured_func (_peel_path1, _peel_point1, _peel_path2, _peel_point2, _peel_kind);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<PathIntersectionFunc, void, Path *, const Path::Point *, Path *, const Path::Point *, Path::Intersection>::value);
    gboolean _peel_return = gsk_path_foreach_intersection (_peel_this, _peel_path2, _peel_func, _peel_user_data);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_bounds (Graphene::Rect *bounds) noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    ::graphene_rect_t *_peel_bounds = reinterpret_cast<::graphene_rect_t *> (bounds);
    gboolean _peel_return = gsk_path_get_bounds (_peel_this, _peel_bounds);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2, 4)
  bool
  get_closest_point (const Graphene::Point *point, float threshold, Path::Point *result, float *distance) noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    const ::graphene_point_t *_peel_point = reinterpret_cast<const ::graphene_point_t *> (point);
    ::GskPathPoint *_peel_result = reinterpret_cast<::GskPathPoint *> (result);
    gboolean _peel_return = gsk_path_get_closest_point (_peel_this, _peel_point, threshold, _peel_result, distance);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_end_point (Path::Point *result) noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    ::GskPathPoint *_peel_result = reinterpret_cast<::GskPathPoint *> (result);
    gboolean _peel_return = gsk_path_get_end_point (_peel_this, _peel_result);
    return !!_peel_return;
  }

  peel_arg_inout (2) peel_nonnull_args (2)
  bool
  get_next (Path::Point *point) noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    ::GskPathPoint *_peel_point = reinterpret_cast<::GskPathPoint *> (point);
    gboolean _peel_return = gsk_path_get_next (_peel_this, _peel_point);
    return !!_peel_return;
  }

  peel_arg_inout (2) peel_nonnull_args (2)
  bool
  get_previous (Path::Point *point) noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    ::GskPathPoint *_peel_point = reinterpret_cast<::GskPathPoint *> (point);
    gboolean _peel_return = gsk_path_get_previous (_peel_this, _peel_point);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_start_point (Path::Point *result) noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    ::GskPathPoint *_peel_result = reinterpret_cast<::GskPathPoint *> (result);
    gboolean _peel_return = gsk_path_get_start_point (_peel_this, _peel_result);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  get_stroke_bounds (const Stroke *stroke, Graphene::Rect *bounds) noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    const ::GskStroke *_peel_stroke = reinterpret_cast<const ::GskStroke *> (stroke);
    ::graphene_rect_t *_peel_bounds = reinterpret_cast<::graphene_rect_t *> (bounds);
    gboolean _peel_return = gsk_path_get_stroke_bounds (_peel_this, _peel_stroke, _peel_bounds);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_tight_bounds (Graphene::Rect *bounds) noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    ::graphene_rect_t *_peel_bounds = reinterpret_cast<::graphene_rect_t *> (bounds);
    gboolean _peel_return = gsk_path_get_tight_bounds (_peel_this, _peel_bounds);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  in_fill (const Graphene::Point *point, FillRule fill_rule) noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    const ::graphene_point_t *_peel_point = reinterpret_cast<const ::graphene_point_t *> (point);
    ::GskFillRule _peel_fill_rule = static_cast<::GskFillRule> (fill_rule);
    gboolean _peel_return = gsk_path_in_fill (_peel_this, _peel_point, _peel_fill_rule);
    return !!_peel_return;
  }

  bool
  is_closed () noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    gboolean _peel_return = gsk_path_is_closed (_peel_this);
    return !!_peel_return;
  }

  bool
  is_empty () noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    gboolean _peel_return = gsk_path_is_empty (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  print (GLib::String *string) noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    ::GString *_peel_string = reinterpret_cast<::GString *> (string);
    gsk_path_print (_peel_this, _peel_string);
  }

  /* ref bound as RefTraits */

  peel_arg_in (2) peel_nonnull_args (2)
  void
  to_cairo (::cairo_t *cr) noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    gsk_path_to_cairo (_peel_this, cr);
  }

  peel::String
  to_string () noexcept
  {
    ::GskPath *_peel_this = reinterpret_cast<::GskPath *> (this);
    char *_peel_return = gsk_path_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  /* unref bound as RefTraits */

  peel_nonnull_args (1)
  static peel::RefPtr<Path>
  parse (const char *string) noexcept
  {
    ::GskPath *_peel_return = gsk_path_parse (string);
    return peel::RefPtr<Path>::adopt_ref (reinterpret_cast<Path *> (_peel_return));
  }
}; /* record Path */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
