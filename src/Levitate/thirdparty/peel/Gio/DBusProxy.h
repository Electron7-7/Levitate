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
#include <peel/Gio/DBusInterface.h>

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
enum class DBusCallFlags : std::underlying_type<::GDBusCallFlags>::type;
class DBusConnection;
class DBusProxy;
class UnixFDList;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusProxy> ()
{
  return g_dbus_proxy_get_type ();
}


namespace Gio
{
class DBusProxy : public DBusInterface
/* extends GObject::Object */
/* implements AsyncInitable, DBusInterface, Initable */
{
private:
  unsigned char _placeholder[sizeof (::GDBusProxy) - sizeof (DBusInterface)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusProxy () = delete;
  DBusProxy (const DBusProxy &) = delete;
  DBusProxy (DBusProxy &&) = delete;
  DBusProxy &
  operator = (const DBusProxy &) = delete;
  DBusProxy &
  operator = (DBusProxy &&) = delete;
protected:
  ~DBusProxy () = default;
public:
  enum class Flags : std::underlying_type<::GDBusProxyFlags>::type;

  peel_nonnull_args (1)
  static peel::RefPtr<DBusProxy>
  create_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GDBusProxy *_peel_return = g_dbus_proxy_new_finish (_peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusProxy>::adopt_ref (reinterpret_cast<DBusProxy *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<DBusProxy>
  create_for_bus_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GDBusProxy *_peel_return = g_dbus_proxy_new_for_bus_finish (_peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusProxy>::adopt_ref (reinterpret_cast<DBusProxy *> (_peel_return));
  }

  peel_arg_in (3) peel_nonnull_args (4, 5, 6)
  static peel::RefPtr<DBusProxy>
  create_for_bus_sync (BusType bus_type, DBusProxy::Flags flags, DBusInterface::Info *info, const char *name, const char *object_path, const char *interface_name, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBusType _peel_bus_type = static_cast<::GBusType> (bus_type);
    ::GDBusProxyFlags _peel_flags = static_cast<::GDBusProxyFlags> (flags);
    ::GDBusInterfaceInfo *_peel_info = reinterpret_cast<::GDBusInterfaceInfo *> (info);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GDBusProxy *_peel_return = g_dbus_proxy_new_for_bus_sync (_peel_bus_type, _peel_flags, _peel_info, name, object_path, interface_name, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusProxy>::adopt_ref (reinterpret_cast<DBusProxy *> (_peel_return));
  }

  peel_arg_in (3) peel_nonnull_args (1, 5, 6)
  static peel::RefPtr<DBusProxy>
  create_sync (DBusConnection *connection, DBusProxy::Flags flags, DBusInterface::Info *info, const char *name, const char *object_path, const char *interface_name, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    ::GDBusProxyFlags _peel_flags = static_cast<::GDBusProxyFlags> (flags);
    ::GDBusInterfaceInfo *_peel_info = reinterpret_cast<::GDBusInterfaceInfo *> (info);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GDBusProxy *_peel_return = g_dbus_proxy_new_sync (_peel_connection, _peel_flags, _peel_info, name, object_path, interface_name, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusProxy>::adopt_ref (reinterpret_cast<DBusProxy *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (3) peel_nonnull_args (1, 5, 6)
  static void
  new_ (DBusConnection *connection, DBusProxy::Flags flags, DBusInterface::Info *info, const char *name, const char *object_path, const char *interface_name, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    ::GDBusProxyFlags _peel_flags = static_cast<::GDBusProxyFlags> (flags);
    ::GDBusInterfaceInfo *_peel_info = reinterpret_cast<::GDBusInterfaceInfo *> (info);
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
    g_dbus_proxy_new (_peel_connection, _peel_flags, _peel_info, name, object_path, interface_name, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (3) peel_nonnull_args (4, 5, 6)
  static void
  new_for_bus (BusType bus_type, DBusProxy::Flags flags, DBusInterface::Info *info, const char *name, const char *object_path, const char *interface_name, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GBusType _peel_bus_type = static_cast<::GBusType> (bus_type);
    ::GDBusProxyFlags _peel_flags = static_cast<::GDBusProxyFlags> (flags);
    ::GDBusInterfaceInfo *_peel_info = reinterpret_cast<::GDBusInterfaceInfo *> (info);
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
    g_dbus_proxy_new_for_bus (_peel_bus_type, _peel_flags, _peel_info, name, object_path, interface_name, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  call (const char *method_name, peel::FloatPtr<GLib::Variant> parameters, DBusCallFlags flags, int timeout_msec, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (std::move (parameters).release_floating_ptr ());
    ::GDBusCallFlags _peel_flags = static_cast<::GDBusCallFlags> (flags);
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
    g_dbus_proxy_call (_peel_this, method_name, _peel_parameters, _peel_flags, timeout_msec, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  call_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GVariant *_peel_return = g_dbus_proxy_call_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  call_sync (const char *method_name, peel::FloatPtr<GLib::Variant> parameters, DBusCallFlags flags, int timeout_msec, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (std::move (parameters).release_floating_ptr ());
    ::GDBusCallFlags _peel_flags = static_cast<::GDBusCallFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GVariant *_peel_return = g_dbus_proxy_call_sync (_peel_this, method_name, _peel_parameters, _peel_flags, timeout_msec, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

#ifdef G_OS_UNIX
  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  call_with_unix_fd_list (const char *method_name, peel::FloatPtr<GLib::Variant> parameters, DBusCallFlags flags, int timeout_msec, UnixFDList *fd_list, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (std::move (parameters).release_floating_ptr ());
    ::GDBusCallFlags _peel_flags = static_cast<::GDBusCallFlags> (flags);
    ::GUnixFDList *_peel_fd_list = reinterpret_cast<::GUnixFDList *> (fd_list);
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
    g_dbus_proxy_call_with_unix_fd_list (_peel_this, method_name, _peel_parameters, _peel_flags, timeout_msec, _peel_fd_list, _peel_cancellable, _peel_callback, _peel_user_data);
  }
#endif /* G_OS_UNIX */

#ifdef G_OS_UNIX
  peel_arg_out (2) peel_nonnull_args (3)
  peel::RefPtr<GLib::Variant>
  call_with_unix_fd_list_finish (peel::RefPtr<UnixFDList> *out_fd_list, AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GUnixFDList *_peel_out_fd_list;
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GVariant *_peel_return = g_dbus_proxy_call_with_unix_fd_list_finish (_peel_this, out_fd_list ? &_peel_out_fd_list : nullptr, _peel_res, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (out_fd_list)
          *out_fd_list = peel::RefPtr<UnixFDList>::adopt_ref (reinterpret_cast<UnixFDList *> (_peel_out_fd_list));
      }
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }
#endif /* G_OS_UNIX */

#ifdef G_OS_UNIX
  peel_arg_out (7) peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  call_with_unix_fd_list_sync (const char *method_name, peel::FloatPtr<GLib::Variant> parameters, DBusCallFlags flags, int timeout_msec, UnixFDList *fd_list, peel::RefPtr<UnixFDList> *out_fd_list, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (std::move (parameters).release_floating_ptr ());
    ::GDBusCallFlags _peel_flags = static_cast<::GDBusCallFlags> (flags);
    ::GUnixFDList *_peel_fd_list = reinterpret_cast<::GUnixFDList *> (fd_list);
    ::GUnixFDList *_peel_out_fd_list;
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GVariant *_peel_return = g_dbus_proxy_call_with_unix_fd_list_sync (_peel_this, method_name, _peel_parameters, _peel_flags, timeout_msec, _peel_fd_list, out_fd_list ? &_peel_out_fd_list : nullptr, _peel_cancellable, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (out_fd_list)
          *out_fd_list = peel::RefPtr<UnixFDList>::adopt_ref (reinterpret_cast<UnixFDList *> (_peel_out_fd_list));
      }
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }
#endif /* G_OS_UNIX */

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  get_cached_property (const char *property_name) noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GVariant *_peel_return = g_dbus_proxy_get_cached_property (_peel_this, property_name);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel::Strv
  get_cached_property_names () noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    gchar **_peel_return = g_dbus_proxy_get_cached_property_names (_peel_this);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_returns_nonnull
  DBusConnection *
  get_connection () noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GDBusConnection *_peel_return = g_dbus_proxy_get_connection (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<DBusConnection *> (_peel_return);
  }

  int
  get_default_timeout () noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    return g_dbus_proxy_get_default_timeout (_peel_this);
  }

  DBusProxy::Flags
  get_flags () noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GDBusProxyFlags _peel_return = g_dbus_proxy_get_flags (_peel_this);
    return static_cast<DBusProxy::Flags> (_peel_return);
  }

  DBusInterface::Info *
  get_interface_info () noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GDBusInterfaceInfo *_peel_return = g_dbus_proxy_get_interface_info (_peel_this);
    return reinterpret_cast<DBusInterface::Info *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_interface_name () noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    return g_dbus_proxy_get_interface_name (_peel_this);
  }

  const char *
  get_name () noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    return g_dbus_proxy_get_name (_peel_this);
  }

  peel::String
  get_name_owner () noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    gchar *_peel_return = g_dbus_proxy_get_name_owner (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_object_path () noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    return g_dbus_proxy_get_object_path (_peel_this);
  }

  peel_nonnull_args (2)
  void
  set_cached_property (const char *property_name, peel::FloatPtr<GLib::Variant> value) noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    g_dbus_proxy_set_cached_property (_peel_this, property_name, _peel_value);
  }

  void
  set_default_timeout (int timeout_msec) noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    g_dbus_proxy_set_default_timeout (_peel_this, timeout_msec);
  }

  peel_arg_in (2)
  void
  set_interface_info (DBusInterface::Info *info) noexcept
  {
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GDBusInterfaceInfo *_peel_info = reinterpret_cast<::GDBusInterfaceInfo *> (info);
    g_dbus_proxy_set_interface_info (_peel_this, _peel_info);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_g_properties_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusProxy, void (GLib::Variant *, peel::StrvRef)>::_peel_connect_by_name (this, "g-properties-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_g_properties_changed (HandlerObject *object, void (HandlerObject::*handler_method) (DBusProxy *, GLib::Variant *, peel::StrvRef), bool after = false) noexcept
  {
    return Signal<DBusProxy, void (GLib::Variant *, peel::StrvRef)>::_peel_connect_by_name (this, "g-properties-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_g_signal (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusProxy, void (const char *, const char *, GLib::Variant *)>::_peel_connect_by_name (this, "g-signal", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_g_signal (HandlerObject *object, void (HandlerObject::*handler_method) (DBusProxy *, const char *, const char *, GLib::Variant *), bool after = false) noexcept
  {
    return Signal<DBusProxy, void (const char *, const char *, GLib::Variant *)>::_peel_connect_by_name (this, "g-signal", object, handler_method, after);
  }
  template<typename Handler>
  peel::SignalConnection::Token
  connect_g_signal (const char *detail, Handler &&handler, bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<DBusProxy, void (const char *, const char *, GLib::Variant *)>::lookup ("g-signal").connect (this, detail_quark, static_cast<Handler &&> (handler), after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_g_signal (GLib::Quark detail, Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusProxy, void (const char *, const char *, GLib::Variant *)>::lookup ("g-signal").connect (this, detail, static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_g_signal (const char *detail, HandlerObject *object, void (HandlerObject::*handler_method) (DBusProxy *, const char *, const char *, GLib::Variant *), bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<DBusProxy, void (const char *, const char *, GLib::Variant *)>::lookup ("g-signal") .connect (this, detail_quark, object, handler_method, after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_g_signal (GLib::Quark detail, HandlerObject *object, void (HandlerObject::*handler_method) (DBusProxy *, const char *, const char *, GLib::Variant *), bool after = false) noexcept
  {
    return Signal<DBusProxy, void (const char *, const char *, GLib::Variant *)>::lookup ("g-signal") .connect (this, detail, object, handler_method, after);
  }

  static peel::Property<BusType>
  prop_g_bus_type ()
  {
    return peel::Property<BusType> { "g-bus-type" };
  }

  static peel::Property<DBusConnection>
  prop_g_connection ()
  {
    return peel::Property<DBusConnection> { "g-connection" };
  }

  static peel::Property<int>
  prop_g_default_timeout ()
  {
    return peel::Property<int> { "g-default-timeout" };
  }

  static peel::Property<DBusProxy::Flags>
  prop_g_flags ()
  {
    return peel::Property<DBusProxy::Flags> { "g-flags" };
  }

  static peel::Property<DBusInterface::Info>
  prop_g_interface_info ()
  {
    return peel::Property<DBusInterface::Info> { "g-interface-info" };
  }

  static peel::Property<const char *>
  prop_g_interface_name ()
  {
    return peel::Property<const char *> { "g-interface-name" };
  }

  static peel::Property<const char *>
  prop_g_name ()
  {
    return peel::Property<const char *> { "g-name" };
  }

  static peel::Property<const char *>
  prop_g_name_owner ()
  {
    return peel::Property<const char *> { "g-name-owner" };
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
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<DBusProxy> ());
    _peel_class->finalize (obj);
  }

  /* Unsupported for now: g_properties_changed: explicitly skipped */

  template<typename DerivedClass>
  peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  parent_vfunc_g_signal (const char *sender_name, const char *signal_name, GLib::Variant *parameters) noexcept
  {
    ::GDBusProxyClass *_peel_class = reinterpret_cast<::GDBusProxyClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GDBusProxy *_peel_this = reinterpret_cast<::GDBusProxy *> (this);
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (parameters);
    _peel_class->g_signal (_peel_this, sender_name, signal_name, _peel_parameters);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GDBusProxyClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    /* Unsupported for now: g_properties_changed: explicitly skipped */

    template<typename DerivedClass>
    void
    override_vfunc_g_signal ()
    {
      ::GDBusProxyClass *klass = reinterpret_cast<::GDBusProxyClass *> (this);
      klass->g_signal = +[] (::GDBusProxy *proxy, const gchar *sender_name, const gchar *signal_name, ::GVariant *parameters) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (proxy);
        GLib::Variant *_peel_parameters = reinterpret_cast<GLib::Variant *> (parameters);
        _peel_this->DerivedClass::vfunc_g_signal (sender_name, signal_name, _peel_parameters);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GDBusProxyClass),
                 "DBusProxy::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GDBusProxyClass),
                 "DBusProxy::Class align mismatch");
}; /* class DBusProxy */

static_assert (sizeof (DBusProxy) == sizeof (::GDBusProxy),
               "DBusProxy size mismatch");
static_assert (alignof (DBusProxy) == alignof (::GDBusProxy),
               "DBusProxy align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Variant.h>
#include <peel/Gio/UnixFDList.h>
