#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
enum class UnicodeBreakType : std::underlying_type<::GUnicodeBreakType>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::UnicodeBreakType>
{
  typedef GLib::UnicodeBreakType UnownedType;

  static GLib::UnicodeBreakType
  get (const ::GValue *value)
  {
    return static_cast<GLib::UnicodeBreakType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::UnicodeBreakType m)
  {
    g_value_set_enum (value, static_cast<::GUnicodeBreakType> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::UnicodeBreakType m)
  {
    set (value, m);
  }

  static GLib::UnicodeBreakType
  cast_for_create (GLib::UnicodeBreakType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<GLib::UnicodeBreakType> ()
{
  return g_unicode_break_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<GLib::UnicodeBreakType>
{
  GLib::UnicodeBreakType default_value;

  constexpr PspecTraits (GLib::UnicodeBreakType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_unicode_break_type_get_type (),
                              static_cast<::GUnicodeBreakType> (default_value),
                              basics.flags);
  }
};


namespace GLib
{
enum class UnicodeBreakType : std::underlying_type<::GUnicodeBreakType>::type
{
  MANDATORY = G_UNICODE_BREAK_MANDATORY,
  CARRIAGE_RETURN = G_UNICODE_BREAK_CARRIAGE_RETURN,
  LINE_FEED = G_UNICODE_BREAK_LINE_FEED,
  COMBINING_MARK = G_UNICODE_BREAK_COMBINING_MARK,
  SURROGATE = G_UNICODE_BREAK_SURROGATE,
  ZERO_WIDTH_SPACE = G_UNICODE_BREAK_ZERO_WIDTH_SPACE,
  INSEPARABLE = G_UNICODE_BREAK_INSEPARABLE,
  NON_BREAKING_GLUE = G_UNICODE_BREAK_NON_BREAKING_GLUE,
  CONTINGENT = G_UNICODE_BREAK_CONTINGENT,
  SPACE = G_UNICODE_BREAK_SPACE,
  AFTER = G_UNICODE_BREAK_AFTER,
  BEFORE = G_UNICODE_BREAK_BEFORE,
  BEFORE_AND_AFTER = G_UNICODE_BREAK_BEFORE_AND_AFTER,
  HYPHEN = G_UNICODE_BREAK_HYPHEN,
  NON_STARTER = G_UNICODE_BREAK_NON_STARTER,
  OPEN_PUNCTUATION = G_UNICODE_BREAK_OPEN_PUNCTUATION,
  CLOSE_PUNCTUATION = G_UNICODE_BREAK_CLOSE_PUNCTUATION,
  QUOTATION = G_UNICODE_BREAK_QUOTATION,
  EXCLAMATION = G_UNICODE_BREAK_EXCLAMATION,
  IDEOGRAPHIC = G_UNICODE_BREAK_IDEOGRAPHIC,
  NUMERIC = G_UNICODE_BREAK_NUMERIC,
  INFIX_SEPARATOR = G_UNICODE_BREAK_INFIX_SEPARATOR,
  SYMBOL = G_UNICODE_BREAK_SYMBOL,
  ALPHABETIC = G_UNICODE_BREAK_ALPHABETIC,
  PREFIX = G_UNICODE_BREAK_PREFIX,
  POSTFIX = G_UNICODE_BREAK_POSTFIX,
  COMPLEX_CONTEXT = G_UNICODE_BREAK_COMPLEX_CONTEXT,
  AMBIGUOUS = G_UNICODE_BREAK_AMBIGUOUS,
  UNKNOWN = G_UNICODE_BREAK_UNKNOWN,
  NEXT_LINE = G_UNICODE_BREAK_NEXT_LINE,
  WORD_JOINER = G_UNICODE_BREAK_WORD_JOINER,
  HANGUL_L_JAMO = G_UNICODE_BREAK_HANGUL_L_JAMO,
  HANGUL_V_JAMO = G_UNICODE_BREAK_HANGUL_V_JAMO,
  HANGUL_T_JAMO = G_UNICODE_BREAK_HANGUL_T_JAMO,
  HANGUL_LV_SYLLABLE = G_UNICODE_BREAK_HANGUL_LV_SYLLABLE,
  HANGUL_LVT_SYLLABLE = G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE,
  CLOSE_PARANTHESIS = G_UNICODE_BREAK_CLOSE_PARANTHESIS,
  CLOSE_PARENTHESIS = G_UNICODE_BREAK_CLOSE_PARENTHESIS,
  CONDITIONAL_JAPANESE_STARTER = G_UNICODE_BREAK_CONDITIONAL_JAPANESE_STARTER,
  HEBREW_LETTER = G_UNICODE_BREAK_HEBREW_LETTER,
  REGIONAL_INDICATOR = G_UNICODE_BREAK_REGIONAL_INDICATOR,
  EMOJI_BASE = G_UNICODE_BREAK_EMOJI_BASE,
  EMOJI_MODIFIER = G_UNICODE_BREAK_EMOJI_MODIFIER,
  ZERO_WIDTH_JOINER = G_UNICODE_BREAK_ZERO_WIDTH_JOINER,
  AKSARA = G_UNICODE_BREAK_AKSARA,
  AKSARA_PRE_BASE = G_UNICODE_BREAK_AKSARA_PRE_BASE,
  AKSARA_START = G_UNICODE_BREAK_AKSARA_START,
  VIRAMA_FINAL = G_UNICODE_BREAK_VIRAMA_FINAL,
  VIRAMA = G_UNICODE_BREAK_VIRAMA,
  UNAMBIGUOUS_HYPHEN = G_UNICODE_BREAK_UNAMBIGUOUS_HYPHEN,
}; /* enum UnicodeBreakType */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
