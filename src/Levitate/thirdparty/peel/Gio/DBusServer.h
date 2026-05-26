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
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class Cancellable;
class DBusAuthObserver;
class DBusConnection;
class DBusServer;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusServer> ()
{
  return g_dbus_server_get_type ();
}


namespace Gio
{
class DBusServer : public GObject::Object
/* non-derivable */
/* implements Initable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusServer () = delete;
  DBusServer (const DBusServer &) = delete;
  DBusServer (DBusServer &&) = delete;
  DBusServer &
  operator = (const DBusServer &) = delete;
  DBusServer &
  operator = (DBusServer &&) = delete;
  ~DBusServer () = delete;
public:
  enum class Flags : std::underlying_type<::GDBusServerFlags>::type;

  peel_nonnull_args (1, 3)
  static peel::RefPtr<DBusServer>
  create_sync (const char *address, DBusServer::Flags flags, const char *guid, DBusAuthObserver *observer, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusServerFlags _peel_flags = static_cast<::GDBusServerFlags> (flags);
    ::GDBusAuthObserver *_peel_observer = reinterpret_cast<::GDBusAuthObserver *> (observer);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GDBusServer *_peel_return = g_dbus_server_new_sync (address, _peel_flags, guid, _peel_observer, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusServer>::adopt_ref (reinterpret_cast<DBusServer *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_client_address () noexcept
  {
    ::GDBusServer *_peel_this = reinterpret_cast<::GDBusServer *> (this);
    return g_dbus_server_get_client_address (_peel_this);
  }

  DBusServer::Flags
  get_flags () noexcept
  {
    ::GDBusServer *_peel_this = reinterpret_cast<::GDBusServer *> (this);
    ::GDBusServerFlags _peel_return = g_dbus_server_get_flags (_peel_this);
    return static_cast<DBusServer::Flags> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_guid () noexcept
  {
    ::GDBusServer *_peel_this = reinterpret_cast<::GDBusServer *> (this);
    return g_dbus_server_get_guid (_peel_this);
  }

  bool
  is_active () noexcept
  {
    ::GDBusServer *_peel_this = reinterpret_cast<::GDBusServer *> (this);
    gboolean _peel_return = g_dbus_server_is_active (_peel_this);
    return !!_peel_return;
  }

  void
  start () noexcept
  {
    ::GDBusServer *_peel_this = reinterpret_cast<::GDBusServer *> (this);
    g_dbus_server_start (_peel_this);
  }

  void
  stop () noexcept
  {
    ::GDBusServer *_peel_this = reinterpret_cast<::GDBusServer *> (this);
    g_dbus_server_stop (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_new_connection (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusServer, bool (DBusConnection *)>::_peel_connect_by_name (this, "new-connection", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_new_connection (HandlerObject *object, bool (HandlerObject::*handler_method) (DBusServer *, DBusConnection *), bool after = false) noexcept
  {
    return Signal<DBusServer, bool (DBusConnection *)>::_peel_connect_by_name (this, "new-connection", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_active ()
  {
    return peel::Property<bool> { "active" };
  }

  static peel::Property<const char *>
  prop_address ()
  {
    return peel::Property<const char *> { "address" };
  }

  static peel::Property<DBusAuthObserver>
  prop_authentication_observer ()
  {
    return peel::Property<DBusAuthObserver> { "authentication-observer" };
  }

  static peel::Property<const char *>
  prop_client_address ()
  {
    return peel::Property<const char *> { "client-address" };
  }

  static peel::Property<DBusServer::Flags>
  prop_flags ()
  {
    return peel::Property<DBusServer::Flags> { "flags" };
  }

  static peel::Property<const char *>
  prop_guid ()
  {
    return peel::Property<const char *> { "guid" };
  }
}; /* class DBusServer */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
