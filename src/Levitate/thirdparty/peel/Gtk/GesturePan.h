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
#include <peel/Gtk/GestureDrag.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class GesturePan;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
enum class PanDirection : std::underlying_type<::GtkPanDirection>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GesturePan> ()
{
  return gtk_gesture_pan_get_type ();
}


namespace Gtk
{
class GesturePan : public GestureDrag
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GesturePan () = delete;
  GesturePan (const GesturePan &) = delete;
  GesturePan (GesturePan &&) = delete;
  GesturePan &
  operator = (const GesturePan &) = delete;
  GesturePan &
  operator = (GesturePan &&) = delete;
  ~GesturePan () = delete;
public:

  static peel::RefPtr<GesturePan>
  create (Orientation orientation) noexcept
  {
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    ::GtkGesture *_peel_return = gtk_gesture_pan_new (_peel_orientation);
    peel_assume (_peel_return);
    return peel::RefPtr<GesturePan>::adopt_ref (reinterpret_cast<GesturePan *> (_peel_return));
  }

  Orientation
  get_orientation () noexcept
  {
    ::GtkGesturePan *_peel_this = reinterpret_cast<::GtkGesturePan *> (this);
    ::GtkOrientation _peel_return = gtk_gesture_pan_get_orientation (_peel_this);
    return static_cast<Orientation> (_peel_return);
  }

  void
  set_orientation (Orientation orientation) noexcept
  {
    ::GtkGesturePan *_peel_this = reinterpret_cast<::GtkGesturePan *> (this);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    gtk_gesture_pan_set_orientation (_peel_this, _peel_orientation);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_pan (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GesturePan, void (PanDirection, double)>::_peel_connect_by_name (this, "pan", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_pan (HandlerObject *object, void (HandlerObject::*handler_method) (GesturePan *, PanDirection, double), bool after = false) noexcept
  {
    return Signal<GesturePan, void (PanDirection, double)>::_peel_connect_by_name (this, "pan", object, handler_method, after);
  }

  static peel::Property<Orientation>
  prop_orientation ()
  {
    return peel::Property<Orientation> { "orientation" };
  }

  class Class : public GestureDrag::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class GesturePan */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
