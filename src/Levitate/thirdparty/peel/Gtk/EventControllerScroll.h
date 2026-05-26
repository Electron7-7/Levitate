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
#include <gtk/gtk.h>
#include <peel/Gtk/EventController.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class ScrollUnit : std::underlying_type<::GdkScrollUnit>::type;
} /* namespace Gdk */

namespace Gtk
{
class EventControllerScroll;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::EventControllerScroll> ()
{
  return gtk_event_controller_scroll_get_type ();
}


namespace Gtk
{
class EventControllerScroll : public EventController
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  EventControllerScroll () = delete;
  EventControllerScroll (const EventControllerScroll &) = delete;
  EventControllerScroll (EventControllerScroll &&) = delete;
  EventControllerScroll &
  operator = (const EventControllerScroll &) = delete;
  EventControllerScroll &
  operator = (EventControllerScroll &&) = delete;
  ~EventControllerScroll () = delete;
public:
  enum class Flags : std::underlying_type<::GtkEventControllerScrollFlags>::type;

  static peel::RefPtr<EventControllerScroll>
  create (EventControllerScroll::Flags flags) noexcept
  {
    ::GtkEventControllerScrollFlags _peel_flags = static_cast<::GtkEventControllerScrollFlags> (flags);
    ::GtkEventController *_peel_return = gtk_event_controller_scroll_new (_peel_flags);
    peel_assume (_peel_return);
    return peel::RefPtr<EventControllerScroll>::adopt_ref (reinterpret_cast<EventControllerScroll *> (_peel_return));
  }

  EventControllerScroll::Flags
  get_flags () noexcept
  {
    ::GtkEventControllerScroll *_peel_this = reinterpret_cast<::GtkEventControllerScroll *> (this);
    ::GtkEventControllerScrollFlags _peel_return = gtk_event_controller_scroll_get_flags (_peel_this);
    return static_cast<EventControllerScroll::Flags> (_peel_return);
  }

  Gdk::ScrollUnit
  get_unit () noexcept
  {
    ::GtkEventControllerScroll *_peel_this = reinterpret_cast<::GtkEventControllerScroll *> (this);
    ::GdkScrollUnit _peel_return = gtk_event_controller_scroll_get_unit (_peel_this);
    return static_cast<Gdk::ScrollUnit> (_peel_return);
  }

  void
  set_flags (EventControllerScroll::Flags flags) noexcept
  {
    ::GtkEventControllerScroll *_peel_this = reinterpret_cast<::GtkEventControllerScroll *> (this);
    ::GtkEventControllerScrollFlags _peel_flags = static_cast<::GtkEventControllerScrollFlags> (flags);
    gtk_event_controller_scroll_set_flags (_peel_this, _peel_flags);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_decelerate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EventControllerScroll, void (double, double)>::_peel_connect_by_name (this, "decelerate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_decelerate (HandlerObject *object, void (HandlerObject::*handler_method) (EventControllerScroll *, double, double), bool after = false) noexcept
  {
    return Signal<EventControllerScroll, void (double, double)>::_peel_connect_by_name (this, "decelerate", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_scroll (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EventControllerScroll, bool (double, double)>::_peel_connect_by_name (this, "scroll", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_scroll (HandlerObject *object, bool (HandlerObject::*handler_method) (EventControllerScroll *, double, double), bool after = false) noexcept
  {
    return Signal<EventControllerScroll, bool (double, double)>::_peel_connect_by_name (this, "scroll", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_scroll_begin (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EventControllerScroll, void ()>::_peel_connect_by_name (this, "scroll-begin", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_scroll_begin (HandlerObject *object, void (HandlerObject::*handler_method) (EventControllerScroll *), bool after = false) noexcept
  {
    return Signal<EventControllerScroll, void ()>::_peel_connect_by_name (this, "scroll-begin", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_scroll_end (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EventControllerScroll, void ()>::_peel_connect_by_name (this, "scroll-end", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_scroll_end (HandlerObject *object, void (HandlerObject::*handler_method) (EventControllerScroll *), bool after = false) noexcept
  {
    return Signal<EventControllerScroll, void ()>::_peel_connect_by_name (this, "scroll-end", object, handler_method, after);
  }

  static peel::Property<EventControllerScroll::Flags>
  prop_flags ()
  {
    return peel::Property<EventControllerScroll::Flags> { "flags" };
  }

  class Class : public EventController::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class EventControllerScroll */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
