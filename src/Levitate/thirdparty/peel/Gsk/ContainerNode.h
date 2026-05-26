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
class ContainerNode;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::ContainerNode> ()
{
  return gsk_container_node_get_type ();
}


namespace Gsk
{
class ContainerNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ContainerNode () = delete;
  ContainerNode (const ContainerNode &) = delete;
  ContainerNode (ContainerNode &&) = delete;
  ContainerNode &
  operator = (const ContainerNode &) = delete;
  ContainerNode &
  operator = (ContainerNode &&) = delete;
  ~ContainerNode () = delete;
public:

  static peel::RefPtr<ContainerNode>
  create (peel::ArrayRef<RenderNode *> children) noexcept
  {
    guint _peel_n_children;
    ::GskRenderNode **_peel_children = (_peel_n_children = children.size (), reinterpret_cast<::GskRenderNode **> (children.data ()));
    ::GskRenderNode *_peel_return = gsk_container_node_new (_peel_children, _peel_n_children);
    peel_assume (_peel_return);
    return peel::RefPtr<ContainerNode>::adopt_ref (reinterpret_cast<ContainerNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_child (unsigned idx) const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_container_node_get_child (_peel_this, idx);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  unsigned
  get_n_children () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_container_node_get_n_children (_peel_this);
  }
}; /* class ContainerNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
