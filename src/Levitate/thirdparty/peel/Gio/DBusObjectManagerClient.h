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
namespace GLib
{
struct Error;
class /* record */ Variant;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
enum class BusType : std::underlying_type<::GBusType>::type;
class Cancellable;
class DBusConnection;
class DBusObjectManagerClient;
class DBusObjectProxy;
class DBusProxy;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusObjectManagerClient> ()
{
  return g_dbus_object_manager_client_get_type ();
}


namespace Gio
{
class DBusObjectManagerClient : public DBusObjectManager
/* extends GObject::Object */
/* implements AsyncInitable, DBusObjectManager, Initable */
{
private:
  unsigned char _placeholder[sizeof (::GDBusObjectManagerClient) - sizeof (DBusObjectManager)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusObjectManagerClient () = delete;
  DBusObjectManagerClient (const DBusObjectManagerClient &) = delete;
  DBusObjectManagerClient (DBusObjectManagerClient &&) = delete;
  DBusObjectManagerClient &
  operator = (const DBusObjectManagerClient &) = delete;
  DBusObjectManagerClient &
  operator = (DBusObjectManagerClient &&) = delete;
protected:
  ~DBusObjectManagerClient () = default;
public:
  enum class Flags : std::underlying_type<::GDBusObjectManagerClientFlags>::type;

  peel_nonnull_args (1)
  static peel::RefPtr<DBusObjectManagerClient>
  create_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GDBusObjectManager *_peel_return = g_dbus_object_manager_client_new_finish (_peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusObjectManagerClient>::adopt_ref (reinterpret_cast<DBusObjectManagerClient *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<DBusObjectManagerClient>
  create_for_bus_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GDBusObjectManager *_peel_return = g_dbus_object_manager_client_new_for_bus_finish (_peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusObjectManagerClient>::adopt_ref (reinterpret_cast<DBusObjectManagerClient *> (_peel_return));
  }

  template<typename DBusProxyTypeFunc>
  peel_nonnull_args (3, 4)
  static peel::RefPtr<DBusObjectManagerClient>
  create_for_bus_sync (BusType bus_type, DBusObjectManagerClient::Flags flags, const char *name, const char *object_path, DBusProxyTypeFunc &&get_proxy_type_func, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gpointer _peel_get_proxy_type_user_data;
    ::GDestroyNotify _peel_get_proxy_type_destroy_notify;
    ::GBusType _peel_bus_type = static_cast<::GBusType> (bus_type);
    ::GDBusObjectManagerClientFlags _peel_flags = static_cast<::GDBusObjectManagerClientFlags> (flags);
    ::GDBusProxyTypeFunc _peel_get_proxy_type_func = peel::internals::CallbackHelper<GType, ::GDBusObjectManagerClient *, const gchar *, const gchar *>::wrap_notified_callback (
      static_cast<DBusProxyTypeFunc &&> (get_proxy_type_func),
      [] (::GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer data) -> GType
      {
        DBusProxyTypeFunc &_peel_captured_get_proxy_type_func = *reinterpret_cast<typename std::remove_reference<DBusProxyTypeFunc>::type *> (data);
        DBusObjectManagerClient *_peel_manager = reinterpret_cast<DBusObjectManagerClient *> (manager);
        return peel::internals::invoke_if_nonnull<GObject::Type> (_peel_captured_get_proxy_type_func) (_peel_manager, object_path, interface_name);
      },
      &_peel_get_proxy_type_user_data, &_peel_get_proxy_type_destroy_notify, peel::internals::is_const_invocable<DBusProxyTypeFunc, void, DBusObjectManagerClient *, const char *, const char *>::value);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GDBusObjectManager *_peel_return = g_dbus_object_manager_client_new_for_bus_sync (_peel_bus_type, _peel_flags, name, object_path, _peel_get_proxy_type_func, _peel_get_proxy_type_user_data, _peel_get_proxy_type_destroy_notify, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusObjectManagerClient>::adopt_ref (reinterpret_cast<DBusObjectManagerClient *> (_peel_return));
  }

  template<typename DBusProxyTypeFunc>
  peel_nonnull_args (1, 4)
  static peel::RefPtr<DBusObjectManagerClient>
  create_sync (DBusConnection *connection, DBusObjectManagerClient::Flags flags, const char *name, const char *object_path, DBusProxyTypeFunc &&get_proxy_type_func, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gpointer _peel_get_proxy_type_user_data;
    ::GDestroyNotify _peel_get_proxy_type_destroy_notify;
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    ::GDBusObjectManagerClientFlags _peel_flags = static_cast<::GDBusObjectManagerClientFlags> (flags);
    ::GDBusProxyTypeFunc _peel_get_proxy_type_func = peel::internals::CallbackHelper<GType, ::GDBusObjectManagerClient *, const gchar *, const gchar *>::wrap_notified_callback (
      static_cast<DBusProxyTypeFunc &&> (get_proxy_type_func),
      [] (::GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer data) -> GType
      {
        DBusProxyTypeFunc &_peel_captured_get_proxy_type_func = *reinterpret_cast<typename std::remove_reference<DBusProxyTypeFunc>::type *> (data);
        DBusObjectManagerClient *_peel_manager = reinterpret_cast<DBusObjectManagerClient *> (manager);
        return peel::internals::invoke_if_nonnull<GObject::Type> (_peel_captured_get_proxy_type_func) (_peel_manager, object_path, interface_name);
      },
      &_peel_get_proxy_type_user_data, &_peel_get_proxy_type_destroy_notify, peel::internals::is_const_invocable<DBusProxyTypeFunc, void, DBusObjectManagerClient *, const char *, const char *>::value);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GDBusObjectManager *_peel_return = g_dbus_object_manager_client_new_sync (_peel_connection, _peel_flags, name, object_path, _peel_get_proxy_type_func, _peel_get_proxy_type_user_data, _peel_get_proxy_type_destroy_notify, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusObjectManagerClient>::adopt_ref (reinterpret_cast<DBusObjectManagerClient *> (_peel_return));
  }

  template<typename DBusProxyTypeFunc, typename AsyncReadyCallback>
  peel_nonnull_args (1, 3, 4)
  static void
  new_ (DBusConnection *connection, DBusObjectManagerClient::Flags flags, const char *name, const char *object_path, DBusProxyTypeFunc &&get_proxy_type_func, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_get_proxy_type_user_data;
    ::GDestroyNotify _peel_get_proxy_type_destroy_notify;
    gpointer _peel_user_data;
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    ::GDBusObjectManagerClientFlags _peel_flags = static_cast<::GDBusObjectManagerClientFlags> (flags);
    ::GDBusProxyTypeFunc _peel_get_proxy_type_func = peel::internals::CallbackHelper<GType, ::GDBusObjectManagerClient *, const gchar *, const gchar *>::wrap_notified_callback (
      static_cast<DBusProxyTypeFunc &&> (get_proxy_type_func),
      [] (::GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer data) -> GType
      {
        DBusProxyTypeFunc &_peel_captured_get_proxy_type_func = *reinterpret_cast<typename std::remove_reference<DBusProxyTypeFunc>::type *> (data);
        DBusObjectManagerClient *_peel_manager = reinterpret_cast<DBusObjectManagerClient *> (manager);
        return peel::internals::invoke_if_nonnull<GObject::Type> (_peel_captured_get_proxy_type_func) (_peel_manager, object_path, interface_name);
      },
      &_peel_get_proxy_type_user_data, &_peel_get_proxy_type_destroy_notify, peel::internals::is_const_invocable<DBusProxyTypeFunc, void, DBusObjectManagerClient *, const char *, const char *>::value);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_dbus_object_manager_client_new (_peel_connection, _peel_flags, name, object_path, _peel_get_proxy_type_func, _peel_get_proxy_type_user_data, _peel_get_proxy_type_destroy_notify, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DBusProxyTypeFunc, typename AsyncReadyCallback>
  peel_nonnull_args (3, 4)
  static void
  new_for_bus (BusType bus_type, DBusObjectManagerClient::Flags flags, const char *name, const char *object_path, DBusProxyTypeFunc &&get_proxy_type_func, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_get_proxy_type_user_data;
    ::GDestroyNotify _peel_get_proxy_type_destroy_notify;
    gpointer _peel_user_data;
    ::GBusType _peel_bus_type = static_cast<::GBusType> (bus_type);
    ::GDBusObjectManagerClientFlags _peel_flags = static_cast<::GDBusObjectManagerClientFlags> (flags);
    ::GDBusProxyTypeFunc _peel_get_proxy_type_func = peel::internals::CallbackHelper<GType, ::GDBusObjectManagerClient *, const gchar *, const gchar *>::wrap_notified_callback (
      static_cast<DBusProxyTypeFunc &&> (get_proxy_type_func),
      [] (::GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer data) -> GType
      {
        DBusProxyTypeFunc &_peel_captured_get_proxy_type_func = *reinterpret_cast<typename std::remove_reference<DBusProxyTypeFunc>::type *> (data);
        DBusObjectManagerClient *_peel_manager = reinterpret_cast<DBusObjectManagerClient *> (manager);
        return peel::internals::invoke_if_nonnull<GObject::Type> (_peel_captured_get_proxy_type_func) (_peel_manager, object_path, interface_name);
      },
      &_peel_get_proxy_type_user_data, &_peel_get_proxy_type_destroy_notify, peel::internals::is_const_invocable<DBusProxyTypeFunc, void, DBusObjectManagerClient *, const char *, const char *>::value);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_dbus_object_manager_client_new_for_bus (_peel_bus_type, _peel_flags, name, object_path, _peel_get_proxy_type_func, _peel_get_proxy_type_user_data, _peel_get_proxy_type_destroy_notify, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_returns_nonnull
  DBusConnection *
  get_connection () noexcept
  {
    ::GDBusObjectManagerClient *_peel_this = reinterpret_cast<::GDBusObjectManagerClient *> (this);
    ::GDBusConnection *_peel_return = g_dbus_object_manager_client_get_connection (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<DBusConnection *> (_peel_return);
  }

  DBusObjectManagerClient::Flags
  get_flags () noexcept
  {
    ::GDBusObjectManagerClient *_peel_this = reinterpret_cast<::GDBusObjectManagerClient *> (this);
    ::GDBusObjectManagerClientFlags _peel_return = g_dbus_object_manager_client_get_flags (_peel_this);
    return static_cast<DBusObjectManagerClient::Flags> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GDBusObjectManagerClient *_peel_this = reinterpret_cast<::GDBusObjectManagerClient *> (this);
    return g_dbus_object_manager_client_get_name (_peel_this);
  }

  peel::String
  get_name_owner () noexcept
  {
    ::GDBusObjectManagerClient *_peel_this = reinterpret_cast<::GDBusObjectManagerClient *> (this);
    gchar *_peel_return = g_dbus_object_manager_client_get_name_owner (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_interface_proxy_properties_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusObjectManagerClient, void (DBusObjectProxy *, DBusProxy *, GLib::Variant *, peel::StrvRef)>::_peel_connect_by_name (this, "interface-proxy-properties-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_interface_proxy_properties_changed (HandlerObject *object, void (HandlerObject::*handler_method) (DBusObjectManagerClient *, DBusObjectProxy *, DBusProxy *, GLib::Variant *, peel::StrvRef), bool after = false) noexcept
  {
    return Signal<DBusObjectManagerClient, void (DBusObjectProxy *, DBusProxy *, GLib::Variant *, peel::StrvRef)>::_peel_connect_by_name (this, "interface-proxy-properties-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_interface_proxy_signal (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusObjectManagerClient, void (DBusObjectProxy *, DBusProxy *, const char *, const char *, GLib::Variant *)>::_peel_connect_by_name (this, "interface-proxy-signal", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_interface_proxy_signal (HandlerObject *object, void (HandlerObject::*handler_method) (DBusObjectManagerClient *, DBusObjectProxy *, DBusProxy *, const char *, const char *, GLib::Variant *), bool after = false) noexcept
  {
    return Signal<DBusObjectManagerClient, void (DBusObjectProxy *, DBusProxy *, const char *, const char *, GLib::Variant *)>::_peel_connect_by_name (this, "interface-proxy-signal", object, handler_method, after);
  }

  static peel::Property<BusType>
  prop_bus_type ()
  {
    return peel::Property<BusType> { "bus-type" };
  }

  static peel::Property<DBusConnection>
  prop_connection ()
  {
    return peel::Property<DBusConnection> { "connection" };
  }

  static peel::Property<DBusObjectManagerClient::Flags>
  prop_flags ()
  {
    return peel::Property<DBusObjectManagerClient::Flags> { "flags" };
  }

  static peel::Property<void *>
  prop_get_proxy_type_destroy_notify ()
  {
    return peel::Property<void *> { "get-proxy-type-destroy-notify" };
  }

  static peel::Property<void *>
  prop_get_proxy_type_func ()
  {
    return peel::Property<void *> { "get-proxy-type-func" };
  }

  static peel::Property<void *>
  prop_get_proxy_type_user_data ()
  {
    return peel::Property<void *> { "get-proxy-type-user-data" };
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<const char *>
  prop_name_owner ()
  {
    return peel::Property<const char *> { "name-owner" };
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
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<DBusObjectManagerClient> ());
    _peel_class->finalize (obj);
  }

  /* Unsupported for now: interface_proxy_properties_changed: explicitly skipped */

  template<typename DerivedClass>
  peel_arg_in (6) peel_nonnull_args (2, 3, 4, 5, 6)
  void
  parent_vfunc_interface_proxy_signal (DBusObjectProxy *object_proxy, DBusProxy *interface_proxy, const char *sender_name, const char *signal_name, GLib::Variant *parameters) noexcept
  {
    ::GDBusObjectManagerClientClass *_peel_class = reinterpret_cast<::GDBusObjectManagerClientClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GDBusObjectManagerClient *_peel_this = reinterpret_cast<::GDBusObjectManagerClient *> (this);
    ::GDBusObjectProxy *_peel_object_proxy = reinterpret_cast<::GDBusObjectProxy *> (object_proxy);
    ::GDBusProxy *_peel_interface_proxy = reinterpret_cast<::GDBusProxy *> (interface_proxy);
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (parameters);
    _peel_class->interface_proxy_signal (_peel_this, _peel_object_proxy, _peel_interface_proxy, sender_name, signal_name, _peel_parameters);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GDBusObjectManagerClientClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    /* Unsupported for now: interface_proxy_properties_changed: explicitly skipped */

    template<typename DerivedClass>
    void
    override_vfunc_interface_proxy_signal ()
    {
      ::GDBusObjectManagerClientClass *klass = reinterpret_cast<::GDBusObjectManagerClientClass *> (this);
      klass->interface_proxy_signal = +[] (::GDBusObjectManagerClient *manager, ::GDBusObjectProxy *object_proxy, ::GDBusProxy *interface_proxy, const gchar *sender_name, const gchar *signal_name, ::GVariant *parameters) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        DBusObjectProxy *_peel_object_proxy = reinterpret_cast<DBusObjectProxy *> (object_proxy);
        DBusProxy *_peel_interface_proxy = reinterpret_cast<DBusProxy *> (interface_proxy);
        GLib::Variant *_peel_parameters = reinterpret_cast<GLib::Variant *> (parameters);
        _peel_this->DerivedClass::vfunc_interface_proxy_signal (_peel_object_proxy, _peel_interface_proxy, sender_name, signal_name, _peel_parameters);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GDBusObjectManagerClientClass),
                 "DBusObjectManagerClient::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GDBusObjectManagerClientClass),
                 "DBusObjectManagerClient::Class align mismatch");
}; /* class DBusObjectManagerClient */

static_assert (sizeof (DBusObjectManagerClient) == sizeof (::GDBusObjectManagerClient),
               "DBusObjectManagerClient size mismatch");
static_assert (alignof (DBusObjectManagerClient) == alignof (::GDBusObjectManagerClient),
               "DBusObjectManagerClient align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
