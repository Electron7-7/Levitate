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
class GestureDrag;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GestureDrag> ()
{
  return gtk_gesture_drag_get_type ();
}


namespace Gtk
{
class GestureDrag : public GestureSingle
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GestureDrag () = delete;
  GestureDrag (const GestureDrag &) = delete;
  GestureDrag (GestureDrag &&) = delete;
  GestureDrag &
  operator = (const GestureDrag &) = delete;
  GestureDrag &
  operator = (GestureDrag &&) = delete;
  ~GestureDrag () = delete;
public:

  static peel::RefPtr<GestureDrag>
  create () noexcept
  {
    ::GtkGesture *_peel_return = gtk_gesture_drag_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<GestureDrag>::adopt_ref (reinterpret_cast<GestureDrag *> (_peel_return));
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  get_offset (double *x, double *y) noexcept
  {
    ::GtkGestureDrag *_peel_this = reinterpret_cast<::GtkGestureDrag *> (this);
    gboolean _peel_return = gtk_gesture_drag_get_offset (_peel_this, x, y);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  get_start_point (double *x, double *y) noexcept
  {
    ::GtkGestureDrag *_peel_this = reinterpret_cast<::GtkGestureDrag *> (this);
    gboolean _peel_return = gtk_gesture_drag_get_start_point (_peel_this, x, y);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drag_begin (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureDrag, void (double, double)>::_peel_connect_by_name (this, "drag-begin", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drag_begin (HandlerObject *object, void (HandlerObject::*handler_method) (GestureDrag *, double, double), bool after = false) noexcept
  {
    return Signal<GestureDrag, void (double, double)>::_peel_connect_by_name (this, "drag-begin", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drag_end (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureDrag, void (double, double)>::_peel_connect_by_name (this, "drag-end", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drag_end (HandlerObject *object, void (HandlerObject::*handler_method) (GestureDrag *, double, double), bool after = false) noexcept
  {
    return Signal<GestureDrag, void (double, double)>::_peel_connect_by_name (this, "drag-end", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drag_update (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureDrag, void (double, double)>::_peel_connect_by_name (this, "drag-update", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drag_update (HandlerObject *object, void (HandlerObject::*handler_method) (GestureDrag *, double, double), bool after = false) noexcept
  {
    return Signal<GestureDrag, void (double, double)>::_peel_connect_by_name (this, "drag-update", object, handler_method, after);
  }

  class Class : public GestureSingle::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class GestureDrag */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
