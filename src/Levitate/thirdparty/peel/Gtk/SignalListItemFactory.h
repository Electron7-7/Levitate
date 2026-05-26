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
#include <peel/Gtk/ListItemFactory.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gtk
{
class SignalListItemFactory;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SignalListItemFactory> ()
{
  return gtk_signal_list_item_factory_get_type ();
}


namespace Gtk
{
class SignalListItemFactory : public ListItemFactory
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SignalListItemFactory () = delete;
  SignalListItemFactory (const SignalListItemFactory &) = delete;
  SignalListItemFactory (SignalListItemFactory &&) = delete;
  SignalListItemFactory &
  operator = (const SignalListItemFactory &) = delete;
  SignalListItemFactory &
  operator = (SignalListItemFactory &&) = delete;
  ~SignalListItemFactory () = delete;
public:

  static peel::RefPtr<SignalListItemFactory>
  create () noexcept
  {
    ::GtkListItemFactory *_peel_return = gtk_signal_list_item_factory_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<SignalListItemFactory>::adopt_ref (reinterpret_cast<SignalListItemFactory *> (_peel_return));
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_bind (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SignalListItemFactory, void (GObject::Object *)>::_peel_connect_by_name (this, "bind", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_bind (HandlerObject *object, void (HandlerObject::*handler_method) (SignalListItemFactory *, GObject::Object *), bool after = false) noexcept
  {
    return Signal<SignalListItemFactory, void (GObject::Object *)>::_peel_connect_by_name (this, "bind", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_setup (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SignalListItemFactory, void (GObject::Object *)>::_peel_connect_by_name (this, "setup", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_setup (HandlerObject *object, void (HandlerObject::*handler_method) (SignalListItemFactory *, GObject::Object *), bool after = false) noexcept
  {
    return Signal<SignalListItemFactory, void (GObject::Object *)>::_peel_connect_by_name (this, "setup", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_teardown (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SignalListItemFactory, void (GObject::Object *)>::_peel_connect_by_name (this, "teardown", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_teardown (HandlerObject *object, void (HandlerObject::*handler_method) (SignalListItemFactory *, GObject::Object *), bool after = false) noexcept
  {
    return Signal<SignalListItemFactory, void (GObject::Object *)>::_peel_connect_by_name (this, "teardown", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_unbind (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SignalListItemFactory, void (GObject::Object *)>::_peel_connect_by_name (this, "unbind", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_unbind (HandlerObject *object, void (HandlerObject::*handler_method) (SignalListItemFactory *, GObject::Object *), bool after = false) noexcept
  {
    return Signal<SignalListItemFactory, void (GObject::Object *)>::_peel_connect_by_name (this, "unbind", object, handler_method, after);
  }

  class Class : public ListItemFactory::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class SignalListItemFactory */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
