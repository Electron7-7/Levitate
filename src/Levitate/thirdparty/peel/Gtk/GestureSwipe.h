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
class GestureSwipe;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GestureSwipe> ()
{
  return gtk_gesture_swipe_get_type ();
}


namespace Gtk
{
class GestureSwipe : public GestureSingle
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GestureSwipe () = delete;
  GestureSwipe (const GestureSwipe &) = delete;
  GestureSwipe (GestureSwipe &&) = delete;
  GestureSwipe &
  operator = (const GestureSwipe &) = delete;
  GestureSwipe &
  operator = (GestureSwipe &&) = delete;
  ~GestureSwipe () = delete;
public:

  static peel::RefPtr<GestureSwipe>
  create () noexcept
  {
    ::GtkGesture *_peel_return = gtk_gesture_swipe_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<GestureSwipe>::adopt_ref (reinterpret_cast<GestureSwipe *> (_peel_return));
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  get_velocity (double *velocity_x, double *velocity_y) noexcept
  {
    ::GtkGestureSwipe *_peel_this = reinterpret_cast<::GtkGestureSwipe *> (this);
    gboolean _peel_return = gtk_gesture_swipe_get_velocity (_peel_this, velocity_x, velocity_y);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_swipe (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureSwipe, void (double, double)>::_peel_connect_by_name (this, "swipe", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_swipe (HandlerObject *object, void (HandlerObject::*handler_method) (GestureSwipe *, double, double), bool after = false) noexcept
  {
    return Signal<GestureSwipe, void (double, double)>::_peel_connect_by_name (this, "swipe", object, handler_method, after);
  }

  class Class : public GestureSingle::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class GestureSwipe */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
