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
class GestureZoom;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GestureZoom> ()
{
  return gtk_gesture_zoom_get_type ();
}


namespace Gtk
{
class GestureZoom : public Gesture
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GestureZoom () = delete;
  GestureZoom (const GestureZoom &) = delete;
  GestureZoom (GestureZoom &&) = delete;
  GestureZoom &
  operator = (const GestureZoom &) = delete;
  GestureZoom &
  operator = (GestureZoom &&) = delete;
  ~GestureZoom () = delete;
public:

  static peel::RefPtr<GestureZoom>
  create () noexcept
  {
    ::GtkGesture *_peel_return = gtk_gesture_zoom_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<GestureZoom>::adopt_ref (reinterpret_cast<GestureZoom *> (_peel_return));
  }

  double
  get_scale_delta () noexcept
  {
    ::GtkGestureZoom *_peel_this = reinterpret_cast<::GtkGestureZoom *> (this);
    return gtk_gesture_zoom_get_scale_delta (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_scale_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureZoom, void (double)>::_peel_connect_by_name (this, "scale-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_scale_changed (HandlerObject *object, void (HandlerObject::*handler_method) (GestureZoom *, double), bool after = false) noexcept
  {
    return Signal<GestureZoom, void (double)>::_peel_connect_by_name (this, "scale-changed", object, handler_method, after);
  }

  class Class : public Gesture::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class GestureZoom */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
