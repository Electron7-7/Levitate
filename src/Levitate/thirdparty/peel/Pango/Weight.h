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
enum class Weight : std::underlying_type<::PangoWeight>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::Weight>
{
  typedef Pango::Weight UnownedType;

  static Pango::Weight
  get (const ::GValue *value)
  {
    return static_cast<Pango::Weight> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::Weight m)
  {
    g_value_set_enum (value, static_cast<::PangoWeight> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::Weight m)
  {
    set (value, m);
  }

  static Pango::Weight
  cast_for_create (Pango::Weight m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::Weight> ()
{
  return pango_weight_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::Weight>
{
  Pango::Weight default_value;

  constexpr PspecTraits (Pango::Weight default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_weight_get_type (),
                              static_cast<::PangoWeight> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class Weight : std::underlying_type<::PangoWeight>::type
{
  THIN = PANGO_WEIGHT_THIN,
  ULTRALIGHT = PANGO_WEIGHT_ULTRALIGHT,
  LIGHT = PANGO_WEIGHT_LIGHT,
  SEMILIGHT = PANGO_WEIGHT_SEMILIGHT,
  BOOK = PANGO_WEIGHT_BOOK,
  NORMAL = PANGO_WEIGHT_NORMAL,
  MEDIUM = PANGO_WEIGHT_MEDIUM,
  SEMIBOLD = PANGO_WEIGHT_SEMIBOLD,
  BOLD = PANGO_WEIGHT_BOLD,
  ULTRABOLD = PANGO_WEIGHT_ULTRABOLD,
  HEAVY = PANGO_WEIGHT_HEAVY,
  ULTRAHEAVY = PANGO_WEIGHT_ULTRAHEAVY,
}; /* enum Weight */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
