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
class Font;
struct FontMetrics;
class Fontset;
class /* record */ Language;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::Fontset> ()
{
  return pango_fontset_get_type ();
}


namespace Pango
{
class Fontset : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Fontset () = delete;
  Fontset (const Fontset &) = delete;
  Fontset (Fontset &&) = delete;
  Fontset &
  operator = (const Fontset &) = delete;
  Fontset &
  operator = (Fontset &&) = delete;
protected:
  ~Fontset () = default;
public:

  template<typename FontsetForeachFunc>
  void
  foreach (FontsetForeachFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::PangoFontset *_peel_this = reinterpret_cast<::PangoFontset *> (this);
    ::PangoFontsetForeachFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::PangoFontset *, ::PangoFont *>::wrap_call_callback (
      static_cast<FontsetForeachFunc &&> (func),
      [] (::PangoFontset *fontset, ::PangoFont *font, gpointer user_data) -> gboolean
      {
        FontsetForeachFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<FontsetForeachFunc>::type *> (user_data);
        Fontset *_peel_fontset = reinterpret_cast<Fontset *> (fontset);
        Font *_peel_font = reinterpret_cast<Font *> (font);
        bool _peel_return = _peel_captured_func (_peel_fontset, _peel_font);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, peel::internals::is_const_invocable<FontsetForeachFunc, void, Fontset *, Font *>::value);
    pango_fontset_foreach (_peel_this, _peel_func, _peel_data);
  }

  peel::RefPtr<Font>
  get_font (unsigned wc) noexcept
  {
    ::PangoFontset *_peel_this = reinterpret_cast<::PangoFontset *> (this);
    ::PangoFont *_peel_return = pango_fontset_get_font (_peel_this, wc);
    peel_assume (_peel_return);
    return peel::RefPtr<Font>::adopt_ref (reinterpret_cast<Font *> (_peel_return));
  }

  peel::RefPtr<FontMetrics>
  get_metrics () noexcept
  {
    ::PangoFontset *_peel_this = reinterpret_cast<::PangoFontset *> (this);
    ::PangoFontMetrics *_peel_return = pango_fontset_get_metrics (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<FontMetrics>::adopt_ref (reinterpret_cast<FontMetrics *> (_peel_return));
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Fontset> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass, typename FontsetForeachFunc>
  void
  parent_vfunc_foreach (FontsetForeachFunc &&func) noexcept
  {
    ::PangoFontsetClass *_peel_class = reinterpret_cast<::PangoFontsetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_data;
    ::PangoFontset *_peel_this = reinterpret_cast<::PangoFontset *> (this);
    ::PangoFontsetForeachFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::PangoFontset *, ::PangoFont *>::wrap_call_callback (
      static_cast<FontsetForeachFunc &&> (func),
      [] (::PangoFontset *fontset, ::PangoFont *font, gpointer user_data) -> gboolean
      {
        FontsetForeachFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<FontsetForeachFunc>::type *> (user_data);
        Fontset *_peel_fontset = reinterpret_cast<Fontset *> (fontset);
        Font *_peel_font = reinterpret_cast<Font *> (font);
        bool _peel_return = _peel_captured_func (_peel_fontset, _peel_font);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, peel::internals::is_const_invocable<FontsetForeachFunc, void, Fontset *, Font *>::value);
    _peel_class->foreach (_peel_this, _peel_func, _peel_data);
  }

  template<typename DerivedClass>
  peel::RefPtr<Font>
  parent_vfunc_get_font (unsigned wc) noexcept
  {
    ::PangoFontsetClass *_peel_class = reinterpret_cast<::PangoFontsetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontset *_peel_this = reinterpret_cast<::PangoFontset *> (this);
    ::PangoFont *_peel_return = _peel_class->get_font (_peel_this, wc);
    peel_assume (_peel_return);
    return peel::RefPtr<Font>::adopt_ref (reinterpret_cast<Font *> (_peel_return));
  }

  /* Unsupported for now: get_language: no idea about ownership semantics */

  template<typename DerivedClass>
  peel::RefPtr<FontMetrics>
  parent_vfunc_get_metrics () noexcept
  {
    ::PangoFontsetClass *_peel_class = reinterpret_cast<::PangoFontsetClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::PangoFontset *_peel_this = reinterpret_cast<::PangoFontset *> (this);
    ::PangoFontMetrics *_peel_return = _peel_class->get_metrics (_peel_this);
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

    unsigned char _placeholder[sizeof (::PangoFontsetClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    /* Unsupported for now: foreach: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_get_font ()
    {
      ::PangoFontsetClass *klass = reinterpret_cast<::PangoFontsetClass *> (this);
      klass->get_font = +[] (::PangoFontset *fontset, guint wc) -> ::PangoFont *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontset);
        peel::RefPtr<Font> _peel_return = _peel_this->DerivedClass::vfunc_get_font (wc);
        return reinterpret_cast<::PangoFont *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: get_language: no idea about ownership semantics */

    template<typename DerivedClass>
    void
    override_vfunc_get_metrics ()
    {
      ::PangoFontsetClass *klass = reinterpret_cast<::PangoFontsetClass *> (this);
      klass->get_metrics = +[] (::PangoFontset *fontset) -> ::PangoFontMetrics *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (fontset);
        peel::RefPtr<FontMetrics> _peel_return = _peel_this->DerivedClass::vfunc_get_metrics ();
        return reinterpret_cast<::PangoFontMetrics *> (std::move (_peel_return).release_ref ());
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::PangoFontsetClass),
                 "Fontset::Class size mismatch");
  static_assert (alignof (Class) == alignof (::PangoFontsetClass),
                 "Fontset::Class align mismatch");
}; /* class Fontset */

static_assert (sizeof (Fontset) == sizeof (::PangoFontset),
               "Fontset size mismatch");
static_assert (alignof (Fontset) == alignof (::PangoFontset),
               "Fontset align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/Pango/Font.h>
#include <peel/Pango/FontMetrics.h>
#include <peel/Pango/Language.h>
