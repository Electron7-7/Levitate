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
enum class ScrollDirection : std::underlying_type<::GdkScrollDirection>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::ScrollDirection>
{
  typedef Gdk::ScrollDirection UnownedType;

  static Gdk::ScrollDirection
  get (const ::GValue *value)
  {
    return static_cast<Gdk::ScrollDirection> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::ScrollDirection m)
  {
    g_value_set_enum (value, static_cast<::GdkScrollDirection> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::ScrollDirection m)
  {
    set (value, m);
  }

  static Gdk::ScrollDirection
  cast_for_create (Gdk::ScrollDirection m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::ScrollDirection> ()
{
  return gdk_scroll_direction_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::ScrollDirection>
{
  Gdk::ScrollDirection default_value;

  constexpr PspecTraits (Gdk::ScrollDirection default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_scroll_direction_get_type (),
                              static_cast<::GdkScrollDirection> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class ScrollDirection : std::underlying_type<::GdkScrollDirection>::type
{
  UP = GDK_SCROLL_UP,
  DOWN = GDK_SCROLL_DOWN,
  LEFT = GDK_SCROLL_LEFT,
  RIGHT = GDK_SCROLL_RIGHT,
  SMOOTH = GDK_SCROLL_SMOOTH,
}; /* enum ScrollDirection */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
