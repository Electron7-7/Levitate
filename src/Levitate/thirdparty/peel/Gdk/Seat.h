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
#include <peel/GLib/List.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Device;
class DeviceTool;
class Display;
class Seat;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Seat> ()
{
  return gdk_seat_get_type ();
}


namespace Gdk
{
class Seat : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Seat () = delete;
  Seat (const Seat &) = delete;
  Seat (Seat &&) = delete;
  Seat &
  operator = (const Seat &) = delete;
  Seat &
  operator = (Seat &&) = delete;
protected:
  ~Seat () = default;
public:
  enum class Capabilities : std::underlying_type<::GdkSeatCapabilities>::type;

  Seat::Capabilities
  get_capabilities () noexcept
  {
    ::GdkSeat *_peel_this = reinterpret_cast<::GdkSeat *> (this);
    ::GdkSeatCapabilities _peel_return = gdk_seat_get_capabilities (_peel_this);
    return static_cast<Seat::Capabilities> (_peel_return);
  }

  GLib::List<Device *>
  get_devices (Seat::Capabilities capabilities) noexcept
  {
    ::GdkSeat *_peel_this = reinterpret_cast<::GdkSeat *> (this);
    ::GdkSeatCapabilities _peel_capabilities = static_cast<::GdkSeatCapabilities> (capabilities);
    GList *_peel_return = gdk_seat_get_devices (_peel_this, _peel_capabilities);
    return GLib::List<Device *>::adopt_list (_peel_return);
  }

  peel_returns_nonnull
  Display *
  get_display () noexcept
  {
    ::GdkSeat *_peel_this = reinterpret_cast<::GdkSeat *> (this);
    ::GdkDisplay *_peel_return = gdk_seat_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Display *> (_peel_return);
  }

  Device *
  get_keyboard () noexcept
  {
    ::GdkSeat *_peel_this = reinterpret_cast<::GdkSeat *> (this);
    ::GdkDevice *_peel_return = gdk_seat_get_keyboard (_peel_this);
    return reinterpret_cast<Device *> (_peel_return);
  }

  Device *
  get_pointer () noexcept
  {
    ::GdkSeat *_peel_this = reinterpret_cast<::GdkSeat *> (this);
    ::GdkDevice *_peel_return = gdk_seat_get_pointer (_peel_this);
    return reinterpret_cast<Device *> (_peel_return);
  }

  GLib::List<DeviceTool *>
  get_tools () noexcept
  {
    ::GdkSeat *_peel_this = reinterpret_cast<::GdkSeat *> (this);
    GList *_peel_return = gdk_seat_get_tools (_peel_this);
    return GLib::List<DeviceTool *>::adopt_list (_peel_return);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_device_added (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Seat, void (Device *)>::_peel_connect_by_name (this, "device-added", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_device_added (HandlerObject *object, void (HandlerObject::*handler_method) (Seat *, Device *), bool after = false) noexcept
  {
    return Signal<Seat, void (Device *)>::_peel_connect_by_name (this, "device-added", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_device_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Seat, void (Device *)>::_peel_connect_by_name (this, "device-removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_device_removed (HandlerObject *object, void (HandlerObject::*handler_method) (Seat *, Device *), bool after = false) noexcept
  {
    return Signal<Seat, void (Device *)>::_peel_connect_by_name (this, "device-removed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_tool_added (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Seat, void (DeviceTool *)>::_peel_connect_by_name (this, "tool-added", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_tool_added (HandlerObject *object, void (HandlerObject::*handler_method) (Seat *, DeviceTool *), bool after = false) noexcept
  {
    return Signal<Seat, void (DeviceTool *)>::_peel_connect_by_name (this, "tool-added", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_tool_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Seat, void (DeviceTool *)>::_peel_connect_by_name (this, "tool-removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_tool_removed (HandlerObject *object, void (HandlerObject::*handler_method) (Seat *, DeviceTool *), bool after = false) noexcept
  {
    return Signal<Seat, void (DeviceTool *)>::_peel_connect_by_name (this, "tool-removed", object, handler_method, after);
  }

  static peel::Property<Display>
  prop_display ()
  {
    return peel::Property<Display> { "display" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Seat> ());
    _peel_class->finalize (obj);
  }
}; /* class Seat */

static_assert (sizeof (Seat) == sizeof (::GdkSeat),
               "Seat size mismatch");
static_assert (alignof (Seat) == alignof (::GdkSeat),
               "Seat align mismatch");

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/Device.h>
#include <peel/Gdk/DeviceTool.h>
