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
enum class TitlebarGesture : std::underlying_type<::GdkTitlebarGesture>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::TitlebarGesture>
{
  typedef Gdk::TitlebarGesture UnownedType;

  static Gdk::TitlebarGesture
  get (const ::GValue *value)
  {
    return static_cast<Gdk::TitlebarGesture> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::TitlebarGesture m)
  {
    g_value_set_enum (value, static_cast<::GdkTitlebarGesture> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::TitlebarGesture m)
  {
    set (value, m);
  }

  static Gdk::TitlebarGesture
  cast_for_create (Gdk::TitlebarGesture m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::TitlebarGesture> ()
{
  return gdk_titlebar_gesture_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::TitlebarGesture>
{
  Gdk::TitlebarGesture default_value;

  constexpr PspecTraits (Gdk::TitlebarGesture default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_titlebar_gesture_get_type (),
                              static_cast<::GdkTitlebarGesture> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class TitlebarGesture : std::underlying_type<::GdkTitlebarGesture>::type
{
  DOUBLE_CLICK_ = GDK_TITLEBAR_GESTURE_DOUBLE_CLICK,
  RIGHT_CLICK = GDK_TITLEBAR_GESTURE_RIGHT_CLICK,
  MIDDLE_CLICK = GDK_TITLEBAR_GESTURE_MIDDLE_CLICK,
}; /* enum TitlebarGesture */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
