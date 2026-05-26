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
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
struct Quark;
} /* namespace GLib */

namespace Gio
{
enum class DBusError : std::underlying_type<::GDBusError>::type;
struct DBusErrorEntry;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusError>
{
  typedef Gio::DBusError UnownedType;

  static Gio::DBusError
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::DBusError m)
  {
    g_value_set_enum (value, static_cast<::GDBusError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusError m)
  {
    set (value, m);
  }

  static Gio::DBusError
  cast_for_create (Gio::DBusError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusError> ()
{
  return g_dbus_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusError>
{
  Gio::DBusError default_value;

  constexpr PspecTraits (Gio::DBusError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_dbus_error_get_type (),
                              static_cast<::GDBusError> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class DBusError : std::underlying_type<::GDBusError>::type
{
  FAILED = G_DBUS_ERROR_FAILED,
  NO_MEMORY = G_DBUS_ERROR_NO_MEMORY,
  SERVICE_UNKNOWN = G_DBUS_ERROR_SERVICE_UNKNOWN,
  NAME_HAS_NO_OWNER = G_DBUS_ERROR_NAME_HAS_NO_OWNER,
  NO_REPLY = G_DBUS_ERROR_NO_REPLY,
  IO_ERROR = G_DBUS_ERROR_IO_ERROR,
  BAD_ADDRESS = G_DBUS_ERROR_BAD_ADDRESS,
  NOT_SUPPORTED = G_DBUS_ERROR_NOT_SUPPORTED,
  LIMITS_EXCEEDED = G_DBUS_ERROR_LIMITS_EXCEEDED,
  ACCESS_DENIED = G_DBUS_ERROR_ACCESS_DENIED,
  AUTH_FAILED = G_DBUS_ERROR_AUTH_FAILED,
  NO_SERVER = G_DBUS_ERROR_NO_SERVER,
  TIMEOUT = G_DBUS_ERROR_TIMEOUT,
  NO_NETWORK = G_DBUS_ERROR_NO_NETWORK,
  ADDRESS_IN_USE = G_DBUS_ERROR_ADDRESS_IN_USE,
  DISCONNECTED = G_DBUS_ERROR_DISCONNECTED,
  INVALID_ARGS = G_DBUS_ERROR_INVALID_ARGS,
  FILE_NOT_FOUND = G_DBUS_ERROR_FILE_NOT_FOUND,
  FILE_EXISTS = G_DBUS_ERROR_FILE_EXISTS,
  UNKNOWN_METHOD = G_DBUS_ERROR_UNKNOWN_METHOD,
  TIMED_OUT = G_DBUS_ERROR_TIMED_OUT,
  MATCH_RULE_NOT_FOUND = G_DBUS_ERROR_MATCH_RULE_NOT_FOUND,
  MATCH_RULE_INVALID = G_DBUS_ERROR_MATCH_RULE_INVALID,
  SPAWN_EXEC_FAILED = G_DBUS_ERROR_SPAWN_EXEC_FAILED,
  SPAWN_FORK_FAILED = G_DBUS_ERROR_SPAWN_FORK_FAILED,
  SPAWN_CHILD_EXITED = G_DBUS_ERROR_SPAWN_CHILD_EXITED,
  SPAWN_CHILD_SIGNALED = G_DBUS_ERROR_SPAWN_CHILD_SIGNALED,
  SPAWN_FAILED = G_DBUS_ERROR_SPAWN_FAILED,
  SPAWN_SETUP_FAILED = G_DBUS_ERROR_SPAWN_SETUP_FAILED,
  SPAWN_CONFIG_INVALID = G_DBUS_ERROR_SPAWN_CONFIG_INVALID,
  SPAWN_SERVICE_INVALID = G_DBUS_ERROR_SPAWN_SERVICE_INVALID,
  SPAWN_SERVICE_NOT_FOUND = G_DBUS_ERROR_SPAWN_SERVICE_NOT_FOUND,
  SPAWN_PERMISSIONS_INVALID = G_DBUS_ERROR_SPAWN_PERMISSIONS_INVALID,
  SPAWN_FILE_INVALID = G_DBUS_ERROR_SPAWN_FILE_INVALID,
  SPAWN_NO_MEMORY = G_DBUS_ERROR_SPAWN_NO_MEMORY,
  UNIX_PROCESS_ID_UNKNOWN = G_DBUS_ERROR_UNIX_PROCESS_ID_UNKNOWN,
  INVALID_SIGNATURE = G_DBUS_ERROR_INVALID_SIGNATURE,
  INVALID_FILE_CONTENT = G_DBUS_ERROR_INVALID_FILE_CONTENT,
  SELINUX_SECURITY_CONTEXT_UNKNOWN = G_DBUS_ERROR_SELINUX_SECURITY_CONTEXT_UNKNOWN,
  ADT_AUDIT_DATA_UNKNOWN = G_DBUS_ERROR_ADT_AUDIT_DATA_UNKNOWN,
  OBJECT_PATH_IN_USE = G_DBUS_ERROR_OBJECT_PATH_IN_USE,
  UNKNOWN_OBJECT = G_DBUS_ERROR_UNKNOWN_OBJECT,
  UNKNOWN_INTERFACE = G_DBUS_ERROR_UNKNOWN_INTERFACE,
  UNKNOWN_PROPERTY = G_DBUS_ERROR_UNKNOWN_PROPERTY,
  PROPERTY_READ_ONLY = G_DBUS_ERROR_PROPERTY_READ_ONLY,
}; /* enum DBusError */

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static peel::String
dbus_error_encode_gerror (const GLib::Error *error) noexcept
{
  const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
  gchar *_peel_return = g_dbus_error_encode_gerror (_peel_error);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static peel::String
dbus_error_get_remote_error (const GLib::Error *error) noexcept
{
  const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
  gchar *_peel_return = g_dbus_error_get_remote_error (_peel_error);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static bool
dbus_error_is_remote_error (const GLib::Error *error) noexcept
{
  const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
  gboolean _peel_return = g_dbus_error_is_remote_error (_peel_error);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static peel::UniquePtr<GLib::Error>
dbus_error_new_for_dbus_error (const char *dbus_error_name, const char *dbus_error_message) noexcept
{
  ::GError *_peel_return = g_dbus_error_new_for_dbus_error (dbus_error_name, dbus_error_message);
  peel_assume (_peel_return);
  return peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_return));
}

peel_no_warn_unused
static GLib::Quark
dbus_error_quark () noexcept
{
  ::GQuark _peel_return = g_dbus_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (3)
static bool
dbus_error_register_error (GLib::Quark error_domain, int error_code, const char *dbus_error_name) noexcept
{
  gboolean _peel_return = g_dbus_error_register_error (error_domain, error_code, dbus_error_name);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (1, 2)
static void
dbus_error_register_error_domain (const char *error_domain_quark_name, size_t *quark_volatile, peel::ArrayRef<const DBusErrorEntry *> entries) noexcept
{
  guint _peel_num_entries;
  volatile gsize *_peel_quark_volatile = reinterpret_cast<volatile gsize *> (quark_volatile);
  const ::GDBusErrorEntry *_peel_entries = (_peel_num_entries = entries.size (), reinterpret_cast<const ::GDBusErrorEntry *> (entries.data ()));
  g_dbus_error_register_error_domain (error_domain_quark_name, _peel_quark_volatile, _peel_entries, _peel_num_entries);
}

template<typename... Args>
peel_no_warn_unused peel_arg_out (1) peel_nonnull_args (2, 3)
static void
dbus_error_set_dbus_error (peel::UniquePtr<GLib::Error> *error, const char *dbus_error_name, const char *dbus_error_message, const char *format, Args ...args) noexcept
{
  ::GError *_peel_error;
  g_dbus_error_set_dbus_error (error ? &_peel_error : nullptr, dbus_error_name, dbus_error_message, format, args...);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
}

peel_no_warn_unused peel_arg_out (1) peel_nonnull_args (2, 3)
static void
dbus_error_set_dbus_error_valist (peel::UniquePtr<GLib::Error> *error, const char *dbus_error_name, const char *dbus_error_message, const char *format, va_list var_args) noexcept
{
  ::GError *_peel_error;
  g_dbus_error_set_dbus_error_valist (error ? &_peel_error : nullptr, dbus_error_name, dbus_error_message, format, var_args);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static bool
dbus_error_strip_remote_error (GLib::Error *error) noexcept
{
  ::GError *_peel_error = reinterpret_cast<::GError *> (error);
  gboolean _peel_return = g_dbus_error_strip_remote_error (_peel_error);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (3)
static bool
dbus_error_unregister_error (GLib::Quark error_domain, int error_code, const char *dbus_error_name) noexcept
{
  gboolean _peel_return = g_dbus_error_unregister_error (error_domain, error_code, dbus_error_name);
  return !!_peel_return;
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/DBusErrorEntry.h>
