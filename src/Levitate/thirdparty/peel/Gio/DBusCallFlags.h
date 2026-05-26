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
enum class DBusCallFlags : std::underlying_type<::GDBusCallFlags>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusCallFlags>
{
  typedef Gio::DBusCallFlags UnownedType;

  static Gio::DBusCallFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusCallFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::DBusCallFlags flags)
  {
    g_value_set_flags (value, static_cast<::GDBusCallFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusCallFlags flags)
  {
    set (value, flags);
  }

  static Gio::DBusCallFlags
  cast_for_create (Gio::DBusCallFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusCallFlags> ()
{
  return g_dbus_call_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusCallFlags>
{
  Gio::DBusCallFlags default_value;

  constexpr PspecTraits (Gio::DBusCallFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_dbus_call_flags_get_type (),
                               static_cast<::GDBusCallFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ DBusCallFlags : std::underlying_type<::GDBusCallFlags>::type
{
  NONE = G_DBUS_CALL_FLAGS_NONE,
  NO_AUTO_START = G_DBUS_CALL_FLAGS_NO_AUTO_START,
  ALLOW_INTERACTIVE_AUTHORIZATION = G_DBUS_CALL_FLAGS_ALLOW_INTERACTIVE_AUTHORIZATION,
}; /* bitfield DBusCallFlags */

static constexpr inline DBusCallFlags
operator | (DBusCallFlags lhs, DBusCallFlags rhs)
{
  return DBusCallFlags (static_cast<::GDBusCallFlags> (lhs) | static_cast<::GDBusCallFlags> (rhs));
}

static constexpr inline DBusCallFlags
operator & (DBusCallFlags lhs, DBusCallFlags rhs)
{
  return DBusCallFlags (static_cast<::GDBusCallFlags> (lhs) & static_cast<::GDBusCallFlags> (rhs));
}

static constexpr inline DBusCallFlags
operator ^ (DBusCallFlags lhs, DBusCallFlags rhs)
{
  return DBusCallFlags (static_cast<::GDBusCallFlags> (lhs) ^ static_cast<::GDBusCallFlags> (rhs));
}

static constexpr inline DBusCallFlags
operator ~ (DBusCallFlags lhs)
{
  return DBusCallFlags (~static_cast<::GDBusCallFlags> (lhs));
}

static inline DBusCallFlags &
operator |= (DBusCallFlags &lhs, DBusCallFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DBusCallFlags &
operator &= (DBusCallFlags &lhs, DBusCallFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DBusCallFlags &
operator ^= (DBusCallFlags &lhs, DBusCallFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DBusCallFlags lhs)
{
  return !static_cast<::GDBusCallFlags> (lhs);
}

static constexpr inline bool
operator + (DBusCallFlags lhs)
{
  return !!static_cast<::GDBusCallFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
