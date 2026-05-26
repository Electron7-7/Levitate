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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class AxisFlags : std::underlying_type<::GdkAxisFlags>::type;
class DeviceTool;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::DeviceTool> ()
{
  return gdk_device_tool_get_type ();
}


namespace Gdk
{
class DeviceTool : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DeviceTool () = delete;
  DeviceTool (const DeviceTool &) = delete;
  DeviceTool (DeviceTool &&) = delete;
  DeviceTool &
  operator = (const DeviceTool &) = delete;
  DeviceTool &
  operator = (DeviceTool &&) = delete;
  ~DeviceTool () = delete;
public:
  enum class Type : std::underlying_type<::GdkDeviceToolType>::type;

  AxisFlags
  get_axes () noexcept
  {
    ::GdkDeviceTool *_peel_this = reinterpret_cast<::GdkDeviceTool *> (this);
    ::GdkAxisFlags _peel_return = gdk_device_tool_get_axes (_peel_this);
    return static_cast<AxisFlags> (_peel_return);
  }

  uint64_t
  get_hardware_id () noexcept
  {
    ::GdkDeviceTool *_peel_this = reinterpret_cast<::GdkDeviceTool *> (this);
    return gdk_device_tool_get_hardware_id (_peel_this);
  }

  uint64_t
  get_serial () noexcept
  {
    ::GdkDeviceTool *_peel_this = reinterpret_cast<::GdkDeviceTool *> (this);
    return gdk_device_tool_get_serial (_peel_this);
  }

  DeviceTool::Type
  get_tool_type () noexcept
  {
    ::GdkDeviceTool *_peel_this = reinterpret_cast<::GdkDeviceTool *> (this);
    ::GdkDeviceToolType _peel_return = gdk_device_tool_get_tool_type (_peel_this);
    return static_cast<DeviceTool::Type> (_peel_return);
  }

  static peel::Property<AxisFlags>
  prop_axes ()
  {
    return peel::Property<AxisFlags> { "axes" };
  }

  static peel::Property<uint64_t>
  prop_hardware_id ()
  {
    return peel::Property<uint64_t> { "hardware-id" };
  }

  static peel::Property<uint64_t>
  prop_serial ()
  {
    return peel::Property<uint64_t> { "serial" };
  }

  static peel::Property<DeviceTool::Type>
  prop_tool_type ()
  {
    return peel::Property<DeviceTool::Type> { "tool-type" };
  }
}; /* class DeviceTool */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
