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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Device;
class Event;
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
} /* namespace Gdk */

namespace Gtk
{
class EventController;
enum class PropagationLimit : std::underlying_type<::GtkPropagationLimit>::type;
enum class PropagationPhase : std::underlying_type<::GtkPropagationPhase>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::EventController> ()
{
  return gtk_event_controller_get_type ();
}


namespace Gtk
{
class EventController : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  EventController () = delete;
  EventController (const EventController &) = delete;
  EventController (EventController &&) = delete;
  EventController &
  operator = (const EventController &) = delete;
  EventController &
  operator = (EventController &&) = delete;
  ~EventController () = delete;
public:

  Gdk::Event *
  get_current_event () noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    ::GdkEvent *_peel_return = gtk_event_controller_get_current_event (_peel_this);
    return reinterpret_cast<Gdk::Event *> (_peel_return);
  }

  Gdk::Device *
  get_current_event_device () noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    ::GdkDevice *_peel_return = gtk_event_controller_get_current_event_device (_peel_this);
    return reinterpret_cast<Gdk::Device *> (_peel_return);
  }

  Gdk::ModifierType
  get_current_event_state () noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    ::GdkModifierType _peel_return = gtk_event_controller_get_current_event_state (_peel_this);
    return static_cast<Gdk::ModifierType> (_peel_return);
  }

  uint32_t
  get_current_event_time () noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    return gtk_event_controller_get_current_event_time (_peel_this);
  }

  const char *
  get_name () noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    return gtk_event_controller_get_name (_peel_this);
  }

  PropagationLimit
  get_propagation_limit () noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    ::GtkPropagationLimit _peel_return = gtk_event_controller_get_propagation_limit (_peel_this);
    return static_cast<PropagationLimit> (_peel_return);
  }

  PropagationPhase
  get_propagation_phase () noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    ::GtkPropagationPhase _peel_return = gtk_event_controller_get_propagation_phase (_peel_this);
    return static_cast<PropagationPhase> (_peel_return);
  }

  Widget *
  get_widget () noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    ::GtkWidget *_peel_return = gtk_event_controller_get_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  void
  reset () noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    gtk_event_controller_reset (_peel_this);
  }

  void
  set_name (const char *name) noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    gtk_event_controller_set_name (_peel_this, name);
  }

  void
  set_propagation_limit (PropagationLimit limit) noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    ::GtkPropagationLimit _peel_limit = static_cast<::GtkPropagationLimit> (limit);
    gtk_event_controller_set_propagation_limit (_peel_this, _peel_limit);
  }

  void
  set_propagation_phase (PropagationPhase phase) noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    ::GtkPropagationPhase _peel_phase = static_cast<::GtkPropagationPhase> (phase);
    gtk_event_controller_set_propagation_phase (_peel_this, _peel_phase);
  }

  void
  set_static_name (const char *name) noexcept
  {
    ::GtkEventController *_peel_this = reinterpret_cast<::GtkEventController *> (this);
    gtk_event_controller_set_static_name (_peel_this, name);
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<PropagationLimit>
  prop_propagation_limit ()
  {
    return peel::Property<PropagationLimit> { "propagation-limit" };
  }

  static peel::Property<PropagationPhase>
  prop_propagation_phase ()
  {
    return peel::Property<PropagationPhase> { "propagation-phase" };
  }

  static peel::Property<Widget>
  prop_widget ()
  {
    return peel::Property<Widget> { "widget" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class EventController */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
