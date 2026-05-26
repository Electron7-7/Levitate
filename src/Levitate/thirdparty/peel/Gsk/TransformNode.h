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
class RenderNode;
class /* record */ Transform;
class TransformNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::TransformNode> ()
{
  return gsk_transform_node_get_type ();
}


namespace Gsk
{
class TransformNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TransformNode () = delete;
  TransformNode (const TransformNode &) = delete;
  TransformNode (TransformNode &&) = delete;
  TransformNode &
  operator = (const TransformNode &) = delete;
  TransformNode &
  operator = (TransformNode &&) = delete;
  ~TransformNode () = delete;
public:

  peel_arg_in (2) peel_nonnull_args (1)
  static peel::RefPtr<TransformNode>
  create (RenderNode *child, Transform *transform) noexcept
  {
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    ::GskTransform *_peel_transform = reinterpret_cast<::GskTransform *> (transform);
    ::GskRenderNode *_peel_return = gsk_transform_node_new (_peel_child, _peel_transform);
    peel_assume (_peel_return);
    return peel::RefPtr<TransformNode>::adopt_ref (reinterpret_cast<TransformNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_transform_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  peel_returns_nonnull
  Transform *
  get_transform () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskTransform *_peel_return = gsk_transform_node_get_transform (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Transform *> (_peel_return);
  }
}; /* class TransformNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
