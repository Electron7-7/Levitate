#pragma once

/* Auto-generated, do not modify */
/* Package pango */

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
#include <pango/pango.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Pango
{
struct AttrShape;
struct Color;
class Font;
struct GlyphItem;
struct GlyphString;
class Layout;
struct LayoutLine;
struct Matrix;
enum class RenderPart : std::underlying_type<::PangoRenderPart>::type;
class Renderer;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::Renderer> ()
{
  return pango_renderer_get_type ();
}


namespace Pango
{
class Renderer : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::PangoRenderer) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Renderer () = delete;
  Renderer (const Renderer &) = delete;
  Renderer (Renderer &&) = delete;
  Renderer &
  operator = (const Renderer &) = delete;
  Renderer &
  operator = (Renderer &&) = delete;
protected:
  ~Renderer () = default;
public:

  void
  activate () noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    pango_renderer_activate (_peel_this);
  }

  void
  deactivate () noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    pango_renderer_deactivate (_peel_this);
  }

  void
  draw_error_underline (int x, int y, int width, int height) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    pango_renderer_draw_error_underline (_peel_this, x, y, width, height);
  }

  peel_nonnull_args (2)
  void
  draw_glyph (Font *font, uint32_t glyph, double x, double y) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (font);
    pango_renderer_draw_glyph (_peel_this, _peel_font, glyph, x, y);
  }

  peel_arg_in (3) peel_nonnull_args (3)
  void
  draw_glyph_item (const char *text, GlyphItem *glyph_item, int x, int y) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoGlyphItem *_peel_glyph_item = reinterpret_cast<::PangoGlyphItem *> (glyph_item);
    pango_renderer_draw_glyph_item (_peel_this, text, _peel_glyph_item, x, y);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  draw_glyphs (Font *font, GlyphString *glyphs, int x, int y) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (font);
    ::PangoGlyphString *_peel_glyphs = reinterpret_cast<::PangoGlyphString *> (glyphs);
    pango_renderer_draw_glyphs (_peel_this, _peel_font, _peel_glyphs, x, y);
  }

  peel_nonnull_args (2)
  void
  draw_layout (Layout *layout, int x, int y) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoLayout *_peel_layout = reinterpret_cast<::PangoLayout *> (layout);
    pango_renderer_draw_layout (_peel_this, _peel_layout, x, y);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  draw_layout_line (LayoutLine *line, int x, int y) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoLayoutLine *_peel_line = reinterpret_cast<::PangoLayoutLine *> (line);
    pango_renderer_draw_layout_line (_peel_this, _peel_line, x, y);
  }

  void
  draw_rectangle (RenderPart part, int x, int y, int width, int height) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoRenderPart _peel_part = static_cast<::PangoRenderPart> (part);
    pango_renderer_draw_rectangle (_peel_this, _peel_part, x, y, width, height);
  }

  void
  draw_trapezoid (RenderPart part, double y1_, double x11, double x21, double y2, double x12, double x22) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoRenderPart _peel_part = static_cast<::PangoRenderPart> (part);
    pango_renderer_draw_trapezoid (_peel_this, _peel_part, y1_, x11, x21, y2, x12, x22);
  }

  uint16_t
  get_alpha (RenderPart part) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoRenderPart _peel_part = static_cast<::PangoRenderPart> (part);
    return pango_renderer_get_alpha (_peel_this, _peel_part);
  }

  Color *
  get_color (RenderPart part) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoRenderPart _peel_part = static_cast<::PangoRenderPart> (part);
    ::PangoColor *_peel_return = pango_renderer_get_color (_peel_this, _peel_part);
    return reinterpret_cast<Color *> (_peel_return);
  }

  Layout *
  get_layout () noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoLayout *_peel_return = pango_renderer_get_layout (_peel_this);
    return reinterpret_cast<Layout *> (_peel_return);
  }

  LayoutLine *
  get_layout_line () noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoLayoutLine *_peel_return = pango_renderer_get_layout_line (_peel_this);
    return reinterpret_cast<LayoutLine *> (_peel_return);
  }

  const Matrix *
  get_matrix () noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    const ::PangoMatrix *_peel_return = pango_renderer_get_matrix (_peel_this);
    return reinterpret_cast<const Matrix *> (_peel_return);
  }

  void
  part_changed (RenderPart part) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoRenderPart _peel_part = static_cast<::PangoRenderPart> (part);
    pango_renderer_part_changed (_peel_this, _peel_part);
  }

  void
  set_alpha (RenderPart part, uint16_t alpha) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoRenderPart _peel_part = static_cast<::PangoRenderPart> (part);
    pango_renderer_set_alpha (_peel_this, _peel_part, alpha);
  }

  peel_arg_in (3)
  void
  set_color (RenderPart part, const Color *color) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoRenderPart _peel_part = static_cast<::PangoRenderPart> (part);
    const ::PangoColor *_peel_color = reinterpret_cast<const ::PangoColor *> (color);
    pango_renderer_set_color (_peel_this, _peel_part, _peel_color);
  }

  peel_arg_in (2)
  void
  set_matrix (const Matrix *matrix) noexcept
  {
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    const ::PangoMatrix *_peel_matrix = reinterpret_cast<const ::PangoMatrix *> (matrix);
    pango_renderer_set_matrix (_peel_this, _peel_matrix);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Renderer> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_begin () noexcept
  {
    ::PangoRendererClass *_peel_class = reinterpret_cast<::PangoRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    _peel_class->begin (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_draw_error_underline (int x, int y, int width, int height) noexcept
  {
    ::PangoRendererClass *_peel_class = reinterpret_cast<::PangoRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    _peel_class->draw_error_underline (_peel_this, x, y, width, height);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_draw_glyph (Font *font, uint32_t glyph, double x, double y) noexcept
  {
    ::PangoRendererClass *_peel_class = reinterpret_cast<::PangoRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (font);
    _peel_class->draw_glyph (_peel_this, _peel_font, glyph, x, y);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (3)
  void
  parent_vfunc_draw_glyph_item (const char *text, GlyphItem *glyph_item, int x, int y) noexcept
  {
    ::PangoRendererClass *_peel_class = reinterpret_cast<::PangoRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoGlyphItem *_peel_glyph_item = reinterpret_cast<::PangoGlyphItem *> (glyph_item);
    _peel_class->draw_glyph_item (_peel_this, text, _peel_glyph_item, x, y);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_draw_glyphs (Font *font, GlyphString *glyphs, int x, int y) noexcept
  {
    ::PangoRendererClass *_peel_class = reinterpret_cast<::PangoRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (font);
    ::PangoGlyphString *_peel_glyphs = reinterpret_cast<::PangoGlyphString *> (glyphs);
    _peel_class->draw_glyphs (_peel_this, _peel_font, _peel_glyphs, x, y);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_draw_rectangle (RenderPart part, int x, int y, int width, int height) noexcept
  {
    ::PangoRendererClass *_peel_class = reinterpret_cast<::PangoRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoRenderPart _peel_part = static_cast<::PangoRenderPart> (part);
    _peel_class->draw_rectangle (_peel_this, _peel_part, x, y, width, height);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_draw_shape (AttrShape *attr, int x, int y) noexcept
  {
    ::PangoRendererClass *_peel_class = reinterpret_cast<::PangoRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoAttrShape *_peel_attr = reinterpret_cast<::PangoAttrShape *> (attr);
    _peel_class->draw_shape (_peel_this, _peel_attr, x, y);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_draw_trapezoid (RenderPart part, double y1_, double x11, double x21, double y2, double x12, double x22) noexcept
  {
    ::PangoRendererClass *_peel_class = reinterpret_cast<::PangoRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoRenderPart _peel_part = static_cast<::PangoRenderPart> (part);
    _peel_class->draw_trapezoid (_peel_this, _peel_part, y1_, x11, x21, y2, x12, x22);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_end () noexcept
  {
    ::PangoRendererClass *_peel_class = reinterpret_cast<::PangoRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    _peel_class->end (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_part_changed (RenderPart part) noexcept
  {
    ::PangoRendererClass *_peel_class = reinterpret_cast<::PangoRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoRenderPart _peel_part = static_cast<::PangoRenderPart> (part);
    _peel_class->part_changed (_peel_this, _peel_part);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_prepare_run (GlyphItem *run) noexcept
  {
    ::PangoRendererClass *_peel_class = reinterpret_cast<::PangoRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoRenderer *_peel_this = reinterpret_cast<::PangoRenderer *> (this);
    ::PangoLayoutRun *_peel_run = reinterpret_cast<::PangoLayoutRun *> (run);
    _peel_class->prepare_run (_peel_this, _peel_run);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::PangoRendererClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_begin ()
    {
      ::PangoRendererClass *klass = reinterpret_cast<::PangoRendererClass *> (this);
      klass->begin = +[] (::PangoRenderer *renderer) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (renderer);
        _peel_this->DerivedClass::vfunc_begin ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_draw_error_underline ()
    {
      ::PangoRendererClass *klass = reinterpret_cast<::PangoRendererClass *> (this);
      klass->draw_error_underline = +[] (::PangoRenderer *renderer, int x, int y, int width, int height) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (renderer);
        _peel_this->DerivedClass::vfunc_draw_error_underline (x, y, width, height);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_draw_glyph ()
    {
      ::PangoRendererClass *klass = reinterpret_cast<::PangoRendererClass *> (this);
      klass->draw_glyph = +[] (::PangoRenderer *renderer, ::PangoFont *font, PangoGlyph glyph, double x, double y) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (renderer);
        Font *_peel_font = reinterpret_cast<Font *> (font);
        _peel_this->DerivedClass::vfunc_draw_glyph (_peel_font, glyph, x, y);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_draw_glyph_item ()
    {
      ::PangoRendererClass *klass = reinterpret_cast<::PangoRendererClass *> (this);
      klass->draw_glyph_item = +[] (::PangoRenderer *renderer, const char *text, ::PangoGlyphItem *glyph_item, int x, int y) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (renderer);
        GlyphItem *_peel_glyph_item = reinterpret_cast<GlyphItem *> (glyph_item);
        _peel_this->DerivedClass::vfunc_draw_glyph_item (text, _peel_glyph_item, x, y);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_draw_glyphs ()
    {
      ::PangoRendererClass *klass = reinterpret_cast<::PangoRendererClass *> (this);
      klass->draw_glyphs = +[] (::PangoRenderer *renderer, ::PangoFont *font, ::PangoGlyphString *glyphs, int x, int y) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (renderer);
        Font *_peel_font = reinterpret_cast<Font *> (font);
        GlyphString *_peel_glyphs = reinterpret_cast<GlyphString *> (glyphs);
        _peel_this->DerivedClass::vfunc_draw_glyphs (_peel_font, _peel_glyphs, x, y);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_draw_rectangle ()
    {
      ::PangoRendererClass *klass = reinterpret_cast<::PangoRendererClass *> (this);
      klass->draw_rectangle = +[] (::PangoRenderer *renderer, ::PangoRenderPart part, int x, int y, int width, int height) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (renderer);
        RenderPart _peel_part = static_cast<RenderPart> (part);
        _peel_this->DerivedClass::vfunc_draw_rectangle (_peel_part, x, y, width, height);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_draw_shape ()
    {
      ::PangoRendererClass *klass = reinterpret_cast<::PangoRendererClass *> (this);
      klass->draw_shape = +[] (::PangoRenderer *renderer, ::PangoAttrShape *attr, int x, int y) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (renderer);
        AttrShape *_peel_attr = reinterpret_cast<AttrShape *> (attr);
        _peel_this->DerivedClass::vfunc_draw_shape (_peel_attr, x, y);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_draw_trapezoid ()
    {
      ::PangoRendererClass *klass = reinterpret_cast<::PangoRendererClass *> (this);
      klass->draw_trapezoid = +[] (::PangoRenderer *renderer, ::PangoRenderPart part, double y1_, double x11, double x21, double y2, double x12, double x22) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (renderer);
        RenderPart _peel_part = static_cast<RenderPart> (part);
        _peel_this->DerivedClass::vfunc_draw_trapezoid (_peel_part, y1_, x11, x21, y2, x12, x22);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_end ()
    {
      ::PangoRendererClass *klass = reinterpret_cast<::PangoRendererClass *> (this);
      klass->end = +[] (::PangoRenderer *renderer) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (renderer);
        _peel_this->DerivedClass::vfunc_end ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_part_changed ()
    {
      ::PangoRendererClass *klass = reinterpret_cast<::PangoRendererClass *> (this);
      klass->part_changed = +[] (::PangoRenderer *renderer, ::PangoRenderPart part) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (renderer);
        RenderPart _peel_part = static_cast<RenderPart> (part);
        _peel_this->DerivedClass::vfunc_part_changed (_peel_part);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_prepare_run ()
    {
      ::PangoRendererClass *klass = reinterpret_cast<::PangoRendererClass *> (this);
      klass->prepare_run = +[] (::PangoRenderer *renderer, ::PangoLayoutRun *run) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (renderer);
        GlyphItem *_peel_run = reinterpret_cast<GlyphItem *> (run);
        _peel_this->DerivedClass::vfunc_prepare_run (_peel_run);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::PangoRendererClass),
                 "Renderer::Class size mismatch");
  static_assert (alignof (Class) == alignof (::PangoRendererClass),
                 "Renderer::Class align mismatch");
}; /* class Renderer */

static_assert (sizeof (Renderer) == sizeof (::PangoRenderer),
               "Renderer size mismatch");
static_assert (alignof (Renderer) == alignof (::PangoRenderer),
               "Renderer align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
