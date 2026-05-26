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
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::DebugNode> ()
{
  return gsk_debug_node_get_type ();
}


namespace Gsk
{
class DebugNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DebugNode () = delete;
  DebugNode (const DebugNode &) = delete;
  DebugNode (DebugNode &&) = delete;
  DebugNode &
  operator = (const DebugNode &) = delete;
  DebugNode &
  operator = (DebugNode &&) = delete;
  ~DebugNode () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<DebugNode>
  create (RenderNode *child, peel::String message) noexcept
  {
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    char *_peel_message = std::move (message).release_string ();
    ::GskRenderNode *_peel_return = gsk_debug_node_new (_peel_child, _peel_message);
    peel_assume (_peel_return);
    return peel::RefPtr<DebugNode>::adopt_ref (reinterpret_cast<DebugNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_debug_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_message () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_debug_node_get_message (_peel_this);
  }
}; /* class DebugNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
