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
enum class LineJoin : std::underlying_type<::GskLineJoin>::type;
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::LineJoin>
{
  typedef Gsk::LineJoin UnownedType;

  static Gsk::LineJoin
  get (const ::GValue *value)
  {
    return static_cast<Gsk::LineJoin> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::LineJoin m)
  {
    g_value_set_enum (value, static_cast<::GskLineJoin> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::LineJoin m)
  {
    set (value, m);
  }

  static Gsk::LineJoin
  cast_for_create (Gsk::LineJoin m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::LineJoin> ()
{
  return gsk_line_join_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::LineJoin>
{
  Gsk::LineJoin default_value;

  constexpr PspecTraits (Gsk::LineJoin default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_line_join_get_type (),
                              static_cast<::GskLineJoin> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class LineJoin : std::underlying_type<::GskLineJoin>::type
{
  MITER = GSK_LINE_JOIN_MITER,
  ROUND = GSK_LINE_JOIN_ROUND,
  BEVEL = GSK_LINE_JOIN_BEVEL,
}; /* enum LineJoin */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
