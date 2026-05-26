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
#include <peel/Gtk/Actionable.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Switch;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Switch> ()
{
  return gtk_switch_get_type ();
}


namespace Gtk
{
class Switch : public Actionable
/* non-derivable */
/* extends Widget */
/* implements Accessible, Actionable, Buildable, Constraint::Target */
{
private:
  using Actionable::get_default_direction;
  using Actionable::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Switch () = delete;
  Switch (const Switch &) = delete;
  Switch (Switch &&) = delete;
  Switch &
  operator = (const Switch &) = delete;
  Switch &
  operator = (Switch &&) = delete;
  ~Switch () = delete;
public:

  static peel::FloatPtr<Switch>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_switch_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Switch> (reinterpret_cast<Switch *> (_peel_return));
  }

  bool
  get_active () noexcept
  {
    ::GtkSwitch *_peel_this = reinterpret_cast<::GtkSwitch *> (this);
    gboolean _peel_return = gtk_switch_get_active (_peel_this);
    return !!_peel_return;
  }

  bool
  get_state () noexcept
  {
    ::GtkSwitch *_peel_this = reinterpret_cast<::GtkSwitch *> (this);
    gboolean _peel_return = gtk_switch_get_state (_peel_this);
    return !!_peel_return;
  }

  void
  set_active (bool is_active) noexcept
  {
    ::GtkSwitch *_peel_this = reinterpret_cast<::GtkSwitch *> (this);
    gboolean _peel_is_active = static_cast<gboolean> (is_active);
    gtk_switch_set_active (_peel_this, _peel_is_active);
  }

  void
  set_state (bool state) noexcept
  {
    ::GtkSwitch *_peel_this = reinterpret_cast<::GtkSwitch *> (this);
    gboolean _peel_state = static_cast<gboolean> (state);
    gtk_switch_set_state (_peel_this, _peel_state);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Switch, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (Switch *), bool after = false) noexcept
  {
    return Signal<Switch, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<Switch, void ()>::_peel_emit_by_name (this, "activate");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_state_set (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Switch, bool (bool)>::_peel_connect_by_name (this, "state-set", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_state_set (HandlerObject *object, bool (HandlerObject::*handler_method) (Switch *, bool), bool after = false) noexcept
  {
    return Signal<Switch, bool (bool)>::_peel_connect_by_name (this, "state-set", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_active ()
  {
    return peel::Property<bool> { "active" };
  }

  static peel::Property<bool>
  prop_state ()
  {
    return peel::Property<bool> { "state" };
  }
}; /* class Switch */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
