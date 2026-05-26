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
class Context;
enum class Direction : std::underlying_type<::PangoDirection>::type;
class Font;
class /* record */ FontDescription;
class FontFamily;
class FontMap;
struct FontMetrics;
class Fontset;
enum class Gravity : std::underlying_type<::PangoGravity>::type;
enum class GravityHint : std::underlying_type<::PangoGravityHint>::type;
class /* record */ Language;
struct Matrix;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::Context> ()
{
  return pango_context_get_type ();
}


namespace Pango
{
class Context : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Context () = delete;
  Context (const Context &) = delete;
  Context (Context &&) = delete;
  Context &
  operator = (const Context &) = delete;
  Context &
  operator = (Context &&) = delete;
  ~Context () = delete;
public:

  static peel::RefPtr<Context>
  create () noexcept
  {
    ::PangoContext *_peel_return = pango_context_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<Context>::adopt_ref (reinterpret_cast<Context *> (_peel_return));
  }

  void
  changed () noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    pango_context_changed (_peel_this);
  }

  Direction
  get_base_dir () noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoDirection _peel_return = pango_context_get_base_dir (_peel_this);
    return static_cast<Direction> (_peel_return);
  }

  Gravity
  get_base_gravity () noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoGravity _peel_return = pango_context_get_base_gravity (_peel_this);
    return static_cast<Gravity> (_peel_return);
  }

  FontDescription *
  get_font_description () noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoFontDescription *_peel_return = pango_context_get_font_description (_peel_this);
    return reinterpret_cast<FontDescription *> (_peel_return);
  }

  FontMap *
  get_font_map () noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoFontMap *_peel_return = pango_context_get_font_map (_peel_this);
    return reinterpret_cast<FontMap *> (_peel_return);
  }

  Gravity
  get_gravity () noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoGravity _peel_return = pango_context_get_gravity (_peel_this);
    return static_cast<Gravity> (_peel_return);
  }

  GravityHint
  get_gravity_hint () noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoGravityHint _peel_return = pango_context_get_gravity_hint (_peel_this);
    return static_cast<GravityHint> (_peel_return);
  }

  peel_returns_nonnull
  Language *
  get_language () noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoLanguage *_peel_return = pango_context_get_language (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Language *> (_peel_return);
  }

  const Matrix *
  get_matrix () noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    const ::PangoMatrix *_peel_return = pango_context_get_matrix (_peel_this);
    return reinterpret_cast<const Matrix *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3)
  peel::RefPtr<FontMetrics>
  get_metrics (const FontDescription *desc, Language *language) noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    const ::PangoFontDescription *_peel_desc = reinterpret_cast<const ::PangoFontDescription *> (desc);
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    ::PangoFontMetrics *_peel_return = pango_context_get_metrics (_peel_this, _peel_desc, _peel_language);
    peel_assume (_peel_return);
    return peel::RefPtr<FontMetrics>::adopt_ref (reinterpret_cast<FontMetrics *> (_peel_return));
  }

  bool
  get_round_glyph_positions () noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    gboolean _peel_return = pango_context_get_round_glyph_positions (_peel_this);
    return !!_peel_return;
  }

  unsigned
  get_serial () noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    return pango_context_get_serial (_peel_this);
  }

  void
  list_families (peel::UniquePtr<FontFamily *[]> *families) noexcept
  {
    int _peel_n_families;
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoFontFamily **_peel_families;
    pango_context_list_families (_peel_this, &_peel_families, &_peel_n_families);
    *families = peel::UniquePtr<FontFamily *[]>::adopt_ref (reinterpret_cast<FontFamily **> (_peel_families), _peel_n_families);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::RefPtr<Font>
  load_font (const FontDescription *desc) noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    const ::PangoFontDescription *_peel_desc = reinterpret_cast<const ::PangoFontDescription *> (desc);
    ::PangoFont *_peel_return = pango_context_load_font (_peel_this, _peel_desc);
    return peel::RefPtr<Font>::adopt_ref (reinterpret_cast<Font *> (_peel_return));
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  peel::RefPtr<Fontset>
  load_fontset (const FontDescription *desc, Language *language) noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    const ::PangoFontDescription *_peel_desc = reinterpret_cast<const ::PangoFontDescription *> (desc);
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    ::PangoFontset *_peel_return = pango_context_load_fontset (_peel_this, _peel_desc, _peel_language);
    return peel::RefPtr<Fontset>::adopt_ref (reinterpret_cast<Fontset *> (_peel_return));
  }

  void
  set_base_dir (Direction direction) noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoDirection _peel_direction = static_cast<::PangoDirection> (direction);
    pango_context_set_base_dir (_peel_this, _peel_direction);
  }

  void
  set_base_gravity (Gravity gravity) noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoGravity _peel_gravity = static_cast<::PangoGravity> (gravity);
    pango_context_set_base_gravity (_peel_this, _peel_gravity);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_font_description (const FontDescription *desc) noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    const ::PangoFontDescription *_peel_desc = reinterpret_cast<const ::PangoFontDescription *> (desc);
    pango_context_set_font_description (_peel_this, _peel_desc);
  }

  void
  set_font_map (FontMap *font_map) noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoFontMap *_peel_font_map = reinterpret_cast<::PangoFontMap *> (font_map);
    pango_context_set_font_map (_peel_this, _peel_font_map);
  }

  void
  set_gravity_hint (GravityHint hint) noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoGravityHint _peel_hint = static_cast<::PangoGravityHint> (hint);
    pango_context_set_gravity_hint (_peel_this, _peel_hint);
  }

  peel_arg_in (2)
  void
  set_language (Language *language) noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    pango_context_set_language (_peel_this, _peel_language);
  }

  peel_arg_in (2)
  void
  set_matrix (const Matrix *matrix) noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    const ::PangoMatrix *_peel_matrix = reinterpret_cast<const ::PangoMatrix *> (matrix);
    pango_context_set_matrix (_peel_this, _peel_matrix);
  }

  void
  set_round_glyph_positions (bool round_positions) noexcept
  {
    ::PangoContext *_peel_this = reinterpret_cast<::PangoContext *> (this);
    gboolean _peel_round_positions = static_cast<gboolean> (round_positions);
    pango_context_set_round_glyph_positions (_peel_this, _peel_round_positions);
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class Context */

} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/Pango/Font.h>
#include <peel/Pango/FontFamily.h>
#include <peel/Pango/FontMetrics.h>
#include <peel/Pango/Fontset.h>
