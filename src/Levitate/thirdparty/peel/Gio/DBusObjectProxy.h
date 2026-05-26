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
#include <peel/Gio/DBusObject.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class DBusConnection;
class DBusObjectProxy;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusObjectProxy> ()
{
  return g_dbus_object_proxy_get_type ();
}


namespace Gio
{
class DBusObjectProxy : public DBusObject
/* extends GObject::Object */
/* implements DBusObject */
{
private:
  unsigned char _placeholder[sizeof (::GDBusObjectProxy) - sizeof (DBusObject)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusObjectProxy () = delete;
  DBusObjectProxy (const DBusObjectProxy &) = delete;
  DBusObjectProxy (DBusObjectProxy &&) = delete;
  DBusObjectProxy &
  operator = (const DBusObjectProxy &) = delete;
  DBusObjectProxy &
  operator = (DBusObjectProxy &&) = delete;
protected:
  ~DBusObjectProxy () = default;
public:

  peel_nonnull_args (1, 2)
  static peel::RefPtr<DBusObjectProxy>
  create (DBusConnection *connection, const char *object_path) noexcept
  {
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    ::GDBusObjectProxy *_peel_return = g_dbus_object_proxy_new (_peel_connection, object_path);
    peel_assume (_peel_return);
    return peel::RefPtr<DBusObjectProxy>::adopt_ref (reinterpret_cast<DBusObjectProxy *> (_peel_return));
  }

  peel_returns_nonnull
  DBusConnection *
  get_connection () noexcept
  {
    ::GDBusObjectProxy *_peel_this = reinterpret_cast<::GDBusObjectProxy *> (this);
    ::GDBusConnection *_peel_return = g_dbus_object_proxy_get_connection (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<DBusConnection *> (_peel_return);
  }

  static peel::Property<DBusConnection>
  prop_g_connection ()
  {
    return peel::Property<DBusConnection> { "g-connection" };
  }

  static peel::Property<const char *>
  prop_g_object_path ()
  {
    return peel::Property<const char *> { "g-object-path" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<DBusObjectProxy> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GDBusObjectProxyClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GDBusObjectProxyClass),
                 "DBusObjectProxy::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GDBusObjectProxyClass),
                 "DBusObjectProxy::Class align mismatch");
}; /* class DBusObjectProxy */

static_assert (sizeof (DBusObjectProxy) == sizeof (::GDBusObjectProxy),
               "DBusObjectProxy size mismatch");
static_assert (alignof (DBusObjectProxy) == alignof (::GDBusObjectProxy),
               "DBusObjectProxy align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
