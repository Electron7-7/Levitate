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
class /* record */ Path;
class RenderNode;
class /* record */ Stroke;
class StrokeNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::StrokeNode> ()
{
  return gsk_stroke_node_get_type ();
}


namespace Gsk
{
class StrokeNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  StrokeNode () = delete;
  StrokeNode (const StrokeNode &) = delete;
  StrokeNode (StrokeNode &&) = delete;
  StrokeNode &
  operator = (const StrokeNode &) = delete;
  StrokeNode &
  operator = (StrokeNode &&) = delete;
  ~StrokeNode () = delete;
public:

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 2, 3) peel_returns_nonnull
  static StrokeNode *
  create (RenderNode *child, Path *path, const Stroke *stroke) noexcept
  {
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    const ::GskStroke *_peel_stroke = reinterpret_cast<const ::GskStroke *> (stroke);
    ::GskRenderNode *_peel_return = gsk_stroke_node_new (_peel_child, _peel_path, _peel_stroke);
    peel_assume (_peel_return);
    return reinterpret_cast<StrokeNode *> (_peel_return);
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_stroke_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  peel_returns_nonnull
  Path *
  get_path () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskPath *_peel_return = gsk_stroke_node_get_path (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Path *> (_peel_return);
  }

  peel_returns_nonnull
  const Stroke *
  get_stroke () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::GskStroke *_peel_return = gsk_stroke_node_get_stroke (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Stroke *> (_peel_return);
  }
}; /* class StrokeNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
