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
class RoundedClipNode;
struct RoundedRect;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::RoundedClipNode> ()
{
  return gsk_rounded_clip_node_get_type ();
}


namespace Gsk
{
class RoundedClipNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  RoundedClipNode () = delete;
  RoundedClipNode (const RoundedClipNode &) = delete;
  RoundedClipNode (RoundedClipNode &&) = delete;
  RoundedClipNode &
  operator = (const RoundedClipNode &) = delete;
  RoundedClipNode &
  operator = (RoundedClipNode &&) = delete;
  ~RoundedClipNode () = delete;
public:

  peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::RefPtr<RoundedClipNode>
  create (RenderNode *child, const RoundedRect *clip) noexcept
  {
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    const ::GskRoundedRect *_peel_clip = reinterpret_cast<const ::GskRoundedRect *> (clip);
    ::GskRenderNode *_peel_return = gsk_rounded_clip_node_new (_peel_child, _peel_clip);
    peel_assume (_peel_return);
    return peel::RefPtr<RoundedClipNode>::adopt_ref (reinterpret_cast<RoundedClipNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_rounded_clip_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  peel_returns_nonnull
  const RoundedRect *
  get_clip () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::GskRoundedRect *_peel_return = gsk_rounded_clip_node_get_clip (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const RoundedRect *> (_peel_return);
  }
}; /* class RoundedClipNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
