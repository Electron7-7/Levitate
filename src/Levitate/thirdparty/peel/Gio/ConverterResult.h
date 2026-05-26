#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/Gio/Converter.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::Converter::Result>
{
  typedef Gio::Converter::Result UnownedType;

  static Gio::Converter::Result
  get (const ::GValue *value)
  {
    return static_cast<Gio::Converter::Result> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::Converter::Result m)
  {
    g_value_set_enum (value, static_cast<::GConverterResult> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Converter::Result m)
  {
    set (value, m);
  }

  static Gio::Converter::Result
  cast_for_create (Gio::Converter::Result m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Converter::Result> ()
{
  return g_converter_result_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Converter::Result>
{
  Gio::Converter::Result default_value;

  constexpr PspecTraits (Gio::Converter::Result default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_converter_result_get_type (),
                              static_cast<::GConverterResult> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class Converter::Result : std::underlying_type<::GConverterResult>::type
{
  ERROR_ = G_CONVERTER_ERROR,
  CONVERTED = G_CONVERTER_CONVERTED,
  FINISHED = G_CONVERTER_FINISHED,
  FLUSHED = G_CONVERTER_FLUSHED,
}; /* enum Converter::Result */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
