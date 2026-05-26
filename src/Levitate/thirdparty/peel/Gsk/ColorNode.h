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

namespace Graphene
{
struct Rect;
} /* namespace Graphene */

namespace Gsk
{
class ColorNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::ColorNode> ()
{
  return gsk_color_node_get_type ();
}


namespace Gsk
{
class ColorNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ColorNode () = delete;
  ColorNode (const ColorNode &) = delete;
  ColorNode (ColorNode &&) = delete;
  ColorNode &
  operator = (const ColorNode &) = delete;
  ColorNode &
  operator = (ColorNode &&) = delete;
  ~ColorNode () = delete;
public:

  peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::RefPtr<ColorNode>
  create (const Gdk::RGBA *rgba, const Graphene::Rect *bounds) noexcept
  {
    const ::GdkRGBA *_peel_rgba = reinterpret_cast<const ::GdkRGBA *> (rgba);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    ::GskRenderNode *_peel_return = gsk_color_node_new (_peel_rgba, _peel_bounds);
    peel_assume (_peel_return);
    return peel::RefPtr<ColorNode>::adopt_ref (reinterpret_cast<ColorNode *> (_peel_return));
  }

  peel_returns_nonnull
  const Gdk::RGBA *
  get_color () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::GdkRGBA *_peel_return = gsk_color_node_get_color (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Gdk::RGBA *> (_peel_return);
  }
}; /* class ColorNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
