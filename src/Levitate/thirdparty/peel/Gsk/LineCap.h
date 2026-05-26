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
enum class LineCap : std::underlying_type<::GskLineCap>::type;
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::LineCap>
{
  typedef Gsk::LineCap UnownedType;

  static Gsk::LineCap
  get (const ::GValue *value)
  {
    return static_cast<Gsk::LineCap> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::LineCap m)
  {
    g_value_set_enum (value, static_cast<::GskLineCap> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::LineCap m)
  {
    set (value, m);
  }

  static Gsk::LineCap
  cast_for_create (Gsk::LineCap m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::LineCap> ()
{
  return gsk_line_cap_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::LineCap>
{
  Gsk::LineCap default_value;

  constexpr PspecTraits (Gsk::LineCap default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_line_cap_get_type (),
                              static_cast<::GskLineCap> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class LineCap : std::underlying_type<::GskLineCap>::type
{
  BUTT = GSK_LINE_CAP_BUTT,
  ROUND = GSK_LINE_CAP_ROUND,
  SQUARE = GSK_LINE_CAP_SQUARE,
}; /* enum LineCap */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
