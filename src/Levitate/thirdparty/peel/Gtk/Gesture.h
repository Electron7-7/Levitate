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
#include <peel/GLib/List.h>
#include <peel/Gtk/EventController.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Device;
class Event;
class /* record */ EventSequence;
struct Rectangle;
} /* namespace Gdk */

namespace Gtk
{
enum class EventSequenceState : std::underlying_type<::GtkEventSequenceState>::type;
class Gesture;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Gesture> ()
{
  return gtk_gesture_get_type ();
}


namespace Gtk
{
class Gesture : public EventController
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Gesture () = delete;
  Gesture (const Gesture &) = delete;
  Gesture (Gesture &&) = delete;
  Gesture &
  operator = (const Gesture &) = delete;
  Gesture &
  operator = (Gesture &&) = delete;
  ~Gesture () = delete;
public:

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_bounding_box (Gdk::Rectangle *rect) noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    ::GdkRectangle *_peel_rect = reinterpret_cast<::GdkRectangle *> (rect);
    gboolean _peel_return = gtk_gesture_get_bounding_box (_peel_this, _peel_rect);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  get_bounding_box_center (double *x, double *y) noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    gboolean _peel_return = gtk_gesture_get_bounding_box_center (_peel_this, x, y);
    return !!_peel_return;
  }

  Gdk::Device *
  get_device () noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    ::GdkDevice *_peel_return = gtk_gesture_get_device (_peel_this);
    return reinterpret_cast<Gdk::Device *> (_peel_return);
  }

  GLib::List<Gesture *>
  get_group () noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    GList *_peel_return = gtk_gesture_get_group (_peel_this);
    return GLib::List<Gesture *>::adopt_list (_peel_return);
  }

  peel_arg_in (2)
  Gdk::Event *
  get_last_event (Gdk::EventSequence *sequence) noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    ::GdkEventSequence *_peel_sequence = reinterpret_cast<::GdkEventSequence *> (sequence);
    ::GdkEvent *_peel_return = gtk_gesture_get_last_event (_peel_this, _peel_sequence);
    return reinterpret_cast<Gdk::Event *> (_peel_return);
  }

  Gdk::EventSequence *
  get_last_updated_sequence () noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    ::GdkEventSequence *_peel_return = gtk_gesture_get_last_updated_sequence (_peel_this);
    return reinterpret_cast<Gdk::EventSequence *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_out (3) peel_arg_out (4)
  bool
  get_point (Gdk::EventSequence *sequence, double *x, double *y) noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    ::GdkEventSequence *_peel_sequence = reinterpret_cast<::GdkEventSequence *> (sequence);
    gboolean _peel_return = gtk_gesture_get_point (_peel_this, _peel_sequence, x, y);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  EventSequenceState
  get_sequence_state (Gdk::EventSequence *sequence) noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    ::GdkEventSequence *_peel_sequence = reinterpret_cast<::GdkEventSequence *> (sequence);
    ::GtkEventSequenceState _peel_return = gtk_gesture_get_sequence_state (_peel_this, _peel_sequence);
    return static_cast<EventSequenceState> (_peel_return);
  }

  GLib::List<Gdk::EventSequence *>
  get_sequences () noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    GList *_peel_return = gtk_gesture_get_sequences (_peel_this);
    return GLib::List<Gdk::EventSequence *>::adopt_list (_peel_return);
  }

  peel_nonnull_args (2)
  void
  group (Gesture *gesture) noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    ::GtkGesture *_peel_gesture = reinterpret_cast<::GtkGesture *> (gesture);
    gtk_gesture_group (_peel_this, _peel_gesture);
  }

  peel_arg_in (2)
  bool
  handles_sequence (Gdk::EventSequence *sequence) noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    ::GdkEventSequence *_peel_sequence = reinterpret_cast<::GdkEventSequence *> (sequence);
    gboolean _peel_return = gtk_gesture_handles_sequence (_peel_this, _peel_sequence);
    return !!_peel_return;
  }

  bool
  is_active () noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    gboolean _peel_return = gtk_gesture_is_active (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  is_grouped_with (Gesture *other) noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    ::GtkGesture *_peel_other = reinterpret_cast<::GtkGesture *> (other);
    gboolean _peel_return = gtk_gesture_is_grouped_with (_peel_this, _peel_other);
    return !!_peel_return;
  }

  bool
  is_recognized () noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    gboolean _peel_return = gtk_gesture_is_recognized (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  set_sequence_state (Gdk::EventSequence *sequence, EventSequenceState state) noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    ::GdkEventSequence *_peel_sequence = reinterpret_cast<::GdkEventSequence *> (sequence);
    ::GtkEventSequenceState _peel_state = static_cast<::GtkEventSequenceState> (state);
    gboolean _peel_return = gtk_gesture_set_sequence_state (_peel_this, _peel_sequence, _peel_state);
    return !!_peel_return;
  }

  bool
  set_state (EventSequenceState state) noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    ::GtkEventSequenceState _peel_state = static_cast<::GtkEventSequenceState> (state);
    gboolean _peel_return = gtk_gesture_set_state (_peel_this, _peel_state);
    return !!_peel_return;
  }

  void
  ungroup () noexcept
  {
    ::GtkGesture *_peel_this = reinterpret_cast<::GtkGesture *> (this);
    gtk_gesture_ungroup (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_begin (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Gesture, void (const Gdk::EventSequence *)>::_peel_connect_by_name (this, "begin", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_begin (HandlerObject *object, void (HandlerObject::*handler_method) (Gesture *, const Gdk::EventSequence *), bool after = false) noexcept
  {
    return Signal<Gesture, void (const Gdk::EventSequence *)>::_peel_connect_by_name (this, "begin", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_cancel (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Gesture, void (const Gdk::EventSequence *)>::_peel_connect_by_name (this, "cancel", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_cancel (HandlerObject *object, void (HandlerObject::*handler_method) (Gesture *, const Gdk::EventSequence *), bool after = false) noexcept
  {
    return Signal<Gesture, void (const Gdk::EventSequence *)>::_peel_connect_by_name (this, "cancel", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_end (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Gesture, void (const Gdk::EventSequence *)>::_peel_connect_by_name (this, "end", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_end (HandlerObject *object, void (HandlerObject::*handler_method) (Gesture *, const Gdk::EventSequence *), bool after = false) noexcept
  {
    return Signal<Gesture, void (const Gdk::EventSequence *)>::_peel_connect_by_name (this, "end", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_sequence_state_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Gesture, void (const Gdk::EventSequence *, EventSequenceState)>::_peel_connect_by_name (this, "sequence-state-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_sequence_state_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Gesture *, const Gdk::EventSequence *, EventSequenceState), bool after = false) noexcept
  {
    return Signal<Gesture, void (const Gdk::EventSequence *, EventSequenceState)>::_peel_connect_by_name (this, "sequence-state-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_update (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Gesture, void (const Gdk::EventSequence *)>::_peel_connect_by_name (this, "update", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_update (HandlerObject *object, void (HandlerObject::*handler_method) (Gesture *, const Gdk::EventSequence *), bool after = false) noexcept
  {
    return Signal<Gesture, void (const Gdk::EventSequence *)>::_peel_connect_by_name (this, "update", object, handler_method, after);
  }

  static peel::Property<unsigned>
  prop_n_points ()
  {
    return peel::Property<unsigned> { "n-points" };
  }

  class Class : public EventController::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class Gesture */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/EventSequence.h>
