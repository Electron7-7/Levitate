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
#include <peel/Gtk/GestureSingle.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* record */ EventSequence;
} /* namespace Gdk */

namespace Gtk
{
class GestureClick;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GestureClick> ()
{
  return gtk_gesture_click_get_type ();
}


namespace Gtk
{
class GestureClick : public GestureSingle
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GestureClick () = delete;
  GestureClick (const GestureClick &) = delete;
  GestureClick (GestureClick &&) = delete;
  GestureClick &
  operator = (const GestureClick &) = delete;
  GestureClick &
  operator = (GestureClick &&) = delete;
  ~GestureClick () = delete;
public:

  static peel::RefPtr<GestureClick>
  create () noexcept
  {
    ::GtkGesture *_peel_return = gtk_gesture_click_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<GestureClick>::adopt_ref (reinterpret_cast<GestureClick *> (_peel_return));
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_pressed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureClick, void (int, double, double)>::_peel_connect_by_name (this, "pressed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_pressed (HandlerObject *object, void (HandlerObject::*handler_method) (GestureClick *, int, double, double), bool after = false) noexcept
  {
    return Signal<GestureClick, void (int, double, double)>::_peel_connect_by_name (this, "pressed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_released (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureClick, void (int, double, double)>::_peel_connect_by_name (this, "released", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_released (HandlerObject *object, void (HandlerObject::*handler_method) (GestureClick *, int, double, double), bool after = false) noexcept
  {
    return Signal<GestureClick, void (int, double, double)>::_peel_connect_by_name (this, "released", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_stopped (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureClick, void ()>::_peel_connect_by_name (this, "stopped", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_stopped (HandlerObject *object, void (HandlerObject::*handler_method) (GestureClick *), bool after = false) noexcept
  {
    return Signal<GestureClick, void ()>::_peel_connect_by_name (this, "stopped", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_unpaired_release (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureClick, void (double, double, unsigned, const Gdk::EventSequence *)>::_peel_connect_by_name (this, "unpaired-release", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_unpaired_release (HandlerObject *object, void (HandlerObject::*handler_method) (GestureClick *, double, double, unsigned, const Gdk::EventSequence *), bool after = false) noexcept
  {
    return Signal<GestureClick, void (double, double, unsigned, const Gdk::EventSequence *)>::_peel_connect_by_name (this, "unpaired-release", object, handler_method, after);
  }

  class Class : public GestureSingle::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class GestureClick */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
