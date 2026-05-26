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
class ClipNode;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::ClipNode> ()
{
  return gsk_clip_node_get_type ();
}


namespace Gsk
{
class ClipNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ClipNode () = delete;
  ClipNode (const ClipNode &) = delete;
  ClipNode (ClipNode &&) = delete;
  ClipNode &
  operator = (const ClipNode &) = delete;
  ClipNode &
  operator = (ClipNode &&) = delete;
  ~ClipNode () = delete;
public:

  peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::RefPtr<ClipNode>
  create (RenderNode *child, const Graphene::Rect *clip) noexcept
  {
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    const ::graphene_rect_t *_peel_clip = reinterpret_cast<const ::graphene_rect_t *> (clip);
    ::GskRenderNode *_peel_return = gsk_clip_node_new (_peel_child, _peel_clip);
    peel_assume (_peel_return);
    return peel::RefPtr<ClipNode>::adopt_ref (reinterpret_cast<ClipNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_clip_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  peel_returns_nonnull
  const Graphene::Rect *
  get_clip () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::graphene_rect_t *_peel_return = gsk_clip_node_get_clip (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Graphene::Rect *> (_peel_return);
  }
}; /* class ClipNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
