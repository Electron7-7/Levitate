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
enum class AxisUse : std::underlying_type<::GdkAxisUse>::type;
class DeviceTool;
struct TimeCoord;
} /* namespace Gdk */

namespace Gtk
{
class GestureStylus;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GestureStylus> ()
{
  return gtk_gesture_stylus_get_type ();
}


namespace Gtk
{
class GestureStylus : public GestureSingle
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GestureStylus () = delete;
  GestureStylus (const GestureStylus &) = delete;
  GestureStylus (GestureStylus &&) = delete;
  GestureStylus &
  operator = (const GestureStylus &) = delete;
  GestureStylus &
  operator = (GestureStylus &&) = delete;
  ~GestureStylus () = delete;
public:

  static peel::RefPtr<GestureStylus>
  create () noexcept
  {
    ::GtkGesture *_peel_return = gtk_gesture_stylus_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<GestureStylus>::adopt_ref (reinterpret_cast<GestureStylus *> (_peel_return));
  }

  /* Unsupported for now: get_axes: Complex array */
  static void
  get_axes (UnsupportedForNowToken);

  peel_arg_out (3) peel_nonnull_args (3)
  bool
  get_axis (Gdk::AxisUse axis, double *value) noexcept
  {
    ::GtkGestureStylus *_peel_this = reinterpret_cast<::GtkGestureStylus *> (this);
    ::GdkAxisUse _peel_axis = static_cast<::GdkAxisUse> (axis);
    gboolean _peel_return = gtk_gesture_stylus_get_axis (_peel_this, _peel_axis, value);
    return !!_peel_return;
  }

  bool
  get_backlog (peel::UniquePtr<Gdk::TimeCoord[]> *backlog) noexcept
  {
    guint _peel_n_elems;
    ::GtkGestureStylus *_peel_this = reinterpret_cast<::GtkGestureStylus *> (this);
    ::GdkTimeCoord *_peel_backlog;
    gboolean _peel_return = gtk_gesture_stylus_get_backlog (_peel_this, &_peel_backlog, &_peel_n_elems);
    *backlog = peel::UniquePtr<Gdk::TimeCoord[]>::adopt_ref (reinterpret_cast<Gdk::TimeCoord *> (_peel_backlog), _peel_n_elems);
    return !!_peel_return;
  }

  Gdk::DeviceTool *
  get_device_tool () noexcept
  {
    ::GtkGestureStylus *_peel_this = reinterpret_cast<::GtkGestureStylus *> (this);
    ::GdkDeviceTool *_peel_return = gtk_gesture_stylus_get_device_tool (_peel_this);
    return reinterpret_cast<Gdk::DeviceTool *> (_peel_return);
  }

  bool
  get_stylus_only () noexcept
  {
    ::GtkGestureStylus *_peel_this = reinterpret_cast<::GtkGestureStylus *> (this);
    gboolean _peel_return = gtk_gesture_stylus_get_stylus_only (_peel_this);
    return !!_peel_return;
  }

  void
  set_stylus_only (bool stylus_only) noexcept
  {
    ::GtkGestureStylus *_peel_this = reinterpret_cast<::GtkGestureStylus *> (this);
    gboolean _peel_stylus_only = static_cast<gboolean> (stylus_only);
    gtk_gesture_stylus_set_stylus_only (_peel_this, _peel_stylus_only);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_down (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureStylus, void (double, double)>::_peel_connect_by_name (this, "down", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_down (HandlerObject *object, void (HandlerObject::*handler_method) (GestureStylus *, double, double), bool after = false) noexcept
  {
    return Signal<GestureStylus, void (double, double)>::_peel_connect_by_name (this, "down", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_motion (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureStylus, void (double, double)>::_peel_connect_by_name (this, "motion", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_motion (HandlerObject *object, void (HandlerObject::*handler_method) (GestureStylus *, double, double), bool after = false) noexcept
  {
    return Signal<GestureStylus, void (double, double)>::_peel_connect_by_name (this, "motion", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_proximity (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureStylus, void (double, double)>::_peel_connect_by_name (this, "proximity", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_proximity (HandlerObject *object, void (HandlerObject::*handler_method) (GestureStylus *, double, double), bool after = false) noexcept
  {
    return Signal<GestureStylus, void (double, double)>::_peel_connect_by_name (this, "proximity", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_up (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GestureStylus, void (double, double)>::_peel_connect_by_name (this, "up", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_up (HandlerObject *object, void (HandlerObject::*handler_method) (GestureStylus *, double, double), bool after = false) noexcept
  {
    return Signal<GestureStylus, void (double, double)>::_peel_connect_by_name (this, "up", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_stylus_only ()
  {
    return peel::Property<bool> { "stylus-only" };
  }

  class Class : public GestureSingle::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class GestureStylus */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/TimeCoord.h>
