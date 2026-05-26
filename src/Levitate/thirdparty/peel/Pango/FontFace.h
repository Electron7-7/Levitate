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
class /* record */ FontDescription;
class FontFace;
class FontFamily;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::FontFace> ()
{
  return pango_font_face_get_type ();
}


namespace Pango
{
class FontFace : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FontFace () = delete;
  FontFace (const FontFace &) = delete;
  FontFace (FontFace &&) = delete;
  FontFace &
  operator = (const FontFace &) = delete;
  FontFace &
  operator = (FontFace &&) = delete;
protected:
  ~FontFace () = default;
public:

  peel::UniquePtr<FontDescription>
  describe () noexcept
  {
    ::PangoFontFace *_peel_this = reinterpret_cast<::PangoFontFace *> (this);
    ::PangoFontDescription *_peel_return = pango_font_face_describe (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<FontDescription>::adopt_ref (reinterpret_cast<FontDescription *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_face_name () noexcept
  {
    ::PangoFontFace *_peel_this = reinterpret_cast<::PangoFontFace *> (this);
    return pango_font_face_get_face_name (_peel_this);
  }

  peel_returns_nonnull
  FontFamily *
  get_family () noexcept
  {
    ::PangoFontFace *_peel_this = reinterpret_cast<::PangoFontFace *> (this);
    ::PangoFontFamily *_peel_return = pango_font_face_get_family (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<FontFamily *> (_peel_return);
  }

  bool
  is_synthesized () noexcept
  {
    ::PangoFontFace *_peel_this = reinterpret_cast<::PangoFontFace *> (this);
    gboolean _peel_return = pango_font_face_is_synthesized (_peel_this);
    return !!_peel_return;
  }

  void
  list_sizes (peel::UniquePtr<int[]> *sizes) noexcept
  {
    int _peel_n_sizes;
    ::PangoFontFace *_peel_this = reinterpret_cast<::PangoFontFace *> (this);
    int *_peel_sizes;
    pango_font_face_list_sizes (_peel_this, sizes ? &_peel_sizes : nullptr, &_peel_n_sizes);
    if (sizes)
      *sizes = peel::UniquePtr<int[]>::adopt_ref (reinterpret_cast<int *> (_peel_sizes), _peel_n_sizes);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<FontFace> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel::UniquePtr<FontDescription>
  parent_vfunc_describe () noexcept
  {
    ::PangoFontFaceClass *_peel_class = reinterpret_cast<::PangoFontFaceClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontFace *_peel_this = reinterpret_cast<::PangoFontFace *> (this);
    ::PangoFontDescription *_peel_return = _peel_class->describe (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<FontDescription>::adopt_ref (reinterpret_cast<FontDescription *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  const char *
  parent_vfunc_get_face_name () noexcept
  {
    ::PangoFontFaceClass *_peel_class = reinterpret_cast<::PangoFontFaceClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontFace *_peel_this = reinterpret_cast<::PangoFontFace *> (this);
    return _peel_class->get_face_name (_peel_this);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  FontFamily *
  parent_vfunc_get_family () noexcept
  {
    ::PangoFontFaceClass *_peel_class = reinterpret_cast<::PangoFontFaceClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontFace *_peel_this = reinterpret_cast<::PangoFontFace *> (this);
    ::PangoFontFamily *_peel_return = _peel_class->get_family (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<FontFamily *> (_peel_return);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_synthesized () noexcept
  {
    ::PangoFontFaceClass *_peel_class = reinterpret_cast<::PangoFontFaceClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontFace *_peel_this = reinterpret_cast<::PangoFontFace *> (this);
    gboolean _peel_return = _peel_class->is_synthesized (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_list_sizes (peel::UniquePtr<int[]> *sizes) noexcept
  {
    ::PangoFontFaceClass *_peel_class = reinterpret_cast<::PangoFontFaceClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    int _peel_n_sizes;
    ::PangoFontFace *_peel_this = reinterpret_cast<::PangoFontFace *> (this);
    int *_peel_sizes;
    _peel_class->list_sizes (_peel_this, sizes ? &_peel_sizes : nullptr, &_peel_n_sizes);
    if (sizes)
      *sizes = peel::UniquePtr<int[]>::adopt_ref (reinterpret_cast<int *> (_peel_sizes), _peel_n_sizes);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::PangoFontFaceClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_describe ()
    {
      ::PangoFontFaceClass *klass = reinterpret_cast<::PangoFontFaceClass *> (this);
      klass->describe = +[] (::PangoFontFace *face) -> ::PangoFontDescription *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (face);
        peel::UniquePtr<FontDescription> _peel_return = _peel_this->DerivedClass::vfunc_describe ();
        return reinterpret_cast<::PangoFontDescription *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_face_name ()
    {
      ::PangoFontFaceClass *klass = reinterpret_cast<::PangoFontFaceClass *> (this);
      klass->get_face_name = +[] (::PangoFontFace *face) -> const char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (face);
        return _peel_this->DerivedClass::vfunc_get_face_name ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_family ()
    {
      ::PangoFontFaceClass *klass = reinterpret_cast<::PangoFontFaceClass *> (this);
      klass->get_family = +[] (::PangoFontFace *face) -> ::PangoFontFamily *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (face);
        FontFamily *_peel_return = _peel_this->DerivedClass::vfunc_get_family ();
        return reinterpret_cast<::PangoFontFamily *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_synthesized ()
    {
      ::PangoFontFaceClass *klass = reinterpret_cast<::PangoFontFaceClass *> (this);
      klass->is_synthesized = +[] (::PangoFontFace *face) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (face);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_synthesized ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_list_sizes ()
    {
      ::PangoFontFaceClass *klass = reinterpret_cast<::PangoFontFaceClass *> (this);
      klass->list_sizes = +[] (::PangoFontFace *face, int **sizes, int *n_sizes) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (face);
        peel::UniquePtr<int[]> _peel_sizes;
        _peel_this->DerivedClass::vfunc_list_sizes (sizes ? &_peel_sizes : nullptr);
        if (sizes)
          *sizes = (*n_sizes = _peel_sizes.size (), reinterpret_cast<int *> (std::move (_peel_sizes).release_ref ()));
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::PangoFontFaceClass),
                 "FontFace::Class size mismatch");
  static_assert (alignof (Class) == alignof (::PangoFontFaceClass),
                 "FontFace::Class align mismatch");
}; /* class FontFace */

static_assert (sizeof (FontFace) == sizeof (::PangoFontFace),
               "FontFace size mismatch");
static_assert (alignof (FontFace) == alignof (::PangoFontFace),
               "FontFace align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/Pango/FontDescription.h>
