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
#include <peel/Graphene/Rect.h>
#include <peel/Graphene/Size.h>

peel_begin_header

namespace peel
{
namespace Graphene
{
struct Point;
struct Rect;
struct Size;
} /* namespace Graphene */

namespace Gsk
{
struct RoundedRect;
} /* namespace Gsk */


namespace Gsk
{
struct RoundedRect
{
private:

public:
  Graphene::Rect bounds;
  Graphene::Size corner[4];

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  contains_point (const Graphene::Point *point) const noexcept
  {
    const ::GskRoundedRect *_peel_this = reinterpret_cast<const ::GskRoundedRect *> (this);
    const ::graphene_point_t *_peel_point = reinterpret_cast<const ::graphene_point_t *> (point);
    gboolean _peel_return = gsk_rounded_rect_contains_point (_peel_this, _peel_point);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  contains_rect (const Graphene::Rect *rect) const noexcept
  {
    const ::GskRoundedRect *_peel_this = reinterpret_cast<const ::GskRoundedRect *> (this);
    const ::graphene_rect_t *_peel_rect = reinterpret_cast<const ::graphene_rect_t *> (rect);
    gboolean _peel_return = gsk_rounded_rect_contains_rect (_peel_this, _peel_rect);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_arg_in (5) peel_arg_in (6) peel_nonnull_args (2, 3, 4, 5, 6) peel_returns_nonnull
  RoundedRect *
  init (const Graphene::Rect *bounds, const Graphene::Size *top_left, const Graphene::Size *top_right, const Graphene::Size *bottom_right, const Graphene::Size *bottom_left) noexcept
  {
    ::GskRoundedRect *_peel_this = reinterpret_cast<::GskRoundedRect *> (this);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    const ::graphene_size_t *_peel_top_left = reinterpret_cast<const ::graphene_size_t *> (top_left);
    const ::graphene_size_t *_peel_top_right = reinterpret_cast<const ::graphene_size_t *> (top_right);
    const ::graphene_size_t *_peel_bottom_right = reinterpret_cast<const ::graphene_size_t *> (bottom_right);
    const ::graphene_size_t *_peel_bottom_left = reinterpret_cast<const ::graphene_size_t *> (bottom_left);
    ::GskRoundedRect *_peel_return = gsk_rounded_rect_init (_peel_this, _peel_bounds, _peel_top_left, _peel_top_right, _peel_bottom_right, _peel_bottom_left);
    peel_assume (_peel_return);
    return reinterpret_cast<RoundedRect *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  RoundedRect *
  init_copy (const RoundedRect *src) noexcept
  {
    ::GskRoundedRect *_peel_this = reinterpret_cast<::GskRoundedRect *> (this);
    const ::GskRoundedRect *_peel_src = reinterpret_cast<const ::GskRoundedRect *> (src);
    ::GskRoundedRect *_peel_return = gsk_rounded_rect_init_copy (_peel_this, _peel_src);
    peel_assume (_peel_return);
    return reinterpret_cast<RoundedRect *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  RoundedRect *
  init_from_rect (const Graphene::Rect *bounds, float radius) noexcept
  {
    ::GskRoundedRect *_peel_this = reinterpret_cast<::GskRoundedRect *> (this);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    ::GskRoundedRect *_peel_return = gsk_rounded_rect_init_from_rect (_peel_this, _peel_bounds, radius);
    peel_assume (_peel_return);
    return reinterpret_cast<RoundedRect *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  intersects_rect (const Graphene::Rect *rect) const noexcept
  {
    const ::GskRoundedRect *_peel_this = reinterpret_cast<const ::GskRoundedRect *> (this);
    const ::graphene_rect_t *_peel_rect = reinterpret_cast<const ::graphene_rect_t *> (rect);
    gboolean _peel_return = gsk_rounded_rect_intersects_rect (_peel_this, _peel_rect);
    return !!_peel_return;
  }

  bool
  is_rectilinear () const noexcept
  {
    const ::GskRoundedRect *_peel_this = reinterpret_cast<const ::GskRoundedRect *> (this);
    gboolean _peel_return = gsk_rounded_rect_is_rectilinear (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  RoundedRect *
  normalize () noexcept
  {
    ::GskRoundedRect *_peel_this = reinterpret_cast<::GskRoundedRect *> (this);
    ::GskRoundedRect *_peel_return = gsk_rounded_rect_normalize (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RoundedRect *> (_peel_return);
  }

  peel_returns_nonnull
  RoundedRect *
  offset (float dx, float dy) noexcept
  {
    ::GskRoundedRect *_peel_this = reinterpret_cast<::GskRoundedRect *> (this);
    ::GskRoundedRect *_peel_return = gsk_rounded_rect_offset (_peel_this, dx, dy);
    peel_assume (_peel_return);
    return reinterpret_cast<RoundedRect *> (_peel_return);
  }

  peel_returns_nonnull
  RoundedRect *
  shrink (float top, float right, float bottom, float left) noexcept
  {
    ::GskRoundedRect *_peel_this = reinterpret_cast<::GskRoundedRect *> (this);
    ::GskRoundedRect *_peel_return = gsk_rounded_rect_shrink (_peel_this, top, right, bottom, left);
    peel_assume (_peel_return);
    return reinterpret_cast<RoundedRect *> (_peel_return);
  }
}; /* record RoundedRect */

static_assert (sizeof (RoundedRect) == sizeof (::GskRoundedRect),
               "RoundedRect size mismatch");
static_assert (alignof (RoundedRect) == alignof (::GskRoundedRect),
               "RoundedRect align mismatch");

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
