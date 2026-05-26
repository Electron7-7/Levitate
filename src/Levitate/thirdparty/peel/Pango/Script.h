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
class /* record */ Language;
enum class Script : std::underlying_type<::PangoScript>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::Script>
{
  typedef Pango::Script UnownedType;

  static Pango::Script
  get (const ::GValue *value)
  {
    return static_cast<Pango::Script> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::Script m)
  {
    g_value_set_enum (value, static_cast<::PangoScript> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::Script m)
  {
    set (value, m);
  }

  static Pango::Script
  cast_for_create (Pango::Script m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::Script> ()
{
  return pango_script_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::Script>
{
  Pango::Script default_value;

  constexpr PspecTraits (Pango::Script default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_script_get_type (),
                              static_cast<::PangoScript> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class Script : std::underlying_type<::PangoScript>::type
{
  INVALID_CODE = PANGO_SCRIPT_INVALID_CODE,
  COMMON = PANGO_SCRIPT_COMMON,
  INHERITED = PANGO_SCRIPT_INHERITED,
  ARABIC = PANGO_SCRIPT_ARABIC,
  ARMENIAN = PANGO_SCRIPT_ARMENIAN,
  BENGALI = PANGO_SCRIPT_BENGALI,
  BOPOMOFO = PANGO_SCRIPT_BOPOMOFO,
  CHEROKEE = PANGO_SCRIPT_CHEROKEE,
  COPTIC = PANGO_SCRIPT_COPTIC,
  CYRILLIC = PANGO_SCRIPT_CYRILLIC,
  DESERET = PANGO_SCRIPT_DESERET,
  DEVANAGARI = PANGO_SCRIPT_DEVANAGARI,
  ETHIOPIC = PANGO_SCRIPT_ETHIOPIC,
  GEORGIAN = PANGO_SCRIPT_GEORGIAN,
  GOTHIC = PANGO_SCRIPT_GOTHIC,
  GREEK = PANGO_SCRIPT_GREEK,
  GUJARATI = PANGO_SCRIPT_GUJARATI,
  GURMUKHI = PANGO_SCRIPT_GURMUKHI,
  HAN = PANGO_SCRIPT_HAN,
  HANGUL = PANGO_SCRIPT_HANGUL,
  HEBREW = PANGO_SCRIPT_HEBREW,
  HIRAGANA = PANGO_SCRIPT_HIRAGANA,
  KANNADA = PANGO_SCRIPT_KANNADA,
  KATAKANA = PANGO_SCRIPT_KATAKANA,
  KHMER = PANGO_SCRIPT_KHMER,
  LAO = PANGO_SCRIPT_LAO,
  LATIN = PANGO_SCRIPT_LATIN,
  MALAYALAM = PANGO_SCRIPT_MALAYALAM,
  MONGOLIAN = PANGO_SCRIPT_MONGOLIAN,
  MYANMAR = PANGO_SCRIPT_MYANMAR,
  OGHAM = PANGO_SCRIPT_OGHAM,
  OLD_ITALIC = PANGO_SCRIPT_OLD_ITALIC,
  ORIYA = PANGO_SCRIPT_ORIYA,
  RUNIC = PANGO_SCRIPT_RUNIC,
  SINHALA = PANGO_SCRIPT_SINHALA,
  SYRIAC = PANGO_SCRIPT_SYRIAC,
  TAMIL = PANGO_SCRIPT_TAMIL,
  TELUGU = PANGO_SCRIPT_TELUGU,
  THAANA = PANGO_SCRIPT_THAANA,
  THAI = PANGO_SCRIPT_THAI,
  TIBETAN = PANGO_SCRIPT_TIBETAN,
  CANADIAN_ABORIGINAL = PANGO_SCRIPT_CANADIAN_ABORIGINAL,
  YI = PANGO_SCRIPT_YI,
  TAGALOG = PANGO_SCRIPT_TAGALOG,
  HANUNOO = PANGO_SCRIPT_HANUNOO,
  BUHID = PANGO_SCRIPT_BUHID,
  TAGBANWA = PANGO_SCRIPT_TAGBANWA,
  BRAILLE = PANGO_SCRIPT_BRAILLE,
  CYPRIOT = PANGO_SCRIPT_CYPRIOT,
  LIMBU = PANGO_SCRIPT_LIMBU,
  OSMANYA = PANGO_SCRIPT_OSMANYA,
  SHAVIAN = PANGO_SCRIPT_SHAVIAN,
  LINEAR_B = PANGO_SCRIPT_LINEAR_B,
  TAI_LE = PANGO_SCRIPT_TAI_LE,
  UGARITIC = PANGO_SCRIPT_UGARITIC,
  NEW_TAI_LUE = PANGO_SCRIPT_NEW_TAI_LUE,
  BUGINESE = PANGO_SCRIPT_BUGINESE,
  GLAGOLITIC = PANGO_SCRIPT_GLAGOLITIC,
  TIFINAGH = PANGO_SCRIPT_TIFINAGH,
  SYLOTI_NAGRI = PANGO_SCRIPT_SYLOTI_NAGRI,
  OLD_PERSIAN = PANGO_SCRIPT_OLD_PERSIAN,
  KHAROSHTHI = PANGO_SCRIPT_KHAROSHTHI,
  UNKNOWN = PANGO_SCRIPT_UNKNOWN,
  BALINESE = PANGO_SCRIPT_BALINESE,
  CUNEIFORM = PANGO_SCRIPT_CUNEIFORM,
  PHOENICIAN = PANGO_SCRIPT_PHOENICIAN,
  PHAGS_PA = PANGO_SCRIPT_PHAGS_PA,
  NKO = PANGO_SCRIPT_NKO,
  KAYAH_LI = PANGO_SCRIPT_KAYAH_LI,
  LEPCHA = PANGO_SCRIPT_LEPCHA,
  REJANG = PANGO_SCRIPT_REJANG,
  SUNDANESE = PANGO_SCRIPT_SUNDANESE,
  SAURASHTRA = PANGO_SCRIPT_SAURASHTRA,
  CHAM = PANGO_SCRIPT_CHAM,
  OL_CHIKI = PANGO_SCRIPT_OL_CHIKI,
  VAI = PANGO_SCRIPT_VAI,
  CARIAN = PANGO_SCRIPT_CARIAN,
  LYCIAN = PANGO_SCRIPT_LYCIAN,
  LYDIAN = PANGO_SCRIPT_LYDIAN,
  BATAK = PANGO_SCRIPT_BATAK,
  BRAHMI = PANGO_SCRIPT_BRAHMI,
  MANDAIC = PANGO_SCRIPT_MANDAIC,
  CHAKMA = PANGO_SCRIPT_CHAKMA,
  MEROITIC_CURSIVE = PANGO_SCRIPT_MEROITIC_CURSIVE,
  MEROITIC_HIEROGLYPHS = PANGO_SCRIPT_MEROITIC_HIEROGLYPHS,
  MIAO = PANGO_SCRIPT_MIAO,
  SHARADA = PANGO_SCRIPT_SHARADA,
  SORA_SOMPENG = PANGO_SCRIPT_SORA_SOMPENG,
  TAKRI = PANGO_SCRIPT_TAKRI,
  BASSA_VAH = PANGO_SCRIPT_BASSA_VAH,
  CAUCASIAN_ALBANIAN = PANGO_SCRIPT_CAUCASIAN_ALBANIAN,
  DUPLOYAN = PANGO_SCRIPT_DUPLOYAN,
  ELBASAN = PANGO_SCRIPT_ELBASAN,
  GRANTHA = PANGO_SCRIPT_GRANTHA,
  KHOJKI = PANGO_SCRIPT_KHOJKI,
  KHUDAWADI = PANGO_SCRIPT_KHUDAWADI,
  LINEAR_A = PANGO_SCRIPT_LINEAR_A,
  MAHAJANI = PANGO_SCRIPT_MAHAJANI,
  MANICHAEAN = PANGO_SCRIPT_MANICHAEAN,
  MENDE_KIKAKUI = PANGO_SCRIPT_MENDE_KIKAKUI,
  MODI = PANGO_SCRIPT_MODI,
  MRO = PANGO_SCRIPT_MRO,
  NABATAEAN = PANGO_SCRIPT_NABATAEAN,
  OLD_NORTH_ARABIAN = PANGO_SCRIPT_OLD_NORTH_ARABIAN,
  OLD_PERMIC = PANGO_SCRIPT_OLD_PERMIC,
  PAHAWH_HMONG = PANGO_SCRIPT_PAHAWH_HMONG,
  PALMYRENE = PANGO_SCRIPT_PALMYRENE,
  PAU_CIN_HAU = PANGO_SCRIPT_PAU_CIN_HAU,
  PSALTER_PAHLAVI = PANGO_SCRIPT_PSALTER_PAHLAVI,
  SIDDHAM = PANGO_SCRIPT_SIDDHAM,
  TIRHUTA = PANGO_SCRIPT_TIRHUTA,
  WARANG_CITI = PANGO_SCRIPT_WARANG_CITI,
  AHOM = PANGO_SCRIPT_AHOM,
  ANATOLIAN_HIEROGLYPHS = PANGO_SCRIPT_ANATOLIAN_HIEROGLYPHS,
  HATRAN = PANGO_SCRIPT_HATRAN,
  MULTANI = PANGO_SCRIPT_MULTANI,
  OLD_HUNGARIAN = PANGO_SCRIPT_OLD_HUNGARIAN,
  SIGNWRITING = PANGO_SCRIPT_SIGNWRITING,
}; /* enum Script */

peel_no_warn_unused
static Script
script_for_unichar (gunichar ch) noexcept
{
  ::PangoScript _peel_return = pango_script_for_unichar (ch);
  return static_cast<Script> (_peel_return);
}

/* Unsupported for now: script_get_sample_language: no idea about ownership semantics */


} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/Pango/Language.h>
