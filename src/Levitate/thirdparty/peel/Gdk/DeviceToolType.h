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
#include <peel/Gdk/DeviceTool.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::DeviceTool::Type>
{
  typedef Gdk::DeviceTool::Type UnownedType;

  static Gdk::DeviceTool::Type
  get (const ::GValue *value)
  {
    return static_cast<Gdk::DeviceTool::Type> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::DeviceTool::Type m)
  {
    g_value_set_enum (value, static_cast<::GdkDeviceToolType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::DeviceTool::Type m)
  {
    set (value, m);
  }

  static Gdk::DeviceTool::Type
  cast_for_create (Gdk::DeviceTool::Type m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::DeviceTool::Type> ()
{
  return gdk_device_tool_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::DeviceTool::Type>
{
  Gdk::DeviceTool::Type default_value;

  constexpr PspecTraits (Gdk::DeviceTool::Type default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_device_tool_type_get_type (),
                              static_cast<::GdkDeviceToolType> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class DeviceTool::Type : std::underlying_type<::GdkDeviceToolType>::type
{
  UNKNOWN = GDK_DEVICE_TOOL_TYPE_UNKNOWN,
  PEN = GDK_DEVICE_TOOL_TYPE_PEN,
  ERASER = GDK_DEVICE_TOOL_TYPE_ERASER,
  BRUSH = GDK_DEVICE_TOOL_TYPE_BRUSH,
  PENCIL = GDK_DEVICE_TOOL_TYPE_PENCIL,
  AIRBRUSH = GDK_DEVICE_TOOL_TYPE_AIRBRUSH,
  MOUSE = GDK_DEVICE_TOOL_TYPE_MOUSE,
  LENS = GDK_DEVICE_TOOL_TYPE_LENS,
}; /* enum DeviceTool::Type */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
