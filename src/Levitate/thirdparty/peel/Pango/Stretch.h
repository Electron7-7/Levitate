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
enum class Stretch : std::underlying_type<::PangoStretch>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::Stretch>
{
  typedef Pango::Stretch UnownedType;

  static Pango::Stretch
  get (const ::GValue *value)
  {
    return static_cast<Pango::Stretch> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::Stretch m)
  {
    g_value_set_enum (value, static_cast<::PangoStretch> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::Stretch m)
  {
    set (value, m);
  }

  static Pango::Stretch
  cast_for_create (Pango::Stretch m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::Stretch> ()
{
  return pango_stretch_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::Stretch>
{
  Pango::Stretch default_value;

  constexpr PspecTraits (Pango::Stretch default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_stretch_get_type (),
                              static_cast<::PangoStretch> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class Stretch : std::underlying_type<::PangoStretch>::type
{
  ULTRA_CONDENSED = PANGO_STRETCH_ULTRA_CONDENSED,
  EXTRA_CONDENSED = PANGO_STRETCH_EXTRA_CONDENSED,
  CONDENSED = PANGO_STRETCH_CONDENSED,
  SEMI_CONDENSED = PANGO_STRETCH_SEMI_CONDENSED,
  NORMAL = PANGO_STRETCH_NORMAL,
  SEMI_EXPANDED = PANGO_STRETCH_SEMI_EXPANDED,
  EXPANDED = PANGO_STRETCH_EXPANDED,
  EXTRA_EXPANDED = PANGO_STRETCH_EXTRA_EXPANDED,
  ULTRA_EXPANDED = PANGO_STRETCH_ULTRA_EXPANDED,
}; /* enum Stretch */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
