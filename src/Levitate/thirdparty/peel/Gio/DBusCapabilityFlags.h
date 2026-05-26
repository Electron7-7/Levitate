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
enum class DBusCapabilityFlags : std::underlying_type<::GDBusCapabilityFlags>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusCapabilityFlags>
{
  typedef Gio::DBusCapabilityFlags UnownedType;

  static Gio::DBusCapabilityFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusCapabilityFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::DBusCapabilityFlags flags)
  {
    g_value_set_flags (value, static_cast<::GDBusCapabilityFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusCapabilityFlags flags)
  {
    set (value, flags);
  }

  static Gio::DBusCapabilityFlags
  cast_for_create (Gio::DBusCapabilityFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusCapabilityFlags> ()
{
  return g_dbus_capability_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusCapabilityFlags>
{
  Gio::DBusCapabilityFlags default_value;

  constexpr PspecTraits (Gio::DBusCapabilityFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_dbus_capability_flags_get_type (),
                               static_cast<::GDBusCapabilityFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ DBusCapabilityFlags : std::underlying_type<::GDBusCapabilityFlags>::type
{
  NONE = G_DBUS_CAPABILITY_FLAGS_NONE,
  UNIX_FD_PASSING = G_DBUS_CAPABILITY_FLAGS_UNIX_FD_PASSING,
}; /* bitfield DBusCapabilityFlags */

static constexpr inline DBusCapabilityFlags
operator | (DBusCapabilityFlags lhs, DBusCapabilityFlags rhs)
{
  return DBusCapabilityFlags (static_cast<::GDBusCapabilityFlags> (lhs) | static_cast<::GDBusCapabilityFlags> (rhs));
}

static constexpr inline DBusCapabilityFlags
operator & (DBusCapabilityFlags lhs, DBusCapabilityFlags rhs)
{
  return DBusCapabilityFlags (static_cast<::GDBusCapabilityFlags> (lhs) & static_cast<::GDBusCapabilityFlags> (rhs));
}

static constexpr inline DBusCapabilityFlags
operator ^ (DBusCapabilityFlags lhs, DBusCapabilityFlags rhs)
{
  return DBusCapabilityFlags (static_cast<::GDBusCapabilityFlags> (lhs) ^ static_cast<::GDBusCapabilityFlags> (rhs));
}

static constexpr inline DBusCapabilityFlags
operator ~ (DBusCapabilityFlags lhs)
{
  return DBusCapabilityFlags (~static_cast<::GDBusCapabilityFlags> (lhs));
}

static inline DBusCapabilityFlags &
operator |= (DBusCapabilityFlags &lhs, DBusCapabilityFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DBusCapabilityFlags &
operator &= (DBusCapabilityFlags &lhs, DBusCapabilityFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DBusCapabilityFlags &
operator ^= (DBusCapabilityFlags &lhs, DBusCapabilityFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DBusCapabilityFlags lhs)
{
  return !static_cast<::GDBusCapabilityFlags> (lhs);
}

static constexpr inline bool
operator + (DBusCapabilityFlags lhs)
{
  return !!static_cast<::GDBusCapabilityFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
