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
class Drop;
} /* namespace Gdk */

namespace Gtk
{
class DropControllerMotion;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::DropControllerMotion> ()
{
  return gtk_drop_controller_motion_get_type ();
}


namespace Gtk
{
class DropControllerMotion : public EventController
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DropControllerMotion () = delete;
  DropControllerMotion (const DropControllerMotion &) = delete;
  DropControllerMotion (DropControllerMotion &&) = delete;
  DropControllerMotion &
  operator = (const DropControllerMotion &) = delete;
  DropControllerMotion &
  operator = (DropControllerMotion &&) = delete;
  ~DropControllerMotion () = delete;
public:

  static peel::RefPtr<DropControllerMotion>
  create () noexcept
  {
    ::GtkEventController *_peel_return = gtk_drop_controller_motion_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<DropControllerMotion>::adopt_ref (reinterpret_cast<DropControllerMotion *> (_peel_return));
  }

  bool
  contains_pointer () noexcept
  {
    ::GtkDropControllerMotion *_peel_this = reinterpret_cast<::GtkDropControllerMotion *> (this);
    gboolean _peel_return = gtk_drop_controller_motion_contains_pointer (_peel_this);
    return !!_peel_return;
  }

  Gdk::Drop *
  get_drop () noexcept
  {
    ::GtkDropControllerMotion *_peel_this = reinterpret_cast<::GtkDropControllerMotion *> (this);
    ::GdkDrop *_peel_return = gtk_drop_controller_motion_get_drop (_peel_this);
    return reinterpret_cast<Gdk::Drop *> (_peel_return);
  }

  bool
  is_pointer () noexcept
  {
    ::GtkDropControllerMotion *_peel_this = reinterpret_cast<::GtkDropControllerMotion *> (this);
    gboolean _peel_return = gtk_drop_controller_motion_is_pointer (_peel_this);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_enter (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropControllerMotion, void (double, double)>::_peel_connect_by_name (this, "enter", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_enter (HandlerObject *object, void (HandlerObject::*handler_method) (DropControllerMotion *, double, double), bool after = false) noexcept
  {
    return Signal<DropControllerMotion, void (double, double)>::_peel_connect_by_name (this, "enter", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_leave (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropControllerMotion, void ()>::_peel_connect_by_name (this, "leave", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_leave (HandlerObject *object, void (HandlerObject::*handler_method) (DropControllerMotion *), bool after = false) noexcept
  {
    return Signal<DropControllerMotion, void ()>::_peel_connect_by_name (this, "leave", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_motion (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropControllerMotion, void (double, double)>::_peel_connect_by_name (this, "motion", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_motion (HandlerObject *object, void (HandlerObject::*handler_method) (DropControllerMotion *, double, double), bool after = false) noexcept
  {
    return Signal<DropControllerMotion, void (double, double)>::_peel_connect_by_name (this, "motion", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_contains_pointer ()
  {
    return peel::Property<bool> { "contains-pointer" };
  }

  static peel::Property<Gdk::Drop>
  prop_drop ()
  {
    return peel::Property<Gdk::Drop> { "drop" };
  }

  static peel::Property<bool>
  prop_is_pointer ()
  {
    return peel::Property<bool> { "is-pointer" };
  }

  class Class : public EventController::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class DropControllerMotion */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
