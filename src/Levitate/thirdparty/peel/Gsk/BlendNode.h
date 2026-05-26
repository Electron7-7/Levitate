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
enum class BlendMode : std::underlying_type<::GskBlendMode>::type;
class BlendNode;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::BlendNode> ()
{
  return gsk_blend_node_get_type ();
}


namespace Gsk
{
class BlendNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  BlendNode () = delete;
  BlendNode (const BlendNode &) = delete;
  BlendNode (BlendNode &&) = delete;
  BlendNode &
  operator = (const BlendNode &) = delete;
  BlendNode &
  operator = (BlendNode &&) = delete;
  ~BlendNode () = delete;
public:

  peel_nonnull_args (1, 2)
  static peel::RefPtr<BlendNode>
  create (RenderNode *bottom, RenderNode *top, BlendMode blend_mode) noexcept
  {
    ::GskRenderNode *_peel_bottom = reinterpret_cast<::GskRenderNode *> (bottom);
    ::GskRenderNode *_peel_top = reinterpret_cast<::GskRenderNode *> (top);
    ::GskBlendMode _peel_blend_mode = static_cast<::GskBlendMode> (blend_mode);
    ::GskRenderNode *_peel_return = gsk_blend_node_new (_peel_bottom, _peel_top, _peel_blend_mode);
    peel_assume (_peel_return);
    return peel::RefPtr<BlendNode>::adopt_ref (reinterpret_cast<BlendNode *> (_peel_return));
  }

  BlendMode
  get_blend_mode () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskBlendMode _peel_return = gsk_blend_node_get_blend_mode (_peel_this);
    return static_cast<BlendMode> (_peel_return);
  }

  peel_returns_nonnull
  RenderNode *
  get_bottom_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_blend_node_get_bottom_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  peel_returns_nonnull
  RenderNode *
  get_top_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_blend_node_get_top_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }
}; /* class BlendNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
