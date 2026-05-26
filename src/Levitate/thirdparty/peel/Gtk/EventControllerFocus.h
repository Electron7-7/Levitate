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
namespace Gtk
{
class EventControllerFocus;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::EventControllerFocus> ()
{
  return gtk_event_controller_focus_get_type ();
}


namespace Gtk
{
class EventControllerFocus : public EventController
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  EventControllerFocus () = delete;
  EventControllerFocus (const EventControllerFocus &) = delete;
  EventControllerFocus (EventControllerFocus &&) = delete;
  EventControllerFocus &
  operator = (const EventControllerFocus &) = delete;
  EventControllerFocus &
  operator = (EventControllerFocus &&) = delete;
  ~EventControllerFocus () = delete;
public:

  static peel::RefPtr<EventControllerFocus>
  create () noexcept
  {
    ::GtkEventController *_peel_return = gtk_event_controller_focus_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<EventControllerFocus>::adopt_ref (reinterpret_cast<EventControllerFocus *> (_peel_return));
  }

  bool
  contains_focus () noexcept
  {
    ::GtkEventControllerFocus *_peel_this = reinterpret_cast<::GtkEventControllerFocus *> (this);
    gboolean _peel_return = gtk_event_controller_focus_contains_focus (_peel_this);
    return !!_peel_return;
  }

  bool
  is_focus () noexcept
  {
    ::GtkEventControllerFocus *_peel_this = reinterpret_cast<::GtkEventControllerFocus *> (this);
    gboolean _peel_return = gtk_event_controller_focus_is_focus (_peel_this);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_enter (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EventControllerFocus, void ()>::_peel_connect_by_name (this, "enter", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_enter (HandlerObject *object, void (HandlerObject::*handler_method) (EventControllerFocus *), bool after = false) noexcept
  {
    return Signal<EventControllerFocus, void ()>::_peel_connect_by_name (this, "enter", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_leave (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EventControllerFocus, void ()>::_peel_connect_by_name (this, "leave", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_leave (HandlerObject *object, void (HandlerObject::*handler_method) (EventControllerFocus *), bool after = false) noexcept
  {
    return Signal<EventControllerFocus, void ()>::_peel_connect_by_name (this, "leave", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_contains_focus ()
  {
    return peel::Property<bool> { "contains-focus" };
  }

  static peel::Property<bool>
  prop_is_focus ()
  {
    return peel::Property<bool> { "is-focus" };
  }

  class Class : public EventController::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class EventControllerFocus */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
