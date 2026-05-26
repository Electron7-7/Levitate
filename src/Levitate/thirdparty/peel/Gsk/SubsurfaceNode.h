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
class DebugNode;
class RenderNode;
class SubsurfaceNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::SubsurfaceNode> ()
{
  return gsk_subsurface_node_get_type ();
}


namespace Gsk
{
class SubsurfaceNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SubsurfaceNode () = delete;
  SubsurfaceNode (const SubsurfaceNode &) = delete;
  SubsurfaceNode (SubsurfaceNode &&) = delete;
  SubsurfaceNode &
  operator = (const SubsurfaceNode &) = delete;
  SubsurfaceNode &
  operator = (SubsurfaceNode &&) = delete;
  ~SubsurfaceNode () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<SubsurfaceNode>
  create (RenderNode *child, void *subsurface) noexcept
  {
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    ::GskRenderNode *_peel_return = gsk_subsurface_node_new (_peel_child, subsurface);
    peel_assume (_peel_return);
    return peel::RefPtr<SubsurfaceNode>::adopt_ref (reinterpret_cast<SubsurfaceNode *> (_peel_return));
  }

  peel_nonnull_args (1)
  static void *
  get_subsurface (const DebugNode *node) noexcept
  {
    const ::GskRenderNode *_peel_node = reinterpret_cast<const ::GskRenderNode *> (node);
    return gsk_subsurface_node_get_subsurface (_peel_node);
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_subsurface_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }
}; /* class SubsurfaceNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
