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
#include <peel/Gio/DBusConnection.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusConnection::Flags>
{
  typedef Gio::DBusConnection::Flags UnownedType;

  static Gio::DBusConnection::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusConnection::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::DBusConnection::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GDBusConnectionFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusConnection::Flags flags)
  {
    set (value, flags);
  }

  static Gio::DBusConnection::Flags
  cast_for_create (Gio::DBusConnection::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusConnection::Flags> ()
{
  return g_dbus_connection_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusConnection::Flags>
{
  Gio::DBusConnection::Flags default_value;

  constexpr PspecTraits (Gio::DBusConnection::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_dbus_connection_flags_get_type (),
                               static_cast<::GDBusConnectionFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ DBusConnection::Flags : std::underlying_type<::GDBusConnectionFlags>::type
{
  NONE = G_DBUS_CONNECTION_FLAGS_NONE,
  AUTHENTICATION_CLIENT = G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_CLIENT,
  AUTHENTICATION_SERVER = G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER,
  AUTHENTICATION_ALLOW_ANONYMOUS = G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS,
  MESSAGE_BUS_CONNECTION = G_DBUS_CONNECTION_FLAGS_MESSAGE_BUS_CONNECTION,
  DELAY_MESSAGE_PROCESSING = G_DBUS_CONNECTION_FLAGS_DELAY_MESSAGE_PROCESSING,
  AUTHENTICATION_REQUIRE_SAME_USER = G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_REQUIRE_SAME_USER,
  CROSS_NAMESPACE = G_DBUS_CONNECTION_FLAGS_CROSS_NAMESPACE,
}; /* bitfield DBusConnection::Flags */

static constexpr inline DBusConnection::Flags
operator | (DBusConnection::Flags lhs, DBusConnection::Flags rhs)
{
  return DBusConnection::Flags (static_cast<::GDBusConnectionFlags> (lhs) | static_cast<::GDBusConnectionFlags> (rhs));
}

static constexpr inline DBusConnection::Flags
operator & (DBusConnection::Flags lhs, DBusConnection::Flags rhs)
{
  return DBusConnection::Flags (static_cast<::GDBusConnectionFlags> (lhs) & static_cast<::GDBusConnectionFlags> (rhs));
}

static constexpr inline DBusConnection::Flags
operator ^ (DBusConnection::Flags lhs, DBusConnection::Flags rhs)
{
  return DBusConnection::Flags (static_cast<::GDBusConnectionFlags> (lhs) ^ static_cast<::GDBusConnectionFlags> (rhs));
}

static constexpr inline DBusConnection::Flags
operator ~ (DBusConnection::Flags lhs)
{
  return DBusConnection::Flags (~static_cast<::GDBusConnectionFlags> (lhs));
}

static inline DBusConnection::Flags &
operator |= (DBusConnection::Flags &lhs, DBusConnection::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DBusConnection::Flags &
operator &= (DBusConnection::Flags &lhs, DBusConnection::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DBusConnection::Flags &
operator ^= (DBusConnection::Flags &lhs, DBusConnection::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DBusConnection::Flags lhs)
{
  return !static_cast<::GDBusConnectionFlags> (lhs);
}

static constexpr inline bool
operator + (DBusConnection::Flags lhs)
{
  return !!static_cast<::GDBusConnectionFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
