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
enum class CoverageLevel : std::underlying_type<::PangoCoverageLevel>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::CoverageLevel>
{
  typedef Pango::CoverageLevel UnownedType;

  static Pango::CoverageLevel
  get (const ::GValue *value)
  {
    return static_cast<Pango::CoverageLevel> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::CoverageLevel m)
  {
    g_value_set_enum (value, static_cast<::PangoCoverageLevel> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::CoverageLevel m)
  {
    set (value, m);
  }

  static Pango::CoverageLevel
  cast_for_create (Pango::CoverageLevel m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::CoverageLevel> ()
{
  return pango_coverage_level_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::CoverageLevel>
{
  Pango::CoverageLevel default_value;

  constexpr PspecTraits (Pango::CoverageLevel default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_coverage_level_get_type (),
                              static_cast<::PangoCoverageLevel> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class CoverageLevel : std::underlying_type<::PangoCoverageLevel>::type
{
  NONE = PANGO_COVERAGE_NONE,
  FALLBACK = PANGO_COVERAGE_FALLBACK,
  APPROXIMATE = PANGO_COVERAGE_APPROXIMATE,
  EXACT = PANGO_COVERAGE_EXACT,
}; /* enum CoverageLevel */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
