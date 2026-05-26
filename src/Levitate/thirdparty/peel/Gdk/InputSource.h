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
enum class InputSource : std::underlying_type<::GdkInputSource>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::InputSource>
{
  typedef Gdk::InputSource UnownedType;

  static Gdk::InputSource
  get (const ::GValue *value)
  {
    return static_cast<Gdk::InputSource> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::InputSource m)
  {
    g_value_set_enum (value, static_cast<::GdkInputSource> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::InputSource m)
  {
    set (value, m);
  }

  static Gdk::InputSource
  cast_for_create (Gdk::InputSource m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::InputSource> ()
{
  return gdk_input_source_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::InputSource>
{
  Gdk::InputSource default_value;

  constexpr PspecTraits (Gdk::InputSource default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_input_source_get_type (),
                              static_cast<::GdkInputSource> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class InputSource : std::underlying_type<::GdkInputSource>::type
{
  MOUSE = GDK_SOURCE_MOUSE,
  PEN = GDK_SOURCE_PEN,
  KEYBOARD = GDK_SOURCE_KEYBOARD,
  TOUCHSCREEN = GDK_SOURCE_TOUCHSCREEN,
  TOUCHPAD = GDK_SOURCE_TOUCHPAD,
  TRACKPOINT = GDK_SOURCE_TRACKPOINT,
  TABLET_PAD = GDK_SOURCE_TABLET_PAD,
}; /* enum InputSource */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
