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
enum class DBusSendMessageFlags : std::underlying_type<::GDBusSendMessageFlags>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusSendMessageFlags>
{
  typedef Gio::DBusSendMessageFlags UnownedType;

  static Gio::DBusSendMessageFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusSendMessageFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::DBusSendMessageFlags flags)
  {
    g_value_set_flags (value, static_cast<::GDBusSendMessageFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusSendMessageFlags flags)
  {
    set (value, flags);
  }

  static Gio::DBusSendMessageFlags
  cast_for_create (Gio::DBusSendMessageFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusSendMessageFlags> ()
{
  return g_dbus_send_message_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusSendMessageFlags>
{
  Gio::DBusSendMessageFlags default_value;

  constexpr PspecTraits (Gio::DBusSendMessageFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_dbus_send_message_flags_get_type (),
                               static_cast<::GDBusSendMessageFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ DBusSendMessageFlags : std::underlying_type<::GDBusSendMessageFlags>::type
{
  NONE = G_DBUS_SEND_MESSAGE_FLAGS_NONE,
  PRESERVE_SERIAL = G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL,
}; /* bitfield DBusSendMessageFlags */

static constexpr inline DBusSendMessageFlags
operator | (DBusSendMessageFlags lhs, DBusSendMessageFlags rhs)
{
  return DBusSendMessageFlags (static_cast<::GDBusSendMessageFlags> (lhs) | static_cast<::GDBusSendMessageFlags> (rhs));
}

static constexpr inline DBusSendMessageFlags
operator & (DBusSendMessageFlags lhs, DBusSendMessageFlags rhs)
{
  return DBusSendMessageFlags (static_cast<::GDBusSendMessageFlags> (lhs) & static_cast<::GDBusSendMessageFlags> (rhs));
}

static constexpr inline DBusSendMessageFlags
operator ^ (DBusSendMessageFlags lhs, DBusSendMessageFlags rhs)
{
  return DBusSendMessageFlags (static_cast<::GDBusSendMessageFlags> (lhs) ^ static_cast<::GDBusSendMessageFlags> (rhs));
}

static constexpr inline DBusSendMessageFlags
operator ~ (DBusSendMessageFlags lhs)
{
  return DBusSendMessageFlags (~static_cast<::GDBusSendMessageFlags> (lhs));
}

static inline DBusSendMessageFlags &
operator |= (DBusSendMessageFlags &lhs, DBusSendMessageFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DBusSendMessageFlags &
operator &= (DBusSendMessageFlags &lhs, DBusSendMessageFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DBusSendMessageFlags &
operator ^= (DBusSendMessageFlags &lhs, DBusSendMessageFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DBusSendMessageFlags lhs)
{
  return !static_cast<::GDBusSendMessageFlags> (lhs);
}

static constexpr inline bool
operator + (DBusSendMessageFlags lhs)
{
  return !!static_cast<::GDBusSendMessageFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
