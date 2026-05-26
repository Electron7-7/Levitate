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
class /* record */ ContentFormats;
class ContentProvider;
class Device;
class Display;
class Drag;
class Surface;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Drag> ()
{
  return gdk_drag_get_type ();
}


namespace Gdk
{
class Drag : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Drag () = delete;
  Drag (const Drag &) = delete;
  Drag (Drag &&) = delete;
  Drag &
  operator = (const Drag &) = delete;
  Drag &
  operator = (Drag &&) = delete;
  ~Drag () = delete;
public:
  enum class Action : std::underlying_type<::GdkDragAction>::type;
  enum class CancelReason : std::underlying_type<::GdkDragCancelReason>::type;

  peel_nonnull_args (1, 2, 3)
  static peel::RefPtr<Drag>
  begin (Surface *surface, Device *device, ContentProvider *content, Drag::Action actions, double dx, double dy) noexcept
  {
    ::GdkSurface *_peel_surface = reinterpret_cast<::GdkSurface *> (surface);
    ::GdkDevice *_peel_device = reinterpret_cast<::GdkDevice *> (device);
    ::GdkContentProvider *_peel_content = reinterpret_cast<::GdkContentProvider *> (content);
    ::GdkDragAction _peel_actions = static_cast<::GdkDragAction> (actions);
    ::GdkDrag *_peel_return = gdk_drag_begin (_peel_surface, _peel_device, _peel_content, _peel_actions, dx, dy);
    return peel::RefPtr<Drag>::adopt_ref (reinterpret_cast<Drag *> (_peel_return));
  }

  void
  drop_done (bool success) noexcept
  {
    ::GdkDrag *_peel_this = reinterpret_cast<::GdkDrag *> (this);
    gboolean _peel_success = static_cast<gboolean> (success);
    gdk_drag_drop_done (_peel_this, _peel_success);
  }

  Drag::Action
  get_actions () noexcept
  {
    ::GdkDrag *_peel_this = reinterpret_cast<::GdkDrag *> (this);
    ::GdkDragAction _peel_return = gdk_drag_get_actions (_peel_this);
    return static_cast<Drag::Action> (_peel_return);
  }

  peel_returns_nonnull
  ContentProvider *
  get_content () noexcept
  {
    ::GdkDrag *_peel_this = reinterpret_cast<::GdkDrag *> (this);
    ::GdkContentProvider *_peel_return = gdk_drag_get_content (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<ContentProvider *> (_peel_return);
  }

  peel_returns_nonnull
  Device *
  get_device () noexcept
  {
    ::GdkDrag *_peel_this = reinterpret_cast<::GdkDrag *> (this);
    ::GdkDevice *_peel_return = gdk_drag_get_device (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Device *> (_peel_return);
  }

  peel_returns_nonnull
  Display *
  get_display () noexcept
  {
    ::GdkDrag *_peel_this = reinterpret_cast<::GdkDrag *> (this);
    ::GdkDisplay *_peel_return = gdk_drag_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Display *> (_peel_return);
  }

  Surface *
  get_drag_surface () noexcept
  {
    ::GdkDrag *_peel_this = reinterpret_cast<::GdkDrag *> (this);
    ::GdkSurface *_peel_return = gdk_drag_get_drag_surface (_peel_this);
    return reinterpret_cast<Surface *> (_peel_return);
  }

  peel_returns_nonnull
  ContentFormats *
  get_formats () noexcept
  {
    ::GdkDrag *_peel_this = reinterpret_cast<::GdkDrag *> (this);
    ::GdkContentFormats *_peel_return = gdk_drag_get_formats (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<ContentFormats *> (_peel_return);
  }

  Drag::Action
  get_selected_action () noexcept
  {
    ::GdkDrag *_peel_this = reinterpret_cast<::GdkDrag *> (this);
    ::GdkDragAction _peel_return = gdk_drag_get_selected_action (_peel_this);
    return static_cast<Drag::Action> (_peel_return);
  }

  peel_returns_nonnull
  Surface *
  get_surface () noexcept
  {
    ::GdkDrag *_peel_this = reinterpret_cast<::GdkDrag *> (this);
    ::GdkSurface *_peel_return = gdk_drag_get_surface (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Surface *> (_peel_return);
  }

  void
  set_hotspot (int hot_x, int hot_y) noexcept
  {
    ::GdkDrag *_peel_this = reinterpret_cast<::GdkDrag *> (this);
    gdk_drag_set_hotspot (_peel_this, hot_x, hot_y);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_cancel (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Drag, void (Drag::CancelReason)>::_peel_connect_by_name (this, "cancel", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_cancel (HandlerObject *object, void (HandlerObject::*handler_method) (Drag *, Drag::CancelReason), bool after = false) noexcept
  {
    return Signal<Drag, void (Drag::CancelReason)>::_peel_connect_by_name (this, "cancel", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_dnd_finished (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Drag, void ()>::_peel_connect_by_name (this, "dnd-finished", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_dnd_finished (HandlerObject *object, void (HandlerObject::*handler_method) (Drag *), bool after = false) noexcept
  {
    return Signal<Drag, void ()>::_peel_connect_by_name (this, "dnd-finished", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drop_performed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Drag, void ()>::_peel_connect_by_name (this, "drop-performed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drop_performed (HandlerObject *object, void (HandlerObject::*handler_method) (Drag *), bool after = false) noexcept
  {
    return Signal<Drag, void ()>::_peel_connect_by_name (this, "drop-performed", object, handler_method, after);
  }

  static peel::Property<Drag::Action>
  prop_actions ()
  {
    return peel::Property<Drag::Action> { "actions" };
  }

  static peel::Property<ContentProvider>
  prop_content ()
  {
    return peel::Property<ContentProvider> { "content" };
  }

  static peel::Property<Device>
  prop_device ()
  {
    return peel::Property<Device> { "device" };
  }

  static peel::Property<Display>
  prop_display ()
  {
    return peel::Property<Display> { "display" };
  }

  static peel::Property<ContentFormats>
  prop_formats ()
  {
    return peel::Property<ContentFormats> { "formats" };
  }

  static peel::Property<Drag::Action>
  prop_selected_action ()
  {
    return peel::Property<Drag::Action> { "selected-action" };
  }

  static peel::Property<Surface>
  prop_surface ()
  {
    return peel::Property<Surface> { "surface" };
  }
}; /* class Drag */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
