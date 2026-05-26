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
struct AttrClass;
struct AttrColor;
struct AttrFloat;
struct AttrFontDesc;
struct AttrFontFeatures;
struct AttrInt;
struct AttrLanguage;
struct AttrShape;
struct AttrSize;
struct AttrString;
struct Attribute;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::Attribute> ()
{
  return pango_attribute_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::Attribute>
{
  typedef UniquePtr<Pango::Attribute> OwnedType;
  typedef const Pango::Attribute * UnownedType;

  static const Pango::Attribute *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::Attribute *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::Attribute * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Pango::Attribute>
  dup (const ::GValue *value)
  {
    return UniquePtr<Pango::Attribute>::adopt_ref (reinterpret_cast<Pango::Attribute *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Pango::Attribute> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Pango::Attribute *
  cast_for_create (const Pango::Attribute * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::Attribute>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::Attribute> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Pango::Attribute>
{
  static void
  free (Pango::Attribute *ptr)
  {
    pango_attribute_destroy (reinterpret_cast<::PangoAttribute *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Pango
{
struct Attribute
{
private:

public:
  const AttrClass *klass;
  unsigned start_index;
  unsigned end_index;

  AttrColor *
  as_color () noexcept
  {
    ::PangoAttribute *_peel_this = reinterpret_cast<::PangoAttribute *> (this);
    ::PangoAttrColor *_peel_return = pango_attribute_as_color (_peel_this);
    return reinterpret_cast<AttrColor *> (_peel_return);
  }

  AttrFloat *
  as_float () noexcept
  {
    ::PangoAttribute *_peel_this = reinterpret_cast<::PangoAttribute *> (this);
    ::PangoAttrFloat *_peel_return = pango_attribute_as_float (_peel_this);
    return reinterpret_cast<AttrFloat *> (_peel_return);
  }

  AttrFontDesc *
  as_font_desc () noexcept
  {
    ::PangoAttribute *_peel_this = reinterpret_cast<::PangoAttribute *> (this);
    ::PangoAttrFontDesc *_peel_return = pango_attribute_as_font_desc (_peel_this);
    return reinterpret_cast<AttrFontDesc *> (_peel_return);
  }

  AttrFontFeatures *
  as_font_features () noexcept
  {
    ::PangoAttribute *_peel_this = reinterpret_cast<::PangoAttribute *> (this);
    ::PangoAttrFontFeatures *_peel_return = pango_attribute_as_font_features (_peel_this);
    return reinterpret_cast<AttrFontFeatures *> (_peel_return);
  }

  AttrInt *
  as_int () noexcept
  {
    ::PangoAttribute *_peel_this = reinterpret_cast<::PangoAttribute *> (this);
    ::PangoAttrInt *_peel_return = pango_attribute_as_int (_peel_this);
    return reinterpret_cast<AttrInt *> (_peel_return);
  }

  AttrLanguage *
  as_language () noexcept
  {
    ::PangoAttribute *_peel_this = reinterpret_cast<::PangoAttribute *> (this);
    ::PangoAttrLanguage *_peel_return = pango_attribute_as_language (_peel_this);
    return reinterpret_cast<AttrLanguage *> (_peel_return);
  }

  AttrShape *
  as_shape () noexcept
  {
    ::PangoAttribute *_peel_this = reinterpret_cast<::PangoAttribute *> (this);
    ::PangoAttrShape *_peel_return = pango_attribute_as_shape (_peel_this);
    return reinterpret_cast<AttrShape *> (_peel_return);
  }

  AttrSize *
  as_size () noexcept
  {
    ::PangoAttribute *_peel_this = reinterpret_cast<::PangoAttribute *> (this);
    ::PangoAttrSize *_peel_return = pango_attribute_as_size (_peel_this);
    return reinterpret_cast<AttrSize *> (_peel_return);
  }

  AttrString *
  as_string () noexcept
  {
    ::PangoAttribute *_peel_this = reinterpret_cast<::PangoAttribute *> (this);
    ::PangoAttrString *_peel_return = pango_attribute_as_string (_peel_this);
    return reinterpret_cast<AttrString *> (_peel_return);
  }

  peel::UniquePtr<Attribute>
  copy () const noexcept
  {
    const ::PangoAttribute *_peel_this = reinterpret_cast<const ::PangoAttribute *> (this);
    ::PangoAttribute *_peel_return = pango_attribute_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
  }

  /* destroy bound as UniqueTraits */

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const Attribute *attr2) const noexcept
  {
    const ::PangoAttribute *_peel_this = reinterpret_cast<const ::PangoAttribute *> (this);
    const ::PangoAttribute *_peel_attr2 = reinterpret_cast<const ::PangoAttribute *> (attr2);
    gboolean _peel_return = pango_attribute_equal (_peel_this, _peel_attr2);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  init (const AttrClass *klass) noexcept
  {
    ::PangoAttribute *_peel_this = reinterpret_cast<::PangoAttribute *> (this);
    const ::PangoAttrClass *_peel_klass = reinterpret_cast<const ::PangoAttrClass *> (klass);
    pango_attribute_init (_peel_this, _peel_klass);
  }
}; /* record Attribute */

static_assert (sizeof (Attribute) == sizeof (::PangoAttribute),
               "Attribute size mismatch");
static_assert (alignof (Attribute) == alignof (::PangoAttribute),
               "Attribute align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
