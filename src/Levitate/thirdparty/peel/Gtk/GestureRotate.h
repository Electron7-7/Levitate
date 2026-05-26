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
#include <peel/Gtk/Gesture.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class GestureRotate;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GestureRotate> ()
{
  return gtk_gesture_rotate_get_type ();
}


namespace Gtk
{
class GestureRotate : public Gesture
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GestureRotate () = delete;
  GestureRotate (const GestureRotate &) = delete;
  GestureRotate (GestureRotate &&) = delete;
  GestureRotate &
  operator = (const GestureRotate &) = delete;
  GestureRotate &
  operator = (GestureRotate &&) = delete;
  ~GestureRotate () = delete;
public:

  static peel::RefPtr<GestureRotate>
  create () noexcept
  {
    ::GtkGesture *_peel_return = gtk_gesture_rotate_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<GestureRotate>::adopt_ref (reinterpret_cast<GestureRotate *> (_peel_return));
  }

  double
  get_angle_delta () noexcept
  {
    ::GtkGestureRotate *_peel_this = reinterpret_cast<::GtkGestureRotate *> (this);
    return gtk_gesture_rotate_get_angle_delta (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_angle_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureRotate, void (double, double)>::_peel_connect_by_name (this, "angle-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_angle_changed (HandlerObject *object, void (HandlerObject::*handler_method) (GestureRotate *, double, double), bool after = false) noexcept
  {
    return Signal<GestureRotate, void (double, double)>::_peel_connect_by_name (this, "angle-changed", object, handler_method, after);
  }

  class Class : public Gesture::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class GestureRotate */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
