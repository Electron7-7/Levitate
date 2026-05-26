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
struct Point;
} /* namespace Graphene */

namespace Gsk
{
class TextNode;
} /* namespace Gsk */

namespace Pango
{
class Font;
struct GlyphInfo;
struct GlyphString;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gsk::TextNode> ()
{
  return gsk_text_node_get_type ();
}


namespace Gsk
{
class TextNode : public RenderNode
/* non-derivable */
{
private:
  using RenderNode::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TextNode () = delete;
  TextNode (const TextNode &) = delete;
  TextNode (TextNode &&) = delete;
  TextNode &
  operator = (const TextNode &) = delete;
  TextNode &
  operator = (TextNode &&) = delete;
  ~TextNode () = delete;
public:

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (1, 2, 3, 4)
  static peel::RefPtr<TextNode>
  create (Pango::Font *font, Pango::GlyphString *glyphs, const Gdk::RGBA *color, const Graphene::Point *offset) noexcept
  {
    ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (font);
    ::PangoGlyphString *_peel_glyphs = reinterpret_cast<::PangoGlyphString *> (glyphs);
    const ::GdkRGBA *_peel_color = reinterpret_cast<const ::GdkRGBA *> (color);
    const ::graphene_point_t *_peel_offset = reinterpret_cast<const ::graphene_point_t *> (offset);
    ::GskRenderNode *_peel_return = gsk_text_node_new (_peel_font, _peel_glyphs, _peel_color, _peel_offset);
    return peel::RefPtr<TextNode>::adopt_ref (reinterpret_cast<TextNode *> (_peel_return));
  }

  peel_returns_nonnull
  const Gdk::RGBA *
  get_color () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::GdkRGBA *_peel_return = gsk_text_node_get_color (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Gdk::RGBA *> (_peel_return);
  }

  peel_returns_nonnull
  Pango::Font *
  get_font () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::PangoFont *_peel_return = gsk_text_node_get_font (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Pango::Font *> (_peel_return);
  }

  peel::ArrayRef<const Pango::GlyphInfo>
  get_glyphs () const noexcept
  {
    guint _peel_n_glyphs;
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::PangoGlyphInfo *_peel_return = gsk_text_node_get_glyphs (_peel_this, &_peel_n_glyphs);
    peel_assume (_peel_return);
    return peel::ArrayRef<const Pango::GlyphInfo> (reinterpret_cast<const Pango::GlyphInfo *> (_peel_return), _peel_n_glyphs);
  }

  unsigned
  get_num_glyphs () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    return gsk_text_node_get_num_glyphs (_peel_this);
  }

  peel_returns_nonnull
  const Graphene::Point *
  get_offset () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    const ::graphene_point_t *_peel_return = gsk_text_node_get_offset (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Graphene::Point *> (_peel_return);
  }

  bool
  has_color_glyphs () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    gboolean _peel_return = gsk_text_node_has_color_glyphs (_peel_this);
    return !!_peel_return;
  }
}; /* class TextNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
