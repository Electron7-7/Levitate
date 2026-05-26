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
#include <peel/Gio/DBusServer.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusServer::Flags>
{
  typedef Gio::DBusServer::Flags UnownedType;

  static Gio::DBusServer::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusServer::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::DBusServer::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GDBusServerFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusServer::Flags flags)
  {
    set (value, flags);
  }

  static Gio::DBusServer::Flags
  cast_for_create (Gio::DBusServer::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusServer::Flags> ()
{
  return g_dbus_server_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusServer::Flags>
{
  Gio::DBusServer::Flags default_value;

  constexpr PspecTraits (Gio::DBusServer::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_dbus_server_flags_get_type (),
                               static_cast<::GDBusServerFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ DBusServer::Flags : std::underlying_type<::GDBusServerFlags>::type
{
  NONE = G_DBUS_SERVER_FLAGS_NONE,
  RUN_IN_THREAD = G_DBUS_SERVER_FLAGS_RUN_IN_THREAD,
  AUTHENTICATION_ALLOW_ANONYMOUS = G_DBUS_SERVER_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS,
  AUTHENTICATION_REQUIRE_SAME_USER = G_DBUS_SERVER_FLAGS_AUTHENTICATION_REQUIRE_SAME_USER,
}; /* bitfield DBusServer::Flags */

static constexpr inline DBusServer::Flags
operator | (DBusServer::Flags lhs, DBusServer::Flags rhs)
{
  return DBusServer::Flags (static_cast<::GDBusServerFlags> (lhs) | static_cast<::GDBusServerFlags> (rhs));
}

static constexpr inline DBusServer::Flags
operator & (DBusServer::Flags lhs, DBusServer::Flags rhs)
{
  return DBusServer::Flags (static_cast<::GDBusServerFlags> (lhs) & static_cast<::GDBusServerFlags> (rhs));
}

static constexpr inline DBusServer::Flags
operator ^ (DBusServer::Flags lhs, DBusServer::Flags rhs)
{
  return DBusServer::Flags (static_cast<::GDBusServerFlags> (lhs) ^ static_cast<::GDBusServerFlags> (rhs));
}

static constexpr inline DBusServer::Flags
operator ~ (DBusServer::Flags lhs)
{
  return DBusServer::Flags (~static_cast<::GDBusServerFlags> (lhs));
}

static inline DBusServer::Flags &
operator |= (DBusServer::Flags &lhs, DBusServer::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DBusServer::Flags &
operator &= (DBusServer::Flags &lhs, DBusServer::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DBusServer::Flags &
operator ^= (DBusServer::Flags &lhs, DBusServer::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DBusServer::Flags lhs)
{
  return !static_cast<::GDBusServerFlags> (lhs);
}

static constexpr inline bool
operator + (DBusServer::Flags lhs)
{
  return !!static_cast<::GDBusServerFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
