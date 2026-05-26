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
enum class WrapMode : std::underlying_type<::PangoWrapMode>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::WrapMode>
{
  typedef Pango::WrapMode UnownedType;

  static Pango::WrapMode
  get (const ::GValue *value)
  {
    return static_cast<Pango::WrapMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::WrapMode m)
  {
    g_value_set_enum (value, static_cast<::PangoWrapMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::WrapMode m)
  {
    set (value, m);
  }

  static Pango::WrapMode
  cast_for_create (Pango::WrapMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::WrapMode> ()
{
  return pango_wrap_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::WrapMode>
{
  Pango::WrapMode default_value;

  constexpr PspecTraits (Pango::WrapMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_wrap_mode_get_type (),
                              static_cast<::PangoWrapMode> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class WrapMode : std::underlying_type<::PangoWrapMode>::type
{
  WORD = PANGO_WRAP_WORD,
  CHAR = PANGO_WRAP_CHAR,
  WORD_CHAR = PANGO_WRAP_WORD_CHAR,
  NONE = PANGO_WRAP_NONE,
}; /* enum WrapMode */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
