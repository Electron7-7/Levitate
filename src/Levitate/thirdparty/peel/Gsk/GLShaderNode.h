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
namespace GLib
{
class /* record */ Bytes;
} /* namespace GLib */

namespace Graphene
{
struct Rect;
} /* namespace Graphene */

namespace Gsk
{
class GLShader;
class GLShaderNode;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::GLShaderNode> ()
{
  return gsk_gl_shader_node_get_type ();
}


namespace Gsk
{
class GLShaderNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GLShaderNode () = delete;
  GLShaderNode (const GLShaderNode &) = delete;
  GLShaderNode (GLShaderNode &&) = delete;
  GLShaderNode &
  operator = (const GLShaderNode &) = delete;
  GLShaderNode &
  operator = (GLShaderNode &&) = delete;
  ~GLShaderNode () = delete;
public:

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (1, 2, 3)
  static peel::RefPtr<GLShaderNode>
  create (GLShader *shader, const Graphene::Rect *bounds, GLib::Bytes *args, peel::ArrayRef<RenderNode *> children) noexcept
  {
    guint _peel_n_children;
    ::GskGLShader *_peel_shader = reinterpret_cast<::GskGLShader *> (shader);
    const ::graphene_rect_t *_peel_bounds = reinterpret_cast<const ::graphene_rect_t *> (bounds);
    ::GBytes *_peel_args = reinterpret_cast<::GBytes *> (args);
    ::GskRenderNode **_peel_children = (_peel_n_children = children.size (), reinterpret_cast<::GskRenderNode **> (children.data ()));
    ::GskRenderNode *_peel_return = gsk_gl_shader_node_new (_peel_shader, _peel_bounds, _peel_args, _peel_children, _peel_n_children);
    peel_assume (_peel_return);
    return peel::RefPtr<GLShaderNode>::adopt_ref (reinterpret_cast<GLShaderNode *> (_peel_return));
  }

  peel_returns_nonnull
  GLib::Bytes *
  get_args () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GBytes *_peel_return = gsk_gl_shader_node_get_args (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GLib::Bytes *> (_peel_return);
  }

  peel_returns_nonnull
  RenderNode *
  get_child (unsigned idx) const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNode *_peel_return = gsk_gl_shader_node_get_child (_peel_this, idx);
    peel_assume (_peel_return);
    return reinterpret_cast<RenderNode *> (_peel_return);
  }

  unsigned
  get_n_children () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_gl_shader_node_get_n_children (_peel_this);
  }

  peel_returns_nonnull
  GLShader *
  get_shader () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskGLShader *_peel_return = gsk_gl_shader_node_get_shader (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GLShader *> (_peel_return);
  }
}; /* class GLShaderNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
