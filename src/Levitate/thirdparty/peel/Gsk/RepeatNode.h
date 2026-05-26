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
struct Rect;
} /* namespace Graphene */

namespace Gsk
{
class RenderNode;
class RepeatNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::RepeatNode> ()
{
  return gsk_repeat_node_get_type ();
}


namespace Gsk
{
class RepeatNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  RepeatNode () = delete;
  RepeatNode (const RepeatNode &) = delete;
  RepeatNode (RepeatNode &&) = delete;
  RepeatNode &
  operator = (const RepeatNode &) = delete;
  RepeatNode &
  operator = (RepeatNode &&) = delete;
  ~RepeatNode () = delete;
public:

  peel_arg_in (1) peel_arg_in (3) peel_nonnull_args (1, 2)
  static peel::RefPtr<RepeatNode>
  create (const Graphene::Rect *bounds, RenderNode *child, const Graphene::Rect *child_bounds) noexcept
  {
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    const ::graphene_rect_t *_peel_child_bounds = reinterpret_cast<const ::graphene_rect_t *> (child_bounds);
    ::GskRenderNode *_peel_return = gsk_repeat_node_new (_peel_bounds, _peel_child, _peel_child_bounds);
    peel_assume (_peel_return);
    return peel::RefPtr<RepeatNode>::adopt_ref (reinterpret_cast<RepeatNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_repeat_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  peel_returns_nonnull
  const Graphene::Rect *
  get_child_bounds () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::graphene_rect_t *_peel_return = gsk_repeat_node_get_child_bounds (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Graphene::Rect *> (_peel_return);
  }
}; /* class RepeatNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
