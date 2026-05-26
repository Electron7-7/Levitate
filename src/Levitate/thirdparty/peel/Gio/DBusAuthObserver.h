#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class Credentials;
class DBusAuthObserver;
class IOStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusAuthObserver> ()
{
  return g_dbus_auth_observer_get_type ();
}


namespace Gio
{
class DBusAuthObserver : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusAuthObserver () = delete;
  DBusAuthObserver (const DBusAuthObserver &) = delete;
  DBusAuthObserver (DBusAuthObserver &&) = delete;
  DBusAuthObserver &
  operator = (const DBusAuthObserver &) = delete;
  DBusAuthObserver &
  operator = (DBusAuthObserver &&) = delete;
  ~DBusAuthObserver () = delete;
public:

  static peel::RefPtr<DBusAuthObserver>
  create () noexcept
  {
    ::GDBusAuthObserver *_peel_return = g_dbus_auth_observer_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<DBusAuthObserver>::adopt_ref (reinterpret_cast<DBusAuthObserver *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  allow_mechanism (const char *mechanism) noexcept
  {
    ::GDBusAuthObserver *_peel_this = reinterpret_cast<::GDBusAuthObserver *> (this);
    gboolean _peel_return = g_dbus_auth_observer_allow_mechanism (_peel_this, mechanism);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  authorize_authenticated_peer (IOStream *stream, Credentials *credentials) noexcept
  {
    ::GDBusAuthObserver *_peel_this = reinterpret_cast<::GDBusAuthObserver *> (this);
    ::GIOStream *_peel_stream = reinterpret_cast<::GIOStream *> (stream);
    ::GCredentials *_peel_credentials = reinterpret_cast<::GCredentials *> (credentials);
    gboolean _peel_return = g_dbus_auth_observer_authorize_authenticated_peer (_peel_this, _peel_stream, _peel_credentials);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_allow_mechanism (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusAuthObserver, bool (const char *)>::_peel_connect_by_name (this, "allow-mechanism", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_allow_mechanism (HandlerObject *object, bool (HandlerObject::*handler_method) (DBusAuthObserver *, const char *), bool after = false) noexcept
  {
    return Signal<DBusAuthObserver, bool (const char *)>::_peel_connect_by_name (this, "allow-mechanism", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_authorize_authenticated_peer (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusAuthObserver, bool (IOStream *, Credentials *)>::_peel_connect_by_name (this, "authorize-authenticated-peer", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_authorize_authenticated_peer (HandlerObject *object, bool (HandlerObject::*handler_method) (DBusAuthObserver *, IOStream *, Credentials *), bool after = false) noexcept
  {
    return Signal<DBusAuthObserver, bool (IOStream *, Credentials *)>::_peel_connect_by_name (this, "authorize-authenticated-peer", object, handler_method, after);
  }
}; /* class DBusAuthObserver */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
