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
enum class Variant : std::underlying_type<::PangoVariant>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::Variant>
{
  typedef Pango::Variant UnownedType;

  static Pango::Variant
  get (const ::GValue *value)
  {
    return static_cast<Pango::Variant> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::Variant m)
  {
    g_value_set_enum (value, static_cast<::PangoVariant> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::Variant m)
  {
    set (value, m);
  }

  static Pango::Variant
  cast_for_create (Pango::Variant m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::Variant> ()
{
  return pango_variant_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::Variant>
{
  Pango::Variant default_value;

  constexpr PspecTraits (Pango::Variant default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_variant_get_type (),
                              static_cast<::PangoVariant> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class Variant : std::underlying_type<::PangoVariant>::type
{
  NORMAL = PANGO_VARIANT_NORMAL,
  SMALL_CAPS = PANGO_VARIANT_SMALL_CAPS,
  ALL_SMALL_CAPS = PANGO_VARIANT_ALL_SMALL_CAPS,
  PETITE_CAPS = PANGO_VARIANT_PETITE_CAPS,
  ALL_PETITE_CAPS = PANGO_VARIANT_ALL_PETITE_CAPS,
  UNICASE = PANGO_VARIANT_UNICASE,
  TITLE_CAPS = PANGO_VARIANT_TITLE_CAPS,
}; /* enum Variant */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
