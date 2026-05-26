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
enum class ColorChannel : std::underlying_type<::GdkColorChannel>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::ColorChannel>
{
  typedef Gdk::ColorChannel UnownedType;

  static Gdk::ColorChannel
  get (const ::GValue *value)
  {
    return static_cast<Gdk::ColorChannel> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::ColorChannel m)
  {
    g_value_set_enum (value, static_cast<::GdkColorChannel> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::ColorChannel m)
  {
    set (value, m);
  }

  static Gdk::ColorChannel
  cast_for_create (Gdk::ColorChannel m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::ColorChannel> ()
{
  return gdk_color_channel_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::ColorChannel>
{
  Gdk::ColorChannel default_value;

  constexpr PspecTraits (Gdk::ColorChannel default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_color_channel_get_type (),
                              static_cast<::GdkColorChannel> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class ColorChannel : std::underlying_type<::GdkColorChannel>::type
{
  RED = GDK_COLOR_CHANNEL_RED,
  GREEN = GDK_COLOR_CHANNEL_GREEN,
  BLUE = GDK_COLOR_CHANNEL_BLUE,
  ALPHA = GDK_COLOR_CHANNEL_ALPHA,
}; /* enum ColorChannel */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
