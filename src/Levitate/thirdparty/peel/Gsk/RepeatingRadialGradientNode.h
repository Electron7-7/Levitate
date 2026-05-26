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
class RepeatingRadialGradientNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::RepeatingRadialGradientNode> ()
{
  return gsk_repeating_radial_gradient_node_get_type ();
}


namespace Gsk
{
class RepeatingRadialGradientNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  RepeatingRadialGradientNode () = delete;
  RepeatingRadialGradientNode (const RepeatingRadialGradientNode &) = delete;
  RepeatingRadialGradientNode (RepeatingRadialGradientNode &&) = delete;
  RepeatingRadialGradientNode &
  operator = (const RepeatingRadialGradientNode &) = delete;
  RepeatingRadialGradientNode &
  operator = (RepeatingRadialGradientNode &&) = delete;
  ~RepeatingRadialGradientNode () = delete;
public:

  peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::RefPtr<RepeatingRadialGradientNode>
  create (const Graphene::Rect *bounds, const Graphene::Point *center, float hradius, float vradius, float start, float end, peel::ArrayRef<const ColorStop> color_stops) noexcept
  {
    gsize _peel_n_color_stops;
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    const ::graphene_point_t *_peel_center = reinterpret_cast<const ::graphene_point_t *> (center);
    const ::GskColorStop *_peel_color_stops = (_peel_n_color_stops = color_stops.size (), reinterpret_cast<const ::GskColorStop *> (color_stops.data ()));
    ::GskRenderNode *_peel_return = gsk_repeating_radial_gradient_node_new (_peel_bounds, _peel_center, hradius, vradius, start, end, _peel_color_stops, _peel_n_color_stops);
    peel_assume (_peel_return);
    return peel::RefPtr<RepeatingRadialGradientNode>::adopt_ref (reinterpret_cast<RepeatingRadialGradientNode *> (_peel_return));
  }
}; /* class RepeatingRadialGradientNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
