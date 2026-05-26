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
class Display;
class Monitor;
struct Rectangle;
enum class SubpixelLayout : std::underlying_type<::GdkSubpixelLayout>::type;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Monitor> ()
{
  return gdk_monitor_get_type ();
}


namespace Gdk
{
class Monitor : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Monitor () = delete;
  Monitor (const Monitor &) = delete;
  Monitor (Monitor &&) = delete;
  Monitor &
  operator = (const Monitor &) = delete;
  Monitor &
  operator = (Monitor &&) = delete;
  ~Monitor () = delete;
public:

  const char *
  get_connector () noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    return gdk_monitor_get_connector (_peel_this);
  }

  const char *
  get_description () noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    return gdk_monitor_get_description (_peel_this);
  }

  peel_returns_nonnull
  Display *
  get_display () noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    ::GdkDisplay *_peel_return = gdk_monitor_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Display *> (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_geometry (Rectangle *geometry) noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    ::GdkRectangle *_peel_geometry = reinterpret_cast<::GdkRectangle *> (geometry);
    gdk_monitor_get_geometry (_peel_this, _peel_geometry);
  }

  int
  get_height_mm () noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    return gdk_monitor_get_height_mm (_peel_this);
  }

  const char *
  get_manufacturer () noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    return gdk_monitor_get_manufacturer (_peel_this);
  }

  const char *
  get_model () noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    return gdk_monitor_get_model (_peel_this);
  }

  int
  get_refresh_rate () noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    return gdk_monitor_get_refresh_rate (_peel_this);
  }

  double
  get_scale () noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    return gdk_monitor_get_scale (_peel_this);
  }

  int
  get_scale_factor () noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    return gdk_monitor_get_scale_factor (_peel_this);
  }

  SubpixelLayout
  get_subpixel_layout () noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    ::GdkSubpixelLayout _peel_return = gdk_monitor_get_subpixel_layout (_peel_this);
    return static_cast<SubpixelLayout> (_peel_return);
  }

  int
  get_width_mm () noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    return gdk_monitor_get_width_mm (_peel_this);
  }

  bool
  is_valid () noexcept
  {
    ::GdkMonitor *_peel_this = reinterpret_cast<::GdkMonitor *> (this);
    gboolean _peel_return = gdk_monitor_is_valid (_peel_this);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_invalidate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Monitor, void ()>::_peel_connect_by_name (this, "invalidate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_invalidate (HandlerObject *object, void (HandlerObject::*handler_method) (Monitor *), bool after = false) noexcept
  {
    return Signal<Monitor, void ()>::_peel_connect_by_name (this, "invalidate", object, handler_method, after);
  }

  static peel::Property<const char *>
  prop_connector ()
  {
    return peel::Property<const char *> { "connector" };
  }

  static peel::Property<const char *>
  prop_description ()
  {
    return peel::Property<const char *> { "description" };
  }

  static peel::Property<Display>
  prop_display ()
  {
    return peel::Property<Display> { "display" };
  }

  static peel::Property<Rectangle>
  prop_geometry ()
  {
    return peel::Property<Rectangle> { "geometry" };
  }

  static peel::Property<int>
  prop_height_mm ()
  {
    return peel::Property<int> { "height-mm" };
  }

  static peel::Property<const char *>
  prop_manufacturer ()
  {
    return peel::Property<const char *> { "manufacturer" };
  }

  static peel::Property<const char *>
  prop_model ()
  {
    return peel::Property<const char *> { "model" };
  }

  static peel::Property<int>
  prop_refresh_rate ()
  {
    return peel::Property<int> { "refresh-rate" };
  }

  static peel::Property<double>
  prop_scale ()
  {
    return peel::Property<double> { "scale" };
  }

  static peel::Property<int>
  prop_scale_factor ()
  {
    return peel::Property<int> { "scale-factor" };
  }

  static peel::Property<SubpixelLayout>
  prop_subpixel_layout ()
  {
    return peel::Property<SubpixelLayout> { "subpixel-layout" };
  }

  static peel::Property<bool>
  prop_valid ()
  {
    return peel::Property<bool> { "valid" };
  }

  static peel::Property<int>
  prop_width_mm ()
  {
    return peel::Property<int> { "width-mm" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class Monitor */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
