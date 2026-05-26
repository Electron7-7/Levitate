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
class Texture;
} /* namespace Gdk */

namespace Graphene
{
struct Rect;
} /* namespace Graphene */

namespace Gsk
{
enum class ScalingFilter : std::underlying_type<::GskScalingFilter>::type;
class TextureScaleNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::TextureScaleNode> ()
{
  return gsk_texture_scale_node_get_type ();
}


namespace Gsk
{
class TextureScaleNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TextureScaleNode () = delete;
  TextureScaleNode (const TextureScaleNode &) = delete;
  TextureScaleNode (TextureScaleNode &&) = delete;
  TextureScaleNode &
  operator = (const TextureScaleNode &) = delete;
  TextureScaleNode &
  operator = (TextureScaleNode &&) = delete;
  ~TextureScaleNode () = delete;
public:

  peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::RefPtr<TextureScaleNode>
  create (Gdk::Texture *texture, const Graphene::Rect *bounds, ScalingFilter filter) noexcept
  {
    ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    ::GskScalingFilter _peel_filter = static_cast<::GskScalingFilter> (filter);
    ::GskRenderNode *_peel_return = gsk_texture_scale_node_new (_peel_texture, _peel_bounds, _peel_filter);
    peel_assume (_peel_return);
    return peel::RefPtr<TextureScaleNode>::adopt_ref (reinterpret_cast<TextureScaleNode *> (_peel_return));
  }

  ScalingFilter
  get_filter () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskScalingFilter _peel_return = gsk_texture_scale_node_get_filter (_peel_this);
    return static_cast<ScalingFilter> (_peel_return);
  }

  peel_returns_nonnull
  Gdk::Texture *
  get_texture () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GdkTexture *_peel_return = gsk_texture_scale_node_get_texture (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gdk::Texture *> (_peel_return);
  }
}; /* class TextureScaleNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
