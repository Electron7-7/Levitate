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
enum class ScrollRelativeDirection : std::underlying_type<::GdkScrollRelativeDirection>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::ScrollRelativeDirection>
{
  typedef Gdk::ScrollRelativeDirection UnownedType;

  static Gdk::ScrollRelativeDirection
  get (const ::GValue *value)
  {
    return static_cast<Gdk::ScrollRelativeDirection> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::ScrollRelativeDirection m)
  {
    g_value_set_enum (value, static_cast<::GdkScrollRelativeDirection> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::ScrollRelativeDirection m)
  {
    set (value, m);
  }

  static Gdk::ScrollRelativeDirection
  cast_for_create (Gdk::ScrollRelativeDirection m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::ScrollRelativeDirection> ()
{
  return gdk_scroll_relative_direction_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::ScrollRelativeDirection>
{
  Gdk::ScrollRelativeDirection default_value;

  constexpr PspecTraits (Gdk::ScrollRelativeDirection default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_scroll_relative_direction_get_type (),
                              static_cast<::GdkScrollRelativeDirection> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class ScrollRelativeDirection : std::underlying_type<::GdkScrollRelativeDirection>::type
{
  IDENTICAL = GDK_SCROLL_RELATIVE_DIRECTION_IDENTICAL,
  INVERTED = GDK_SCROLL_RELATIVE_DIRECTION_INVERTED,
  UNKNOWN = GDK_SCROLL_RELATIVE_DIRECTION_UNKNOWN,
}; /* enum ScrollRelativeDirection */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
