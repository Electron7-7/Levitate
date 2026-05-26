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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
class Paned;
enum class ScrollType : std::underlying_type<::GtkScrollType>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Paned> ()
{
  return gtk_paned_get_type ();
}


namespace Gtk
{
class Paned : public Widget
/* non-derivable */
/* implements Accessible, AccessibleRange, Buildable, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Paned () = delete;
  Paned (const Paned &) = delete;
  Paned (Paned &&) = delete;
  Paned &
  operator = (const Paned &) = delete;
  Paned &
  operator = (Paned &&) = delete;
  ~Paned () = delete;
public:

  static peel::FloatPtr<Paned>
  create (Orientation orientation) noexcept
  {
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    ::GtkWidget *_peel_return = gtk_paned_new (_peel_orientation);
    peel_assume (_peel_return);
    return peel::FloatPtr<Paned> (reinterpret_cast<Paned *> (_peel_return));
  }

  Widget *
  get_end_child () noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    ::GtkWidget *_peel_return = gtk_paned_get_end_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  int
  get_position () noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    return gtk_paned_get_position (_peel_this);
  }

  bool
  get_resize_end_child () noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    gboolean _peel_return = gtk_paned_get_resize_end_child (_peel_this);
    return !!_peel_return;
  }

  bool
  get_resize_start_child () noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    gboolean _peel_return = gtk_paned_get_resize_start_child (_peel_this);
    return !!_peel_return;
  }

  bool
  get_shrink_end_child () noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    gboolean _peel_return = gtk_paned_get_shrink_end_child (_peel_this);
    return !!_peel_return;
  }

  bool
  get_shrink_start_child () noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    gboolean _peel_return = gtk_paned_get_shrink_start_child (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_start_child () noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    ::GtkWidget *_peel_return = gtk_paned_get_start_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_wide_handle () noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    gboolean _peel_return = gtk_paned_get_wide_handle (_peel_this);
    return !!_peel_return;
  }

  void
  set_end_child (Widget *child) noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_paned_set_end_child (_peel_this, _peel_child);
  }

  void
  set_position (int position) noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    gtk_paned_set_position (_peel_this, position);
  }

  void
  set_resize_end_child (bool resize) noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    gboolean _peel_resize = static_cast<gboolean> (resize);
    gtk_paned_set_resize_end_child (_peel_this, _peel_resize);
  }

  void
  set_resize_start_child (bool resize) noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    gboolean _peel_resize = static_cast<gboolean> (resize);
    gtk_paned_set_resize_start_child (_peel_this, _peel_resize);
  }

  void
  set_shrink_end_child (bool resize) noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    gboolean _peel_resize = static_cast<gboolean> (resize);
    gtk_paned_set_shrink_end_child (_peel_this, _peel_resize);
  }

  void
  set_shrink_start_child (bool resize) noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    gboolean _peel_resize = static_cast<gboolean> (resize);
    gtk_paned_set_shrink_start_child (_peel_this, _peel_resize);
  }

  void
  set_start_child (Widget *child) noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_paned_set_start_child (_peel_this, _peel_child);
  }

  void
  set_wide_handle (bool wide) noexcept
  {
    ::GtkPaned *_peel_this = reinterpret_cast<::GtkPaned *> (this);
    gboolean _peel_wide = static_cast<gboolean> (wide);
    gtk_paned_set_wide_handle (_peel_this, _peel_wide);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_accept_position (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Paned, bool ()>::_peel_connect_by_name (this, "accept-position", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_accept_position (HandlerObject *object, bool (HandlerObject::*handler_method) (Paned *), bool after = false) noexcept
  {
    return Signal<Paned, bool ()>::_peel_connect_by_name (this, "accept-position", object, handler_method, after);
  }

  bool
  emit_accept_position () noexcept
  {
    return Signal<Paned, bool ()>::_peel_emit_by_name (this, "accept-position");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_cancel_position (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Paned, bool ()>::_peel_connect_by_name (this, "cancel-position", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_cancel_position (HandlerObject *object, bool (HandlerObject::*handler_method) (Paned *), bool after = false) noexcept
  {
    return Signal<Paned, bool ()>::_peel_connect_by_name (this, "cancel-position", object, handler_method, after);
  }

  bool
  emit_cancel_position () noexcept
  {
    return Signal<Paned, bool ()>::_peel_emit_by_name (this, "cancel-position");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_cycle_child_focus (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Paned, bool (bool)>::_peel_connect_by_name (this, "cycle-child-focus", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_cycle_child_focus (HandlerObject *object, bool (HandlerObject::*handler_method) (Paned *, bool), bool after = false) noexcept
  {
    return Signal<Paned, bool (bool)>::_peel_connect_by_name (this, "cycle-child-focus", object, handler_method, after);
  }

  bool
  emit_cycle_child_focus (bool reversed) noexcept
  {
    return Signal<Paned, bool (bool)>::_peel_emit_by_name (this, "cycle-child-focus", reversed);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_cycle_handle_focus (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Paned, bool (bool)>::_peel_connect_by_name (this, "cycle-handle-focus", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_cycle_handle_focus (HandlerObject *object, bool (HandlerObject::*handler_method) (Paned *, bool), bool after = false) noexcept
  {
    return Signal<Paned, bool (bool)>::_peel_connect_by_name (this, "cycle-handle-focus", object, handler_method, after);
  }

  bool
  emit_cycle_handle_focus (bool reversed) noexcept
  {
    return Signal<Paned, bool (bool)>::_peel_emit_by_name (this, "cycle-handle-focus", reversed);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_handle (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Paned, bool (ScrollType)>::_peel_connect_by_name (this, "move-handle", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_handle (HandlerObject *object, bool (HandlerObject::*handler_method) (Paned *, ScrollType), bool after = false) noexcept
  {
    return Signal<Paned, bool (ScrollType)>::_peel_connect_by_name (this, "move-handle", object, handler_method, after);
  }

  bool
  emit_move_handle (ScrollType scroll_type) noexcept
  {
    return Signal<Paned, bool (ScrollType)>::_peel_emit_by_name (this, "move-handle", scroll_type);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_toggle_handle_focus (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Paned, bool ()>::_peel_connect_by_name (this, "toggle-handle-focus", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_toggle_handle_focus (HandlerObject *object, bool (HandlerObject::*handler_method) (Paned *), bool after = false) noexcept
  {
    return Signal<Paned, bool ()>::_peel_connect_by_name (this, "toggle-handle-focus", object, handler_method, after);
  }

  bool
  emit_toggle_handle_focus () noexcept
  {
    return Signal<Paned, bool ()>::_peel_emit_by_name (this, "toggle-handle-focus");
  }

  static peel::Property<Widget>
  prop_end_child ()
  {
    return peel::Property<Widget> { "end-child" };
  }

  static peel::Property<int>
  prop_max_position ()
  {
    return peel::Property<int> { "max-position" };
  }

  static peel::Property<int>
  prop_min_position ()
  {
    return peel::Property<int> { "min-position" };
  }

  static peel::Property<int>
  prop_position ()
  {
    return peel::Property<int> { "position" };
  }

  static peel::Property<bool>
  prop_position_set ()
  {
    return peel::Property<bool> { "position-set" };
  }

  static peel::Property<bool>
  prop_resize_end_child ()
  {
    return peel::Property<bool> { "resize-end-child" };
  }

  static peel::Property<bool>
  prop_resize_start_child ()
  {
    return peel::Property<bool> { "resize-start-child" };
  }

  static peel::Property<bool>
  prop_shrink_end_child ()
  {
    return peel::Property<bool> { "shrink-end-child" };
  }

  static peel::Property<bool>
  prop_shrink_start_child ()
  {
    return peel::Property<bool> { "shrink-start-child" };
  }

  static peel::Property<Widget>
  prop_start_child ()
  {
    return peel::Property<Widget> { "start-child" };
  }

  static peel::Property<bool>
  prop_wide_handle ()
  {
    return peel::Property<bool> { "wide-handle" };
  }
}; /* class Paned */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
