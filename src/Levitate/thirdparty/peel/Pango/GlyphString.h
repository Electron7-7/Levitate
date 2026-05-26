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

peel_begin_header

namespace peel
{
namespace Pango
{
struct Analysis;
class Font;
struct GlyphString;
struct LogAttr;
struct Rectangle;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::GlyphString> ()
{
  return pango_glyph_string_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::GlyphString>
{
  typedef UniquePtr<Pango::GlyphString> OwnedType;
  typedef const Pango::GlyphString * UnownedType;

  static const Pango::GlyphString *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::GlyphString *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::GlyphString * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Pango::GlyphString>
  dup (const ::GValue *value)
  {
    return UniquePtr<Pango::GlyphString>::adopt_ref (reinterpret_cast<Pango::GlyphString *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Pango::GlyphString> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Pango::GlyphString *
  cast_for_create (const Pango::GlyphString * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::GlyphString>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::GlyphString> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Pango::GlyphString>
{
  static void
  free (Pango::GlyphString *ptr)
  {
    pango_glyph_string_free (reinterpret_cast<::PangoGlyphString *> (ptr));
  }

  constexpr static
  bool can_free_null = true;
};


namespace Pango
{
struct GlyphString
{
private:
  GlyphString () = delete;
  GlyphString (const GlyphString &) = delete;
  GlyphString (GlyphString &&) = delete;
  ~GlyphString ();

public:
  int num_glyphs;
private:
  ::PangoGlyphInfo *glyphs;
public:
  int *log_clusters;
private:
  int space;

public:
  static peel::UniquePtr<GlyphString>
  create () noexcept
  {
    ::PangoGlyphString *_peel_return = pango_glyph_string_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<GlyphString>::adopt_ref (reinterpret_cast<GlyphString *> (_peel_return));
  }

  peel::UniquePtr<GlyphString>
  copy () noexcept
  {
    ::PangoGlyphString *_peel_this = reinterpret_cast<::PangoGlyphString *> (this);
    ::PangoGlyphString *_peel_return = pango_glyph_string_copy (_peel_this);
    return peel::UniquePtr<GlyphString>::adopt_ref (reinterpret_cast<GlyphString *> (_peel_return));
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  void
  extents (Font *font, Rectangle *ink_rect, Rectangle *logical_rect) noexcept
  {
    ::PangoGlyphString *_peel_this = reinterpret_cast<::PangoGlyphString *> (this);
    ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (font);
    ::PangoRectangle *_peel_ink_rect = reinterpret_cast<::PangoRectangle *> (ink_rect);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    pango_glyph_string_extents (_peel_this, _peel_font, _peel_ink_rect, _peel_logical_rect);
  }

  peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (4)
  void
  extents_range (int start, int end, Font *font, Rectangle *ink_rect, Rectangle *logical_rect) noexcept
  {
    ::PangoGlyphString *_peel_this = reinterpret_cast<::PangoGlyphString *> (this);
    ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (font);
    ::PangoRectangle *_peel_ink_rect = reinterpret_cast<::PangoRectangle *> (ink_rect);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    pango_glyph_string_extents_range (_peel_this, start, end, _peel_font, _peel_ink_rect, _peel_logical_rect);
  }

  /* free bound as UniqueTraits */

  peel_nonnull_args (2)
  void
  get_logical_widths (const char *text, int length, int embedding_level, int *logical_widths) noexcept
  {
    ::PangoGlyphString *_peel_this = reinterpret_cast<::PangoGlyphString *> (this);
    pango_glyph_string_get_logical_widths (_peel_this, text, length, embedding_level, logical_widths);
  }

  int
  get_width () noexcept
  {
    ::PangoGlyphString *_peel_this = reinterpret_cast<::PangoGlyphString *> (this);
    return pango_glyph_string_get_width (_peel_this);
  }

  peel_arg_in (4) peel_arg_out (7) peel_nonnull_args (2, 4)
  void
  index_to_x (const char *text, int length, Analysis *analysis, int index_, bool trailing, int *x_pos) noexcept
  {
    ::PangoGlyphString *_peel_this = reinterpret_cast<::PangoGlyphString *> (this);
    ::PangoAnalysis *_peel_analysis = reinterpret_cast<::PangoAnalysis *> (analysis);
    gboolean _peel_trailing = static_cast<gboolean> (trailing);
    pango_glyph_string_index_to_x (_peel_this, text, length, _peel_analysis, index_, _peel_trailing, x_pos);
  }

  peel_arg_in (4) peel_arg_in (5) peel_arg_out (8) peel_nonnull_args (2, 4)
  void
  index_to_x_full (const char *text, int length, Analysis *analysis, LogAttr *attrs, int index_, bool trailing, int *x_pos) noexcept
  {
    ::PangoGlyphString *_peel_this = reinterpret_cast<::PangoGlyphString *> (this);
    ::PangoAnalysis *_peel_analysis = reinterpret_cast<::PangoAnalysis *> (analysis);
    ::PangoLogAttr *_peel_attrs = reinterpret_cast<::PangoLogAttr *> (attrs);
    gboolean _peel_trailing = static_cast<gboolean> (trailing);
    pango_glyph_string_index_to_x_full (_peel_this, text, length, _peel_analysis, _peel_attrs, index_, _peel_trailing, x_pos);
  }

  void
  set_size (int new_len) noexcept
  {
    ::PangoGlyphString *_peel_this = reinterpret_cast<::PangoGlyphString *> (this);
    pango_glyph_string_set_size (_peel_this, new_len);
  }

  peel_arg_in (4) peel_arg_out (6) peel_arg_out (7) peel_nonnull_args (2, 4)
  void
  x_to_index (const char *text, int length, Analysis *analysis, int x_pos, int *index_, int *trailing) noexcept
  {
    ::PangoGlyphString *_peel_this = reinterpret_cast<::PangoGlyphString *> (this);
    ::PangoAnalysis *_peel_analysis = reinterpret_cast<::PangoAnalysis *> (analysis);
    pango_glyph_string_x_to_index (_peel_this, text, length, _peel_analysis, x_pos, index_, trailing);
  }
}; /* record GlyphString */

static_assert (sizeof (GlyphString) == sizeof (::PangoGlyphString),
               "GlyphString size mismatch");
static_assert (alignof (GlyphString) == alignof (::PangoGlyphString),
               "GlyphString align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
