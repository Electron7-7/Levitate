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

peel_begin_header

namespace peel
{
namespace Gio
{
enum class IOErrorEnum : std::underlying_type<::GIOErrorEnum>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::IOErrorEnum>
{
  typedef Gio::IOErrorEnum UnownedType;

  static Gio::IOErrorEnum
  get (const ::GValue *value)
  {
    return static_cast<Gio::IOErrorEnum> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::IOErrorEnum m)
  {
    g_value_set_enum (value, static_cast<::GIOErrorEnum> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::IOErrorEnum m)
  {
    set (value, m);
  }

  static Gio::IOErrorEnum
  cast_for_create (Gio::IOErrorEnum m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::IOErrorEnum> ()
{
  return g_io_error_enum_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::IOErrorEnum>
{
  Gio::IOErrorEnum default_value;

  constexpr PspecTraits (Gio::IOErrorEnum default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_io_error_enum_get_type (),
                              static_cast<::GIOErrorEnum> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class IOErrorEnum : std::underlying_type<::GIOErrorEnum>::type
{
  FAILED = G_IO_ERROR_FAILED,
  NOT_FOUND = G_IO_ERROR_NOT_FOUND,
  EXISTS = G_IO_ERROR_EXISTS,
  IS_DIRECTORY = G_IO_ERROR_IS_DIRECTORY,
  NOT_DIRECTORY = G_IO_ERROR_NOT_DIRECTORY,
  NOT_EMPTY = G_IO_ERROR_NOT_EMPTY,
  NOT_REGULAR_FILE = G_IO_ERROR_NOT_REGULAR_FILE,
  NOT_SYMBOLIC_LINK = G_IO_ERROR_NOT_SYMBOLIC_LINK,
  NOT_MOUNTABLE_FILE = G_IO_ERROR_NOT_MOUNTABLE_FILE,
  FILENAME_TOO_LONG = G_IO_ERROR_FILENAME_TOO_LONG,
  INVALID_FILENAME = G_IO_ERROR_INVALID_FILENAME,
  TOO_MANY_LINKS = G_IO_ERROR_TOO_MANY_LINKS,
  NO_SPACE = G_IO_ERROR_NO_SPACE,
  INVALID_ARGUMENT = G_IO_ERROR_INVALID_ARGUMENT,
  PERMISSION_DENIED = G_IO_ERROR_PERMISSION_DENIED,
  NOT_SUPPORTED = G_IO_ERROR_NOT_SUPPORTED,
  NOT_MOUNTED = G_IO_ERROR_NOT_MOUNTED,
  ALREADY_MOUNTED = G_IO_ERROR_ALREADY_MOUNTED,
  CLOSED = G_IO_ERROR_CLOSED,
  CANCELLED = G_IO_ERROR_CANCELLED,
  PENDING = G_IO_ERROR_PENDING,
  READ_ONLY = G_IO_ERROR_READ_ONLY,
  CANT_CREATE_BACKUP = G_IO_ERROR_CANT_CREATE_BACKUP,
  WRONG_ETAG = G_IO_ERROR_WRONG_ETAG,
  TIMED_OUT = G_IO_ERROR_TIMED_OUT,
  WOULD_RECURSE = G_IO_ERROR_WOULD_RECURSE,
  BUSY = G_IO_ERROR_BUSY,
  WOULD_BLOCK = G_IO_ERROR_WOULD_BLOCK,
  HOST_NOT_FOUND_ = G_IO_ERROR_HOST_NOT_FOUND,
  WOULD_MERGE = G_IO_ERROR_WOULD_MERGE,
  FAILED_HANDLED = G_IO_ERROR_FAILED_HANDLED,
  TOO_MANY_OPEN_FILES = G_IO_ERROR_TOO_MANY_OPEN_FILES,
  NOT_INITIALIZED = G_IO_ERROR_NOT_INITIALIZED,
  ADDRESS_IN_USE = G_IO_ERROR_ADDRESS_IN_USE,
  PARTIAL_INPUT = G_IO_ERROR_PARTIAL_INPUT,
  INVALID_DATA = G_IO_ERROR_INVALID_DATA,
  DBUS_ERROR = G_IO_ERROR_DBUS_ERROR,
  HOST_UNREACHABLE = G_IO_ERROR_HOST_UNREACHABLE,
  NETWORK_UNREACHABLE = G_IO_ERROR_NETWORK_UNREACHABLE,
  CONNECTION_REFUSED = G_IO_ERROR_CONNECTION_REFUSED,
  PROXY_FAILED = G_IO_ERROR_PROXY_FAILED,
  PROXY_AUTH_FAILED = G_IO_ERROR_PROXY_AUTH_FAILED,
  PROXY_NEED_AUTH = G_IO_ERROR_PROXY_NEED_AUTH,
  PROXY_NOT_ALLOWED = G_IO_ERROR_PROXY_NOT_ALLOWED,
  BROKEN_PIPE = G_IO_ERROR_BROKEN_PIPE,
  CONNECTION_CLOSED = G_IO_ERROR_CONNECTION_CLOSED,
  NOT_CONNECTED = G_IO_ERROR_NOT_CONNECTED,
  MESSAGE_TOO_LARGE = G_IO_ERROR_MESSAGE_TOO_LARGE,
  NO_SUCH_DEVICE = G_IO_ERROR_NO_SUCH_DEVICE,
  DESTINATION_UNSET = G_IO_ERROR_DESTINATION_UNSET,
}; /* enum IOErrorEnum */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
