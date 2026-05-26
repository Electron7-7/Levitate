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
struct Color;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::Color> ()
{
  return pango_color_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::Color>
{
  typedef UniquePtr<Pango::Color> OwnedType;
  typedef const Pango::Color * UnownedType;

  static const Pango::Color *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::Color *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::Color * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Pango::Color>
  dup (const ::GValue *value)
  {
    return UniquePtr<Pango::Color>::adopt_ref (reinterpret_cast<Pango::Color *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Pango::Color> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Pango::Color *
  cast_for_create (const Pango::Color * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::Color>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::Color> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Pango::Color>
{
  static void
  free (Pango::Color *ptr)
  {
    pango_color_free (reinterpret_cast<::PangoColor *> (ptr));
  }

  constexpr static
  bool can_free_null = true;
};


namespace Pango
{
struct Color
{
private:

public:
  uint16_t red;
  uint16_t green;
  uint16_t blue;

  peel::UniquePtr<Color>
  copy () const noexcept
  {
    const ::PangoColor *_peel_this = reinterpret_cast<const ::PangoColor *> (this);
    ::PangoColor *_peel_return = pango_color_copy (_peel_this);
    return peel::UniquePtr<Color>::adopt_ref (reinterpret_cast<Color *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  peel_nonnull_args (2)
  bool
  parse (const char *spec) noexcept
  {
    ::PangoColor *_peel_this = reinterpret_cast<::PangoColor *> (this);
    gboolean _peel_return = pango_color_parse (_peel_this, spec);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (3)
  bool
  parse_with_alpha (uint16_t *alpha, const char *spec) noexcept
  {
    ::PangoColor *_peel_this = reinterpret_cast<::PangoColor *> (this);
    guint16 *_peel_alpha = reinterpret_cast<guint16 *> (alpha);
    gboolean _peel_return = pango_color_parse_with_alpha (_peel_this, _peel_alpha, spec);
    return !!_peel_return;
  }

  peel::String
  to_string () const noexcept
  {
    const ::PangoColor *_peel_this = reinterpret_cast<const ::PangoColor *> (this);
    char *_peel_return = pango_color_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }
}; /* record Color */

static_assert (sizeof (Color) == sizeof (::PangoColor),
               "Color size mismatch");
static_assert (alignof (Color) == alignof (::PangoColor),
               "Color align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
