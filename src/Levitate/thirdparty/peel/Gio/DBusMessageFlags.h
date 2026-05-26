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
#include <peel/Gio/DBusMessage.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusMessage::Flags>
{
  typedef Gio::DBusMessage::Flags UnownedType;

  static Gio::DBusMessage::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusMessage::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::DBusMessage::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GDBusMessageFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusMessage::Flags flags)
  {
    set (value, flags);
  }

  static Gio::DBusMessage::Flags
  cast_for_create (Gio::DBusMessage::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusMessage::Flags> ()
{
  return g_dbus_message_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusMessage::Flags>
{
  Gio::DBusMessage::Flags default_value;

  constexpr PspecTraits (Gio::DBusMessage::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_dbus_message_flags_get_type (),
                               static_cast<::GDBusMessageFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ DBusMessage::Flags : std::underlying_type<::GDBusMessageFlags>::type
{
  NONE = G_DBUS_MESSAGE_FLAGS_NONE,
  NO_REPLY_EXPECTED = G_DBUS_MESSAGE_FLAGS_NO_REPLY_EXPECTED,
  NO_AUTO_START = G_DBUS_MESSAGE_FLAGS_NO_AUTO_START,
  ALLOW_INTERACTIVE_AUTHORIZATION = G_DBUS_MESSAGE_FLAGS_ALLOW_INTERACTIVE_AUTHORIZATION,
}; /* bitfield DBusMessage::Flags */

static constexpr inline DBusMessage::Flags
operator | (DBusMessage::Flags lhs, DBusMessage::Flags rhs)
{
  return DBusMessage::Flags (static_cast<::GDBusMessageFlags> (lhs) | static_cast<::GDBusMessageFlags> (rhs));
}

static constexpr inline DBusMessage::Flags
operator & (DBusMessage::Flags lhs, DBusMessage::Flags rhs)
{
  return DBusMessage::Flags (static_cast<::GDBusMessageFlags> (lhs) & static_cast<::GDBusMessageFlags> (rhs));
}

static constexpr inline DBusMessage::Flags
operator ^ (DBusMessage::Flags lhs, DBusMessage::Flags rhs)
{
  return DBusMessage::Flags (static_cast<::GDBusMessageFlags> (lhs) ^ static_cast<::GDBusMessageFlags> (rhs));
}

static constexpr inline DBusMessage::Flags
operator ~ (DBusMessage::Flags lhs)
{
  return DBusMessage::Flags (~static_cast<::GDBusMessageFlags> (lhs));
}

static inline DBusMessage::Flags &
operator |= (DBusMessage::Flags &lhs, DBusMessage::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DBusMessage::Flags &
operator &= (DBusMessage::Flags &lhs, DBusMessage::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DBusMessage::Flags &
operator ^= (DBusMessage::Flags &lhs, DBusMessage::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DBusMessage::Flags lhs)
{
  return !static_cast<::GDBusMessageFlags> (lhs);
}

static constexpr inline bool
operator + (DBusMessage::Flags lhs)
{
  return !!static_cast<::GDBusMessageFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
