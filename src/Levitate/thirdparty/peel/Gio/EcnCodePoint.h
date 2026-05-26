#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>

peel_begin_header

namespace peel
{
namespace Gio
{
enum class EcnCodePoint : std::underlying_type<::GEcnCodePoint>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::EcnCodePoint>
{
  typedef Gio::EcnCodePoint UnownedType;

  static Gio::EcnCodePoint
  get (const ::GValue *value)
  {
    return static_cast<Gio::EcnCodePoint> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::EcnCodePoint m)
  {
    g_value_set_enum (value, static_cast<::GEcnCodePoint> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::EcnCodePoint m)
  {
    set (value, m);
  }

  static Gio::EcnCodePoint
  cast_for_create (Gio::EcnCodePoint m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::EcnCodePoint> ()
{
  return g_ecn_code_point_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::EcnCodePoint>
{
  Gio::EcnCodePoint default_value;

  constexpr PspecTraits (Gio::EcnCodePoint default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_ecn_code_point_get_type (),
                              static_cast<::GEcnCodePoint> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class EcnCodePoint : std::underlying_type<::GEcnCodePoint>::type
{
  NO_ECN = G_ECN_NO_ECN,
  ECT_1 = G_ECN_ECT_1,
  ECT_0 = G_ECN_ECT_0,
  ECT_CE = G_ECN_ECT_CE,
}; /* enum EcnCodePoint */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
