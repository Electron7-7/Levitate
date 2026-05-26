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
#include <peel/Gtk/GestureSingle.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class ContentProvider;
class Drag;
class /* interface */ Paintable;
} /* namespace Gdk */

namespace Gtk
{
class DragSource;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::DragSource> ()
{
  return gtk_drag_source_get_type ();
}


namespace Gtk
{
class DragSource : public GestureSingle
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DragSource () = delete;
  DragSource (const DragSource &) = delete;
  DragSource (DragSource &&) = delete;
  DragSource &
  operator = (const DragSource &) = delete;
  DragSource &
  operator = (DragSource &&) = delete;
  ~DragSource () = delete;
public:

  static peel::RefPtr<DragSource>
  create () noexcept
  {
    ::GtkDragSource *_peel_return = gtk_drag_source_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<DragSource>::adopt_ref (reinterpret_cast<DragSource *> (_peel_return));
  }

  void
  drag_cancel () noexcept
  {
    ::GtkDragSource *_peel_this = reinterpret_cast<::GtkDragSource *> (this);
    gtk_drag_source_drag_cancel (_peel_this);
  }

  Gdk::Drag::Action
  get_actions () noexcept
  {
    ::GtkDragSource *_peel_this = reinterpret_cast<::GtkDragSource *> (this);
    ::GdkDragAction _peel_return = gtk_drag_source_get_actions (_peel_this);
    return static_cast<Gdk::Drag::Action> (_peel_return);
  }

  Gdk::ContentProvider *
  get_content () noexcept
  {
    ::GtkDragSource *_peel_this = reinterpret_cast<::GtkDragSource *> (this);
    ::GdkContentProvider *_peel_return = gtk_drag_source_get_content (_peel_this);
    return reinterpret_cast<Gdk::ContentProvider *> (_peel_return);
  }

  Gdk::Drag *
  get_drag () noexcept
  {
    ::GtkDragSource *_peel_this = reinterpret_cast<::GtkDragSource *> (this);
    ::GdkDrag *_peel_return = gtk_drag_source_get_drag (_peel_this);
    return reinterpret_cast<Gdk::Drag *> (_peel_return);
  }

  void
  set_actions (Gdk::Drag::Action actions) noexcept
  {
    ::GtkDragSource *_peel_this = reinterpret_cast<::GtkDragSource *> (this);
    ::GdkDragAction _peel_actions = static_cast<::GdkDragAction> (actions);
    gtk_drag_source_set_actions (_peel_this, _peel_actions);
  }

  void
  set_content (Gdk::ContentProvider *content) noexcept
  {
    ::GtkDragSource *_peel_this = reinterpret_cast<::GtkDragSource *> (this);
    ::GdkContentProvider *_peel_content = reinterpret_cast<::GdkContentProvider *> (content);
    gtk_drag_source_set_content (_peel_this, _peel_content);
  }

  void
  set_icon (Gdk::Paintable *paintable, int hot_x, int hot_y) noexcept
  {
    ::GtkDragSource *_peel_this = reinterpret_cast<::GtkDragSource *> (this);
    ::GdkPaintable *_peel_paintable = reinterpret_cast<::GdkPaintable *> (paintable);
    gtk_drag_source_set_icon (_peel_this, _peel_paintable, hot_x, hot_y);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drag_begin (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DragSource, void (Gdk::Drag *)>::_peel_connect_by_name (this, "drag-begin", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drag_begin (HandlerObject *object, void (HandlerObject::*handler_method) (DragSource *, Gdk::Drag *), bool after = false) noexcept
  {
    return Signal<DragSource, void (Gdk::Drag *)>::_peel_connect_by_name (this, "drag-begin", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drag_cancel (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DragSource, bool (Gdk::Drag *, Gdk::Drag::CancelReason)>::_peel_connect_by_name (this, "drag-cancel", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drag_cancel (HandlerObject *object, bool (HandlerObject::*handler_method) (DragSource *, Gdk::Drag *, Gdk::Drag::CancelReason), bool after = false) noexcept
  {
    return Signal<DragSource, bool (Gdk::Drag *, Gdk::Drag::CancelReason)>::_peel_connect_by_name (this, "drag-cancel", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drag_end (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DragSource, void (Gdk::Drag *, bool)>::_peel_connect_by_name (this, "drag-end", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drag_end (HandlerObject *object, void (HandlerObject::*handler_method) (DragSource *, Gdk::Drag *, bool), bool after = false) noexcept
  {
    return Signal<DragSource, void (Gdk::Drag *, bool)>::_peel_connect_by_name (this, "drag-end", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_prepare (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DragSource, peel::RefPtr<Gdk::ContentProvider> (double, double)>::_peel_connect_by_name (this, "prepare", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_prepare (HandlerObject *object, peel::RefPtr<Gdk::ContentProvider> (HandlerObject::*handler_method) (DragSource *, double, double), bool after = false) noexcept
  {
    return Signal<DragSource, peel::RefPtr<Gdk::ContentProvider> (double, double)>::_peel_connect_by_name (this, "prepare", object, handler_method, after);
  }

  static peel::Property<Gdk::Drag::Action>
  prop_actions ()
  {
    return peel::Property<Gdk::Drag::Action> { "actions" };
  }

  static peel::Property<Gdk::ContentProvider>
  prop_content ()
  {
    return peel::Property<Gdk::ContentProvider> { "content" };
  }

  class Class : public GestureSingle::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class DragSource */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/ContentProvider.h>
