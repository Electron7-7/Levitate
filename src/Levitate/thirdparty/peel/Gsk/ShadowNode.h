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
struct Shadow;
class ShadowNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::ShadowNode> ()
{
  return gsk_shadow_node_get_type ();
}


namespace Gsk
{
class ShadowNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ShadowNode () = delete;
  ShadowNode (const ShadowNode &) = delete;
  ShadowNode (ShadowNode &&) = delete;
  ShadowNode &
  operator = (const ShadowNode &) = delete;
  ShadowNode &
  operator = (ShadowNode &&) = delete;
  ~ShadowNode () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<ShadowNode>
  create (RenderNode *child, peel::ArrayRef<const Shadow> shadows) noexcept
  {
    gsize _peel_n_shadows;
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    const ::GskShadow *_peel_shadows = (_peel_n_shadows = shadows.size (), reinterpret_cast<const ::GskShadow *> (shadows.data ()));
    ::GskRenderNode *_peel_return = gsk_shadow_node_new (_peel_child, _peel_shadows, _peel_n_shadows);
    peel_assume (_peel_return);
    return peel::RefPtr<ShadowNode>::adopt_ref (reinterpret_cast<ShadowNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_shadow_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  size_t
  get_n_shadows () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_shadow_node_get_n_shadows (_peel_this);
  }

  peel_returns_nonnull
  const Shadow *
  get_shadow (size_t i) const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::GskShadow *_peel_return = gsk_shadow_node_get_shadow (_peel_this, i);
    peel_assume (_peel_return);
    return reinterpret_cast<const Shadow *> (_peel_return);
  }
}; /* class ShadowNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
