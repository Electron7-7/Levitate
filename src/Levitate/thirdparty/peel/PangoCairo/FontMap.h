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
#include <peel/GObject/TypeInterface.h>
#include <peel/Pango/FontMap.h>

peel_begin_header

namespace peel
{
namespace Pango
{
class Context;
class FontMap;
} /* namespace Pango */

namespace PangoCairo
{
class /* interface */ FontMap;
} /* namespace PangoCairo */

template<>
inline GObject::Type
GObject::Type::of<PangoCairo::FontMap> ()
{
  return pango_cairo_font_map_get_type ();
}


namespace PangoCairo
{
class /* interface */ FontMap : public Pango::FontMap
/* requires Pango::FontMap */
{
private:
  FontMap () = delete;
  FontMap (const FontMap &) = delete;
  FontMap (FontMap &&) = delete;

  FontMap &
  operator = (const FontMap &) = delete;
  FontMap &
  operator = (FontMap &&) = delete;

protected:
  ~FontMap () = default;

public:

  static peel::RefPtr<FontMap>
  create () noexcept
  {
    ::PangoFontMap *_peel_return = pango_cairo_font_map_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<FontMap>::adopt_ref (reinterpret_cast<FontMap *> (_peel_return));
  }

  static peel::RefPtr<FontMap>
  create_for_font_type (::cairo_font_type_t fonttype) noexcept
  {
    ::cairo_font_type_t _peel_fonttype = static_cast<::cairo_font_type_t> (fonttype);
    ::PangoFontMap *_peel_return = pango_cairo_font_map_new_for_font_type (_peel_fonttype);
    return peel::RefPtr<FontMap>::adopt_ref (reinterpret_cast<FontMap *> (_peel_return));
  }

  peel_returns_nonnull
  static Pango::FontMap *
  get_default () noexcept
  {
    ::PangoFontMap *_peel_return = pango_cairo_font_map_get_default ();
    peel_assume (_peel_return);
    return reinterpret_cast<Pango::FontMap *> (_peel_return);
  }

  peel_returns_nonnull
  Pango::Context *
  create_context () noexcept
  {
    ::PangoCairoFontMap *_peel_this = reinterpret_cast<::PangoCairoFontMap *> (this);
    ::PangoContext *_peel_return = pango_cairo_font_map_create_context (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Pango::Context *> (_peel_return);
  }

  ::cairo_font_type_t
  get_font_type () noexcept
  {
    ::PangoCairoFontMap *_peel_this = reinterpret_cast<::PangoCairoFontMap *> (this);
    ::cairo_font_type_t _peel_return = pango_cairo_font_map_get_font_type (_peel_this);
    return static_cast<::cairo_font_type_t> (_peel_return);
  }

  double
  get_resolution () noexcept
  {
    ::PangoCairoFontMap *_peel_this = reinterpret_cast<::PangoCairoFontMap *> (this);
    return pango_cairo_font_map_get_resolution (_peel_this);
  }

  void
  set_default () noexcept
  {
    ::PangoCairoFontMap *_peel_this = reinterpret_cast<::PangoCairoFontMap *> (this);
    pango_cairo_font_map_set_default (_peel_this);
  }

  void
  set_resolution (double dpi) noexcept
  {
    ::PangoCairoFontMap *_peel_this = reinterpret_cast<::PangoCairoFontMap *> (this);
    pango_cairo_font_map_set_resolution (_peel_this, dpi);
  }
}; /* interface FontMap */
static_assert (sizeof (FontMap) == sizeof (Pango::FontMap),
               "FontMap size mismatch");
static_assert (alignof (FontMap) == alignof (Pango::FontMap),
               "FontMap align mismatch");

} /* namespace PangoCairo */
} /* namespace peel */

peel_end_header
