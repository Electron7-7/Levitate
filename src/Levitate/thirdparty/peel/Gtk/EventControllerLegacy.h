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
class Event;
} /* namespace Gdk */

namespace Gtk
{
class EventControllerLegacy;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::EventControllerLegacy> ()
{
  return gtk_event_controller_legacy_get_type ();
}


namespace Gtk
{
class EventControllerLegacy : public EventController
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  EventControllerLegacy () = delete;
  EventControllerLegacy (const EventControllerLegacy &) = delete;
  EventControllerLegacy (EventControllerLegacy &&) = delete;
  EventControllerLegacy &
  operator = (const EventControllerLegacy &) = delete;
  EventControllerLegacy &
  operator = (EventControllerLegacy &&) = delete;
  ~EventControllerLegacy () = delete;
public:

  static peel::RefPtr<EventControllerLegacy>
  create () noexcept
  {
    ::GtkEventController *_peel_return = gtk_event_controller_legacy_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<EventControllerLegacy>::adopt_ref (reinterpret_cast<EventControllerLegacy *> (_peel_return));
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_event (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EventControllerLegacy, bool (Gdk::Event *)>::_peel_connect_by_name (this, "event", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_event (HandlerObject *object, bool (HandlerObject::*handler_method) (EventControllerLegacy *, Gdk::Event *), bool after = false) noexcept
  {
    return Signal<EventControllerLegacy, bool (Gdk::Event *)>::_peel_connect_by_name (this, "event", object, handler_method, after);
  }

  class Class : public EventController::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class EventControllerLegacy */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
