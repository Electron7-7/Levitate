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
enum class Underline : std::underlying_type<::PangoUnderline>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::Underline>
{
  typedef Pango::Underline UnownedType;

  static Pango::Underline
  get (const ::GValue *value)
  {
    return static_cast<Pango::Underline> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::Underline m)
  {
    g_value_set_enum (value, static_cast<::PangoUnderline> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::Underline m)
  {
    set (value, m);
  }

  static Pango::Underline
  cast_for_create (Pango::Underline m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::Underline> ()
{
  return pango_underline_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::Underline>
{
  Pango::Underline default_value;

  constexpr PspecTraits (Pango::Underline default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_underline_get_type (),
                              static_cast<::PangoUnderline> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class Underline : std::underlying_type<::PangoUnderline>::type
{
  NONE = PANGO_UNDERLINE_NONE,
  SINGLE = PANGO_UNDERLINE_SINGLE,
  DOUBLE = PANGO_UNDERLINE_DOUBLE,
  LOW = PANGO_UNDERLINE_LOW,
  ERROR_ = PANGO_UNDERLINE_ERROR,
  SINGLE_LINE = PANGO_UNDERLINE_SINGLE_LINE,
  DOUBLE_LINE = PANGO_UNDERLINE_DOUBLE_LINE,
  ERROR_LINE = PANGO_UNDERLINE_ERROR_LINE,
}; /* enum Underline */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
