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
enum class FontColor : std::underlying_type<::PangoFontColor>::type;
class /* record */ FontDescription;
enum class FontMask : std::underlying_type<::PangoFontMask>::type;
enum class Gravity : std::underlying_type<::PangoGravity>::type;
enum class Stretch : std::underlying_type<::PangoStretch>::type;
enum class Style : std::underlying_type<::PangoStyle>::type;
enum class Variant : std::underlying_type<::PangoVariant>::type;
enum class Weight : std::underlying_type<::PangoWeight>::type;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::FontDescription> ()
{
  return pango_font_description_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::FontDescription>
{
  typedef UniquePtr<Pango::FontDescription> OwnedType;
  typedef const Pango::FontDescription * UnownedType;

  static const Pango::FontDescription *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::FontDescription *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::FontDescription * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Pango::FontDescription>
  dup (const ::GValue *value)
  {
    return UniquePtr<Pango::FontDescription>::adopt_ref (reinterpret_cast<Pango::FontDescription *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Pango::FontDescription> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Pango::FontDescription *
  cast_for_create (const Pango::FontDescription * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::FontDescription>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::FontDescription> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Pango::FontDescription>
{
  static void
  free (Pango::FontDescription *ptr)
  {
    pango_font_description_free (reinterpret_cast<::PangoFontDescription *> (ptr));
  }

  constexpr static
  bool can_free_null = true;
};


namespace Pango
{
class /* record */ FontDescription
{
private:
  FontDescription () = delete;
  FontDescription (const FontDescription &) = delete;
  FontDescription (FontDescription &&) = delete;
  ~FontDescription ();

public:
  static peel::UniquePtr<FontDescription>
  create () noexcept
  {
    ::PangoFontDescription *_peel_return = pango_font_description_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<FontDescription>::adopt_ref (reinterpret_cast<FontDescription *> (_peel_return));
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (3)
  bool
  better_match (const FontDescription *old_match, const FontDescription *new_match) const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    const ::PangoFontDescription *_peel_old_match = reinterpret_cast<const ::PangoFontDescription *> (old_match);
    const ::PangoFontDescription *_peel_new_match = reinterpret_cast<const ::PangoFontDescription *> (new_match);
    gboolean _peel_return = pango_font_description_better_match (_peel_this, _peel_old_match, _peel_new_match);
    return !!_peel_return;
  }

  peel::UniquePtr<FontDescription>
  copy () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    ::PangoFontDescription *_peel_return = pango_font_description_copy (_peel_this);
    return peel::UniquePtr<FontDescription>::adopt_ref (reinterpret_cast<FontDescription *> (_peel_return));
  }

  peel::UniquePtr<FontDescription>
  copy_static () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    ::PangoFontDescription *_peel_return = pango_font_description_copy_static (_peel_this);
    return peel::UniquePtr<FontDescription>::adopt_ref (reinterpret_cast<FontDescription *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const FontDescription *desc2) const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    const ::PangoFontDescription *_peel_desc2 = reinterpret_cast<const ::PangoFontDescription *> (desc2);
    gboolean _peel_return = pango_font_description_equal (_peel_this, _peel_desc2);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  FontColor
  get_color () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    ::PangoFontColor _peel_return = pango_font_description_get_color (_peel_this);
    return static_cast<FontColor> (_peel_return);
  }

  const char *
  get_family () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    return pango_font_description_get_family (_peel_this);
  }

  const char *
  get_features () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    return pango_font_description_get_features (_peel_this);
  }

  Gravity
  get_gravity () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    ::PangoGravity _peel_return = pango_font_description_get_gravity (_peel_this);
    return static_cast<Gravity> (_peel_return);
  }

  FontMask
  get_set_fields () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    ::PangoFontMask _peel_return = pango_font_description_get_set_fields (_peel_this);
    return static_cast<FontMask> (_peel_return);
  }

  int
  get_size () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    return pango_font_description_get_size (_peel_this);
  }

  bool
  get_size_is_absolute () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    gboolean _peel_return = pango_font_description_get_size_is_absolute (_peel_this);
    return !!_peel_return;
  }

  Stretch
  get_stretch () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    ::PangoStretch _peel_return = pango_font_description_get_stretch (_peel_this);
    return static_cast<Stretch> (_peel_return);
  }

  Style
  get_style () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    ::PangoStyle _peel_return = pango_font_description_get_style (_peel_this);
    return static_cast<Style> (_peel_return);
  }

  Variant
  get_variant () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    ::PangoVariant _peel_return = pango_font_description_get_variant (_peel_this);
    return static_cast<Variant> (_peel_return);
  }

  const char *
  get_variations () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    return pango_font_description_get_variations (_peel_this);
  }

  Weight
  get_weight () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    ::PangoWeight _peel_return = pango_font_description_get_weight (_peel_this);
    return static_cast<Weight> (_peel_return);
  }

  unsigned
  hash () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    return pango_font_description_hash (_peel_this);
  }

  peel_arg_in (2)
  void
  merge (const FontDescription *desc_to_merge, bool replace_existing) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    const ::PangoFontDescription *_peel_desc_to_merge = reinterpret_cast<const ::PangoFontDescription *> (desc_to_merge);
    gboolean _peel_replace_existing = static_cast<gboolean> (replace_existing);
    pango_font_description_merge (_peel_this, _peel_desc_to_merge, _peel_replace_existing);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  merge_static (const FontDescription *desc_to_merge, bool replace_existing) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    const ::PangoFontDescription *_peel_desc_to_merge = reinterpret_cast<const ::PangoFontDescription *> (desc_to_merge);
    gboolean _peel_replace_existing = static_cast<gboolean> (replace_existing);
    pango_font_description_merge_static (_peel_this, _peel_desc_to_merge, _peel_replace_existing);
  }

  void
  set_absolute_size (double size) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    pango_font_description_set_absolute_size (_peel_this, size);
  }

  void
  set_color (FontColor color) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    ::PangoFontColor _peel_color = static_cast<::PangoFontColor> (color);
    pango_font_description_set_color (_peel_this, _peel_color);
  }

  peel_nonnull_args (2)
  void
  set_family (const char *family) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    pango_font_description_set_family (_peel_this, family);
  }

  peel_nonnull_args (2)
  void
  set_family_static (const char *family) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    pango_font_description_set_family_static (_peel_this, family);
  }

  void
  set_features (const char *features) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    pango_font_description_set_features (_peel_this, features);
  }

  peel_nonnull_args (2)
  void
  set_features_static (const char *features) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    pango_font_description_set_features_static (_peel_this, features);
  }

  void
  set_gravity (Gravity gravity) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    ::PangoGravity _peel_gravity = static_cast<::PangoGravity> (gravity);
    pango_font_description_set_gravity (_peel_this, _peel_gravity);
  }

  void
  set_size (int size) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    pango_font_description_set_size (_peel_this, size);
  }

  void
  set_stretch (Stretch stretch) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    ::PangoStretch _peel_stretch = static_cast<::PangoStretch> (stretch);
    pango_font_description_set_stretch (_peel_this, _peel_stretch);
  }

  void
  set_style (Style style) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    ::PangoStyle _peel_style = static_cast<::PangoStyle> (style);
    pango_font_description_set_style (_peel_this, _peel_style);
  }

  void
  set_variant (Variant variant) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    ::PangoVariant _peel_variant = static_cast<::PangoVariant> (variant);
    pango_font_description_set_variant (_peel_this, _peel_variant);
  }

  void
  set_variations (const char *variations) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    pango_font_description_set_variations (_peel_this, variations);
  }

  peel_nonnull_args (2)
  void
  set_variations_static (const char *variations) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    pango_font_description_set_variations_static (_peel_this, variations);
  }

  void
  set_weight (Weight weight) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    ::PangoWeight _peel_weight = static_cast<::PangoWeight> (weight);
    pango_font_description_set_weight (_peel_this, _peel_weight);
  }

  peel::String
  to_filename () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    char *_peel_return = pango_font_description_to_filename (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  to_string () const noexcept
  {
    const ::PangoFontDescription *_peel_this = reinterpret_cast<const ::PangoFontDescription *> (this);
    char *_peel_return = pango_font_description_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  void
  unset_fields (FontMask to_unset) noexcept
  {
    ::PangoFontDescription *_peel_this = reinterpret_cast<::PangoFontDescription *> (this);
    ::PangoFontMask _peel_to_unset = static_cast<::PangoFontMask> (to_unset);
    pango_font_description_unset_fields (_peel_this, _peel_to_unset);
  }

  peel_nonnull_args (1)
  static peel::UniquePtr<FontDescription>
  from_string (const char *str) noexcept
  {
    ::PangoFontDescription *_peel_return = pango_font_description_from_string (str);
    peel_assume (_peel_return);
    return peel::UniquePtr<FontDescription>::adopt_ref (reinterpret_cast<FontDescription *> (_peel_return));
  }
}; /* record FontDescription */

} /* namespace Pango */
} /* namespace peel */

peel_end_header
