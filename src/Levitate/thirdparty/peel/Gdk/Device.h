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
class Device;
class DeviceTool;
class Display;
enum class InputSource : std::underlying_type<::GdkInputSource>::type;
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
class Seat;
class Surface;
} /* namespace Gdk */

namespace Pango
{
enum class Direction : std::underlying_type<::PangoDirection>::type;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Device> ()
{
  return gdk_device_get_type ();
}


namespace Gdk
{
class Device : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Device () = delete;
  Device (const Device &) = delete;
  Device (Device &&) = delete;
  Device &
  operator = (const Device &) = delete;
  Device &
  operator = (Device &&) = delete;
  ~Device () = delete;
public:

  int
  get_active_layout_index () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    return gdk_device_get_active_layout_index (_peel_this);
  }

  bool
  get_caps_lock_state () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    gboolean _peel_return = gdk_device_get_caps_lock_state (_peel_this);
    return !!_peel_return;
  }

  DeviceTool *
  get_device_tool () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    ::GdkDeviceTool *_peel_return = gdk_device_get_device_tool (_peel_this);
    return reinterpret_cast<DeviceTool *> (_peel_return);
  }

  Pango::Direction
  get_direction () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    ::PangoDirection _peel_return = gdk_device_get_direction (_peel_this);
    return static_cast<Pango::Direction> (_peel_return);
  }

  peel_returns_nonnull
  Display *
  get_display () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    ::GdkDisplay *_peel_return = gdk_device_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Display *> (_peel_return);
  }

  bool
  get_has_cursor () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    gboolean _peel_return = gdk_device_get_has_cursor (_peel_this);
    return !!_peel_return;
  }

  peel::Strv
  get_layout_names () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    gchar **_peel_return = gdk_device_get_layout_names (_peel_this);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  ModifierType
  get_modifier_state () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    ::GdkModifierType _peel_return = gdk_device_get_modifier_state (_peel_this);
    return static_cast<ModifierType> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    return gdk_device_get_name (_peel_this);
  }

  bool
  get_num_lock_state () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    gboolean _peel_return = gdk_device_get_num_lock_state (_peel_this);
    return !!_peel_return;
  }

  unsigned
  get_num_touches () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    return gdk_device_get_num_touches (_peel_this);
  }

  const char *
  get_product_id () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    return gdk_device_get_product_id (_peel_this);
  }

  bool
  get_scroll_lock_state () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    gboolean _peel_return = gdk_device_get_scroll_lock_state (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  Seat *
  get_seat () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    ::GdkSeat *_peel_return = gdk_device_get_seat (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Seat *> (_peel_return);
  }

  InputSource
  get_source () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    ::GdkInputSource _peel_return = gdk_device_get_source (_peel_this);
    return static_cast<InputSource> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3)
  Surface *
  get_surface_at_position (double *win_x, double *win_y) noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    ::GdkSurface *_peel_return = gdk_device_get_surface_at_position (_peel_this, win_x, win_y);
    return reinterpret_cast<Surface *> (_peel_return);
  }

  uint32_t
  get_timestamp () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    return gdk_device_get_timestamp (_peel_this);
  }

  const char *
  get_vendor_id () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    return gdk_device_get_vendor_id (_peel_this);
  }

  bool
  has_bidi_layouts () noexcept
  {
    ::GdkDevice *_peel_this = reinterpret_cast<::GdkDevice *> (this);
    gboolean _peel_return = gdk_device_has_bidi_layouts (_peel_this);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Device, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Device *), bool after = false) noexcept
  {
    return Signal<Device, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_tool_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Device, void (DeviceTool *)>::_peel_connect_by_name (this, "tool-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_tool_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Device *, DeviceTool *), bool after = false) noexcept
  {
    return Signal<Device, void (DeviceTool *)>::_peel_connect_by_name (this, "tool-changed", object, handler_method, after);
  }

  static peel::Property<int>
  prop_active_layout_index ()
  {
    return peel::Property<int> { "active-layout-index" };
  }

  static peel::Property<bool>
  prop_caps_lock_state ()
  {
    return peel::Property<bool> { "caps-lock-state" };
  }

  static peel::Property<Pango::Direction>
  prop_direction ()
  {
    return peel::Property<Pango::Direction> { "direction" };
  }

  static peel::Property<Display>
  prop_display ()
  {
    return peel::Property<Display> { "display" };
  }

  static peel::Property<bool>
  prop_has_bidi_layouts ()
  {
    return peel::Property<bool> { "has-bidi-layouts" };
  }

  static peel::Property<bool>
  prop_has_cursor ()
  {
    return peel::Property<bool> { "has-cursor" };
  }

  static peel::Property<peel::Strv>
  prop_layout_names ()
  {
    return peel::Property<peel::Strv> { "layout-names" };
  }

  static peel::Property<ModifierType>
  prop_modifier_state ()
  {
    return peel::Property<ModifierType> { "modifier-state" };
  }

  static peel::Property<unsigned>
  prop_n_axes ()
  {
    return peel::Property<unsigned> { "n-axes" };
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<bool>
  prop_num_lock_state ()
  {
    return peel::Property<bool> { "num-lock-state" };
  }

  static peel::Property<unsigned>
  prop_num_touches ()
  {
    return peel::Property<unsigned> { "num-touches" };
  }

  static peel::Property<const char *>
  prop_product_id ()
  {
    return peel::Property<const char *> { "product-id" };
  }

  static peel::Property<bool>
  prop_scroll_lock_state ()
  {
    return peel::Property<bool> { "scroll-lock-state" };
  }

  static peel::Property<Seat>
  prop_seat ()
  {
    return peel::Property<Seat> { "seat" };
  }

  static peel::Property<InputSource>
  prop_source ()
  {
    return peel::Property<InputSource> { "source" };
  }

  static peel::Property<DeviceTool>
  prop_tool ()
  {
    return peel::Property<DeviceTool> { "tool" };
  }

  static peel::Property<const char *>
  prop_vendor_id ()
  {
    return peel::Property<const char *> { "vendor-id" };
  }
}; /* class Device */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
