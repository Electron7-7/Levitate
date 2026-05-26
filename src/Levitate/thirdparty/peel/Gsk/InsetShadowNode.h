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
struct RGBA;
} /* namespace Gdk */

namespace Gsk
{
class InsetShadowNode;
struct RoundedRect;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::InsetShadowNode> ()
{
  return gsk_inset_shadow_node_get_type ();
}


namespace Gsk
{
class InsetShadowNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  InsetShadowNode () = delete;
  InsetShadowNode (const InsetShadowNode &) = delete;
  InsetShadowNode (InsetShadowNode &&) = delete;
  InsetShadowNode &
  operator = (const InsetShadowNode &) = delete;
  InsetShadowNode &
  operator = (InsetShadowNode &&) = delete;
  ~InsetShadowNode () = delete;
public:

  peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::RefPtr<InsetShadowNode>
  create (const RoundedRect *outline, const Gdk::RGBA *color, float dx, float dy, float spread, float blur_radius) noexcept
  {
    const ::GskRoundedRect *_peel_outline = reinterpret_cast<const ::GskRoundedRect *> (outline);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    ::GskRenderNode *_peel_return = gsk_inset_shadow_node_new (_peel_outline, _peel_color, dx, dy, spread, blur_radius);
    peel_assume (_peel_return);
    return peel::RefPtr<InsetShadowNode>::adopt_ref (reinterpret_cast<InsetShadowNode *> (_peel_return));
  }

  float
  get_blur_radius () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_inset_shadow_node_get_blur_radius (_peel_this);
  }

  peel_returns_nonnull
  const Gdk::RGBA *
  get_color () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::GdkRGBA *_peel_return = gsk_inset_shadow_node_get_color (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Gdk::RGBA *> (_peel_return);
  }

  float
  get_dx () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_inset_shadow_node_get_dx (_peel_this);
  }

  float
  get_dy () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_inset_shadow_node_get_dy (_peel_this);
  }

  peel_returns_nonnull
  const RoundedRect *
  get_outline () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::GskRoundedRect *_peel_return = gsk_inset_shadow_node_get_outline (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const RoundedRect *> (_peel_return);
  }

  float
  get_spread () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_inset_shadow_node_get_spread (_peel_this);
  }
}; /* class InsetShadowNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
