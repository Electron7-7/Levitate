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
namespace GLib
{
class /* record */ Bytes;
struct Error;
} /* namespace GLib */

namespace Pango
{
class Context;
class Coverage;
class Font;
class /* record */ FontDescription;
class FontFace;
class FontMap;
struct FontMetrics;
class /* record */ Language;
struct Rectangle;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::Font> ()
{
  return pango_font_get_type ();
}


namespace Pango
{
class Font : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

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

  static void
  descriptions_free (peel::UniquePtr<peel::UniquePtr<FontDescription>[]> descs) noexcept
  {
    int _peel_n_descs;
    ::PangoFontDescription **_peel_descs = (_peel_n_descs = descs.size (), reinterpret_cast<::PangoFontDescription **> (std::move (descs).release_ref ()));
    pango_font_descriptions_free (_peel_descs, _peel_n_descs);
  }

  peel_arg_in (2) peel_nonnull_args (1, 2)
  static peel::RefPtr<Font>
  deserialize (Context *context, GLib::Bytes *bytes, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GError *_peel_error = nullptr;
    ::PangoFont *_peel_return = pango_font_deserialize (_peel_context, _peel_bytes, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Font>::adopt_ref (reinterpret_cast<Font *> (_peel_return));
  }

  peel::UniquePtr<FontDescription>
  describe () noexcept
  {
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoFontDescription *_peel_return = pango_font_describe (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<FontDescription>::adopt_ref (reinterpret_cast<FontDescription *> (_peel_return));
  }

  peel::UniquePtr<FontDescription>
  describe_with_absolute_size () noexcept
  {
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoFontDescription *_peel_return = pango_font_describe_with_absolute_size (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<FontDescription>::adopt_ref (reinterpret_cast<FontDescription *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::RefPtr<Coverage>
  get_coverage (Language *language) noexcept
  {
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    ::PangoCoverage *_peel_return = pango_font_get_coverage (_peel_this, _peel_language);
    peel_assume (_peel_return);
    return peel::RefPtr<Coverage>::adopt_ref (reinterpret_cast<Coverage *> (_peel_return));
  }

  FontFace *
  get_face () noexcept
  {
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoFontFace *_peel_return = pango_font_get_face (_peel_this);
    return reinterpret_cast<FontFace *> (_peel_return);
  }

  peel_arg_inout (3) peel_nonnull_args (3)
  void
  get_features (peel::ArrayRef<::hb_feature_t> features, unsigned *num_features) noexcept
  {
    guint _peel_len;
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::hb_feature_t *_peel_features = (_peel_len = features.size (), reinterpret_cast<::hb_feature_t *> (features.data ()));
    guint *_peel_num_features = reinterpret_cast<guint *> (num_features);
    pango_font_get_features (_peel_this, _peel_features, _peel_len, _peel_num_features);
  }

  FontMap *
  get_font_map () noexcept
  {
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoFontMap *_peel_return = pango_font_get_font_map (_peel_this);
    return reinterpret_cast<FontMap *> (_peel_return);
  }

  peel_arg_out (3) peel_arg_out (4)
  void
  get_glyph_extents (uint32_t glyph, Rectangle *ink_rect, Rectangle *logical_rect) noexcept
  {
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoRectangle *_peel_ink_rect = reinterpret_cast<::PangoRectangle *> (ink_rect);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    pango_font_get_glyph_extents (_peel_this, glyph, _peel_ink_rect, _peel_logical_rect);
  }

  ::hb_font_t *
  get_hb_font () noexcept
  {
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    return pango_font_get_hb_font (_peel_this);
  }

  peel::ZTArrayRef<Language *>
  get_languages () noexcept
  {
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoLanguage **_peel_return = pango_font_get_languages (_peel_this);
    return peel::ZTArrayRef<Language *>::adopt (reinterpret_cast<Language **> (_peel_return));
  }

  peel_arg_in (2)
  peel::RefPtr<FontMetrics>
  get_metrics (Language *language) noexcept
  {
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    ::PangoFontMetrics *_peel_return = pango_font_get_metrics (_peel_this, _peel_language);
    peel_assume (_peel_return);
    return peel::RefPtr<FontMetrics>::adopt_ref (reinterpret_cast<FontMetrics *> (_peel_return));
  }

  bool
  has_char (gunichar wc) noexcept
  {
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    gboolean _peel_return = pango_font_has_char (_peel_this, wc);
    return !!_peel_return;
  }

  peel::RefPtr<GLib::Bytes>
  serialize () noexcept
  {
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::GBytes *_peel_return = pango_font_serialize (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Font> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  ::hb_font_t *
  parent_vfunc_create_hb_font () noexcept
  {
    ::PangoFontClass *_peel_class = reinterpret_cast<::PangoFontClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::hb_font_t *_peel_return = _peel_class->create_hb_font (_peel_this);
    peel_assume (_peel_return);
    return _peel_return;
  }

  template<typename DerivedClass>
  peel::UniquePtr<FontDescription>
  parent_vfunc_describe () noexcept
  {
    ::PangoFontClass *_peel_class = reinterpret_cast<::PangoFontClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoFontDescription *_peel_return = _peel_class->describe (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<FontDescription>::adopt_ref (reinterpret_cast<FontDescription *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::UniquePtr<FontDescription>
  parent_vfunc_describe_absolute () noexcept
  {
    ::PangoFontClass *_peel_class = reinterpret_cast<::PangoFontClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoFontDescription *_peel_return = _peel_class->describe_absolute (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<FontDescription>::adopt_ref (reinterpret_cast<FontDescription *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  peel::RefPtr<Coverage>
  parent_vfunc_get_coverage (Language *language) noexcept
  {
    ::PangoFontClass *_peel_class = reinterpret_cast<::PangoFontClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    ::PangoCoverage *_peel_return = _peel_class->get_coverage (_peel_this, _peel_language);
    peel_assume (_peel_return);
    return peel::RefPtr<Coverage>::adopt_ref (reinterpret_cast<Coverage *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_inout (3) peel_nonnull_args (3)
  void
  parent_vfunc_get_features (peel::ArrayRef<::hb_feature_t> features, unsigned *num_features) noexcept
  {
    ::PangoFontClass *_peel_class = reinterpret_cast<::PangoFontClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    guint _peel_len;
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::hb_feature_t *_peel_features = (_peel_len = features.size (), reinterpret_cast<::hb_feature_t *> (features.data ()));
    guint *_peel_num_features = reinterpret_cast<guint *> (num_features);
    _peel_class->get_features (_peel_this, _peel_features, _peel_len, _peel_num_features);
  }

  template<typename DerivedClass>
  FontMap *
  parent_vfunc_get_font_map () noexcept
  {
    ::PangoFontClass *_peel_class = reinterpret_cast<::PangoFontClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoFontMap *_peel_return = _peel_class->get_font_map (_peel_this);
    return reinterpret_cast<FontMap *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_arg_out (4)
  void
  parent_vfunc_get_glyph_extents (uint32_t glyph, Rectangle *ink_rect, Rectangle *logical_rect) noexcept
  {
    ::PangoFontClass *_peel_class = reinterpret_cast<::PangoFontClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoRectangle *_peel_ink_rect = reinterpret_cast<::PangoRectangle *> (ink_rect);
    ::PangoRectangle *_peel_logical_rect = reinterpret_cast<::PangoRectangle *> (logical_rect);
    _peel_class->get_glyph_extents (_peel_this, glyph, _peel_ink_rect, _peel_logical_rect);
  }

  template<typename DerivedClass>
  peel_arg_in (2)
  peel::RefPtr<FontMetrics>
  parent_vfunc_get_metrics (Language *language) noexcept
  {
    ::PangoFontClass *_peel_class = reinterpret_cast<::PangoFontClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFont *_peel_this = reinterpret_cast<::PangoFont *> (this);
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    ::PangoFontMetrics *_peel_return = _peel_class->get_metrics (_peel_this, _peel_language);
    peel_assume (_peel_return);
    return peel::RefPtr<FontMetrics>::adopt_ref (reinterpret_cast<FontMetrics *> (_peel_return));
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::PangoFontClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_create_hb_font ()
    {
      ::PangoFontClass *klass = reinterpret_cast<::PangoFontClass *> (this);
      klass->create_hb_font = +[] (::PangoFont *font) -> ::hb_font_t *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (font);
        return _peel_this->DerivedClass::vfunc_create_hb_font ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_describe ()
    {
      ::PangoFontClass *klass = reinterpret_cast<::PangoFontClass *> (this);
      klass->describe = +[] (::PangoFont *font) -> ::PangoFontDescription *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (font);
        peel::UniquePtr<FontDescription> _peel_return = _peel_this->DerivedClass::vfunc_describe ();
        return reinterpret_cast<::PangoFontDescription *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_describe_absolute ()
    {
      ::PangoFontClass *klass = reinterpret_cast<::PangoFontClass *> (this);
      klass->describe_absolute = +[] (::PangoFont *font) -> ::PangoFontDescription *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (font);
        peel::UniquePtr<FontDescription> _peel_return = _peel_this->DerivedClass::vfunc_describe_absolute ();
        return reinterpret_cast<::PangoFontDescription *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_coverage ()
    {
      ::PangoFontClass *klass = reinterpret_cast<::PangoFontClass *> (this);
      klass->get_coverage = +[] (::PangoFont *font, ::PangoLanguage *language) -> ::PangoCoverage *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (font);
        Language *_peel_language = reinterpret_cast<Language *> (language);
        peel::RefPtr<Coverage> _peel_return = _peel_this->DerivedClass::vfunc_get_coverage (_peel_language);
        return reinterpret_cast<::PangoCoverage *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_features ()
    {
      ::PangoFontClass *klass = reinterpret_cast<::PangoFontClass *> (this);
      klass->get_features = +[] (::PangoFont *font, ::hb_feature_t *features, guint len, guint *num_features) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (font);
        peel::ArrayRef<::hb_feature_t> _peel_features = peel::ArrayRef<::hb_feature_t> (reinterpret_cast<::hb_feature_t *> (features), len);
        _peel_this->DerivedClass::vfunc_get_features (_peel_features, num_features);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_font_map ()
    {
      ::PangoFontClass *klass = reinterpret_cast<::PangoFontClass *> (this);
      klass->get_font_map = +[] (::PangoFont *font) -> ::PangoFontMap *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (font);
        FontMap *_peel_return = _peel_this->DerivedClass::vfunc_get_font_map ();
        return reinterpret_cast<::PangoFontMap *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_glyph_extents ()
    {
      ::PangoFontClass *klass = reinterpret_cast<::PangoFontClass *> (this);
      klass->get_glyph_extents = +[] (::PangoFont *font, PangoGlyph glyph, ::PangoRectangle *ink_rect, ::PangoRectangle *logical_rect) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (font);
        Rectangle *_peel_ink_rect = reinterpret_cast<Rectangle *> (ink_rect);
        Rectangle *_peel_logical_rect = reinterpret_cast<Rectangle *> (logical_rect);
        _peel_this->DerivedClass::vfunc_get_glyph_extents (glyph, _peel_ink_rect, _peel_logical_rect);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_metrics ()
    {
      ::PangoFontClass *klass = reinterpret_cast<::PangoFontClass *> (this);
      klass->get_metrics = +[] (::PangoFont *font, ::PangoLanguage *language) -> ::PangoFontMetrics *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (font);
        Language *_peel_language = reinterpret_cast<Language *> (language);
        peel::RefPtr<FontMetrics> _peel_return = _peel_this->DerivedClass::vfunc_get_metrics (_peel_language);
        return reinterpret_cast<::PangoFontMetrics *> (std::move (_peel_return).release_ref ());
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::PangoFontClass),
                 "Font::Class size mismatch");
  static_assert (alignof (Class) == alignof (::PangoFontClass),
                 "Font::Class align mismatch");
}; /* class Font */

static_assert (sizeof (Font) == sizeof (::PangoFont),
               "Font size mismatch");
static_assert (alignof (Font) == alignof (::PangoFont),
               "Font align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
#include <peel/Pango/Coverage.h>
#include <peel/Pango/FontDescription.h>
#include <peel/Pango/FontMetrics.h>
