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
namespace Gdk
{
enum class ColorChannel : std::underlying_type<::GdkColorChannel>::type;
} /* namespace Gdk */

namespace Gsk
{
class /* record */ ComponentTransfer;
class ComponentTransferNode;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::ComponentTransferNode> ()
{
  return gsk_component_transfer_node_get_type ();
}


namespace Gsk
{
class ComponentTransferNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ComponentTransferNode () = delete;
  ComponentTransferNode (const ComponentTransferNode &) = delete;
  ComponentTransferNode (ComponentTransferNode &&) = delete;
  ComponentTransferNode &
  operator = (const ComponentTransferNode &) = delete;
  ComponentTransferNode &
  operator = (ComponentTransferNode &&) = delete;
  ~ComponentTransferNode () = delete;
public:

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_arg_in (5) peel_nonnull_args (1, 2, 3, 4, 5)
  static peel::RefPtr<ComponentTransferNode>
  create (RenderNode *child, const ComponentTransfer *r, const ComponentTransfer *g, const ComponentTransfer *b, const ComponentTransfer *a) noexcept
  {
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    const ::GskComponentTransfer *_peel_r = reinterpret_cast<const ::GskComponentTransfer *> (r);
    const ::GskComponentTransfer *_peel_g = reinterpret_cast<const ::GskComponentTransfer *> (g);
    const ::GskComponentTransfer *_peel_b = reinterpret_cast<const ::GskComponentTransfer *> (b);
    const ::GskComponentTransfer *_peel_a = reinterpret_cast<const ::GskComponentTransfer *> (a);
    ::GskRenderNode *_peel_return = gsk_component_transfer_node_new (_peel_child, _peel_r, _peel_g, _peel_b, _peel_a);
    peel_assume (_peel_return);
    return peel::RefPtr<ComponentTransferNode>::adopt_ref (reinterpret_cast<ComponentTransferNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_component_transfer_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  peel_returns_nonnull
  const ComponentTransfer *
  get_transfer (Gdk::ColorChannel component) const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GdkColorChannel _peel_component = static_cast<::GdkColorChannel> (component);
    const ::GskComponentTransfer *_peel_return = gsk_component_transfer_node_get_transfer (_peel_this, _peel_component);
    peel_assume (_peel_return);
    return reinterpret_cast<const ComponentTransfer *> (_peel_return);
  }
}; /* class ComponentTransferNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
