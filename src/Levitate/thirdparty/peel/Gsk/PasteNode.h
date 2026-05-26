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
class PasteNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::PasteNode> ()
{
  return gsk_paste_node_get_type ();
}


namespace Gsk
{
class PasteNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PasteNode () = delete;
  PasteNode (const PasteNode &) = delete;
  PasteNode (PasteNode &&) = delete;
  PasteNode &
  operator = (const PasteNode &) = delete;
  PasteNode &
  operator = (PasteNode &&) = delete;
  ~PasteNode () = delete;
public:

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<PasteNode>
  create (const Graphene::Rect *bounds, size_t depth) noexcept
  {
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    ::GskRenderNode *_peel_return = gsk_paste_node_new (_peel_bounds, depth);
    peel_assume (_peel_return);
    return peel::RefPtr<PasteNode>::adopt_ref (reinterpret_cast<PasteNode *> (_peel_return));
  }

  size_t
  get_depth () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_paste_node_get_depth (_peel_this);
  }
}; /* class PasteNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
