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
enum class MaskMode : std::underlying_type<::GskMaskMode>::type;
class MaskNode;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::MaskNode> ()
{
  return gsk_mask_node_get_type ();
}


namespace Gsk
{
class MaskNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MaskNode () = delete;
  MaskNode (const MaskNode &) = delete;
  MaskNode (MaskNode &&) = delete;
  MaskNode &
  operator = (const MaskNode &) = delete;
  MaskNode &
  operator = (MaskNode &&) = delete;
  ~MaskNode () = delete;
public:

  peel_nonnull_args (1, 2)
  static peel::RefPtr<MaskNode>
  create (RenderNode *source, RenderNode *mask, MaskMode mask_mode) noexcept
  {
    ::GskRenderNode *_peel_source = reinterpret_cast<::GskRenderNode *> (source);
    ::GskRenderNode *_peel_mask = reinterpret_cast<::GskRenderNode *> (mask);
    ::GskMaskMode _peel_mask_mode = static_cast<::GskMaskMode> (mask_mode);
    ::GskRenderNode *_peel_return = gsk_mask_node_new (_peel_source, _peel_mask, _peel_mask_mode);
    peel_assume (_peel_return);
    return peel::RefPtr<MaskNode>::adopt_ref (reinterpret_cast<MaskNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_mask () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_mask_node_get_mask (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  MaskMode
  get_mask_mode () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskMaskMode _peel_return = gsk_mask_node_get_mask_mode (_peel_this);
    return static_cast<MaskMode> (_peel_return);
  }

  peel_returns_nonnull
  RenderNode *
  get_source () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_mask_node_get_source (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }
}; /* class MaskNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
