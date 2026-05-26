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
#include <peel/Gtk/Accessible.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Display;
} /* namespace Gdk */

namespace Gtk
{
class ATContext;
class /* interface */ Accessible;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ATContext> ()
{
  return gtk_at_context_get_type ();
}


namespace Gtk
{
class ATContext : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ATContext () = delete;
  ATContext (const ATContext &) = delete;
  ATContext (ATContext &&) = delete;
  ATContext &
  operator = (const ATContext &) = delete;
  ATContext &
  operator = (ATContext &&) = delete;
  ~ATContext () = delete;
public:

  peel_nonnull_args (2, 3)
  static peel::RefPtr<ATContext>
  create (Accessible::Role accessible_role, Accessible *accessible, Gdk::Display *display) noexcept
  {
    ::GtkAccessibleRole _peel_accessible_role = static_cast<::GtkAccessibleRole> (accessible_role);
    ::GtkAccessible *_peel_accessible = reinterpret_cast<::GtkAccessible *> (accessible);
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    ::GtkATContext *_peel_return = gtk_at_context_create (_peel_accessible_role, _peel_accessible, _peel_display);
    return peel::RefPtr<ATContext>::adopt_ref (reinterpret_cast<ATContext *> (_peel_return));
  }

  peel_returns_nonnull
  Accessible *
  get_accessible () noexcept
  {
    ::GtkATContext *_peel_this = reinterpret_cast<::GtkATContext *> (this);
    ::GtkAccessible *_peel_return = gtk_at_context_get_accessible (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Accessible *> (_peel_return);
  }

  Accessible::Role
  get_accessible_role () noexcept
  {
    ::GtkATContext *_peel_this = reinterpret_cast<::GtkATContext *> (this);
    ::GtkAccessibleRole _peel_return = gtk_at_context_get_accessible_role (_peel_this);
    return static_cast<Accessible::Role> (_peel_return);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_state_change (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ATContext, void ()>::_peel_connect_by_name (this, "state-change", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_state_change (HandlerObject *object, void (HandlerObject::*handler_method) (ATContext *), bool after = false) noexcept
  {
    return Signal<ATContext, void ()>::_peel_connect_by_name (this, "state-change", object, handler_method, after);
  }

  static peel::Property<Accessible>
  prop_accessible ()
  {
    return peel::Property<Accessible> { "accessible" };
  }

  static peel::Property<Accessible::Role>
  prop_accessible_role ()
  {
    return peel::Property<Accessible::Role> { "accessible-role" };
  }

  static peel::Property<Gdk::Display>
  prop_display ()
  {
    return peel::Property<Gdk::Display> { "display" };
  }

  static peel::Property<bool>
  prop_realized ()
  {
    return peel::Property<bool> { "realized" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ATContext */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
