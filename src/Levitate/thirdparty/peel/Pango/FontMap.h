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
#include <peel/Gio/ListModel.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Pango
{
class Context;
class Font;
class /* record */ FontDescription;
class FontFace;
class FontFamily;
class FontMap;
class Fontset;
class /* record */ Language;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::FontMap> ()
{
  return pango_font_map_get_type ();
}


namespace Pango
{
class FontMap : public Gio::ListModel
/* extends GObject::Object */
/* implements Gio::ListModel */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

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

  peel_nonnull_args (2)
  bool
  add_font_file (const char *filename, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = pango_font_map_add_font_file (_peel_this, filename, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  changed () noexcept
  {
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    pango_font_map_changed (_peel_this);
  }

  peel::RefPtr<Context>
  create_context () noexcept
  {
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    ::PangoContext *_peel_return = pango_font_map_create_context (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Context>::adopt_ref (reinterpret_cast<Context *> (_peel_return));
  }

  peel_nonnull_args (2)
  FontFamily *
  get_family (const char *name) noexcept
  {
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    ::PangoFontFamily *_peel_return = pango_font_map_get_family (_peel_this, name);
    return reinterpret_cast<FontFamily *> (_peel_return);
  }

  unsigned
  get_serial () noexcept
  {
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    return pango_font_map_get_serial (_peel_this);
  }

  void
  list_families (peel::UniquePtr<FontFamily *[]> *families) noexcept
  {
    int _peel_n_families;
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    ::PangoFontFamily **_peel_families;
    pango_font_map_list_families (_peel_this, &_peel_families, &_peel_n_families);
    *families = peel::UniquePtr<FontFamily *[]>::adopt_ref (reinterpret_cast<FontFamily **> (_peel_families), _peel_n_families);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  peel::RefPtr<Font>
  load_font (Context *context, const FontDescription *desc) noexcept
  {
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
    const ::PangoFontDescription *_peel_desc = reinterpret_cast<const ::PangoFontDescription *> (desc);
    ::PangoFont *_peel_return = pango_font_map_load_font (_peel_this, _peel_context, _peel_desc);
    return peel::RefPtr<Font>::adopt_ref (reinterpret_cast<Font *> (_peel_return));
  }

  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  peel::RefPtr<Fontset>
  load_fontset (Context *context, const FontDescription *desc, Language *language) noexcept
  {
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
    const ::PangoFontDescription *_peel_desc = reinterpret_cast<const ::PangoFontDescription *> (desc);
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    ::PangoFontset *_peel_return = pango_font_map_load_fontset (_peel_this, _peel_context, _peel_desc, _peel_language);
    return peel::RefPtr<Fontset>::adopt_ref (reinterpret_cast<Fontset *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<Font>
  reload_font (Font *font, double scale, Context *context, const char *variations) noexcept
  {
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (font);
    ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
    ::PangoFont *_peel_return = pango_font_map_reload_font (_peel_this, _peel_font, scale, _peel_context, variations);
    peel_assume (_peel_return);
    return peel::RefPtr<Font>::adopt_ref (reinterpret_cast<Font *> (_peel_return));
  }

  static peel::Property<GObject::Type>
  prop_item_type ()
  {
    return peel::Property<GObject::Type> { "item-type" };
  }

  static peel::Property<unsigned>
  prop_n_items ()
  {
    return peel::Property<unsigned> { "n-items" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<FontMap> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_changed () noexcept
  {
    ::PangoFontMapClass *_peel_class = reinterpret_cast<::PangoFontMapClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    _peel_class->changed (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2) peel_returns_nonnull
  FontFace *
  parent_vfunc_get_face (Font *font) noexcept
  {
    ::PangoFontMapClass *_peel_class = reinterpret_cast<::PangoFontMapClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (font);
    ::PangoFontFace *_peel_return = _peel_class->get_face (_peel_this, _peel_font);
    peel_assume (_peel_return);
    return reinterpret_cast<FontFace *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  FontFamily *
  parent_vfunc_get_family (const char *name) noexcept
  {
    ::PangoFontMapClass *_peel_class = reinterpret_cast<::PangoFontMapClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    ::PangoFontFamily *_peel_return = _peel_class->get_family (_peel_this, name);
    return reinterpret_cast<FontFamily *> (_peel_return);
  }

  template<typename DerivedClass>
  unsigned
  parent_vfunc_get_serial () noexcept
  {
    ::PangoFontMapClass *_peel_class = reinterpret_cast<::PangoFontMapClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    return _peel_class->get_serial (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_list_families (peel::UniquePtr<FontFamily *[]> *families) noexcept
  {
    ::PangoFontMapClass *_peel_class = reinterpret_cast<::PangoFontMapClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    int _peel_n_families;
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    ::PangoFontFamily **_peel_families;
    _peel_class->list_families (_peel_this, &_peel_families, &_peel_n_families);
    *families = peel::UniquePtr<FontFamily *[]>::adopt_ref (reinterpret_cast<FontFamily **> (_peel_families), _peel_n_families);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (2, 3)
  peel::RefPtr<Font>
  parent_vfunc_load_font (Context *context, const FontDescription *desc) noexcept
  {
    ::PangoFontMapClass *_peel_class = reinterpret_cast<::PangoFontMapClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
    const ::PangoFontDescription *_peel_desc = reinterpret_cast<const ::PangoFontDescription *> (desc);
    ::PangoFont *_peel_return = _peel_class->load_font (_peel_this, _peel_context, _peel_desc);
    return peel::RefPtr<Font>::adopt_ref (reinterpret_cast<Font *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  peel::RefPtr<Fontset>
  parent_vfunc_load_fontset (Context *context, const FontDescription *desc, Language *language) noexcept
  {
    ::PangoFontMapClass *_peel_class = reinterpret_cast<::PangoFontMapClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontMap *_peel_this = reinterpret_cast<::PangoFontMap *> (this);
    ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
    const ::PangoFontDescription *_peel_desc = reinterpret_cast<const ::PangoFontDescription *> (desc);
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    ::PangoFontset *_peel_return = _peel_class->load_fontset (_peel_this, _peel_context, _peel_desc, _peel_language);
    return peel::RefPtr<Fontset>::adopt_ref (reinterpret_cast<Fontset *> (_peel_return));
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::PangoFontMapClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::PangoFontMapClass *klass = reinterpret_cast<::PangoFontMapClass *> (this);
      klass->changed = +[] (::PangoFontMap *fontmap) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontmap);
        _peel_this->DerivedClass::vfunc_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_face ()
    {
      ::PangoFontMapClass *klass = reinterpret_cast<::PangoFontMapClass *> (this);
      klass->get_face = +[] (::PangoFontMap *fontmap, ::PangoFont *font) -> ::PangoFontFace *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontmap);
        Font *_peel_font = reinterpret_cast<Font *> (font);
        FontFace *_peel_return = _peel_this->DerivedClass::vfunc_get_face (_peel_font);
        return reinterpret_cast<::PangoFontFace *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_family ()
    {
      ::PangoFontMapClass *klass = reinterpret_cast<::PangoFontMapClass *> (this);
      klass->get_family = +[] (::PangoFontMap *fontmap, const char *name) -> ::PangoFontFamily *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontmap);
        FontFamily *_peel_return = _peel_this->DerivedClass::vfunc_get_family (name);
        return reinterpret_cast<::PangoFontFamily *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_serial ()
    {
      ::PangoFontMapClass *klass = reinterpret_cast<::PangoFontMapClass *> (this);
      klass->get_serial = +[] (::PangoFontMap *fontmap) -> guint
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontmap);
        return _peel_this->DerivedClass::vfunc_get_serial ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_list_families ()
    {
      ::PangoFontMapClass *klass = reinterpret_cast<::PangoFontMapClass *> (this);
      klass->list_families = +[] (::PangoFontMap *fontmap, ::PangoFontFamily ***families, int *n_families) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontmap);
        peel::UniquePtr<FontFamily *[]> _peel_families;
        _peel_this->DerivedClass::vfunc_list_families (&_peel_families);
        *families = (*n_families = _peel_families.size (), reinterpret_cast<::PangoFontFamily **> (std::move (_peel_families).release_ref ()));
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_load_font ()
    {
      ::PangoFontMapClass *klass = reinterpret_cast<::PangoFontMapClass *> (this);
      klass->load_font = +[] (::PangoFontMap *fontmap, ::PangoContext *context, const ::PangoFontDescription *desc) -> ::PangoFont *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontmap);
        Context *_peel_context = reinterpret_cast<Context *> (context);
        const FontDescription *_peel_desc = reinterpret_cast<const FontDescription *> (desc);
        peel::RefPtr<Font> _peel_return = _peel_this->DerivedClass::vfunc_load_font (_peel_context, _peel_desc);
        return reinterpret_cast<::PangoFont *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_load_fontset ()
    {
      ::PangoFontMapClass *klass = reinterpret_cast<::PangoFontMapClass *> (this);
      klass->load_fontset = +[] (::PangoFontMap *fontmap, ::PangoContext *context, const ::PangoFontDescription *desc, ::PangoLanguage *language) -> ::PangoFontset *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontmap);
        Context *_peel_context = reinterpret_cast<Context *> (context);
        const FontDescription *_peel_desc = reinterpret_cast<const FontDescription *> (desc);
        Language *_peel_language = reinterpret_cast<Language *> (language);
        peel::RefPtr<Fontset> _peel_return = _peel_this->DerivedClass::vfunc_load_fontset (_peel_context, _peel_desc, _peel_language);
        return reinterpret_cast<::PangoFontset *> (std::move (_peel_return).release_ref ());
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::PangoFontMapClass),
                 "FontMap::Class size mismatch");
  static_assert (alignof (Class) == alignof (::PangoFontMapClass),
                 "FontMap::Class align mismatch");
}; /* class FontMap */

static_assert (sizeof (FontMap) == sizeof (::PangoFontMap),
               "FontMap size mismatch");
static_assert (alignof (FontMap) == alignof (::PangoFontMap),
               "FontMap align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Pango/Context.h>
#include <peel/Pango/Font.h>
#include <peel/Pango/FontFamily.h>
#include <peel/Pango/Fontset.h>
