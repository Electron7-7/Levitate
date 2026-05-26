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
enum class CrossingMode : std::underlying_type<::GdkCrossingMode>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::CrossingMode>
{
  typedef Gdk::CrossingMode UnownedType;

  static Gdk::CrossingMode
  get (const ::GValue *value)
  {
    return static_cast<Gdk::CrossingMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::CrossingMode m)
  {
    g_value_set_enum (value, static_cast<::GdkCrossingMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::CrossingMode m)
  {
    set (value, m);
  }

  static Gdk::CrossingMode
  cast_for_create (Gdk::CrossingMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::CrossingMode> ()
{
  return gdk_crossing_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::CrossingMode>
{
  Gdk::CrossingMode default_value;

  constexpr PspecTraits (Gdk::CrossingMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_crossing_mode_get_type (),
                              static_cast<::GdkCrossingMode> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class CrossingMode : std::underlying_type<::GdkCrossingMode>::type
{
  NORMAL = GDK_CROSSING_NORMAL,
  GRAB = GDK_CROSSING_GRAB,
  UNGRAB = GDK_CROSSING_UNGRAB,
  GTK_GRAB = GDK_CROSSING_GTK_GRAB,
  GTK_UNGRAB = GDK_CROSSING_GTK_UNGRAB,
  STATE_CHANGED = GDK_CROSSING_STATE_CHANGED,
  TOUCH_BEGIN = GDK_CROSSING_TOUCH_BEGIN,
  TOUCH_END = GDK_CROSSING_TOUCH_END,
  DEVICE_SWITCH = GDK_CROSSING_DEVICE_SWITCH,
}; /* enum CrossingMode */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
