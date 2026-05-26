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
class CrossFadeNode;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::CrossFadeNode> ()
{
  return gsk_cross_fade_node_get_type ();
}


namespace Gsk
{
class CrossFadeNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CrossFadeNode () = delete;
  CrossFadeNode (const CrossFadeNode &) = delete;
  CrossFadeNode (CrossFadeNode &&) = delete;
  CrossFadeNode &
  operator = (const CrossFadeNode &) = delete;
  CrossFadeNode &
  operator = (CrossFadeNode &&) = delete;
  ~CrossFadeNode () = delete;
public:

  peel_nonnull_args (1, 2)
  static peel::RefPtr<CrossFadeNode>
  create (RenderNode *start, RenderNode *end, float progress) noexcept
  {
    ::GskRenderNode *_peel_start = reinterpret_cast<::GskRenderNode *> (start);
    ::GskRenderNode *_peel_end = reinterpret_cast<::GskRenderNode *> (end);
    ::GskRenderNode *_peel_return = gsk_cross_fade_node_new (_peel_start, _peel_end, progress);
    peel_assume (_peel_return);
    return peel::RefPtr<CrossFadeNode>::adopt_ref (reinterpret_cast<CrossFadeNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_end_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_cross_fade_node_get_end_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  float
  get_progress () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_cross_fade_node_get_progress (_peel_this);
  }

  peel_returns_nonnull
  RenderNode *
  get_start_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_cross_fade_node_get_start_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }
}; /* class CrossFadeNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
