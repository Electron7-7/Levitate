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
enum class ScrollUnit : std::underlying_type<::GdkScrollUnit>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::ScrollUnit>
{
  typedef Gdk::ScrollUnit UnownedType;

  static Gdk::ScrollUnit
  get (const ::GValue *value)
  {
    return static_cast<Gdk::ScrollUnit> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::ScrollUnit m)
  {
    g_value_set_enum (value, static_cast<::GdkScrollUnit> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::ScrollUnit m)
  {
    set (value, m);
  }

  static Gdk::ScrollUnit
  cast_for_create (Gdk::ScrollUnit m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::ScrollUnit> ()
{
  return gdk_scroll_unit_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::ScrollUnit>
{
  Gdk::ScrollUnit default_value;

  constexpr PspecTraits (Gdk::ScrollUnit default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_scroll_unit_get_type (),
                              static_cast<::GdkScrollUnit> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class ScrollUnit : std::underlying_type<::GdkScrollUnit>::type
{
  WHEEL = GDK_SCROLL_UNIT_WHEEL,
  SURFACE = GDK_SCROLL_UNIT_SURFACE,
}; /* enum ScrollUnit */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
