#pragma once

/* Auto-generated, do not modify */
/* Package pangocairo */

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
#include <pango/pangocairo.h>

peel_begin_header

namespace peel
{
namespace Pango
{
struct AttrShape;
class Context;
class Font;
struct GlyphItem;
struct GlyphString;
class Layout;
struct LayoutLine;
} /* namespace Pango */


namespace PangoCairo
{
peel_no_warn_unused peel_nonnull_args (1)
static const ::cairo_font_options_t *
context_get_font_options (Pango::Context *context) noexcept
{
  ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
  return pango_cairo_context_get_font_options (_peel_context);
}

peel_no_warn_unused peel_nonnull_args (1)
static double
context_get_resolution (Pango::Context *context) noexcept
{
  ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
  return pango_cairo_context_get_resolution (_peel_context);
}

peel_no_warn_unused peel_nonnull_args (1)
static ::PangoCairoShapeRendererFunc
context_get_shape_renderer (Pango::Context *context, gpointer *data) noexcept
{
  ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
  return pango_cairo_context_get_shape_renderer (_peel_context, data);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1)
static void
context_set_font_options (Pango::Context *context, const ::cairo_font_options_t *options) noexcept
{
  ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
  pango_cairo_context_set_font_options (_peel_context, options);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
context_set_resolution (Pango::Context *context, double dpi) noexcept
{
  ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
  pango_cairo_context_set_resolution (_peel_context, dpi);
}

template<typename ShapeRendererFunc>
peel_no_warn_unused peel_nonnull_args (1)
static void
context_set_shape_renderer (Pango::Context *context, ShapeRendererFunc &&func) noexcept
{
  gpointer _peel_data;
  ::GDestroyNotify _peel_dnotify;
  ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
  ::PangoCairoShapeRendererFunc _peel_func = peel::internals::CallbackHelper<void, ::cairo_t *, ::PangoAttrShape *, gboolean>::wrap_notified_callback (
      static_cast<ShapeRendererFunc &&> (func),
      [] (::cairo_t *cr, ::PangoAttrShape *attr, gboolean do_path, gpointer data) -> void
      {
        ShapeRendererFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<ShapeRendererFunc>::type *> (data);
        Pango::AttrShape *_peel_attr = reinterpret_cast<Pango::AttrShape *> (attr);
        bool _peel_do_path = !!do_path;
        peel::internals::invoke_if_nonnull<void> (_peel_captured_func) (cr, _peel_attr, _peel_do_path);
      },
      &_peel_data, &_peel_dnotify, peel::internals::is_const_invocable<ShapeRendererFunc, void, ::cairo_t *, Pango::AttrShape *, bool>::value);
  pango_cairo_context_set_shape_renderer (_peel_context, _peel_func, _peel_data, _peel_dnotify);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static peel::RefPtr<Pango::Context>
create_context (::cairo_t *cr) noexcept
{
  ::PangoContext *_peel_return = pango_cairo_create_context (cr);
  peel_assume (_peel_return);
  return peel::RefPtr<Pango::Context>::adopt_ref (reinterpret_cast<Pango::Context *> (_peel_return));
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static peel::RefPtr<Pango::Layout>
create_layout (::cairo_t *cr) noexcept
{
  ::PangoLayout *_peel_return = pango_cairo_create_layout (cr);
  peel_assume (_peel_return);
  return peel::RefPtr<Pango::Layout>::adopt_ref (reinterpret_cast<Pango::Layout *> (_peel_return));
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
error_underline_path (::cairo_t *cr, double x, double y, double width, double height) noexcept
{
  pango_cairo_error_underline_path (cr, x, y, width, height);
}

/* font_map_get_default moved to FontMap.get_default */

/* font_map_new moved to FontMap.new */

/* font_map_new_for_font_type moved to FontMap.new_for_font_type */

peel_no_warn_unused peel_arg_in (1) peel_arg_in (3) peel_nonnull_args (1, 2, 3)
static void
glyph_string_path (::cairo_t *cr, Pango::Font *font, Pango::GlyphString *glyphs) noexcept
{
  ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (font);
  ::PangoGlyphString *_peel_glyphs = reinterpret_cast<::PangoGlyphString *> (glyphs);
  pango_cairo_glyph_string_path (cr, _peel_font, _peel_glyphs);
}

peel_no_warn_unused peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
static void
layout_line_path (::cairo_t *cr, Pango::LayoutLine *line) noexcept
{
  ::PangoLayoutLine *_peel_line = reinterpret_cast<::PangoLayoutLine *> (line);
  pango_cairo_layout_line_path (cr, _peel_line);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1, 2)
static void
layout_path (::cairo_t *cr, Pango::Layout *layout) noexcept
{
  ::PangoLayout *_peel_layout = reinterpret_cast<::PangoLayout *> (layout);
  pango_cairo_layout_path (cr, _peel_layout);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
show_error_underline (::cairo_t *cr, double x, double y, double width, double height) noexcept
{
  pango_cairo_show_error_underline (cr, x, y, width, height);
}

peel_no_warn_unused peel_arg_in (1) peel_arg_in (3) peel_nonnull_args (1, 2, 3)
static void
show_glyph_item (::cairo_t *cr, const char *text, Pango::GlyphItem *glyph_item) noexcept
{
  ::PangoGlyphItem *_peel_glyph_item = reinterpret_cast<::PangoGlyphItem *> (glyph_item);
  pango_cairo_show_glyph_item (cr, text, _peel_glyph_item);
}

peel_no_warn_unused peel_arg_in (1) peel_arg_in (3) peel_nonnull_args (1, 2, 3)
static void
show_glyph_string (::cairo_t *cr, Pango::Font *font, Pango::GlyphString *glyphs) noexcept
{
  ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (font);
  ::PangoGlyphString *_peel_glyphs = reinterpret_cast<::PangoGlyphString *> (glyphs);
  pango_cairo_show_glyph_string (cr, _peel_font, _peel_glyphs);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1, 2)
static void
show_layout (::cairo_t *cr, Pango::Layout *layout) noexcept
{
  ::PangoLayout *_peel_layout = reinterpret_cast<::PangoLayout *> (layout);
  pango_cairo_show_layout (cr, _peel_layout);
}

peel_no_warn_unused peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
static void
show_layout_line (::cairo_t *cr, Pango::LayoutLine *line) noexcept
{
  ::PangoLayoutLine *_peel_line = reinterpret_cast<::PangoLayoutLine *> (line);
  pango_cairo_show_layout_line (cr, _peel_line);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1, 2)
static void
update_context (::cairo_t *cr, Pango::Context *context) noexcept
{
  ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
  pango_cairo_update_context (cr, _peel_context);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1, 2)
static void
update_layout (::cairo_t *cr, Pango::Layout *layout) noexcept
{
  ::PangoLayout *_peel_layout = reinterpret_cast<::PangoLayout *> (layout);
  pango_cairo_update_layout (cr, _peel_layout);
}



} /* namespace PangoCairo */
} /* namespace peel */

peel_end_header

#include <peel/Pango/AttrShape.h>
#include <peel/Pango/Context.h>
#include <peel/Pango/Font.h>
#include <peel/Pango/GlyphItem.h>
#include <peel/Pango/GlyphString.h>
#include <peel/Pango/Layout.h>
#include <peel/Pango/LayoutLine.h>
