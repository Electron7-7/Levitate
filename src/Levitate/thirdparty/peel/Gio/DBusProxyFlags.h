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
#include <peel/Gio/DBusProxy.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusProxy::Flags>
{
  typedef Gio::DBusProxy::Flags UnownedType;

  static Gio::DBusProxy::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusProxy::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::DBusProxy::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GDBusProxyFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusProxy::Flags flags)
  {
    set (value, flags);
  }

  static Gio::DBusProxy::Flags
  cast_for_create (Gio::DBusProxy::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusProxy::Flags> ()
{
  return g_dbus_proxy_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusProxy::Flags>
{
  Gio::DBusProxy::Flags default_value;

  constexpr PspecTraits (Gio::DBusProxy::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_dbus_proxy_flags_get_type (),
                               static_cast<::GDBusProxyFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ DBusProxy::Flags : std::underlying_type<::GDBusProxyFlags>::type
{
  NONE = G_DBUS_PROXY_FLAGS_NONE,
  DO_NOT_LOAD_PROPERTIES = G_DBUS_PROXY_FLAGS_DO_NOT_LOAD_PROPERTIES,
  DO_NOT_CONNECT_SIGNALS = G_DBUS_PROXY_FLAGS_DO_NOT_CONNECT_SIGNALS,
  DO_NOT_AUTO_START = G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START,
  GET_INVALIDATED_PROPERTIES = G_DBUS_PROXY_FLAGS_GET_INVALIDATED_PROPERTIES,
  DO_NOT_AUTO_START_AT_CONSTRUCTION = G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START_AT_CONSTRUCTION,
  NO_MATCH_RULE = G_DBUS_PROXY_FLAGS_NO_MATCH_RULE,
}; /* bitfield DBusProxy::Flags */

static constexpr inline DBusProxy::Flags
operator | (DBusProxy::Flags lhs, DBusProxy::Flags rhs)
{
  return DBusProxy::Flags (static_cast<::GDBusProxyFlags> (lhs) | static_cast<::GDBusProxyFlags> (rhs));
}

static constexpr inline DBusProxy::Flags
operator & (DBusProxy::Flags lhs, DBusProxy::Flags rhs)
{
  return DBusProxy::Flags (static_cast<::GDBusProxyFlags> (lhs) & static_cast<::GDBusProxyFlags> (rhs));
}

static constexpr inline DBusProxy::Flags
operator ^ (DBusProxy::Flags lhs, DBusProxy::Flags rhs)
{
  return DBusProxy::Flags (static_cast<::GDBusProxyFlags> (lhs) ^ static_cast<::GDBusProxyFlags> (rhs));
}

static constexpr inline DBusProxy::Flags
operator ~ (DBusProxy::Flags lhs)
{
  return DBusProxy::Flags (~static_cast<::GDBusProxyFlags> (lhs));
}

static inline DBusProxy::Flags &
operator |= (DBusProxy::Flags &lhs, DBusProxy::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DBusProxy::Flags &
operator &= (DBusProxy::Flags &lhs, DBusProxy::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DBusProxy::Flags &
operator ^= (DBusProxy::Flags &lhs, DBusProxy::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DBusProxy::Flags lhs)
{
  return !static_cast<::GDBusProxyFlags> (lhs);
}

static constexpr inline bool
operator + (DBusProxy::Flags lhs)
{
  return !!static_cast<::GDBusProxyFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
