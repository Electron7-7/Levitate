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
enum class FullscreenMode : std::underlying_type<::GdkFullscreenMode>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::FullscreenMode>
{
  typedef Gdk::FullscreenMode UnownedType;

  static Gdk::FullscreenMode
  get (const ::GValue *value)
  {
    return static_cast<Gdk::FullscreenMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::FullscreenMode m)
  {
    g_value_set_enum (value, static_cast<::GdkFullscreenMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::FullscreenMode m)
  {
    set (value, m);
  }

  static Gdk::FullscreenMode
  cast_for_create (Gdk::FullscreenMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::FullscreenMode> ()
{
  return gdk_fullscreen_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::FullscreenMode>
{
  Gdk::FullscreenMode default_value;

  constexpr PspecTraits (Gdk::FullscreenMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_fullscreen_mode_get_type (),
                              static_cast<::GdkFullscreenMode> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class FullscreenMode : std::underlying_type<::GdkFullscreenMode>::type
{
  CURRENT_MONITOR = GDK_FULLSCREEN_ON_CURRENT_MONITOR,
  ALL_MONITORS = GDK_FULLSCREEN_ON_ALL_MONITORS,
}; /* enum FullscreenMode */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
