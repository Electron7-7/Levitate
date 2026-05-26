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
#include <peel/Gio/DBusObjectManager.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class DBusConnection;
class DBusObjectManagerServer;
class DBusObjectSkeleton;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusObjectManagerServer> ()
{
  return g_dbus_object_manager_server_get_type ();
}


namespace Gio
{
class DBusObjectManagerServer : public DBusObjectManager
/* extends GObject::Object */
/* implements DBusObjectManager */
{
private:
  unsigned char _placeholder[sizeof (::GDBusObjectManagerServer) - sizeof (DBusObjectManager)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusObjectManagerServer () = delete;
  DBusObjectManagerServer (const DBusObjectManagerServer &) = delete;
  DBusObjectManagerServer (DBusObjectManagerServer &&) = delete;
  DBusObjectManagerServer &
  operator = (const DBusObjectManagerServer &) = delete;
  DBusObjectManagerServer &
  operator = (DBusObjectManagerServer &&) = delete;
protected:
  ~DBusObjectManagerServer () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<DBusObjectManagerServer>
  create (const char *object_path) noexcept
  {
    ::GDBusObjectManagerServer *_peel_return = g_dbus_object_manager_server_new (object_path);
    peel_assume (_peel_return);
    return peel::RefPtr<DBusObjectManagerServer>::adopt_ref (reinterpret_cast<DBusObjectManagerServer *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  export_ (DBusObjectSkeleton *object) noexcept
  {
    ::GDBusObjectManagerServer *_peel_this = reinterpret_cast<::GDBusObjectManagerServer *> (this);
    ::GDBusObjectSkeleton *_peel_object = reinterpret_cast<::GDBusObjectSkeleton *> (object);
    g_dbus_object_manager_server_export (_peel_this, _peel_object);
  }

  peel_nonnull_args (2)
  void
  export_uniquely (DBusObjectSkeleton *object) noexcept
  {
    ::GDBusObjectManagerServer *_peel_this = reinterpret_cast<::GDBusObjectManagerServer *> (this);
    ::GDBusObjectSkeleton *_peel_object = reinterpret_cast<::GDBusObjectSkeleton *> (object);
    g_dbus_object_manager_server_export_uniquely (_peel_this, _peel_object);
  }

  peel::RefPtr<DBusConnection>
  get_connection () noexcept
  {
    ::GDBusObjectManagerServer *_peel_this = reinterpret_cast<::GDBusObjectManagerServer *> (this);
    ::GDBusConnection *_peel_return = g_dbus_object_manager_server_get_connection (_peel_this);
    return peel::RefPtr<DBusConnection>::adopt_ref (reinterpret_cast<DBusConnection *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  is_exported (DBusObjectSkeleton *object) noexcept
  {
    ::GDBusObjectManagerServer *_peel_this = reinterpret_cast<::GDBusObjectManagerServer *> (this);
    ::GDBusObjectSkeleton *_peel_object = reinterpret_cast<::GDBusObjectSkeleton *> (object);
    gboolean _peel_return = g_dbus_object_manager_server_is_exported (_peel_this, _peel_object);
    return !!_peel_return;
  }

  void
  set_connection (DBusConnection *connection) noexcept
  {
    ::GDBusObjectManagerServer *_peel_this = reinterpret_cast<::GDBusObjectManagerServer *> (this);
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    g_dbus_object_manager_server_set_connection (_peel_this, _peel_connection);
  }

  peel_nonnull_args (2)
  bool
  unexport (const char *object_path) noexcept
  {
    ::GDBusObjectManagerServer *_peel_this = reinterpret_cast<::GDBusObjectManagerServer *> (this);
    gboolean _peel_return = g_dbus_object_manager_server_unexport (_peel_this, object_path);
    return !!_peel_return;
  }

  static peel::Property<DBusConnection>
  prop_connection ()
  {
    return peel::Property<DBusConnection> { "connection" };
  }

  static peel::Property<const char *>
  prop_object_path ()
  {
    return peel::Property<const char *> { "object-path" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<DBusObjectManagerServer> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GDBusObjectManagerServerClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GDBusObjectManagerServerClass),
                 "DBusObjectManagerServer::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GDBusObjectManagerServerClass),
                 "DBusObjectManagerServer::Class align mismatch");
}; /* class DBusObjectManagerServer */

static_assert (sizeof (DBusObjectManagerServer) == sizeof (::GDBusObjectManagerServer),
               "DBusObjectManagerServer size mismatch");
static_assert (alignof (DBusObjectManagerServer) == alignof (::GDBusObjectManagerServer),
               "DBusObjectManagerServer align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/Gio/DBusConnection.h>
