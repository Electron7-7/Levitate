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
struct Rect;
} /* namespace Graphene */

namespace Gsk
{
class /* record */ Path;
class /* record */ PathBuilder;
struct RoundedRect;
} /* namespace Gsk */

namespace Pango
{
class Layout;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gsk::PathBuilder> ()
{
  return gsk_path_builder_get_type ();
}
template<>
struct GObject::Value::Traits<Gsk::PathBuilder>
{
  typedef RefPtr<Gsk::PathBuilder> OwnedType;
  typedef Gsk::PathBuilder * UnownedType;

  static Gsk::PathBuilder *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gsk::PathBuilder *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gsk::PathBuilder * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gsk::PathBuilder>
  dup (const ::GValue *value)
  {
    return RefPtr<Gsk::PathBuilder>::adopt_ref (reinterpret_cast<Gsk::PathBuilder *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gsk::PathBuilder> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gsk::PathBuilder *
  cast_for_create (Gsk::PathBuilder * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gsk::PathBuilder>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gsk::PathBuilder> (), basics.flags);
  }
};

template<>
struct RefTraits<Gsk::PathBuilder, void>
{
  static void
  ref (Gsk::PathBuilder *ptr)
  {
    gsk_path_builder_ref (reinterpret_cast<::GskPathBuilder *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gsk::PathBuilder *ptr)
  {
    gsk_path_builder_unref (reinterpret_cast<::GskPathBuilder *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gsk
{
class /* record */ PathBuilder
{
private:
  PathBuilder () = delete;
  PathBuilder (const PathBuilder &) = delete;
  PathBuilder (PathBuilder &&) = delete;
  ~PathBuilder ();

public:
  static peel::RefPtr<PathBuilder>
  create () noexcept
  {
    ::GskPathBuilder *_peel_return = gsk_path_builder_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<PathBuilder>::adopt_ref (reinterpret_cast<PathBuilder *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  add_cairo_path (const ::cairo_path_t *path) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_add_cairo_path (_peel_this, path);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  add_circle (const Graphene::Point *center, float radius) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    const ::graphene_point_t *_peel_center = reinterpret_cast<const ::graphene_point_t *> (center);
    gsk_path_builder_add_circle (_peel_this, _peel_center, radius);
  }

  peel_nonnull_args (2)
  void
  add_layout (Pango::Layout *layout) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    ::PangoLayout *_peel_layout = reinterpret_cast<::PangoLayout *> (layout);
    gsk_path_builder_add_layout (_peel_this, _peel_layout);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  add_path (Path *path) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    gsk_path_builder_add_path (_peel_this, _peel_path);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  add_rect (const Graphene::Rect *rect) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    const ::graphene_rect_t *_peel_rect = reinterpret_cast<const ::graphene_rect_t *> (rect);
    gsk_path_builder_add_rect (_peel_this, _peel_rect);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  add_reverse_path (Path *path) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    gsk_path_builder_add_reverse_path (_peel_this, _peel_path);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  add_rounded_rect (const RoundedRect *rect) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    const ::GskRoundedRect *_peel_rect = reinterpret_cast<const ::GskRoundedRect *> (rect);
    gsk_path_builder_add_rounded_rect (_peel_this, _peel_rect);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  add_segment (Path *path, const Path::Point *start, const Path::Point *end) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    const ::GskPathPoint *_peel_start = reinterpret_cast<const ::GskPathPoint *> (start);
    const ::GskPathPoint *_peel_end = reinterpret_cast<const ::GskPathPoint *> (end);
    gsk_path_builder_add_segment (_peel_this, _peel_path, _peel_start, _peel_end);
  }

  void
  arc_to (float x1, float y1, float x2, float y2) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_arc_to (_peel_this, x1, y1, x2, y2);
  }

  void
  close () noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_close (_peel_this);
  }

  void
  conic_to (float x1, float y1, float x2, float y2, float weight) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_conic_to (_peel_this, x1, y1, x2, y2, weight);
  }

  void
  cubic_to (float x1, float y1, float x2, float y2, float x3, float y3) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_cubic_to (_peel_this, x1, y1, x2, y2, x3, y3);
  }

  static peel::RefPtr<Path>
  free_to_path (peel::RefPtr<PathBuilder> self) noexcept
  {
    ::GskPathBuilder *_peel_self = reinterpret_cast<::GskPathBuilder *> (std::move (self).release_ref ());
    ::GskPath *_peel_return = gsk_path_builder_free_to_path (_peel_self);
    peel_assume (_peel_return);
    return peel::RefPtr<Path>::adopt_ref (reinterpret_cast<Path *> (_peel_return));
  }

  peel_returns_nonnull
  const Graphene::Point *
  get_current_point () noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    const ::graphene_point_t *_peel_return = gsk_path_builder_get_current_point (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Graphene::Point *> (_peel_return);
  }

  void
  html_arc_to (float x1, float y1, float x2, float y2, float radius) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_html_arc_to (_peel_this, x1, y1, x2, y2, radius);
  }

  void
  line_to (float x, float y) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_line_to (_peel_this, x, y);
  }

  void
  move_to (float x, float y) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_move_to (_peel_this, x, y);
  }

  void
  quad_to (float x1, float y1, float x2, float y2) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_quad_to (_peel_this, x1, y1, x2, y2);
  }

  /* ref bound as RefTraits */

  void
  rel_arc_to (float x1, float y1, float x2, float y2) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_rel_arc_to (_peel_this, x1, y1, x2, y2);
  }

  void
  rel_conic_to (float x1, float y1, float x2, float y2, float weight) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_rel_conic_to (_peel_this, x1, y1, x2, y2, weight);
  }

  void
  rel_cubic_to (float x1, float y1, float x2, float y2, float x3, float y3) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_rel_cubic_to (_peel_this, x1, y1, x2, y2, x3, y3);
  }

  void
  rel_html_arc_to (float x1, float y1, float x2, float y2, float radius) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_rel_html_arc_to (_peel_this, x1, y1, x2, y2, radius);
  }

  void
  rel_line_to (float x, float y) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_rel_line_to (_peel_this, x, y);
  }

  void
  rel_move_to (float x, float y) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_rel_move_to (_peel_this, x, y);
  }

  void
  rel_quad_to (float x1, float y1, float x2, float y2) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gsk_path_builder_rel_quad_to (_peel_this, x1, y1, x2, y2);
  }

  void
  rel_svg_arc_to (float rx, float ry, float x_axis_rotation, bool large_arc, bool positive_sweep, float x, float y) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gboolean _peel_large_arc = static_cast<gboolean> (large_arc);
    gboolean _peel_positive_sweep = static_cast<gboolean> (positive_sweep);
    gsk_path_builder_rel_svg_arc_to (_peel_this, rx, ry, x_axis_rotation, _peel_large_arc, _peel_positive_sweep, x, y);
  }

  void
  svg_arc_to (float rx, float ry, float x_axis_rotation, bool large_arc, bool positive_sweep, float x, float y) noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    gboolean _peel_large_arc = static_cast<gboolean> (large_arc);
    gboolean _peel_positive_sweep = static_cast<gboolean> (positive_sweep);
    gsk_path_builder_svg_arc_to (_peel_this, rx, ry, x_axis_rotation, _peel_large_arc, _peel_positive_sweep, x, y);
  }

  peel::RefPtr<Path>
  to_path () noexcept
  {
    ::GskPathBuilder *_peel_this = reinterpret_cast<::GskPathBuilder *> (this);
    ::GskPath *_peel_return = gsk_path_builder_to_path (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Path>::adopt_ref (reinterpret_cast<Path *> (_peel_return));
  }

  /* unref bound as RefTraits */
}; /* record PathBuilder */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
