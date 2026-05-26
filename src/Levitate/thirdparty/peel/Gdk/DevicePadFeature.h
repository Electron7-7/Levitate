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
#include <peel/Gdk/DevicePad.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::DevicePad::Feature>
{
  typedef Gdk::DevicePad::Feature UnownedType;

  static Gdk::DevicePad::Feature
  get (const ::GValue *value)
  {
    return static_cast<Gdk::DevicePad::Feature> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::DevicePad::Feature m)
  {
    g_value_set_enum (value, static_cast<::GdkDevicePadFeature> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::DevicePad::Feature m)
  {
    set (value, m);
  }

  static Gdk::DevicePad::Feature
  cast_for_create (Gdk::DevicePad::Feature m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::DevicePad::Feature> ()
{
  return gdk_device_pad_feature_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::DevicePad::Feature>
{
  Gdk::DevicePad::Feature default_value;

  constexpr PspecTraits (Gdk::DevicePad::Feature default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_device_pad_feature_get_type (),
                              static_cast<::GdkDevicePadFeature> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class DevicePad::Feature : std::underlying_type<::GdkDevicePadFeature>::type
{
  BUTTON = GDK_DEVICE_PAD_FEATURE_BUTTON,
  RING = GDK_DEVICE_PAD_FEATURE_RING,
  STRIP = GDK_DEVICE_PAD_FEATURE_STRIP,
}; /* enum DevicePad::Feature */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
