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
class BlurNode;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::BlurNode> ()
{
  return gsk_blur_node_get_type ();
}


namespace Gsk
{
class BlurNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  BlurNode () = delete;
  BlurNode (const BlurNode &) = delete;
  BlurNode (BlurNode &&) = delete;
  BlurNode &
  operator = (const BlurNode &) = delete;
  BlurNode &
  operator = (BlurNode &&) = delete;
  ~BlurNode () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<BlurNode>
  create (RenderNode *child, float radius) noexcept
  {
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    ::GskRenderNode *_peel_return = gsk_blur_node_new (_peel_child, radius);
    peel_assume (_peel_return);
    return peel::RefPtr<BlurNode>::adopt_ref (reinterpret_cast<BlurNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_blur_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  float
  get_radius () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_blur_node_get_radius (_peel_this);
  }
}; /* class BlurNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
