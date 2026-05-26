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
struct FontMetrics;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::FontMetrics> ()
{
  return pango_font_metrics_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::FontMetrics>
{
  typedef RefPtr<Pango::FontMetrics> OwnedType;
  typedef Pango::FontMetrics * UnownedType;

  static Pango::FontMetrics *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Pango::FontMetrics *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Pango::FontMetrics * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Pango::FontMetrics>
  dup (const ::GValue *value)
  {
    return RefPtr<Pango::FontMetrics>::adopt_ref (reinterpret_cast<Pango::FontMetrics *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Pango::FontMetrics> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Pango::FontMetrics *
  cast_for_create (Pango::FontMetrics * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::FontMetrics>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::FontMetrics> (), basics.flags);
  }
};

template<>
struct RefTraits<Pango::FontMetrics, void>
{
  static void
  ref (Pango::FontMetrics *ptr)
  {
    pango_font_metrics_ref (reinterpret_cast<::PangoFontMetrics *> (ptr));
  }

  constexpr static
  bool can_ref_null = true;

  static void
  unref (Pango::FontMetrics *ptr)
  {
    pango_font_metrics_unref (reinterpret_cast<::PangoFontMetrics *> (ptr));
  }

  constexpr static
  bool can_unref_null = true;
};


namespace Pango
{
struct FontMetrics
{
private:
  ::PangoFontMetrics inner peel_no_warn_unused;

  FontMetrics () = delete;
  FontMetrics (const FontMetrics &) = delete;
  FontMetrics (FontMetrics &&) = delete;
  ~FontMetrics ();

public:
  int
  get_approximate_char_width () noexcept
  {
    ::PangoFontMetrics *_peel_this = reinterpret_cast<::PangoFontMetrics *> (this);
    return pango_font_metrics_get_approximate_char_width (_peel_this);
  }

  int
  get_approximate_digit_width () noexcept
  {
    ::PangoFontMetrics *_peel_this = reinterpret_cast<::PangoFontMetrics *> (this);
    return pango_font_metrics_get_approximate_digit_width (_peel_this);
  }

  int
  get_ascent () noexcept
  {
    ::PangoFontMetrics *_peel_this = reinterpret_cast<::PangoFontMetrics *> (this);
    return pango_font_metrics_get_ascent (_peel_this);
  }

  int
  get_descent () noexcept
  {
    ::PangoFontMetrics *_peel_this = reinterpret_cast<::PangoFontMetrics *> (this);
    return pango_font_metrics_get_descent (_peel_this);
  }

  int
  get_height () noexcept
  {
    ::PangoFontMetrics *_peel_this = reinterpret_cast<::PangoFontMetrics *> (this);
    return pango_font_metrics_get_height (_peel_this);
  }

  int
  get_strikethrough_position () noexcept
  {
    ::PangoFontMetrics *_peel_this = reinterpret_cast<::PangoFontMetrics *> (this);
    return pango_font_metrics_get_strikethrough_position (_peel_this);
  }

  int
  get_strikethrough_thickness () noexcept
  {
    ::PangoFontMetrics *_peel_this = reinterpret_cast<::PangoFontMetrics *> (this);
    return pango_font_metrics_get_strikethrough_thickness (_peel_this);
  }

  int
  get_underline_position () noexcept
  {
    ::PangoFontMetrics *_peel_this = reinterpret_cast<::PangoFontMetrics *> (this);
    return pango_font_metrics_get_underline_position (_peel_this);
  }

  int
  get_underline_thickness () noexcept
  {
    ::PangoFontMetrics *_peel_this = reinterpret_cast<::PangoFontMetrics *> (this);
    return pango_font_metrics_get_underline_thickness (_peel_this);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record FontMetrics */

static_assert (sizeof (FontMetrics) == sizeof (::PangoFontMetrics),
               "FontMetrics size mismatch");
static_assert (alignof (FontMetrics) == alignof (::PangoFontMetrics),
               "FontMetrics align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
