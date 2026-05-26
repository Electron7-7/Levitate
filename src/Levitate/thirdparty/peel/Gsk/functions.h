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

peel_begin_header

namespace peel
{
namespace GObject
{
struct Value;
} /* namespace GObject */

namespace Gsk
{
class RenderNode;
} /* namespace Gsk */


namespace Gsk
{
/* component_transfer_equal moved to ComponentTransfer.equal */

/* path_parse moved to Path.parse */

/* serialization_error_quark moved to SerializationError.quark */

/* stroke_equal moved to Stroke.equal */

/* transform_parse moved to Transform.parse */

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static peel::RefPtr<RenderNode>
value_dup_render_node (const GObject::Value *value) noexcept
{
  const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
  ::GskRenderNode *_peel_return = gsk_value_dup_render_node (_peel_value);
  return peel::RefPtr<RenderNode>::adopt_ref (reinterpret_cast<RenderNode *> (_peel_return));
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static RenderNode *
value_get_render_node (const GObject::Value *value) noexcept
{
  const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
  ::GskRenderNode *_peel_return = gsk_value_get_render_node (_peel_value);
  return reinterpret_cast<RenderNode *> (_peel_return);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1, 2)
static void
value_set_render_node (GObject::Value *value, RenderNode *node) noexcept
{
  ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
  ::GskRenderNode *_peel_node = reinterpret_cast<::GskRenderNode *> (node);
  gsk_value_set_render_node (_peel_value, _peel_node);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
value_take_render_node (GObject::Value *value, peel::RefPtr<RenderNode> node) noexcept
{
  ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
  ::GskRenderNode *_peel_node = reinterpret_cast<::GskRenderNode *> (std::move (node).release_ref ());
  gsk_value_take_render_node (_peel_value, _peel_node);
}



} /* namespace Gsk */
} /* namespace peel */

peel_end_header

#include <peel/GObject/Value.h>
#include <peel/Gsk/RenderNode.h>
