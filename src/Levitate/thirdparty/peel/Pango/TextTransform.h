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
enum class TextTransform : std::underlying_type<::PangoTextTransform>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::TextTransform>
{
  typedef Pango::TextTransform UnownedType;

  static Pango::TextTransform
  get (const ::GValue *value)
  {
    return static_cast<Pango::TextTransform> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::TextTransform m)
  {
    g_value_set_enum (value, static_cast<::PangoTextTransform> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::TextTransform m)
  {
    set (value, m);
  }

  static Pango::TextTransform
  cast_for_create (Pango::TextTransform m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::TextTransform> ()
{
  return pango_text_transform_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::TextTransform>
{
  Pango::TextTransform default_value;

  constexpr PspecTraits (Pango::TextTransform default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_text_transform_get_type (),
                              static_cast<::PangoTextTransform> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class TextTransform : std::underlying_type<::PangoTextTransform>::type
{
  NONE = PANGO_TEXT_TRANSFORM_NONE,
  LOWERCASE = PANGO_TEXT_TRANSFORM_LOWERCASE,
  UPPERCASE = PANGO_TEXT_TRANSFORM_UPPERCASE,
  CAPITALIZE = PANGO_TEXT_TRANSFORM_CAPITALIZE,
}; /* enum TextTransform */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
