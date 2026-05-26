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
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
} /* namespace Gdk */

namespace Gtk
{
class EventControllerKey;
class IMContext;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::EventControllerKey> ()
{
  return gtk_event_controller_key_get_type ();
}


namespace Gtk
{
class EventControllerKey : public EventController
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  EventControllerKey () = delete;
  EventControllerKey (const EventControllerKey &) = delete;
  EventControllerKey (EventControllerKey &&) = delete;
  EventControllerKey &
  operator = (const EventControllerKey &) = delete;
  EventControllerKey &
  operator = (EventControllerKey &&) = delete;
  ~EventControllerKey () = delete;
public:

  static peel::RefPtr<EventControllerKey>
  create () noexcept
  {
    ::GtkEventController *_peel_return = gtk_event_controller_key_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<EventControllerKey>::adopt_ref (reinterpret_cast<EventControllerKey *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  forward (Widget *widget) noexcept
  {
    ::GtkEventControllerKey *_peel_this = reinterpret_cast<::GtkEventControllerKey *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gboolean _peel_return = gtk_event_controller_key_forward (_peel_this, _peel_widget);
    return !!_peel_return;
  }

  unsigned
  get_group () noexcept
  {
    ::GtkEventControllerKey *_peel_this = reinterpret_cast<::GtkEventControllerKey *> (this);
    return gtk_event_controller_key_get_group (_peel_this);
  }

  IMContext *
  get_im_context () noexcept
  {
    ::GtkEventControllerKey *_peel_this = reinterpret_cast<::GtkEventControllerKey *> (this);
    ::GtkIMContext *_peel_return = gtk_event_controller_key_get_im_context (_peel_this);
    return reinterpret_cast<IMContext *> (_peel_return);
  }

  void
  set_im_context (IMContext *im_context) noexcept
  {
    ::GtkEventControllerKey *_peel_this = reinterpret_cast<::GtkEventControllerKey *> (this);
    ::GtkIMContext *_peel_im_context = reinterpret_cast<::GtkIMContext *> (im_context);
    gtk_event_controller_key_set_im_context (_peel_this, _peel_im_context);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_im_update (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EventControllerKey, void ()>::_peel_connect_by_name (this, "im-update", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_im_update (HandlerObject *object, void (HandlerObject::*handler_method) (EventControllerKey *), bool after = false) noexcept
  {
    return Signal<EventControllerKey, void ()>::_peel_connect_by_name (this, "im-update", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_key_pressed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EventControllerKey, bool (unsigned, unsigned, Gdk::ModifierType)>::_peel_connect_by_name (this, "key-pressed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_key_pressed (HandlerObject *object, bool (HandlerObject::*handler_method) (EventControllerKey *, unsigned, unsigned, Gdk::ModifierType), bool after = false) noexcept
  {
    return Signal<EventControllerKey, bool (unsigned, unsigned, Gdk::ModifierType)>::_peel_connect_by_name (this, "key-pressed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_key_released (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EventControllerKey, void (unsigned, unsigned, Gdk::ModifierType)>::_peel_connect_by_name (this, "key-released", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_key_released (HandlerObject *object, void (HandlerObject::*handler_method) (EventControllerKey *, unsigned, unsigned, Gdk::ModifierType), bool after = false) noexcept
  {
    return Signal<EventControllerKey, void (unsigned, unsigned, Gdk::ModifierType)>::_peel_connect_by_name (this, "key-released", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_modifiers (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EventControllerKey, bool (Gdk::ModifierType)>::_peel_connect_by_name (this, "modifiers", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_modifiers (HandlerObject *object, bool (HandlerObject::*handler_method) (EventControllerKey *, Gdk::ModifierType), bool after = false) noexcept
  {
    return Signal<EventControllerKey, bool (Gdk::ModifierType)>::_peel_connect_by_name (this, "modifiers", object, handler_method, after);
  }

  class Class : public EventController::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class EventControllerKey */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
