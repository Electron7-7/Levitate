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
namespace Pango
{
class FontFace;
class FontFamily;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::FontFamily> ()
{
  return pango_font_family_get_type ();
}


namespace Pango
{
class FontFamily : public Gio::ListModel
/* extends GObject::Object */
/* implements Gio::ListModel */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FontFamily () = delete;
  FontFamily (const FontFamily &) = delete;
  FontFamily (FontFamily &&) = delete;
  FontFamily &
  operator = (const FontFamily &) = delete;
  FontFamily &
  operator = (FontFamily &&) = delete;
protected:
  ~FontFamily () = default;
public:

  FontFace *
  get_face (const char *name) noexcept
  {
    ::PangoFontFamily *_peel_this = reinterpret_cast<::PangoFontFamily *> (this);
    ::PangoFontFace *_peel_return = pango_font_family_get_face (_peel_this, name);
    return reinterpret_cast<FontFace *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::PangoFontFamily *_peel_this = reinterpret_cast<::PangoFontFamily *> (this);
    return pango_font_family_get_name (_peel_this);
  }

  bool
  is_monospace () noexcept
  {
    ::PangoFontFamily *_peel_this = reinterpret_cast<::PangoFontFamily *> (this);
    gboolean _peel_return = pango_font_family_is_monospace (_peel_this);
    return !!_peel_return;
  }

  bool
  is_variable () noexcept
  {
    ::PangoFontFamily *_peel_this = reinterpret_cast<::PangoFontFamily *> (this);
    gboolean _peel_return = pango_font_family_is_variable (_peel_this);
    return !!_peel_return;
  }

  void
  list_faces (peel::UniquePtr<FontFace *[]> *faces) noexcept
  {
    int _peel_n_faces;
    ::PangoFontFamily *_peel_this = reinterpret_cast<::PangoFontFamily *> (this);
    ::PangoFontFace **_peel_faces;
    pango_font_family_list_faces (_peel_this, faces ? &_peel_faces : nullptr, &_peel_n_faces);
    if (faces)
      *faces = peel::UniquePtr<FontFace *[]>::adopt_ref (reinterpret_cast<FontFace **> (_peel_faces), _peel_n_faces);
  }

  static peel::Property<bool>
  prop_is_monospace ()
  {
    return peel::Property<bool> { "is-monospace" };
  }

  static peel::Property<bool>
  prop_is_variable ()
  {
    return peel::Property<bool> { "is-variable" };
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

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<FontFamily> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  FontFace *
  parent_vfunc_get_face (const char *name) noexcept
  {
    ::PangoFontFamilyClass *_peel_class = reinterpret_cast<::PangoFontFamilyClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontFamily *_peel_this = reinterpret_cast<::PangoFontFamily *> (this);
    ::PangoFontFace *_peel_return = _peel_class->get_face (_peel_this, name);
    return reinterpret_cast<FontFace *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  const char *
  parent_vfunc_get_name () noexcept
  {
    ::PangoFontFamilyClass *_peel_class = reinterpret_cast<::PangoFontFamilyClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontFamily *_peel_this = reinterpret_cast<::PangoFontFamily *> (this);
    return _peel_class->get_name (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_monospace () noexcept
  {
    ::PangoFontFamilyClass *_peel_class = reinterpret_cast<::PangoFontFamilyClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontFamily *_peel_this = reinterpret_cast<::PangoFontFamily *> (this);
    gboolean _peel_return = _peel_class->is_monospace (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_variable () noexcept
  {
    ::PangoFontFamilyClass *_peel_class = reinterpret_cast<::PangoFontFamilyClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontFamily *_peel_this = reinterpret_cast<::PangoFontFamily *> (this);
    gboolean _peel_return = _peel_class->is_variable (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_list_faces (peel::UniquePtr<FontFace *[]> *faces) noexcept
  {
    ::PangoFontFamilyClass *_peel_class = reinterpret_cast<::PangoFontFamilyClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    int _peel_n_faces;
    ::PangoFontFamily *_peel_this = reinterpret_cast<::PangoFontFamily *> (this);
    ::PangoFontFace **_peel_faces;
    _peel_class->list_faces (_peel_this, faces ? &_peel_faces : nullptr, &_peel_n_faces);
    if (faces)
      *faces = peel::UniquePtr<FontFace *[]>::adopt_ref (reinterpret_cast<FontFace **> (_peel_faces), _peel_n_faces);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::PangoFontFamilyClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_get_face ()
    {
      ::PangoFontFamilyClass *klass = reinterpret_cast<::PangoFontFamilyClass *> (this);
      klass->get_face = +[] (::PangoFontFamily *family, const char *name) -> ::PangoFontFace *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (family);
        FontFace *_peel_return = _peel_this->DerivedClass::vfunc_get_face (name);
        return reinterpret_cast<::PangoFontFace *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_name ()
    {
      ::PangoFontFamilyClass *klass = reinterpret_cast<::PangoFontFamilyClass *> (this);
      klass->get_name = +[] (::PangoFontFamily *family) -> const char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (family);
        return _peel_this->DerivedClass::vfunc_get_name ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_monospace ()
    {
      ::PangoFontFamilyClass *klass = reinterpret_cast<::PangoFontFamilyClass *> (this);
      klass->is_monospace = +[] (::PangoFontFamily *family) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (family);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_monospace ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_variable ()
    {
      ::PangoFontFamilyClass *klass = reinterpret_cast<::PangoFontFamilyClass *> (this);
      klass->is_variable = +[] (::PangoFontFamily *family) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (family);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_variable ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_list_faces ()
    {
      ::PangoFontFamilyClass *klass = reinterpret_cast<::PangoFontFamilyClass *> (this);
      klass->list_faces = +[] (::PangoFontFamily *family, ::PangoFontFace ***faces, int *n_faces) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (family);
        peel::UniquePtr<FontFace *[]> _peel_faces;
        _peel_this->DerivedClass::vfunc_list_faces (faces ? &_peel_faces : nullptr);
        if (faces)
          *faces = (*n_faces = _peel_faces.size (), reinterpret_cast<::PangoFontFace **> (std::move (_peel_faces).release_ref ()));
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::PangoFontFamilyClass),
                 "FontFamily::Class size mismatch");
  static_assert (alignof (Class) == alignof (::PangoFontFamilyClass),
                 "FontFamily::Class align mismatch");
}; /* class FontFamily */

static_assert (sizeof (FontFamily) == sizeof (::PangoFontFamily),
               "FontFamily size mismatch");
static_assert (alignof (FontFamily) == alignof (::PangoFontFamily),
               "FontFamily align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/Pango/FontFace.h>
