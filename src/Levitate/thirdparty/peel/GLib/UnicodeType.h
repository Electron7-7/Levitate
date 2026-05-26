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
enum class UnicodeType : std::underlying_type<::GUnicodeType>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::UnicodeType>
{
  typedef GLib::UnicodeType UnownedType;

  static GLib::UnicodeType
  get (const ::GValue *value)
  {
    return static_cast<GLib::UnicodeType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::UnicodeType m)
  {
    g_value_set_enum (value, static_cast<::GUnicodeType> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::UnicodeType m)
  {
    set (value, m);
  }

  static GLib::UnicodeType
  cast_for_create (GLib::UnicodeType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<GLib::UnicodeType> ()
{
  return g_unicode_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<GLib::UnicodeType>
{
  GLib::UnicodeType default_value;

  constexpr PspecTraits (GLib::UnicodeType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_unicode_type_get_type (),
                              static_cast<::GUnicodeType> (default_value),
                              basics.flags);
  }
};


namespace GLib
{
enum class UnicodeType : std::underlying_type<::GUnicodeType>::type
{
  CONTROL = G_UNICODE_CONTROL,
  FORMAT = G_UNICODE_FORMAT,
  UNASSIGNED = G_UNICODE_UNASSIGNED,
  PRIVATE_USE = G_UNICODE_PRIVATE_USE,
  SURROGATE = G_UNICODE_SURROGATE,
  LOWERCASE_LETTER = G_UNICODE_LOWERCASE_LETTER,
  MODIFIER_LETTER = G_UNICODE_MODIFIER_LETTER,
  OTHER_LETTER = G_UNICODE_OTHER_LETTER,
  TITLECASE_LETTER = G_UNICODE_TITLECASE_LETTER,
  UPPERCASE_LETTER = G_UNICODE_UPPERCASE_LETTER,
  SPACING_MARK = G_UNICODE_SPACING_MARK,
  ENCLOSING_MARK = G_UNICODE_ENCLOSING_MARK,
  NON_SPACING_MARK = G_UNICODE_NON_SPACING_MARK,
  DECIMAL_NUMBER = G_UNICODE_DECIMAL_NUMBER,
  LETTER_NUMBER = G_UNICODE_LETTER_NUMBER,
  OTHER_NUMBER = G_UNICODE_OTHER_NUMBER,
  CONNECT_PUNCTUATION = G_UNICODE_CONNECT_PUNCTUATION,
  DASH_PUNCTUATION = G_UNICODE_DASH_PUNCTUATION,
  CLOSE_PUNCTUATION = G_UNICODE_CLOSE_PUNCTUATION,
  FINAL_PUNCTUATION = G_UNICODE_FINAL_PUNCTUATION,
  INITIAL_PUNCTUATION = G_UNICODE_INITIAL_PUNCTUATION,
  OTHER_PUNCTUATION = G_UNICODE_OTHER_PUNCTUATION,
  OPEN_PUNCTUATION = G_UNICODE_OPEN_PUNCTUATION,
  CURRENCY_SYMBOL = G_UNICODE_CURRENCY_SYMBOL,
  MODIFIER_SYMBOL = G_UNICODE_MODIFIER_SYMBOL,
  MATH_SYMBOL = G_UNICODE_MATH_SYMBOL,
  OTHER_SYMBOL = G_UNICODE_OTHER_SYMBOL,
  LINE_SEPARATOR = G_UNICODE_LINE_SEPARATOR,
  PARAGRAPH_SEPARATOR = G_UNICODE_PARAGRAPH_SEPARATOR,
  SPACE_SEPARATOR = G_UNICODE_SPACE_SEPARATOR,
}; /* enum UnicodeType */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
