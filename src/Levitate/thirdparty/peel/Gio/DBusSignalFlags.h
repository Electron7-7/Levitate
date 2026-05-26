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
enum class DBusSignalFlags : std::underlying_type<::GDBusSignalFlags>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusSignalFlags>
{
  typedef Gio::DBusSignalFlags UnownedType;

  static Gio::DBusSignalFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusSignalFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::DBusSignalFlags flags)
  {
    g_value_set_flags (value, static_cast<::GDBusSignalFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusSignalFlags flags)
  {
    set (value, flags);
  }

  static Gio::DBusSignalFlags
  cast_for_create (Gio::DBusSignalFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusSignalFlags> ()
{
  return g_dbus_signal_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusSignalFlags>
{
  Gio::DBusSignalFlags default_value;

  constexpr PspecTraits (Gio::DBusSignalFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_dbus_signal_flags_get_type (),
                               static_cast<::GDBusSignalFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ DBusSignalFlags : std::underlying_type<::GDBusSignalFlags>::type
{
  NONE = G_DBUS_SIGNAL_FLAGS_NONE,
  NO_MATCH_RULE = G_DBUS_SIGNAL_FLAGS_NO_MATCH_RULE,
  MATCH_ARG0_NAMESPACE = G_DBUS_SIGNAL_FLAGS_MATCH_ARG0_NAMESPACE,
  MATCH_ARG0_PATH = G_DBUS_SIGNAL_FLAGS_MATCH_ARG0_PATH,
}; /* bitfield DBusSignalFlags */

static constexpr inline DBusSignalFlags
operator | (DBusSignalFlags lhs, DBusSignalFlags rhs)
{
  return DBusSignalFlags (static_cast<::GDBusSignalFlags> (lhs) | static_cast<::GDBusSignalFlags> (rhs));
}

static constexpr inline DBusSignalFlags
operator & (DBusSignalFlags lhs, DBusSignalFlags rhs)
{
  return DBusSignalFlags (static_cast<::GDBusSignalFlags> (lhs) & static_cast<::GDBusSignalFlags> (rhs));
}

static constexpr inline DBusSignalFlags
operator ^ (DBusSignalFlags lhs, DBusSignalFlags rhs)
{
  return DBusSignalFlags (static_cast<::GDBusSignalFlags> (lhs) ^ static_cast<::GDBusSignalFlags> (rhs));
}

static constexpr inline DBusSignalFlags
operator ~ (DBusSignalFlags lhs)
{
  return DBusSignalFlags (~static_cast<::GDBusSignalFlags> (lhs));
}

static inline DBusSignalFlags &
operator |= (DBusSignalFlags &lhs, DBusSignalFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DBusSignalFlags &
operator &= (DBusSignalFlags &lhs, DBusSignalFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DBusSignalFlags &
operator ^= (DBusSignalFlags &lhs, DBusSignalFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DBusSignalFlags lhs)
{
  return !static_cast<::GDBusSignalFlags> (lhs);
}

static constexpr inline bool
operator + (DBusSignalFlags lhs)
{
  return !!static_cast<::GDBusSignalFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
