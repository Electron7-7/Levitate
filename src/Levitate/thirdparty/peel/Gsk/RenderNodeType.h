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
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::RenderNode::Type>
{
  typedef Gsk::RenderNode::Type UnownedType;

  static Gsk::RenderNode::Type
  get (const ::GValue *value)
  {
    return static_cast<Gsk::RenderNode::Type> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::RenderNode::Type m)
  {
    g_value_set_enum (value, static_cast<::GskRenderNodeType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::RenderNode::Type m)
  {
    set (value, m);
  }

  static Gsk::RenderNode::Type
  cast_for_create (Gsk::RenderNode::Type m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::RenderNode::Type> ()
{
  return gsk_render_node_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::RenderNode::Type>
{
  Gsk::RenderNode::Type default_value;

  constexpr PspecTraits (Gsk::RenderNode::Type default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_render_node_type_get_type (),
                              static_cast<::GskRenderNodeType> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class RenderNode::Type : std::underlying_type<::GskRenderNodeType>::type
{
  NOT_A_RENDER_NODE = GSK_NOT_A_RENDER_NODE,
  CONTAINER_NODE = GSK_CONTAINER_NODE,
  CAIRO_NODE = GSK_CAIRO_NODE,
  COLOR_NODE = GSK_COLOR_NODE,
  LINEAR_GRADIENT_NODE = GSK_LINEAR_GRADIENT_NODE,
  REPEATING_LINEAR_GRADIENT_NODE = GSK_REPEATING_LINEAR_GRADIENT_NODE,
  RADIAL_GRADIENT_NODE = GSK_RADIAL_GRADIENT_NODE,
  REPEATING_RADIAL_GRADIENT_NODE = GSK_REPEATING_RADIAL_GRADIENT_NODE,
  CONIC_GRADIENT_NODE = GSK_CONIC_GRADIENT_NODE,
  BORDER_NODE = GSK_BORDER_NODE,
  TEXTURE_NODE = GSK_TEXTURE_NODE,
  INSET_SHADOW_NODE = GSK_INSET_SHADOW_NODE,
  OUTSET_SHADOW_NODE = GSK_OUTSET_SHADOW_NODE,
  TRANSFORM_NODE = GSK_TRANSFORM_NODE,
  OPACITY_NODE = GSK_OPACITY_NODE,
  COLOR_MATRIX_NODE = GSK_COLOR_MATRIX_NODE,
  REPEAT_NODE = GSK_REPEAT_NODE,
  CLIP_NODE = GSK_CLIP_NODE,
  ROUNDED_CLIP_NODE = GSK_ROUNDED_CLIP_NODE,
  SHADOW_NODE = GSK_SHADOW_NODE,
  BLEND_NODE = GSK_BLEND_NODE,
  CROSS_FADE_NODE = GSK_CROSS_FADE_NODE,
  TEXT_NODE = GSK_TEXT_NODE,
  BLUR_NODE = GSK_BLUR_NODE,
  DEBUG_NODE = GSK_DEBUG_NODE,
  GL_SHADER_NODE = GSK_GL_SHADER_NODE,
  TEXTURE_SCALE_NODE = GSK_TEXTURE_SCALE_NODE,
  MASK_NODE = GSK_MASK_NODE,
  FILL_NODE = GSK_FILL_NODE,
  STROKE_NODE = GSK_STROKE_NODE,
  SUBSURFACE_NODE = GSK_SUBSURFACE_NODE,
  COMPONENT_TRANSFER_NODE = GSK_COMPONENT_TRANSFER_NODE,
  COPY_NODE = GSK_COPY_NODE,
  PASTE_NODE = GSK_PASTE_NODE,
  COMPOSITE_NODE = GSK_COMPOSITE_NODE,
  ISOLATION_NODE = GSK_ISOLATION_NODE,
  DISPLACEMENT_NODE = GSK_DISPLACEMENT_NODE,
  ARITHMETIC_NODE = GSK_ARITHMETIC_NODE,
}; /* enum RenderNode::Type */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
