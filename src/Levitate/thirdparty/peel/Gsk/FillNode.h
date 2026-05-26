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
class FillNode;
enum class FillRule : std::underlying_type<::GskFillRule>::type;
class /* record */ Path;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::FillNode> ()
{
  return gsk_fill_node_get_type ();
}


namespace Gsk
{
class FillNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FillNode () = delete;
  FillNode (const FillNode &) = delete;
  FillNode (FillNode &&) = delete;
  FillNode &
  operator = (const FillNode &) = delete;
  FillNode &
  operator = (FillNode &&) = delete;
  ~FillNode () = delete;
public:

  peel_arg_in (2) peel_nonnull_args (1, 2) peel_returns_nonnull
  static FillNode *
  create (RenderNode *child, Path *path, FillRule fill_rule) noexcept
  {
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    ::GskPath *_peel_path = reinterpret_cast<::GskPath *> (path);
    ::GskFillRule _peel_fill_rule = static_cast<::GskFillRule> (fill_rule);
    ::GskRenderNode *_peel_return = gsk_fill_node_new (_peel_child, _peel_path, _peel_fill_rule);
    peel_assume (_peel_return);
    return reinterpret_cast<FillNode *> (_peel_return);
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_fill_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  FillRule
  get_fill_rule () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskFillRule _peel_return = gsk_fill_node_get_fill_rule (_peel_this);
    return static_cast<FillRule> (_peel_return);
  }

  peel_returns_nonnull
  Path *
  get_path () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskPath *_peel_return = gsk_fill_node_get_path (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Path *> (_peel_return);
  }
}; /* class FillNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
