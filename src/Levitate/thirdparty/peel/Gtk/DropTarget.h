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
#include <peel/Gdk/Drag.h>
#include <peel/Gtk/EventController.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct Value;
} /* namespace GObject */

namespace Gdk
{
class /* record */ ContentFormats;
class Drop;
} /* namespace Gdk */

namespace Gtk
{
class DropTarget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::DropTarget> ()
{
  return gtk_drop_target_get_type ();
}


namespace Gtk
{
class DropTarget : public EventController
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DropTarget () = delete;
  DropTarget (const DropTarget &) = delete;
  DropTarget (DropTarget &&) = delete;
  DropTarget &
  operator = (const DropTarget &) = delete;
  DropTarget &
  operator = (DropTarget &&) = delete;
  ~DropTarget () = delete;
public:

  static peel::RefPtr<DropTarget>
  create (GObject::Type type, Gdk::Drag::Action actions) noexcept
  {
    ::GdkDragAction _peel_actions = static_cast<::GdkDragAction> (actions);
    ::GtkDropTarget *_peel_return = gtk_drop_target_new (type, _peel_actions);
    peel_assume (_peel_return);
    return peel::RefPtr<DropTarget>::adopt_ref (reinterpret_cast<DropTarget *> (_peel_return));
  }

  Gdk::Drag::Action
  get_actions () noexcept
  {
    ::GtkDropTarget *_peel_this = reinterpret_cast<::GtkDropTarget *> (this);
    ::GdkDragAction _peel_return = gtk_drop_target_get_actions (_peel_this);
    return static_cast<Gdk::Drag::Action> (_peel_return);
  }

  Gdk::Drop *
  get_current_drop () noexcept
  {
    ::GtkDropTarget *_peel_this = reinterpret_cast<::GtkDropTarget *> (this);
    ::GdkDrop *_peel_return = gtk_drop_target_get_current_drop (_peel_this);
    return reinterpret_cast<Gdk::Drop *> (_peel_return);
  }

  Gdk::Drop *
  get_drop () noexcept
  {
    ::GtkDropTarget *_peel_this = reinterpret_cast<::GtkDropTarget *> (this);
    ::GdkDrop *_peel_return = gtk_drop_target_get_drop (_peel_this);
    return reinterpret_cast<Gdk::Drop *> (_peel_return);
  }

  Gdk::ContentFormats *
  get_formats () noexcept
  {
    ::GtkDropTarget *_peel_this = reinterpret_cast<::GtkDropTarget *> (this);
    ::GdkContentFormats *_peel_return = gtk_drop_target_get_formats (_peel_this);
    return reinterpret_cast<Gdk::ContentFormats *> (_peel_return);
  }

  peel::ArrayRef<const GObject::Type>
  get_gtypes () noexcept
  {
    gsize _peel_n_types;
    ::GtkDropTarget *_peel_this = reinterpret_cast<::GtkDropTarget *> (this);
    const GType *_peel_return = gtk_drop_target_get_gtypes (_peel_this, &_peel_n_types);
    return peel::ArrayRef<const GObject::Type> (reinterpret_cast<const GObject::Type *> (_peel_return), _peel_n_types);
  }

  bool
  get_preload () noexcept
  {
    ::GtkDropTarget *_peel_this = reinterpret_cast<::GtkDropTarget *> (this);
    gboolean _peel_return = gtk_drop_target_get_preload (_peel_this);
    return !!_peel_return;
  }

  const GObject::Value *
  get_value () noexcept
  {
    ::GtkDropTarget *_peel_this = reinterpret_cast<::GtkDropTarget *> (this);
    const ::GValue *_peel_return = gtk_drop_target_get_value (_peel_this);
    return reinterpret_cast<const GObject::Value *> (_peel_return);
  }

  void
  reject () noexcept
  {
    ::GtkDropTarget *_peel_this = reinterpret_cast<::GtkDropTarget *> (this);
    gtk_drop_target_reject (_peel_this);
  }

  void
  set_actions (Gdk::Drag::Action actions) noexcept
  {
    ::GtkDropTarget *_peel_this = reinterpret_cast<::GtkDropTarget *> (this);
    ::GdkDragAction _peel_actions = static_cast<::GdkDragAction> (actions);
    gtk_drop_target_set_actions (_peel_this, _peel_actions);
  }

  void
  set_gtypes (peel::ArrayRef<GObject::Type> types) noexcept
  {
    gsize _peel_n_types;
    ::GtkDropTarget *_peel_this = reinterpret_cast<::GtkDropTarget *> (this);
    GType *_peel_types = (_peel_n_types = types.size (), reinterpret_cast<GType *> (types.data ()));
    gtk_drop_target_set_gtypes (_peel_this, _peel_types, _peel_n_types);
  }

  void
  set_preload (bool preload) noexcept
  {
    ::GtkDropTarget *_peel_this = reinterpret_cast<::GtkDropTarget *> (this);
    gboolean _peel_preload = static_cast<gboolean> (preload);
    gtk_drop_target_set_preload (_peel_this, _peel_preload);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_accept (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropTarget, bool (Gdk::Drop *)>::_peel_connect_by_name (this, "accept", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_accept (HandlerObject *object, bool (HandlerObject::*handler_method) (DropTarget *, Gdk::Drop *), bool after = false) noexcept
  {
    return Signal<DropTarget, bool (Gdk::Drop *)>::_peel_connect_by_name (this, "accept", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drop (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropTarget, bool (const GObject::Value *, double, double)>::_peel_connect_by_name (this, "drop", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drop (HandlerObject *object, bool (HandlerObject::*handler_method) (DropTarget *, const GObject::Value *, double, double), bool after = false) noexcept
  {
    return Signal<DropTarget, bool (const GObject::Value *, double, double)>::_peel_connect_by_name (this, "drop", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_enter (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropTarget, Gdk::Drag::Action (double, double)>::_peel_connect_by_name (this, "enter", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_enter (HandlerObject *object, Gdk::Drag::Action (HandlerObject::*handler_method) (DropTarget *, double, double), bool after = false) noexcept
  {
    return Signal<DropTarget, Gdk::Drag::Action (double, double)>::_peel_connect_by_name (this, "enter", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_leave (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropTarget, void ()>::_peel_connect_by_name (this, "leave", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_leave (HandlerObject *object, void (HandlerObject::*handler_method) (DropTarget *), bool after = false) noexcept
  {
    return Signal<DropTarget, void ()>::_peel_connect_by_name (this, "leave", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_motion (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropTarget, Gdk::Drag::Action (double, double)>::_peel_connect_by_name (this, "motion", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_motion (HandlerObject *object, Gdk::Drag::Action (HandlerObject::*handler_method) (DropTarget *, double, double), bool after = false) noexcept
  {
    return Signal<DropTarget, Gdk::Drag::Action (double, double)>::_peel_connect_by_name (this, "motion", object, handler_method, after);
  }

  static peel::Property<Gdk::Drag::Action>
  prop_actions ()
  {
    return peel::Property<Gdk::Drag::Action> { "actions" };
  }

  static peel::Property<Gdk::Drop>
  prop_current_drop ()
  {
    return peel::Property<Gdk::Drop> { "current-drop" };
  }

  static peel::Property<Gdk::Drop>
  prop_drop ()
  {
    return peel::Property<Gdk::Drop> { "drop" };
  }

  static peel::Property<Gdk::ContentFormats>
  prop_formats ()
  {
    return peel::Property<Gdk::ContentFormats> { "formats" };
  }

  static peel::Property<bool>
  prop_preload ()
  {
    return peel::Property<bool> { "preload" };
  }

  static peel::Property<GObject::Value>
  prop_value ()
  {
    return peel::Property<GObject::Value> { "value" };
  }

  class Class : public EventController::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class DropTarget */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
