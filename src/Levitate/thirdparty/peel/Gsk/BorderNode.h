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
class BorderNode;
struct RoundedRect;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::BorderNode> ()
{
  return gsk_border_node_get_type ();
}


namespace Gsk
{
class BorderNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  BorderNode () = delete;
  BorderNode (const BorderNode &) = delete;
  BorderNode (BorderNode &&) = delete;
  BorderNode &
  operator = (const BorderNode &) = delete;
  BorderNode &
  operator = (BorderNode &&) = delete;
  ~BorderNode () = delete;
public:

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<BorderNode>
  create (const RoundedRect *outline, const float (&border_width)[4], const Gdk::RGBA (&border_color)[4]) noexcept
  {
    const ::GskRoundedRect *_peel_outline = reinterpret_cast<const ::GskRoundedRect *> (outline);
    const float *_peel_border_width = reinterpret_cast<const float *> (border_width);
    const ::GdkRGBA *_peel_border_color = reinterpret_cast<const ::GdkRGBA *> (border_color);
    ::GskRenderNode *_peel_return = gsk_border_node_new (_peel_outline, _peel_border_width, _peel_border_color);
    peel_assume (_peel_return);
    return peel::RefPtr<BorderNode>::adopt_ref (reinterpret_cast<BorderNode *> (_peel_return));
  }

  const Gdk::RGBA
  (&get_colors () const noexcept)[4]
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::GdkRGBA *_peel_return = gsk_border_node_get_colors (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Gdk::RGBA (&)[4]> (*_peel_return);
  }

  peel_returns_nonnull
  const RoundedRect *
  get_outline () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::GskRoundedRect *_peel_return = gsk_border_node_get_outline (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const RoundedRect *> (_peel_return);
  }

  const float
  (&get_widths () const noexcept)[4]
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const float *_peel_return = gsk_border_node_get_widths (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const float (&)[4]> (*_peel_return);
  }
}; /* class BorderNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
