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
namespace Gsk
{
class OpacityNode;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::OpacityNode> ()
{
  return gsk_opacity_node_get_type ();
}


namespace Gsk
{
class OpacityNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  OpacityNode () = delete;
  OpacityNode (const OpacityNode &) = delete;
  OpacityNode (OpacityNode &&) = delete;
  OpacityNode &
  operator = (const OpacityNode &) = delete;
  OpacityNode &
  operator = (OpacityNode &&) = delete;
  ~OpacityNode () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<OpacityNode>
  create (RenderNode *child, float opacity) noexcept
  {
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    ::GskRenderNode *_peel_return = gsk_opacity_node_new (_peel_child, opacity);
    peel_assume (_peel_return);
    return peel::RefPtr<OpacityNode>::adopt_ref (reinterpret_cast<OpacityNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_opacity_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  float
  get_opacity () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_opacity_node_get_opacity (_peel_this);
  }
}; /* class OpacityNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
