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
#include <peel/Gio/DBusObjectManagerClient.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusObjectManagerClient::Flags>
{
  typedef Gio::DBusObjectManagerClient::Flags UnownedType;

  static Gio::DBusObjectManagerClient::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusObjectManagerClient::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::DBusObjectManagerClient::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GDBusObjectManagerClientFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusObjectManagerClient::Flags flags)
  {
    set (value, flags);
  }

  static Gio::DBusObjectManagerClient::Flags
  cast_for_create (Gio::DBusObjectManagerClient::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusObjectManagerClient::Flags> ()
{
  return g_dbus_object_manager_client_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusObjectManagerClient::Flags>
{
  Gio::DBusObjectManagerClient::Flags default_value;

  constexpr PspecTraits (Gio::DBusObjectManagerClient::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_dbus_object_manager_client_flags_get_type (),
                               static_cast<::GDBusObjectManagerClientFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ DBusObjectManagerClient::Flags : std::underlying_type<::GDBusObjectManagerClientFlags>::type
{
  NONE = G_DBUS_OBJECT_MANAGER_CLIENT_FLAGS_NONE,
  DO_NOT_AUTO_START = G_DBUS_OBJECT_MANAGER_CLIENT_FLAGS_DO_NOT_AUTO_START,
}; /* bitfield DBusObjectManagerClient::Flags */

static constexpr inline DBusObjectManagerClient::Flags
operator | (DBusObjectManagerClient::Flags lhs, DBusObjectManagerClient::Flags rhs)
{
  return DBusObjectManagerClient::Flags (static_cast<::GDBusObjectManagerClientFlags> (lhs) | static_cast<::GDBusObjectManagerClientFlags> (rhs));
}

static constexpr inline DBusObjectManagerClient::Flags
operator & (DBusObjectManagerClient::Flags lhs, DBusObjectManagerClient::Flags rhs)
{
  return DBusObjectManagerClient::Flags (static_cast<::GDBusObjectManagerClientFlags> (lhs) & static_cast<::GDBusObjectManagerClientFlags> (rhs));
}

static constexpr inline DBusObjectManagerClient::Flags
operator ^ (DBusObjectManagerClient::Flags lhs, DBusObjectManagerClient::Flags rhs)
{
  return DBusObjectManagerClient::Flags (static_cast<::GDBusObjectManagerClientFlags> (lhs) ^ static_cast<::GDBusObjectManagerClientFlags> (rhs));
}

static constexpr inline DBusObjectManagerClient::Flags
operator ~ (DBusObjectManagerClient::Flags lhs)
{
  return DBusObjectManagerClient::Flags (~static_cast<::GDBusObjectManagerClientFlags> (lhs));
}

static inline DBusObjectManagerClient::Flags &
operator |= (DBusObjectManagerClient::Flags &lhs, DBusObjectManagerClient::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DBusObjectManagerClient::Flags &
operator &= (DBusObjectManagerClient::Flags &lhs, DBusObjectManagerClient::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DBusObjectManagerClient::Flags &
operator ^= (DBusObjectManagerClient::Flags &lhs, DBusObjectManagerClient::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DBusObjectManagerClient::Flags lhs)
{
  return !static_cast<::GDBusObjectManagerClientFlags> (lhs);
}

static constexpr inline bool
operator + (DBusObjectManagerClient::Flags lhs)
{
  return !!static_cast<::GDBusObjectManagerClientFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
