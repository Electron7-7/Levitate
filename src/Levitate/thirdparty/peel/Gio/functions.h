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
#include <peel/GLib/List.h>
#include <peel/GLib/Quark.h>
#include <peel/GLib/Variant.h>
#include <peel/Gio/IOModule.h>
#include <peel/Gio/Resource.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
enum class FileError : std::underlying_type<::GFileError>::type;
struct Quark;
struct Source;
class /* record */ Variant;
} /* namespace GLib */

namespace GObject
{
struct Closure;
class Object;
struct Value;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
enum class BusNameOwnerFlags : std::underlying_type<::GBusNameOwnerFlags>::type;
enum class BusNameWatcherFlags : std::underlying_type<::GBusNameWatcherFlags>::type;
enum class BusType : std::underlying_type<::GBusType>::type;
class Cancellable;
class DBusConnection;
class /* interface */ File;
enum class IOErrorEnum : std::underlying_type<::GIOErrorEnum>::type;
class IOModule;
class /* record */ IOSchedulerJob;
class IOStream;
class /* interface */ Icon;
class InputStream;
class OutputStream;
class /* record */ Resource;
class SettingsBackend;
} /* namespace Gio */


namespace Gio
{
/* action_name_is_valid moved to Action.name_is_valid */

/* action_parse_detailed_name moved to Action.parse_detailed_name */

/* action_print_detailed_name moved to Action.print_detailed_name */

/* app_info_create_from_commandline moved to AppInfo.create_from_commandline */

/* app_info_get_all moved to AppInfo.get_all */

/* app_info_get_all_for_type moved to AppInfo.get_all_for_type */

/* app_info_get_default_for_type moved to AppInfo.get_default_for_type */

/* app_info_get_default_for_type_async moved to AppInfo.get_default_for_type_async */

/* app_info_get_default_for_type_finish moved to AppInfo.get_default_for_type_finish */

/* app_info_get_default_for_uri_scheme moved to AppInfo.get_default_for_uri_scheme */

/* app_info_get_default_for_uri_scheme_async moved to AppInfo.get_default_for_uri_scheme_async */

/* app_info_get_default_for_uri_scheme_finish moved to AppInfo.get_default_for_uri_scheme_finish */

/* app_info_get_fallback_for_type moved to AppInfo.get_fallback_for_type */

/* app_info_get_recommended_for_type moved to AppInfo.get_recommended_for_type */

/* app_info_launch_default_for_uri moved to AppInfo.launch_default_for_uri */

/* app_info_launch_default_for_uri_async moved to AppInfo.launch_default_for_uri_async */

/* app_info_launch_default_for_uri_finish moved to AppInfo.launch_default_for_uri_finish */

/* app_info_reset_type_associations moved to AppInfo.reset_type_associations */

/* async_initable_newv_async moved to AsyncInitable.newv_async */

template<typename AsyncReadyCallback>
peel_no_warn_unused
static void
bus_get (BusType bus_type, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
{
  gpointer _peel_user_data;
  ::GBusType _peel_bus_type = static_cast<::GBusType> (bus_type);
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
  g_bus_get (_peel_bus_type, _peel_cancellable, _peel_callback, _peel_user_data);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<DBusConnection>
bus_get_finish (AsyncResult *res, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
  ::GError *_peel_error = nullptr;
  ::GDBusConnection *_peel_return = g_bus_get_finish (_peel_res, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::RefPtr<DBusConnection>::adopt_ref (reinterpret_cast<DBusConnection *> (_peel_return));
}

peel_no_warn_unused
static peel::RefPtr<DBusConnection>
bus_get_sync (BusType bus_type, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GBusType _peel_bus_type = static_cast<::GBusType> (bus_type);
  ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
  ::GError *_peel_error = nullptr;
  ::GDBusConnection *_peel_return = g_bus_get_sync (_peel_bus_type, _peel_cancellable, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::RefPtr<DBusConnection>::adopt_ref (reinterpret_cast<DBusConnection *> (_peel_return));
}

template<typename BusNameLostCallback>
peel_no_warn_unused peel_nonnull_args (2)
static unsigned
bus_own_name (BusType bus_type, const char *name, BusNameOwnerFlags flags, ::GBusAcquiredCallback bus_acquired_handler, ::GBusNameAcquiredCallback name_acquired_handler, BusNameLostCallback &&name_lost_handler) noexcept
{
  gpointer _peel_user_data;
  ::GDestroyNotify _peel_user_data_free_func;
  ::GBusType _peel_bus_type = static_cast<::GBusType> (bus_type);
  ::GBusNameOwnerFlags _peel_flags = static_cast<::GBusNameOwnerFlags> (flags);
  ::GBusNameLostCallback _peel_name_lost_handler = peel::internals::CallbackHelper<void, ::GDBusConnection *, const gchar *>::wrap_notified_callback (
      static_cast<BusNameLostCallback &&> (name_lost_handler),
      [] (::GDBusConnection *connection, const gchar *name, gpointer user_data) -> void
      {
        BusNameLostCallback &_peel_captured_name_lost_handler = *reinterpret_cast<typename std::remove_reference<BusNameLostCallback>::type *> (user_data);
        DBusConnection *_peel_connection = reinterpret_cast<DBusConnection *> (connection);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_name_lost_handler) (_peel_connection, name);
      },
      &_peel_user_data, &_peel_user_data_free_func, peel::internals::is_const_invocable<BusNameLostCallback, void, DBusConnection *, const char *>::value);
  return g_bus_own_name (_peel_bus_type, name, _peel_flags, bus_acquired_handler, name_acquired_handler, _peel_name_lost_handler, _peel_user_data, _peel_user_data_free_func);
}

template<typename BusNameLostCallback>
peel_no_warn_unused peel_nonnull_args (1, 2)
static unsigned
bus_own_name_on_connection (DBusConnection *connection, const char *name, BusNameOwnerFlags flags, ::GBusNameAcquiredCallback name_acquired_handler, BusNameLostCallback &&name_lost_handler) noexcept
{
  gpointer _peel_user_data;
  ::GDestroyNotify _peel_user_data_free_func;
  ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
  ::GBusNameOwnerFlags _peel_flags = static_cast<::GBusNameOwnerFlags> (flags);
  ::GBusNameLostCallback _peel_name_lost_handler = peel::internals::CallbackHelper<void, ::GDBusConnection *, const gchar *>::wrap_notified_callback (
      static_cast<BusNameLostCallback &&> (name_lost_handler),
      [] (::GDBusConnection *connection, const gchar *name, gpointer user_data) -> void
      {
        BusNameLostCallback &_peel_captured_name_lost_handler = *reinterpret_cast<typename std::remove_reference<BusNameLostCallback>::type *> (user_data);
        DBusConnection *_peel_connection = reinterpret_cast<DBusConnection *> (connection);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_name_lost_handler) (_peel_connection, name);
      },
      &_peel_user_data, &_peel_user_data_free_func, peel::internals::is_const_invocable<BusNameLostCallback, void, DBusConnection *, const char *>::value);
  return g_bus_own_name_on_connection (_peel_connection, name, _peel_flags, name_acquired_handler, _peel_name_lost_handler, _peel_user_data, _peel_user_data_free_func);
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static unsigned
bus_own_name_on_connection_with_closures (DBusConnection *connection, const char *name, BusNameOwnerFlags flags, peel::FloatPtr<GObject::Closure> name_acquired_closure, peel::FloatPtr<GObject::Closure> name_lost_closure) noexcept
{
  ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
  ::GBusNameOwnerFlags _peel_flags = static_cast<::GBusNameOwnerFlags> (flags);
  ::GClosure *_peel_name_acquired_closure = reinterpret_cast<::GClosure *> (std::move (name_acquired_closure).release_floating_ptr ());
  ::GClosure *_peel_name_lost_closure = reinterpret_cast<::GClosure *> (std::move (name_lost_closure).release_floating_ptr ());
  return g_bus_own_name_on_connection_with_closures (_peel_connection, name, _peel_flags, _peel_name_acquired_closure, _peel_name_lost_closure);
}

peel_no_warn_unused peel_nonnull_args (2)
static unsigned
bus_own_name_with_closures (BusType bus_type, const char *name, BusNameOwnerFlags flags, peel::FloatPtr<GObject::Closure> bus_acquired_closure, peel::FloatPtr<GObject::Closure> name_acquired_closure, peel::FloatPtr<GObject::Closure> name_lost_closure) noexcept
{
  ::GBusType _peel_bus_type = static_cast<::GBusType> (bus_type);
  ::GBusNameOwnerFlags _peel_flags = static_cast<::GBusNameOwnerFlags> (flags);
  ::GClosure *_peel_bus_acquired_closure = reinterpret_cast<::GClosure *> (std::move (bus_acquired_closure).release_floating_ptr ());
  ::GClosure *_peel_name_acquired_closure = reinterpret_cast<::GClosure *> (std::move (name_acquired_closure).release_floating_ptr ());
  ::GClosure *_peel_name_lost_closure = reinterpret_cast<::GClosure *> (std::move (name_lost_closure).release_floating_ptr ());
  return g_bus_own_name_with_closures (_peel_bus_type, name, _peel_flags, _peel_bus_acquired_closure, _peel_name_acquired_closure, _peel_name_lost_closure);
}

peel_no_warn_unused
static void
bus_unown_name (unsigned owner_id) noexcept
{
  g_bus_unown_name (owner_id);
}

peel_no_warn_unused
static void
bus_unwatch_name (unsigned watcher_id) noexcept
{
  g_bus_unwatch_name (watcher_id);
}

template<typename BusNameVanishedCallback>
peel_no_warn_unused peel_nonnull_args (2)
static unsigned
bus_watch_name (BusType bus_type, const char *name, BusNameWatcherFlags flags, ::GBusNameAppearedCallback name_appeared_handler, BusNameVanishedCallback &&name_vanished_handler) noexcept
{
  gpointer _peel_user_data;
  ::GDestroyNotify _peel_user_data_free_func;
  ::GBusType _peel_bus_type = static_cast<::GBusType> (bus_type);
  ::GBusNameWatcherFlags _peel_flags = static_cast<::GBusNameWatcherFlags> (flags);
  ::GBusNameVanishedCallback _peel_name_vanished_handler = peel::internals::CallbackHelper<void, ::GDBusConnection *, const gchar *>::wrap_notified_callback (
      static_cast<BusNameVanishedCallback &&> (name_vanished_handler),
      [] (::GDBusConnection *connection, const gchar *name, gpointer user_data) -> void
      {
        BusNameVanishedCallback &_peel_captured_name_vanished_handler = *reinterpret_cast<typename std::remove_reference<BusNameVanishedCallback>::type *> (user_data);
        DBusConnection *_peel_connection = reinterpret_cast<DBusConnection *> (connection);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_name_vanished_handler) (_peel_connection, name);
      },
      &_peel_user_data, &_peel_user_data_free_func, peel::internals::is_const_invocable<BusNameVanishedCallback, void, DBusConnection *, const char *>::value);
  return g_bus_watch_name (_peel_bus_type, name, _peel_flags, name_appeared_handler, _peel_name_vanished_handler, _peel_user_data, _peel_user_data_free_func);
}

template<typename BusNameVanishedCallback>
peel_no_warn_unused peel_nonnull_args (1, 2)
static unsigned
bus_watch_name_on_connection (DBusConnection *connection, const char *name, BusNameWatcherFlags flags, ::GBusNameAppearedCallback name_appeared_handler, BusNameVanishedCallback &&name_vanished_handler) noexcept
{
  gpointer _peel_user_data;
  ::GDestroyNotify _peel_user_data_free_func;
  ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
  ::GBusNameWatcherFlags _peel_flags = static_cast<::GBusNameWatcherFlags> (flags);
  ::GBusNameVanishedCallback _peel_name_vanished_handler = peel::internals::CallbackHelper<void, ::GDBusConnection *, const gchar *>::wrap_notified_callback (
      static_cast<BusNameVanishedCallback &&> (name_vanished_handler),
      [] (::GDBusConnection *connection, const gchar *name, gpointer user_data) -> void
      {
        BusNameVanishedCallback &_peel_captured_name_vanished_handler = *reinterpret_cast<typename std::remove_reference<BusNameVanishedCallback>::type *> (user_data);
        DBusConnection *_peel_connection = reinterpret_cast<DBusConnection *> (connection);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_name_vanished_handler) (_peel_connection, name);
      },
      &_peel_user_data, &_peel_user_data_free_func, peel::internals::is_const_invocable<BusNameVanishedCallback, void, DBusConnection *, const char *>::value);
  return g_bus_watch_name_on_connection (_peel_connection, name, _peel_flags, name_appeared_handler, _peel_name_vanished_handler, _peel_user_data, _peel_user_data_free_func);
}

peel_no_warn_unused peel_arg_in (4) peel_arg_in (5) peel_nonnull_args (1, 2)
static unsigned
bus_watch_name_on_connection_with_closures (DBusConnection *connection, const char *name, BusNameWatcherFlags flags, GObject::Closure *name_appeared_closure, GObject::Closure *name_vanished_closure) noexcept
{
  ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
  ::GBusNameWatcherFlags _peel_flags = static_cast<::GBusNameWatcherFlags> (flags);
  ::GClosure *_peel_name_appeared_closure = reinterpret_cast<::GClosure *> (name_appeared_closure);
  ::GClosure *_peel_name_vanished_closure = reinterpret_cast<::GClosure *> (name_vanished_closure);
  return g_bus_watch_name_on_connection_with_closures (_peel_connection, name, _peel_flags, _peel_name_appeared_closure, _peel_name_vanished_closure);
}

peel_no_warn_unused peel_arg_in (4) peel_arg_in (5) peel_nonnull_args (2)
static unsigned
bus_watch_name_with_closures (BusType bus_type, const char *name, BusNameWatcherFlags flags, GObject::Closure *name_appeared_closure, GObject::Closure *name_vanished_closure) noexcept
{
  ::GBusType _peel_bus_type = static_cast<::GBusType> (bus_type);
  ::GBusNameWatcherFlags _peel_flags = static_cast<::GBusNameWatcherFlags> (flags);
  ::GClosure *_peel_name_appeared_closure = reinterpret_cast<::GClosure *> (name_appeared_closure);
  ::GClosure *_peel_name_vanished_closure = reinterpret_cast<::GClosure *> (name_vanished_closure);
  return g_bus_watch_name_with_closures (_peel_bus_type, name, _peel_flags, _peel_name_appeared_closure, _peel_name_vanished_closure);
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
content_type_can_be_executable (const char *type) noexcept
{
  gboolean _peel_return = g_content_type_can_be_executable (type);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static bool
content_type_equals (const char *type1, const char *type2) noexcept
{
  gboolean _peel_return = g_content_type_equals (type1, type2);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
content_type_from_mime_type (const char *mime_type) noexcept
{
  gchar *_peel_return = g_content_type_from_mime_type (mime_type);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
content_type_get_description (const char *type) noexcept
{
  gchar *_peel_return = g_content_type_get_description (type);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
content_type_get_generic_icon_name (const char *type) noexcept
{
  gchar *_peel_return = g_content_type_get_generic_icon_name (type);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<Icon>
content_type_get_icon (const char *type) noexcept
{
  ::GIcon *_peel_return = g_content_type_get_icon (type);
  peel_assume (_peel_return);
  return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
}

peel_no_warn_unused
static peel::StrvRef
content_type_get_mime_dirs () noexcept
{
  const gchar* const *_peel_return = g_content_type_get_mime_dirs ();
  peel_assume (_peel_return);
  return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
content_type_get_mime_type (const char *type) noexcept
{
  gchar *_peel_return = g_content_type_get_mime_type (type);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<Icon>
content_type_get_symbolic_icon (const char *type) noexcept
{
  ::GIcon *_peel_return = g_content_type_get_symbolic_icon (type);
  peel_assume (_peel_return);
  return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
}

peel_no_warn_unused peel_arg_out (3)
static peel::String
content_type_guess (const char *filename, peel::ArrayRef<const uint8_t> data, bool *result_uncertain) noexcept
{
  gsize _peel_data_size;
  const guchar *_peel_data = (_peel_data_size = data.size (), reinterpret_cast<const guchar *> (data.data ()));
  gboolean _peel_result_uncertain;
  gchar *_peel_return = g_content_type_guess (filename, _peel_data, _peel_data_size, result_uncertain ? &_peel_result_uncertain : nullptr);
  if (result_uncertain)
    *result_uncertain = !!_peel_result_uncertain;
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::Strv
content_type_guess_for_tree (File *root) noexcept
{
  ::GFile *_peel_root = reinterpret_cast<::GFile *> (root);
  gchar **_peel_return = g_content_type_guess_for_tree (_peel_root);
  peel_assume (_peel_return);
  return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static bool
content_type_is_a (const char *type, const char *supertype) noexcept
{
  gboolean _peel_return = g_content_type_is_a (type, supertype);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static bool
content_type_is_mime_type (const char *type, const char *mime_type) noexcept
{
  gboolean _peel_return = g_content_type_is_mime_type (type, mime_type);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
content_type_is_unknown (const char *type) noexcept
{
  gboolean _peel_return = g_content_type_is_unknown (type);
  return !!_peel_return;
}

peel_no_warn_unused
static void
content_type_set_mime_dirs (peel::StrvRef dirs) noexcept
{
  const gchar* const *_peel_dirs = reinterpret_cast<const gchar* const *> (dirs.data ());
  g_content_type_set_mime_dirs (_peel_dirs);
}

peel_no_warn_unused
static GLib::List<peel::String>
content_types_get_registered () noexcept
{
  GList *_peel_return = g_content_types_get_registered ();
  return GLib::List<peel::String>::adopt_list (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
dbus_address_escape_value (const char *string) noexcept
{
  gchar *_peel_return = g_dbus_address_escape_value (string);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
dbus_address_get_for_bus_sync (BusType bus_type, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GBusType _peel_bus_type = static_cast<::GBusType> (bus_type);
  ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
  ::GError *_peel_error = nullptr;
  gchar *_peel_return = g_dbus_address_get_for_bus_sync (_peel_bus_type, _peel_cancellable, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::String::adopt_string (_peel_return);
}

template<typename AsyncReadyCallback>
peel_no_warn_unused peel_nonnull_args (1)
static void
dbus_address_get_stream (const char *address, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
{
  gpointer _peel_user_data;
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
  g_dbus_address_get_stream (address, _peel_cancellable, _peel_callback, _peel_user_data);
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (1)
static peel::RefPtr<IOStream>
dbus_address_get_stream_finish (AsyncResult *res, peel::String *out_guid, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GAsyncResult *_peel_res = reinterpret_cast<::GAsyncResult *> (res);
  gchar *_peel_out_guid;
  ::GError *_peel_error = nullptr;
  ::GIOStream *_peel_return = g_dbus_address_get_stream_finish (_peel_res, out_guid ? &_peel_out_guid : nullptr, &_peel_error);
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
      if (out_guid)
        *out_guid = peel::String::adopt_string (_peel_out_guid);
    }
  return peel::RefPtr<IOStream>::adopt_ref (reinterpret_cast<IOStream *> (_peel_return));
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (1)
static peel::RefPtr<IOStream>
dbus_address_get_stream_sync (const char *address, peel::String *out_guid, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gchar *_peel_out_guid;
  ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
  ::GError *_peel_error = nullptr;
  ::GIOStream *_peel_return = g_dbus_address_get_stream_sync (address, out_guid ? &_peel_out_guid : nullptr, _peel_cancellable, &_peel_error);
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
      if (out_guid)
        *out_guid = peel::String::adopt_string (_peel_out_guid);
    }
  return peel::RefPtr<IOStream>::adopt_ref (reinterpret_cast<IOStream *> (_peel_return));
}

/* dbus_annotation_info_lookup moved to DBusAnnotationInfo.lookup */

/* dbus_error_encode_gerror moved to DBusError.encode_gerror */

/* dbus_error_get_remote_error moved to DBusError.get_remote_error */

/* dbus_error_is_remote_error moved to DBusError.is_remote_error */

/* dbus_error_new_for_dbus_error moved to DBusError.new_for_dbus_error */

/* dbus_error_quark moved to DBusError.quark */

/* dbus_error_register_error moved to DBusError.register_error */

/* dbus_error_register_error_domain moved to DBusError.register_error_domain */

/* dbus_error_strip_remote_error moved to DBusError.strip_remote_error */

/* dbus_error_unregister_error moved to DBusError.unregister_error */

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
dbus_escape_object_path (const char *s) noexcept
{
  gchar *_peel_return = g_dbus_escape_object_path (s);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
dbus_escape_object_path_bytestring (peel::ZTArrayRef<const uint8_t> bytes) noexcept
{
  const guint8 *_peel_bytes = reinterpret_cast<const guint8 *> (bytes.data ());
  gchar *_peel_return = g_dbus_escape_object_path_bytestring (_peel_bytes);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
dbus_generate_guid () noexcept
{
  gchar *_peel_return = g_dbus_generate_guid ();
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2)
static peel::RefPtr<GLib::Variant>
dbus_gvalue_to_gvariant (const GObject::Value *gvalue, const GLib::Variant::Type *type) noexcept
{
  const ::GValue *_peel_gvalue = reinterpret_cast<const ::GValue *> (gvalue);
  const ::GVariantType *_peel_type = reinterpret_cast<const ::GVariantType *> (type);
  ::GVariant *_peel_return = g_dbus_gvalue_to_gvariant (_peel_gvalue, _peel_type);
  peel_assume (_peel_return);
  return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (2)
static void
dbus_gvariant_to_gvalue (peel::FloatPtr<GLib::Variant> value, GObject::Value *out_gvalue) noexcept
{
  ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
  ::GValue *_peel_out_gvalue = reinterpret_cast<::GValue *> (out_gvalue);
  g_dbus_gvariant_to_gvalue (_peel_value, _peel_out_gvalue);
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
dbus_is_address (const char *string) noexcept
{
  gboolean _peel_return = g_dbus_is_address (string);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
dbus_is_error_name (const char *string) noexcept
{
  gboolean _peel_return = g_dbus_is_error_name (string);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
dbus_is_guid (const char *string) noexcept
{
  gboolean _peel_return = g_dbus_is_guid (string);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
dbus_is_interface_name (const char *string) noexcept
{
  gboolean _peel_return = g_dbus_is_interface_name (string);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
dbus_is_member_name (const char *string) noexcept
{
  gboolean _peel_return = g_dbus_is_member_name (string);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
dbus_is_name (const char *string) noexcept
{
  gboolean _peel_return = g_dbus_is_name (string);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
dbus_is_supported_address (const char *string, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_dbus_is_supported_address (string, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
dbus_is_unique_name (const char *string) noexcept
{
  gboolean _peel_return = g_dbus_is_unique_name (string);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::ZTArrayRef<uint8_t>
dbus_unescape_object_path (const char *s) noexcept
{
  guint8 *_peel_return = g_dbus_unescape_object_path (s);
  return peel::ZTArrayRef<uint8_t>::adopt (reinterpret_cast<uint8_t *> (_peel_return));
}

/* dtls_client_connection_new moved to DtlsClientConnection.new */

/* dtls_server_connection_new moved to DtlsServerConnection.new */

/* file_new_build_filenamev moved to File.new_build_filenamev */

/* file_new_for_commandline_arg moved to File.new_for_commandline_arg */

/* file_new_for_commandline_arg_and_cwd moved to File.new_for_commandline_arg_and_cwd */

/* file_new_for_path moved to File.new_for_path */

/* file_new_for_uri moved to File.new_for_uri */

/* file_new_tmp moved to File.new_tmp */

/* file_new_tmp_async moved to File.new_tmp_async */

/* file_new_tmp_dir_async moved to File.new_tmp_dir_async */

/* file_new_tmp_dir_finish moved to File.new_tmp_dir_finish */

/* file_new_tmp_finish moved to File.new_tmp_finish */

/* file_parse_name moved to File.parse_name */

/* icon_deserialize moved to Icon.deserialize */

/* icon_new_for_string moved to Icon.new_for_string */

/* initable_newv moved to Initable.newv */

peel_no_warn_unused
static IOErrorEnum
io_error_from_errno (int err_no) noexcept
{
  ::GIOErrorEnum _peel_return = g_io_error_from_errno (err_no);
  return static_cast<IOErrorEnum> (_peel_return);
}

peel_no_warn_unused
static IOErrorEnum
io_error_from_file_error (GLib::FileError file_error) noexcept
{
  ::GFileError _peel_file_error = static_cast<::GFileError> (file_error);
  ::GIOErrorEnum _peel_return = g_io_error_from_file_error (_peel_file_error);
  return static_cast<IOErrorEnum> (_peel_return);
}

peel_no_warn_unused
static GLib::Quark
io_error_quark () noexcept
{
  ::GQuark _peel_return = g_io_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}

/* io_extension_point_implement moved to IOExtensionPoint.implement */

/* io_extension_point_lookup moved to IOExtensionPoint.lookup */

/* io_extension_point_register moved to IOExtensionPoint.register */

peel_no_warn_unused peel_nonnull_args (1)
static GLib::List<peel::RefPtr<IOModule>>
io_modules_load_all_in_directory (const char *dirname) noexcept
{
  GList *_peel_return = g_io_modules_load_all_in_directory (dirname);
  return GLib::List<peel::RefPtr<IOModule>>::adopt_list (_peel_return);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static GLib::List<peel::RefPtr<IOModule>>
io_modules_load_all_in_directory_with_scope (const char *dirname, IOModule::Scope *scope) noexcept
{
  ::GIOModuleScope *_peel_scope = reinterpret_cast<::GIOModuleScope *> (scope);
  GList *_peel_return = g_io_modules_load_all_in_directory_with_scope (dirname, _peel_scope);
  return GLib::List<peel::RefPtr<IOModule>>::adopt_list (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
io_modules_scan_all_in_directory (const char *dirname) noexcept
{
  g_io_modules_scan_all_in_directory (dirname);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static void
io_modules_scan_all_in_directory_with_scope (const char *dirname, IOModule::Scope *scope) noexcept
{
  ::GIOModuleScope *_peel_scope = reinterpret_cast<::GIOModuleScope *> (scope);
  g_io_modules_scan_all_in_directory_with_scope (dirname, _peel_scope);
}

peel_no_warn_unused
static void
io_scheduler_cancel_all_jobs () noexcept
{
  g_io_scheduler_cancel_all_jobs ();
}

template<typename IOSchedulerJobFunc>
peel_no_warn_unused
static void
io_scheduler_push_job (IOSchedulerJobFunc &&job_func, int io_priority, Cancellable *cancellable) noexcept
{
  gpointer _peel_user_data;
  ::GDestroyNotify _peel_notify;
  ::GIOSchedulerJobFunc _peel_job_func = peel::internals::CallbackHelper<gboolean, ::GIOSchedulerJob *, ::GCancellable *>::wrap_notified_callback (
      static_cast<IOSchedulerJobFunc &&> (job_func),
      [] (::GIOSchedulerJob *job, ::GCancellable *cancellable, gpointer data) -> gboolean
      {
        IOSchedulerJobFunc &_peel_captured_job_func = *reinterpret_cast<typename std::remove_reference<IOSchedulerJobFunc>::type *> (data);
        IOSchedulerJob *_peel_job = reinterpret_cast<IOSchedulerJob *> (job);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        bool _peel_return = _peel_captured_job_func (_peel_job, _peel_cancellable);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_notify, peel::internals::is_const_invocable<IOSchedulerJobFunc, void, IOSchedulerJob *, Cancellable *>::value);
  ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
  g_io_scheduler_push_job (_peel_job_func, _peel_user_data, _peel_notify, io_priority, _peel_cancellable);
}

/* Unsupported for now: keyfile_settings_backend_new: explicitly skipped */

/* memory_monitor_dup_default moved to MemoryMonitor.dup_default */

/* Unsupported for now: memory_settings_backend_new: explicitly skipped */

/* network_monitor_get_default moved to NetworkMonitor.get_default */

/* Unsupported for now: networking_init: explicitly skipped */

/* Unsupported for now: null_settings_backend_new: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<GLib::Source>
pollable_source_new (GObject::Object *pollable_stream) noexcept
{
  ::GObject *_peel_pollable_stream = reinterpret_cast<::GObject *> (pollable_stream);
  ::GSource *_peel_return = g_pollable_source_new (_peel_pollable_stream);
  peel_assume (_peel_return);
  return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1)
static peel::RefPtr<GLib::Source>
pollable_source_new_full (GObject::Object *pollable_stream, GLib::Source *child_source, Cancellable *cancellable) noexcept
{
  ::gpointer _peel_pollable_stream = reinterpret_cast<::gpointer> (pollable_stream);
  ::GSource *_peel_child_source = reinterpret_cast<::GSource *> (child_source);
  ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
  ::GSource *_peel_return = g_pollable_source_new_full (_peel_pollable_stream, _peel_child_source, _peel_cancellable);
  peel_assume (_peel_return);
  return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static gssize
pollable_stream_read (InputStream *stream, peel::ArrayRef<uint8_t> buffer, bool blocking, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gsize _peel_count;
  ::GInputStream *_peel_stream = reinterpret_cast<::GInputStream *> (stream);
  void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
  gboolean _peel_blocking = static_cast<gboolean> (blocking);
  ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
  ::GError *_peel_error = nullptr;
  gssize _peel_return = g_pollable_stream_read (_peel_stream, _peel_buffer, _peel_count, _peel_blocking, _peel_cancellable, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return _peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static gssize
pollable_stream_write (OutputStream *stream, peel::ArrayRef<uint8_t> buffer, bool blocking, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gsize _peel_count;
  ::GOutputStream *_peel_stream = reinterpret_cast<::GOutputStream *> (stream);
  void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
  gboolean _peel_blocking = static_cast<gboolean> (blocking);
  ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
  ::GError *_peel_error = nullptr;
  gssize _peel_return = g_pollable_stream_write (_peel_stream, _peel_buffer, _peel_count, _peel_blocking, _peel_cancellable, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return _peel_return;
}

peel_no_warn_unused peel_arg_out (4) peel_nonnull_args (1, 4)
static bool
pollable_stream_write_all (OutputStream *stream, peel::ArrayRef<uint8_t> buffer, bool blocking, size_t *bytes_written, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gsize _peel_count;
  ::GOutputStream *_peel_stream = reinterpret_cast<::GOutputStream *> (stream);
  void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
  gboolean _peel_blocking = static_cast<gboolean> (blocking);
  gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
  ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_pollable_stream_write_all (_peel_stream, _peel_buffer, _peel_count, _peel_blocking, _peel_bytes_written, _peel_cancellable, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

/* power_profile_monitor_dup_default moved to PowerProfileMonitor.dup_default */

/* proxy_get_default_for_protocol moved to Proxy.get_default_for_protocol */

/* proxy_resolver_get_default moved to ProxyResolver.get_default */

/* resolver_error_quark moved to ResolverError.quark */

/* resource_error_quark moved to ResourceError.quark */

/* resource_load moved to Resource.load */

peel_no_warn_unused peel_nonnull_args (1)
static peel::Strv
resources_enumerate_children (const char *path, Resource::LookupFlags lookup_flags, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GResourceLookupFlags _peel_lookup_flags = static_cast<::GResourceLookupFlags> (lookup_flags);
  ::GError *_peel_error = nullptr;
  char **_peel_return = g_resources_enumerate_children (path, _peel_lookup_flags, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
}

peel_no_warn_unused peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (1)
static bool
resources_get_info (const char *path, Resource::LookupFlags lookup_flags, size_t *size, uint32_t *flags, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GResourceLookupFlags _peel_lookup_flags = static_cast<::GResourceLookupFlags> (lookup_flags);
  gsize *_peel_size = reinterpret_cast<gsize *> (size);
  guint32 *_peel_flags = reinterpret_cast<guint32 *> (flags);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_resources_get_info (path, _peel_lookup_flags, _peel_size, _peel_flags, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
resources_has_children (const char *path) noexcept
{
  gboolean _peel_return = g_resources_has_children (path);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<GLib::Bytes>
resources_lookup_data (const char *path, Resource::LookupFlags lookup_flags, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GResourceLookupFlags _peel_lookup_flags = static_cast<::GResourceLookupFlags> (lookup_flags);
  ::GError *_peel_error = nullptr;
  ::GBytes *_peel_return = g_resources_lookup_data (path, _peel_lookup_flags, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::RefPtr<InputStream>
resources_open_stream (const char *path, Resource::LookupFlags lookup_flags, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GResourceLookupFlags _peel_lookup_flags = static_cast<::GResourceLookupFlags> (lookup_flags);
  ::GError *_peel_error = nullptr;
  ::GInputStream *_peel_return = g_resources_open_stream (path, _peel_lookup_flags, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::RefPtr<InputStream>::adopt_ref (reinterpret_cast<InputStream *> (_peel_return));
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
resources_register (Resource *resource) noexcept
{
  ::GResource *_peel_resource = reinterpret_cast<::GResource *> (resource);
  g_resources_register (_peel_resource);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
resources_unregister (Resource *resource) noexcept
{
  ::GResource *_peel_resource = reinterpret_cast<::GResource *> (resource);
  g_resources_unregister (_peel_resource);
}

/* settings_schema_source_get_default moved to SettingsSchemaSource.get_default */

template<typename AsyncReadyCallback, typename... Args>
peel_no_warn_unused peel_nonnull_args (5)
static void
simple_async_report_error_in_idle (GObject::Object *object, AsyncReadyCallback &&callback, GLib::Quark domain, int code, const char *format, Args ...args) noexcept
{
  gpointer _peel_user_data;
  ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
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
  g_simple_async_report_error_in_idle (_peel_object, _peel_callback, _peel_user_data, domain, code, format, args...);
}

template<typename AsyncReadyCallback>
peel_no_warn_unused peel_arg_in (3) peel_nonnull_args (3)
static void
simple_async_report_gerror_in_idle (GObject::Object *object, AsyncReadyCallback &&callback, const GLib::Error *error) noexcept
{
  gpointer _peel_user_data;
  ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
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
  const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
  g_simple_async_report_gerror_in_idle (_peel_object, _peel_callback, _peel_user_data, _peel_error);
}

template<typename AsyncReadyCallback>
peel_no_warn_unused peel_arg_in (3) peel_nonnull_args (3)
static void
simple_async_report_take_gerror_in_idle (GObject::Object *object, AsyncReadyCallback &&callback, GLib::Error *error) noexcept
{
  gpointer _peel_user_data;
  ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
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
  ::GError *_peel_error = reinterpret_cast<::GError *> (error);
  g_simple_async_report_take_gerror_in_idle (_peel_object, _peel_callback, _peel_user_data, _peel_error);
}

/* srv_target_list_sort moved to SrvTarget.list_sort */

/* tls_backend_get_default moved to TlsBackend.get_default */

/* tls_channel_binding_error_quark moved to TlsChannelBindingError.quark */

/* tls_client_connection_new moved to TlsClientConnection.new */

/* tls_error_quark moved to TlsError.quark */

/* tls_file_database_new moved to TlsFileDatabase.new */

/* tls_server_connection_new moved to TlsServerConnection.new */



} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
#include <peel/GLib/FileError.h>
#include <peel/GLib/Source.h>
#include <peel/GLib/VariantType.h>
#include <peel/GObject/Closure.h>
#include <peel/GObject/Object.h>
#include <peel/GObject/Value.h>
#include <peel/Gio/AsyncResult.h>
#include <peel/Gio/BusNameOwnerFlags.h>
#include <peel/Gio/BusNameWatcherFlags.h>
#include <peel/Gio/BusType.h>
#include <peel/Gio/Cancellable.h>
#include <peel/Gio/DBusConnection.h>
#include <peel/Gio/File.h>
#include <peel/Gio/IOErrorEnum.h>
#include <peel/Gio/IOModuleScope.h>
#include <peel/Gio/IOSchedulerJob.h>
#include <peel/Gio/IOStream.h>
#include <peel/Gio/Icon.h>
#include <peel/Gio/InputStream.h>
#include <peel/Gio/OutputStream.h>
#include <peel/Gio/ResourceLookupFlags.h>
#include <peel/Gio/SettingsBackend.h>
