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
#include <peel/Gsk/RenderNode.h>

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
struct ColorStop;
class LinearGradientNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::LinearGradientNode> ()
{
  return gsk_linear_gradient_node_get_type ();
}


namespace Gsk
{
class LinearGradientNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  LinearGradientNode () = delete;
  LinearGradientNode (const LinearGradientNode &) = delete;
  LinearGradientNode (LinearGradientNode &&) = delete;
  LinearGradientNode &
  operator = (const LinearGradientNode &) = delete;
  LinearGradientNode &
  operator = (LinearGradientNode &&) = delete;
  ~LinearGradientNode () = delete;
public:

  peel_arg_in (1) peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 2, 3)
  static peel::RefPtr<LinearGradientNode>
  create (const Graphene::Rect *bounds, const Graphene::Point *start, const Graphene::Point *end, peel::ArrayRef<const ColorStop> color_stops) noexcept
  {
    gsize _peel_n_color_stops;
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    const ::graphene_point_t *_peel_start = reinterpret_cast<const ::graphene_point_t *> (start);
    const ::graphene_point_t *_peel_end = reinterpret_cast<const ::graphene_point_t *> (end);
    const ::GskColorStop *_peel_color_stops = (_peel_n_color_stops = color_stops.size (), reinterpret_cast<const ::GskColorStop *> (color_stops.data ()));
    ::GskRenderNode *_peel_return = gsk_linear_gradient_node_new (_peel_bounds, _peel_start, _peel_end, _peel_color_stops, _peel_n_color_stops);
    peel_assume (_peel_return);
    return peel::RefPtr<LinearGradientNode>::adopt_ref (reinterpret_cast<LinearGradientNode *> (_peel_return));
  }

  peel::ArrayRef<const ColorStop>
  get_color_stops () const noexcept
  {
    gsize _peel_n_stops;
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::GskColorStop *_peel_return = gsk_linear_gradient_node_get_color_stops (_peel_this, &_peel_n_stops);
    peel_assume (_peel_return);
    return peel::ArrayRef<const ColorStop> (reinterpret_cast<const ColorStop *> (_peel_return), _peel_n_stops);
  }

  peel_returns_nonnull
  const Graphene::Point *
  get_end () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::graphene_point_t *_peel_return = gsk_linear_gradient_node_get_end (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Graphene::Point *> (_peel_return);
  }

  size_t
  get_n_color_stops () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_linear_gradient_node_get_n_color_stops (_peel_this);
  }

  peel_returns_nonnull
  const Graphene::Point *
  get_start () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::graphene_point_t *_peel_return = gsk_linear_gradient_node_get_start (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Graphene::Point *> (_peel_return);
  }
}; /* class LinearGradientNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
