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
#include <peel/GLib/Variant.h>
#include <peel/GObject/Object.h>
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
struct Closure;
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ ActionGroup;
class /* interface */ AsyncResult;
class Cancellable;
class Credentials;
class DBusAuthObserver;
enum class DBusCallFlags : std::underlying_type<::GDBusCallFlags>::type;
enum class DBusCapabilityFlags : std::underlying_type<::GDBusCapabilityFlags>::type;
class DBusConnection;
class DBusMessage;
enum class DBusSendMessageFlags : std::underlying_type<::GDBusSendMessageFlags>::type;
enum class DBusSignalFlags : std::underlying_type<::GDBusSignalFlags>::type;
enum class DBusSubtreeFlags : std::underlying_type<::GDBusSubtreeFlags>::type;
struct DBusSubtreeVTable;
class IOStream;
class MenuModel;
class UnixFDList;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusConnection> ()
{
  return g_dbus_connection_get_type ();
}


namespace Gio
{
class DBusConnection : public GObject::Object
/* non-derivable */
/* implements AsyncInitable, Initable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusConnection () = delete;
  DBusConnection (const DBusConnection &) = delete;
  DBusConnection (DBusConnection &&) = delete;
  DBusConnection &
  operator = (const DBusConnection &) = delete;
  DBusConnection &
  operator = (DBusConnection &&) = delete;
  ~DBusConnection () = delete;
public:
  enum class Flags : std::underlying_type<::GDBusConnectionFlags>::type;

  peel_nonnull_args (1)
  static peel::RefPtr<DBusConnection>
  create_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GDBusConnection *_peel_return = g_dbus_connection_new_finish (_peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusConnection>::adopt_ref (reinterpret_cast<DBusConnection *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<DBusConnection>
  create_for_address_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GDBusConnection *_peel_return = g_dbus_connection_new_for_address_finish (_peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusConnection>::adopt_ref (reinterpret_cast<DBusConnection *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<DBusConnection>
  create_for_address_sync (const char *address, DBusConnection::Flags flags, DBusAuthObserver *observer, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnectionFlags _peel_flags = static_cast<::GDBusConnectionFlags> (flags);
    ::GDBusAuthObserver *_peel_observer = reinterpret_cast<::GDBusAuthObserver *> (observer);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GDBusConnection *_peel_return = g_dbus_connection_new_for_address_sync (address, _peel_flags, _peel_observer, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusConnection>::adopt_ref (reinterpret_cast<DBusConnection *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<DBusConnection>
  create_sync (IOStream *stream, const char *guid, DBusConnection::Flags flags, DBusAuthObserver *observer, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOStream *_peel_stream = reinterpret_cast<::GIOStream *> (stream);
    ::GDBusConnectionFlags _peel_flags = static_cast<::GDBusConnectionFlags> (flags);
    ::GDBusAuthObserver *_peel_observer = reinterpret_cast<::GDBusAuthObserver *> (observer);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GDBusConnection *_peel_return = g_dbus_connection_new_sync (_peel_stream, guid, _peel_flags, _peel_observer, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusConnection>::adopt_ref (reinterpret_cast<DBusConnection *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (1)
  static void
  new_ (IOStream *stream, const char *guid, DBusConnection::Flags flags, DBusAuthObserver *observer, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GIOStream *_peel_stream = reinterpret_cast<::GIOStream *> (stream);
    ::GDBusConnectionFlags _peel_flags = static_cast<::GDBusConnectionFlags> (flags);
    ::GDBusAuthObserver *_peel_observer = reinterpret_cast<::GDBusAuthObserver *> (observer);
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
    g_dbus_connection_new (_peel_stream, guid, _peel_flags, _peel_observer, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (1)
  static void
  new_for_address (const char *address, DBusConnection::Flags flags, DBusAuthObserver *observer, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDBusConnectionFlags _peel_flags = static_cast<::GDBusConnectionFlags> (flags);
    ::GDBusAuthObserver *_peel_observer = reinterpret_cast<::GDBusAuthObserver *> (observer);
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
    g_dbus_connection_new_for_address (address, _peel_flags, _peel_observer, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DBusMessageFilterFunction>
  unsigned
  add_filter (DBusMessageFilterFunction &&filter_function) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_data_free_func;
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GDBusMessageFilterFunction _peel_filter_function = peel::internals::CallbackHelper<::GDBusMessage *, ::GDBusConnection *, ::GDBusMessage *, gboolean>::wrap_notified_callback (
      static_cast<DBusMessageFilterFunction &&> (filter_function),
      [] (::GDBusConnection *connection, ::GDBusMessage *message, gboolean incoming, gpointer user_data) -> ::GDBusMessage *
      {
        DBusMessageFilterFunction &_peel_captured_filter_function = *reinterpret_cast<typename std::remove_reference<DBusMessageFilterFunction>::type *> (user_data);
        DBusConnection *_peel_connection = reinterpret_cast<DBusConnection *> (connection);
        peel::RefPtr<DBusMessage> _peel_message = peel::RefPtr<DBusMessage>::adopt_ref (reinterpret_cast<DBusMessage *> (message));
        bool _peel_incoming = !!incoming;
        peel::RefPtr<DBusMessage> _peel_return = _peel_captured_filter_function (_peel_connection, std::move (_peel_message), _peel_incoming);
        return reinterpret_cast<::GDBusMessage *> (std::move (_peel_return).release_ref ());
      },
      &_peel_user_data, &_peel_user_data_free_func, peel::internals::is_const_invocable<DBusMessageFilterFunction, void, DBusConnection *, peel::RefPtr<DBusMessage>, bool>::value);
    return g_dbus_connection_add_filter (_peel_this, _peel_filter_function, _peel_user_data, _peel_user_data_free_func);
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (7) peel_nonnull_args (3, 4, 5)
  void
  call (const char *bus_name, const char *object_path, const char *interface_name, const char *method_name, peel::FloatPtr<GLib::Variant> parameters, const GLib::Variant::Type *reply_type, DBusCallFlags flags, int timeout_msec, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (std::move (parameters).release_floating_ptr ());
    const ::GVariantType *_peel_reply_type = reinterpret_cast<const ::GVariantType *> (reply_type);
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
    g_dbus_connection_call (_peel_this, bus_name, object_path, interface_name, method_name, _peel_parameters, _peel_reply_type, _peel_flags, timeout_msec, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Variant>
  call_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GVariant *_peel_return = g_dbus_connection_call_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_arg_in (7) peel_nonnull_args (3, 4, 5)
  peel::RefPtr<GLib::Variant>
  call_sync (const char *bus_name, const char *object_path, const char *interface_name, const char *method_name, peel::FloatPtr<GLib::Variant> parameters, const GLib::Variant::Type *reply_type, DBusCallFlags flags, int timeout_msec, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (std::move (parameters).release_floating_ptr ());
    const ::GVariantType *_peel_reply_type = reinterpret_cast<const ::GVariantType *> (reply_type);
    ::GDBusCallFlags _peel_flags = static_cast<::GDBusCallFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GVariant *_peel_return = g_dbus_connection_call_sync (_peel_this, bus_name, object_path, interface_name, method_name, _peel_parameters, _peel_reply_type, _peel_flags, timeout_msec, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

#ifdef G_OS_UNIX
  template<typename AsyncReadyCallback>
  peel_arg_in (7) peel_nonnull_args (3, 4, 5)
  void
  call_with_unix_fd_list (const char *bus_name, const char *object_path, const char *interface_name, const char *method_name, peel::FloatPtr<GLib::Variant> parameters, const GLib::Variant::Type *reply_type, DBusCallFlags flags, int timeout_msec, UnixFDList *fd_list, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (std::move (parameters).release_floating_ptr ());
    const ::GVariantType *_peel_reply_type = reinterpret_cast<const ::GVariantType *> (reply_type);
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
    g_dbus_connection_call_with_unix_fd_list (_peel_this, bus_name, object_path, interface_name, method_name, _peel_parameters, _peel_reply_type, _peel_flags, timeout_msec, _peel_fd_list, _peel_cancellable, _peel_callback, _peel_user_data);
  }
#endif /* G_OS_UNIX */

#ifdef G_OS_UNIX
  peel_arg_out (2) peel_nonnull_args (3)
  peel::RefPtr<GLib::Variant>
  call_with_unix_fd_list_finish (peel::RefPtr<UnixFDList> *out_fd_list, AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GUnixFDList *_peel_out_fd_list;
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GVariant *_peel_return = g_dbus_connection_call_with_unix_fd_list_finish (_peel_this, out_fd_list ? &_peel_out_fd_list : nullptr, _peel_res, &_peel_error);
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
  peel_arg_in (7) peel_arg_out (11) peel_nonnull_args (3, 4, 5)
  peel::RefPtr<GLib::Variant>
  call_with_unix_fd_list_sync (const char *bus_name, const char *object_path, const char *interface_name, const char *method_name, peel::FloatPtr<GLib::Variant> parameters, const GLib::Variant::Type *reply_type, DBusCallFlags flags, int timeout_msec, UnixFDList *fd_list, peel::RefPtr<UnixFDList> *out_fd_list, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (std::move (parameters).release_floating_ptr ());
    const ::GVariantType *_peel_reply_type = reinterpret_cast<const ::GVariantType *> (reply_type);
    ::GDBusCallFlags _peel_flags = static_cast<::GDBusCallFlags> (flags);
    ::GUnixFDList *_peel_fd_list = reinterpret_cast<::GUnixFDList *> (fd_list);
    ::GUnixFDList *_peel_out_fd_list;
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GVariant *_peel_return = g_dbus_connection_call_with_unix_fd_list_sync (_peel_this, bus_name, object_path, interface_name, method_name, _peel_parameters, _peel_reply_type, _peel_flags, timeout_msec, _peel_fd_list, out_fd_list ? &_peel_out_fd_list : nullptr, _peel_cancellable, &_peel_error);
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

  template<typename AsyncReadyCallback>
  void
  close (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
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
    g_dbus_connection_close (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  close_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dbus_connection_close_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  close_sync (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dbus_connection_close_sync (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (3, 4, 5)
  bool
  emit_signal (const char *destination_bus_name, const char *object_path, const char *interface_name, const char *signal_name, peel::FloatPtr<GLib::Variant> parameters, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (std::move (parameters).release_floating_ptr ());
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dbus_connection_emit_signal (_peel_this, destination_bus_name, object_path, interface_name, signal_name, _peel_parameters, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  unsigned
  export_action_group (const char *object_path, ActionGroup *action_group, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GActionGroup *_peel_action_group = reinterpret_cast<::GActionGroup *> (action_group);
    ::GError *_peel_error = nullptr;
    guint _peel_return = g_dbus_connection_export_action_group (_peel_this, object_path, _peel_action_group, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_nonnull_args (2, 3)
  unsigned
  export_menu_model (const char *object_path, MenuModel *menu, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GMenuModel *_peel_menu = reinterpret_cast<::GMenuModel *> (menu);
    ::GError *_peel_error = nullptr;
    guint _peel_return = g_dbus_connection_export_menu_model (_peel_this, object_path, _peel_menu, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  flush (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
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
    g_dbus_connection_flush (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  flush_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dbus_connection_flush_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  flush_sync (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dbus_connection_flush_sync (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  DBusCapabilityFlags
  get_capabilities () noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GDBusCapabilityFlags _peel_return = g_dbus_connection_get_capabilities (_peel_this);
    return static_cast<DBusCapabilityFlags> (_peel_return);
  }

  bool
  get_exit_on_close () noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    gboolean _peel_return = g_dbus_connection_get_exit_on_close (_peel_this);
    return !!_peel_return;
  }

  DBusConnection::Flags
  get_flags () noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GDBusConnectionFlags _peel_return = g_dbus_connection_get_flags (_peel_this);
    return static_cast<DBusConnection::Flags> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_guid () noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    return g_dbus_connection_get_guid (_peel_this);
  }

  uint32_t
  get_last_serial () noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    return g_dbus_connection_get_last_serial (_peel_this);
  }

  Credentials *
  get_peer_credentials () noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GCredentials *_peel_return = g_dbus_connection_get_peer_credentials (_peel_this);
    return reinterpret_cast<Credentials *> (_peel_return);
  }

  peel_returns_nonnull
  IOStream *
  get_stream () noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GIOStream *_peel_return = g_dbus_connection_get_stream (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<IOStream *> (_peel_return);
  }

  const char *
  get_unique_name () noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    return g_dbus_connection_get_unique_name (_peel_this);
  }

  bool
  is_closed () noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    gboolean _peel_return = g_dbus_connection_is_closed (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3)
  unsigned
  register_object (const char *object_path, DBusInterface::Info *interface_info, const DBusInterface::VTable *vtable, void *user_data, ::GDestroyNotify user_data_free_func, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GDBusInterfaceInfo *_peel_interface_info = reinterpret_cast<::GDBusInterfaceInfo *> (interface_info);
    const ::GDBusInterfaceVTable *_peel_vtable = reinterpret_cast<const ::GDBusInterfaceVTable *> (vtable);
    ::GError *_peel_error = nullptr;
    guint _peel_return = g_dbus_connection_register_object (_peel_this, object_path, _peel_interface_info, _peel_vtable, user_data, user_data_free_func, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  unsigned
  register_object_with_closures (const char *object_path, DBusInterface::Info *interface_info, peel::FloatPtr<GObject::Closure> method_call_closure, peel::FloatPtr<GObject::Closure> get_property_closure, peel::FloatPtr<GObject::Closure> set_property_closure, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GDBusInterfaceInfo *_peel_interface_info = reinterpret_cast<::GDBusInterfaceInfo *> (interface_info);
    ::GClosure *_peel_method_call_closure = reinterpret_cast<::GClosure *> (std::move (method_call_closure).release_floating_ptr ());
    ::GClosure *_peel_get_property_closure = reinterpret_cast<::GClosure *> (std::move (get_property_closure).release_floating_ptr ());
    ::GClosure *_peel_set_property_closure = reinterpret_cast<::GClosure *> (std::move (set_property_closure).release_floating_ptr ());
    ::GError *_peel_error = nullptr;
    guint _peel_return = g_dbus_connection_register_object_with_closures (_peel_this, object_path, _peel_interface_info, _peel_method_call_closure, _peel_get_property_closure, _peel_set_property_closure, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  unsigned
  register_object_with_closures2 (const char *object_path, DBusInterface::Info *interface_info, peel::FloatPtr<GObject::Closure> method_call_closure, peel::FloatPtr<GObject::Closure> get_property_closure, peel::FloatPtr<GObject::Closure> set_property_closure, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GDBusInterfaceInfo *_peel_interface_info = reinterpret_cast<::GDBusInterfaceInfo *> (interface_info);
    ::GClosure *_peel_method_call_closure = reinterpret_cast<::GClosure *> (std::move (method_call_closure).release_floating_ptr ());
    ::GClosure *_peel_get_property_closure = reinterpret_cast<::GClosure *> (std::move (get_property_closure).release_floating_ptr ());
    ::GClosure *_peel_set_property_closure = reinterpret_cast<::GClosure *> (std::move (set_property_closure).release_floating_ptr ());
    ::GError *_peel_error = nullptr;
    guint _peel_return = g_dbus_connection_register_object_with_closures2 (_peel_this, object_path, _peel_interface_info, _peel_method_call_closure, _peel_get_property_closure, _peel_set_property_closure, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  unsigned
  register_subtree (const char *object_path, const DBusSubtreeVTable *vtable, DBusSubtreeFlags flags, void *user_data, ::GDestroyNotify user_data_free_func, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    const ::GDBusSubtreeVTable *_peel_vtable = reinterpret_cast<const ::GDBusSubtreeVTable *> (vtable);
    ::GDBusSubtreeFlags _peel_flags = static_cast<::GDBusSubtreeFlags> (flags);
    ::GError *_peel_error = nullptr;
    guint _peel_return = g_dbus_connection_register_subtree (_peel_this, object_path, _peel_vtable, _peel_flags, user_data, user_data_free_func, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  void
  remove_filter (unsigned filter_id) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    g_dbus_connection_remove_filter (_peel_this, filter_id);
  }

  peel_arg_out (4) peel_nonnull_args (2)
  bool
  send_message (DBusMessage *message, DBusSendMessageFlags flags, uint32_t *out_serial, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GDBusMessage *_peel_message = reinterpret_cast<::GDBusMessage *> (message);
    ::GDBusSendMessageFlags _peel_flags = static_cast<::GDBusSendMessageFlags> (flags);
    volatile guint32 *_peel_out_serial = reinterpret_cast<volatile guint32 *> (out_serial);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dbus_connection_send_message (_peel_this, _peel_message, _peel_flags, _peel_out_serial, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  peel_arg_out (5) peel_nonnull_args (2)
  void
  send_message_with_reply (DBusMessage *message, DBusSendMessageFlags flags, int timeout_msec, uint32_t *out_serial, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GDBusMessage *_peel_message = reinterpret_cast<::GDBusMessage *> (message);
    ::GDBusSendMessageFlags _peel_flags = static_cast<::GDBusSendMessageFlags> (flags);
    volatile guint32 *_peel_out_serial = reinterpret_cast<volatile guint32 *> (out_serial);
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
    g_dbus_connection_send_message_with_reply (_peel_this, _peel_message, _peel_flags, timeout_msec, _peel_out_serial, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<DBusMessage>
  send_message_with_reply_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
    ::GError *_peel_error = nullptr;
    ::GDBusMessage *_peel_return = g_dbus_connection_send_message_with_reply_finish (_peel_this, _peel_res, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusMessage>::adopt_ref (reinterpret_cast<DBusMessage *> (_peel_return));
  }

  peel_arg_out (5) peel_nonnull_args (2)
  peel::RefPtr<DBusMessage>
  send_message_with_reply_sync (DBusMessage *message, DBusSendMessageFlags flags, int timeout_msec, uint32_t *out_serial, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GDBusMessage *_peel_message = reinterpret_cast<::GDBusMessage *> (message);
    ::GDBusSendMessageFlags _peel_flags = static_cast<::GDBusSendMessageFlags> (flags);
    volatile guint32 *_peel_out_serial = reinterpret_cast<volatile guint32 *> (out_serial);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GDBusMessage *_peel_return = g_dbus_connection_send_message_with_reply_sync (_peel_this, _peel_message, _peel_flags, timeout_msec, _peel_out_serial, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusMessage>::adopt_ref (reinterpret_cast<DBusMessage *> (_peel_return));
  }

  void
  set_exit_on_close (bool exit_on_close) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    gboolean _peel_exit_on_close = static_cast<gboolean> (exit_on_close);
    g_dbus_connection_set_exit_on_close (_peel_this, _peel_exit_on_close);
  }

  template<typename DBusSignalCallback>
  unsigned
  signal_subscribe (const char *sender, const char *interface_name, const char *member, const char *object_path, const char *arg0, DBusSignalFlags flags, DBusSignalCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_data_free_func;
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    ::GDBusSignalFlags _peel_flags = static_cast<::GDBusSignalFlags> (flags);
    ::GDBusSignalCallback _peel_callback = peel::internals::CallbackHelper<void, ::GDBusConnection *, const gchar *, const gchar *, const gchar *, const gchar *, ::GVariant *>::wrap_notified_callback (
      static_cast<DBusSignalCallback &&> (callback),
      [] (::GDBusConnection *connection, const gchar *sender_name, const gchar *object_path, const gchar *interface_name, const gchar *signal_name, ::GVariant *parameters, gpointer user_data) -> void
      {
        DBusSignalCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<DBusSignalCallback>::type *> (user_data);
        DBusConnection *_peel_connection = reinterpret_cast<DBusConnection *> (connection);
        GLib::Variant *_peel_parameters = reinterpret_cast<GLib::Variant *> (parameters);
        _peel_captured_callback (_peel_connection, sender_name, object_path, interface_name, signal_name, _peel_parameters);
      },
      &_peel_user_data, &_peel_user_data_free_func, peel::internals::is_const_invocable<DBusSignalCallback, void, DBusConnection *, const char *, const char *, const char *, const char *, GLib::Variant *>::value);
    return g_dbus_connection_signal_subscribe (_peel_this, sender, interface_name, member, object_path, arg0, _peel_flags, _peel_callback, _peel_user_data, _peel_user_data_free_func);
  }

  void
  signal_unsubscribe (unsigned subscription_id) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    g_dbus_connection_signal_unsubscribe (_peel_this, subscription_id);
  }

  void
  start_message_processing () noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    g_dbus_connection_start_message_processing (_peel_this);
  }

  void
  unexport_action_group (unsigned export_id) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    g_dbus_connection_unexport_action_group (_peel_this, export_id);
  }

  void
  unexport_menu_model (unsigned export_id) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    g_dbus_connection_unexport_menu_model (_peel_this, export_id);
  }

  bool
  unregister_object (unsigned registration_id) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    gboolean _peel_return = g_dbus_connection_unregister_object (_peel_this, registration_id);
    return !!_peel_return;
  }

  bool
  unregister_subtree (unsigned registration_id) noexcept
  {
    ::GDBusConnection *_peel_this = reinterpret_cast<::GDBusConnection *> (this);
    gboolean _peel_return = g_dbus_connection_unregister_subtree (_peel_this, registration_id);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_closed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusConnection, void (bool, const GLib::Error *)>::_peel_connect_by_name (this, "closed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_closed (HandlerObject *object, void (HandlerObject::*handler_method) (DBusConnection *, bool, const GLib::Error *), bool after = false) noexcept
  {
    return Signal<DBusConnection, void (bool, const GLib::Error *)>::_peel_connect_by_name (this, "closed", object, handler_method, after);
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

  static peel::Property<DBusCapabilityFlags>
  prop_capabilities ()
  {
    return peel::Property<DBusCapabilityFlags> { "capabilities" };
  }

  static peel::Property<bool>
  prop_closed ()
  {
    return peel::Property<bool> { "closed" };
  }

  static peel::Property<bool>
  prop_exit_on_close ()
  {
    return peel::Property<bool> { "exit-on-close" };
  }

  static peel::Property<DBusConnection::Flags>
  prop_flags ()
  {
    return peel::Property<DBusConnection::Flags> { "flags" };
  }

  static peel::Property<const char *>
  prop_guid ()
  {
    return peel::Property<const char *> { "guid" };
  }

  static peel::Property<IOStream>
  prop_stream ()
  {
    return peel::Property<IOStream> { "stream" };
  }

  static peel::Property<const char *>
  prop_unique_name ()
  {
    return peel::Property<const char *> { "unique-name" };
  }
}; /* class DBusConnection */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GObject/Closure.h>
#include <peel/Gio/DBusMessage.h>
#include <peel/Gio/UnixFDList.h>
