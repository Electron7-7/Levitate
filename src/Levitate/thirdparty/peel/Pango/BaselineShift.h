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
enum class BaselineShift : std::underlying_type<::PangoBaselineShift>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::BaselineShift>
{
  typedef Pango::BaselineShift UnownedType;

  static Pango::BaselineShift
  get (const ::GValue *value)
  {
    return static_cast<Pango::BaselineShift> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::BaselineShift m)
  {
    g_value_set_enum (value, static_cast<::PangoBaselineShift> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::BaselineShift m)
  {
    set (value, m);
  }

  static Pango::BaselineShift
  cast_for_create (Pango::BaselineShift m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::BaselineShift> ()
{
  return pango_baseline_shift_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::BaselineShift>
{
  Pango::BaselineShift default_value;

  constexpr PspecTraits (Pango::BaselineShift default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_baseline_shift_get_type (),
                              static_cast<::PangoBaselineShift> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class BaselineShift : std::underlying_type<::PangoBaselineShift>::type
{
  NONE = PANGO_BASELINE_SHIFT_NONE,
  SUPERSCRIPT = PANGO_BASELINE_SHIFT_SUPERSCRIPT,
  SUBSCRIPT = PANGO_BASELINE_SHIFT_SUBSCRIPT,
}; /* enum BaselineShift */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
