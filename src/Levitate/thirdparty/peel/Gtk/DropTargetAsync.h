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
namespace Gdk
{
class /* record */ ContentFormats;
class Drop;
} /* namespace Gdk */

namespace Gtk
{
class DropTargetAsync;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::DropTargetAsync> ()
{
  return gtk_drop_target_async_get_type ();
}


namespace Gtk
{
class DropTargetAsync : public EventController
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DropTargetAsync () = delete;
  DropTargetAsync (const DropTargetAsync &) = delete;
  DropTargetAsync (DropTargetAsync &&) = delete;
  DropTargetAsync &
  operator = (const DropTargetAsync &) = delete;
  DropTargetAsync &
  operator = (DropTargetAsync &&) = delete;
  ~DropTargetAsync () = delete;
public:

  static peel::RefPtr<DropTargetAsync>
  create (peel::RefPtr<Gdk::ContentFormats> formats, Gdk::Drag::Action actions) noexcept
  {
    ::GdkContentFormats *_peel_formats = reinterpret_cast<::GdkContentFormats *> (std::move (formats).release_ref ());
    ::GdkDragAction _peel_actions = static_cast<::GdkDragAction> (actions);
    ::GtkDropTargetAsync *_peel_return = gtk_drop_target_async_new (_peel_formats, _peel_actions);
    peel_assume (_peel_return);
    return peel::RefPtr<DropTargetAsync>::adopt_ref (reinterpret_cast<DropTargetAsync *> (_peel_return));
  }

  Gdk::Drag::Action
  get_actions () noexcept
  {
    ::GtkDropTargetAsync *_peel_this = reinterpret_cast<::GtkDropTargetAsync *> (this);
    ::GdkDragAction _peel_return = gtk_drop_target_async_get_actions (_peel_this);
    return static_cast<Gdk::Drag::Action> (_peel_return);
  }

  Gdk::ContentFormats *
  get_formats () noexcept
  {
    ::GtkDropTargetAsync *_peel_this = reinterpret_cast<::GtkDropTargetAsync *> (this);
    ::GdkContentFormats *_peel_return = gtk_drop_target_async_get_formats (_peel_this);
    return reinterpret_cast<Gdk::ContentFormats *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  reject_drop (Gdk::Drop *drop) noexcept
  {
    ::GtkDropTargetAsync *_peel_this = reinterpret_cast<::GtkDropTargetAsync *> (this);
    ::GdkDrop *_peel_drop = reinterpret_cast<::GdkDrop *> (drop);
    gtk_drop_target_async_reject_drop (_peel_this, _peel_drop);
  }

  void
  set_actions (Gdk::Drag::Action actions) noexcept
  {
    ::GtkDropTargetAsync *_peel_this = reinterpret_cast<::GtkDropTargetAsync *> (this);
    ::GdkDragAction _peel_actions = static_cast<::GdkDragAction> (actions);
    gtk_drop_target_async_set_actions (_peel_this, _peel_actions);
  }

  peel_arg_in (2)
  void
  set_formats (Gdk::ContentFormats *formats) noexcept
  {
    ::GtkDropTargetAsync *_peel_this = reinterpret_cast<::GtkDropTargetAsync *> (this);
    ::GdkContentFormats *_peel_formats = reinterpret_cast<::GdkContentFormats *> (formats);
    gtk_drop_target_async_set_formats (_peel_this, _peel_formats);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_accept (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropTargetAsync, bool (Gdk::Drop *)>::_peel_connect_by_name (this, "accept", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_accept (HandlerObject *object, bool (HandlerObject::*handler_method) (DropTargetAsync *, Gdk::Drop *), bool after = false) noexcept
  {
    return Signal<DropTargetAsync, bool (Gdk::Drop *)>::_peel_connect_by_name (this, "accept", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drag_enter (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropTargetAsync, Gdk::Drag::Action (Gdk::Drop *, double, double)>::_peel_connect_by_name (this, "drag-enter", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drag_enter (HandlerObject *object, Gdk::Drag::Action (HandlerObject::*handler_method) (DropTargetAsync *, Gdk::Drop *, double, double), bool after = false) noexcept
  {
    return Signal<DropTargetAsync, Gdk::Drag::Action (Gdk::Drop *, double, double)>::_peel_connect_by_name (this, "drag-enter", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drag_leave (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropTargetAsync, void (Gdk::Drop *)>::_peel_connect_by_name (this, "drag-leave", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drag_leave (HandlerObject *object, void (HandlerObject::*handler_method) (DropTargetAsync *, Gdk::Drop *), bool after = false) noexcept
  {
    return Signal<DropTargetAsync, void (Gdk::Drop *)>::_peel_connect_by_name (this, "drag-leave", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drag_motion (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropTargetAsync, Gdk::Drag::Action (Gdk::Drop *, double, double)>::_peel_connect_by_name (this, "drag-motion", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drag_motion (HandlerObject *object, Gdk::Drag::Action (HandlerObject::*handler_method) (DropTargetAsync *, Gdk::Drop *, double, double), bool after = false) noexcept
  {
    return Signal<DropTargetAsync, Gdk::Drag::Action (Gdk::Drop *, double, double)>::_peel_connect_by_name (this, "drag-motion", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drop (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DropTargetAsync, bool (Gdk::Drop *, double, double)>::_peel_connect_by_name (this, "drop", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drop (HandlerObject *object, bool (HandlerObject::*handler_method) (DropTargetAsync *, Gdk::Drop *, double, double), bool after = false) noexcept
  {
    return Signal<DropTargetAsync, bool (Gdk::Drop *, double, double)>::_peel_connect_by_name (this, "drop", object, handler_method, after);
  }

  static peel::Property<Gdk::Drag::Action>
  prop_actions ()
  {
    return peel::Property<Gdk::Drag::Action> { "actions" };
  }

  static peel::Property<Gdk::ContentFormats>
  prop_formats ()
  {
    return peel::Property<Gdk::ContentFormats> { "formats" };
  }

  class Class : public EventController::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class DropTargetAsync */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/ContentFormats.h>
