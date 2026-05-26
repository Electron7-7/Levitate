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
#include <peel/Pango/Font.h>

peel_begin_header

namespace peel
{
namespace PangoCairo
{
class /* interface */ Font;
} /* namespace PangoCairo */

template<>
inline GObject::Type
GObject::Type::of<PangoCairo::Font> ()
{
  return pango_cairo_font_get_type ();
}


namespace PangoCairo
{
class /* interface */ Font : public Pango::Font
/* requires Pango::Font */
{
private:
  Font () = delete;
  Font (const Font &) = delete;
  Font (Font &&) = delete;

  Font &
  operator = (const Font &) = delete;
  Font &
  operator = (Font &&) = delete;

protected:
  ~Font () = default;

public:

  ::cairo_scaled_font_t *
  get_scaled_font () noexcept
  {
    ::PangoCairoFont *_peel_this = reinterpret_cast<::PangoCairoFont *> (this);
    return pango_cairo_font_get_scaled_font (_peel_this);
  }
}; /* interface Font */
static_assert (sizeof (Font) == sizeof (Pango::Font),
               "Font size mismatch");
static_assert (alignof (Font) == alignof (Pango::Font),
               "Font align mismatch");

} /* namespace PangoCairo */
} /* namespace peel */

peel_end_header
