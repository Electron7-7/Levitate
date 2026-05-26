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
#include <gdk/gdk.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class CicpRange : std::underlying_type<::GdkCicpRange>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::CicpRange>
{
  typedef Gdk::CicpRange UnownedType;

  static Gdk::CicpRange
  get (const ::GValue *value)
  {
    return static_cast<Gdk::CicpRange> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::CicpRange m)
  {
    g_value_set_enum (value, static_cast<::GdkCicpRange> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::CicpRange m)
  {
    set (value, m);
  }

  static Gdk::CicpRange
  cast_for_create (Gdk::CicpRange m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::CicpRange> ()
{
  return gdk_cicp_range_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::CicpRange>
{
  Gdk::CicpRange default_value;

  constexpr PspecTraits (Gdk::CicpRange default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_cicp_range_get_type (),
                              static_cast<::GdkCicpRange> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class CicpRange : std::underlying_type<::GdkCicpRange>::type
{
  NARROW = GDK_CICP_RANGE_NARROW,
  FULL = GDK_CICP_RANGE_FULL,
}; /* enum CicpRange */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
