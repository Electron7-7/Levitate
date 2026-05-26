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
namespace Gtk
{
class GestureLongPress;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GestureLongPress> ()
{
  return gtk_gesture_long_press_get_type ();
}


namespace Gtk
{
class GestureLongPress : public GestureSingle
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GestureLongPress () = delete;
  GestureLongPress (const GestureLongPress &) = delete;
  GestureLongPress (GestureLongPress &&) = delete;
  GestureLongPress &
  operator = (const GestureLongPress &) = delete;
  GestureLongPress &
  operator = (GestureLongPress &&) = delete;
  ~GestureLongPress () = delete;
public:

  static peel::RefPtr<GestureLongPress>
  create () noexcept
  {
    ::GtkGesture *_peel_return = gtk_gesture_long_press_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<GestureLongPress>::adopt_ref (reinterpret_cast<GestureLongPress *> (_peel_return));
  }

  double
  get_delay_factor () noexcept
  {
    ::GtkGestureLongPress *_peel_this = reinterpret_cast<::GtkGestureLongPress *> (this);
    return gtk_gesture_long_press_get_delay_factor (_peel_this);
  }

  void
  set_delay_factor (double delay_factor) noexcept
  {
    ::GtkGestureLongPress *_peel_this = reinterpret_cast<::GtkGestureLongPress *> (this);
    gtk_gesture_long_press_set_delay_factor (_peel_this, delay_factor);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_cancelled (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureLongPress, void ()>::_peel_connect_by_name (this, "cancelled", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_cancelled (HandlerObject *object, void (HandlerObject::*handler_method) (GestureLongPress *), bool after = false) noexcept
  {
    return Signal<GestureLongPress, void ()>::_peel_connect_by_name (this, "cancelled", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_pressed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureLongPress, void (double, double)>::_peel_connect_by_name (this, "pressed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_pressed (HandlerObject *object, void (HandlerObject::*handler_method) (GestureLongPress *, double, double), bool after = false) noexcept
  {
    return Signal<GestureLongPress, void (double, double)>::_peel_connect_by_name (this, "pressed", object, handler_method, after);
  }

  static peel::Property<double>
  prop_delay_factor ()
  {
    return peel::Property<double> { "delay-factor" };
  }

  class Class : public GestureSingle::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class GestureLongPress */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
