#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gsk/gsk.h>

peel_begin_header

namespace peel
{
namespace Gsk
{
enum class FillRule : std::underlying_type<::GskFillRule>::type;
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::FillRule>
{
  typedef Gsk::FillRule UnownedType;

  static Gsk::FillRule
  get (const ::GValue *value)
  {
    return static_cast<Gsk::FillRule> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::FillRule m)
  {
    g_value_set_enum (value, static_cast<::GskFillRule> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::FillRule m)
  {
    set (value, m);
  }

  static Gsk::FillRule
  cast_for_create (Gsk::FillRule m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::FillRule> ()
{
  return gsk_fill_rule_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::FillRule>
{
  Gsk::FillRule default_value;

  constexpr PspecTraits (Gsk::FillRule default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_fill_rule_get_type (),
                              static_cast<::GskFillRule> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class FillRule : std::underlying_type<::GskFillRule>::type
{
  WINDING_ = GSK_FILL_RULE_WINDING,
  EVEN_ODD = GSK_FILL_RULE_EVEN_ODD,
}; /* enum FillRule */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
