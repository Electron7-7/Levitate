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
enum class BidiType : std::underlying_type<::PangoBidiType>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::BidiType>
{
  typedef Pango::BidiType UnownedType;

  static Pango::BidiType
  get (const ::GValue *value)
  {
    return static_cast<Pango::BidiType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::BidiType m)
  {
    g_value_set_enum (value, static_cast<::PangoBidiType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::BidiType m)
  {
    set (value, m);
  }

  static Pango::BidiType
  cast_for_create (Pango::BidiType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::BidiType> ()
{
  return pango_bidi_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::BidiType>
{
  Pango::BidiType default_value;

  constexpr PspecTraits (Pango::BidiType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_bidi_type_get_type (),
                              static_cast<::PangoBidiType> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class BidiType : std::underlying_type<::PangoBidiType>::type
{
  L = PANGO_BIDI_TYPE_L,
  LRE = PANGO_BIDI_TYPE_LRE,
  LRO = PANGO_BIDI_TYPE_LRO,
  R = PANGO_BIDI_TYPE_R,
  AL = PANGO_BIDI_TYPE_AL,
  RLE = PANGO_BIDI_TYPE_RLE,
  RLO = PANGO_BIDI_TYPE_RLO,
  PDF = PANGO_BIDI_TYPE_PDF,
  EN = PANGO_BIDI_TYPE_EN,
  ES = PANGO_BIDI_TYPE_ES,
  ET = PANGO_BIDI_TYPE_ET,
  AN = PANGO_BIDI_TYPE_AN,
  CS = PANGO_BIDI_TYPE_CS,
  NSM = PANGO_BIDI_TYPE_NSM,
  BN = PANGO_BIDI_TYPE_BN,
  B = PANGO_BIDI_TYPE_B,
  S = PANGO_BIDI_TYPE_S,
  WS = PANGO_BIDI_TYPE_WS,
  ON = PANGO_BIDI_TYPE_ON,
  LRI = PANGO_BIDI_TYPE_LRI,
  RLI = PANGO_BIDI_TYPE_RLI,
  FSI = PANGO_BIDI_TYPE_FSI,
  PDI = PANGO_BIDI_TYPE_PDI,
}; /* enum BidiType */

peel_no_warn_unused
static BidiType
bidi_type_for_unichar (gunichar ch) noexcept
{
  ::PangoBidiType _peel_return = pango_bidi_type_for_unichar (ch);
  return static_cast<BidiType> (_peel_return);
}


} /* namespace Pango */
} /* namespace peel */

peel_end_header
