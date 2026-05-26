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
enum class Alignment : std::underlying_type<::PangoAlignment>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::Alignment>
{
  typedef Pango::Alignment UnownedType;

  static Pango::Alignment
  get (const ::GValue *value)
  {
    return static_cast<Pango::Alignment> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::Alignment m)
  {
    g_value_set_enum (value, static_cast<::PangoAlignment> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::Alignment m)
  {
    set (value, m);
  }

  static Pango::Alignment
  cast_for_create (Pango::Alignment m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::Alignment> ()
{
  return pango_alignment_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::Alignment>
{
  Pango::Alignment default_value;

  constexpr PspecTraits (Pango::Alignment default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_alignment_get_type (),
                              static_cast<::PangoAlignment> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class Alignment : std::underlying_type<::PangoAlignment>::type
{
  LEFT = PANGO_ALIGN_LEFT,
  CENTER = PANGO_ALIGN_CENTER,
  RIGHT = PANGO_ALIGN_RIGHT,
}; /* enum Alignment */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
