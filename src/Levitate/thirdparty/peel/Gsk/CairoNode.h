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
class CairoNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::CairoNode> ()
{
  return gsk_cairo_node_get_type ();
}


namespace Gsk
{
class CairoNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CairoNode () = delete;
  CairoNode (const CairoNode &) = delete;
  CairoNode (CairoNode &&) = delete;
  CairoNode &
  operator = (const CairoNode &) = delete;
  CairoNode &
  operator = (CairoNode &&) = delete;
  ~CairoNode () = delete;
public:

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<CairoNode>
  create (const Graphene::Rect *bounds) noexcept
  {
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    ::GskRenderNode *_peel_return = gsk_cairo_node_new (_peel_bounds);
    peel_assume (_peel_return);
    return peel::RefPtr<CairoNode>::adopt_ref (reinterpret_cast<CairoNode *> (_peel_return));
  }

  ::cairo_t *
  get_draw_context () noexcept
  {
    ::GskRenderNode *_peel_this = reinterpret_cast<::GskRenderNode *> (this);
    ::cairo_t *_peel_return = gsk_cairo_node_get_draw_context (_peel_this);
    peel_assume (_peel_return);
    return _peel_return;
  }

  peel_returns_nonnull
  ::cairo_surface_t *
  get_surface () noexcept
  {
    ::GskRenderNode *_peel_this = reinterpret_cast<::GskRenderNode *> (this);
    ::cairo_surface_t *_peel_return = gsk_cairo_node_get_surface (_peel_this);
    peel_assume (_peel_return);
    return _peel_return;
  }
}; /* class CairoNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
