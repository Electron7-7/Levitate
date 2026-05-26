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
enum class Isolation : std::underlying_type<::GskIsolation>::type;
class IsolationNode;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::IsolationNode> ()
{
  return gsk_isolation_node_get_type ();
}


namespace Gsk
{
class IsolationNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  IsolationNode () = delete;
  IsolationNode (const IsolationNode &) = delete;
  IsolationNode (IsolationNode &&) = delete;
  IsolationNode &
  operator = (const IsolationNode &) = delete;
  IsolationNode &
  operator = (IsolationNode &&) = delete;
  ~IsolationNode () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<IsolationNode>
  create (RenderNode *child, Isolation isolations) noexcept
  {
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    ::GskIsolation _peel_isolations = static_cast<::GskIsolation> (isolations);
    ::GskRenderNode *_peel_return = gsk_isolation_node_new (_peel_child, _peel_isolations);
    peel_assume (_peel_return);
    return peel::RefPtr<IsolationNode>::adopt_ref (reinterpret_cast<IsolationNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_isolation_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  Isolation
  get_isolations () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskIsolation _peel_return = gsk_isolation_node_get_isolations (_peel_this);
    return static_cast<Isolation> (_peel_return);
  }
}; /* class IsolationNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
