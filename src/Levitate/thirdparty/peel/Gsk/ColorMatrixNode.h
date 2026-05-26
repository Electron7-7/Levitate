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
namespace Graphene
{
struct Matrix;
struct Vec4;
} /* namespace Graphene */

namespace Gsk
{
class ColorMatrixNode;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::ColorMatrixNode> ()
{
  return gsk_color_matrix_node_get_type ();
}


namespace Gsk
{
class ColorMatrixNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ColorMatrixNode () = delete;
  ColorMatrixNode (const ColorMatrixNode &) = delete;
  ColorMatrixNode (ColorMatrixNode &&) = delete;
  ColorMatrixNode &
  operator = (const ColorMatrixNode &) = delete;
  ColorMatrixNode &
  operator = (ColorMatrixNode &&) = delete;
  ~ColorMatrixNode () = delete;
public:

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 2, 3)
  static peel::RefPtr<ColorMatrixNode>
  create (RenderNode *child, const Graphene::Matrix *color_matrix, const Graphene::Vec4 *color_offset) noexcept
  {
    ::GskRenderNode *_peel_child = reinterpret_cast<::GskRenderNode *> (child);
    const ::graphene_matrix_t *_peel_color_matrix = reinterpret_cast<const ::graphene_matrix_t *> (color_matrix);
    const ::graphene_vec4_t *_peel_color_offset = reinterpret_cast<const ::graphene_vec4_t *> (color_offset);
    ::GskRenderNode *_peel_return = gsk_color_matrix_node_new (_peel_child, _peel_color_matrix, _peel_color_offset);
    peel_assume (_peel_return);
    return peel::RefPtr<ColorMatrixNode>::adopt_ref (reinterpret_cast<ColorMatrixNode *> (_peel_return));
  }

  peel_returns_nonnull
  RenderNode *
  get_child () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_color_matrix_node_get_child (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  peel_returns_nonnull
  const Graphene::Matrix *
  get_color_matrix () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::graphene_matrix_t *_peel_return = gsk_color_matrix_node_get_color_matrix (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Graphene::Matrix *> (_peel_return);
  }

  peel_returns_nonnull
  const Graphene::Vec4 *
  get_color_offset () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::graphene_vec4_t *_peel_return = gsk_color_matrix_node_get_color_offset (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Graphene::Vec4 *> (_peel_return);
  }
}; /* class ColorMatrixNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
