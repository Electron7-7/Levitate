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
enum class SocketMsgFlags : std::underlying_type<::GSocketMsgFlags>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::SocketMsgFlags>
{
  typedef Gio::SocketMsgFlags UnownedType;

  static Gio::SocketMsgFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::SocketMsgFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::SocketMsgFlags flags)
  {
    g_value_set_flags (value, static_cast<::GSocketMsgFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::SocketMsgFlags flags)
  {
    set (value, flags);
  }

  static Gio::SocketMsgFlags
  cast_for_create (Gio::SocketMsgFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::SocketMsgFlags> ()
{
  return g_socket_msg_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::SocketMsgFlags>
{
  Gio::SocketMsgFlags default_value;

  constexpr PspecTraits (Gio::SocketMsgFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_socket_msg_flags_get_type (),
                               static_cast<::GSocketMsgFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ SocketMsgFlags : std::underlying_type<::GSocketMsgFlags>::type
{
  NONE = G_SOCKET_MSG_NONE,
  OOB = G_SOCKET_MSG_OOB,
  PEEK = G_SOCKET_MSG_PEEK,
  DONTROUTE = G_SOCKET_MSG_DONTROUTE,
}; /* bitfield SocketMsgFlags */

static constexpr inline SocketMsgFlags
operator | (SocketMsgFlags lhs, SocketMsgFlags rhs)
{
  return SocketMsgFlags (static_cast<::GSocketMsgFlags> (lhs) | static_cast<::GSocketMsgFlags> (rhs));
}

static constexpr inline SocketMsgFlags
operator & (SocketMsgFlags lhs, SocketMsgFlags rhs)
{
  return SocketMsgFlags (static_cast<::GSocketMsgFlags> (lhs) & static_cast<::GSocketMsgFlags> (rhs));
}

static constexpr inline SocketMsgFlags
operator ^ (SocketMsgFlags lhs, SocketMsgFlags rhs)
{
  return SocketMsgFlags (static_cast<::GSocketMsgFlags> (lhs) ^ static_cast<::GSocketMsgFlags> (rhs));
}

static constexpr inline SocketMsgFlags
operator ~ (SocketMsgFlags lhs)
{
  return SocketMsgFlags (~static_cast<::GSocketMsgFlags> (lhs));
}

static inline SocketMsgFlags &
operator |= (SocketMsgFlags &lhs, SocketMsgFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline SocketMsgFlags &
operator &= (SocketMsgFlags &lhs, SocketMsgFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline SocketMsgFlags &
operator ^= (SocketMsgFlags &lhs, SocketMsgFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (SocketMsgFlags lhs)
{
  return !static_cast<::GSocketMsgFlags> (lhs);
}

static constexpr inline bool
operator + (SocketMsgFlags lhs)
{
  return !!static_cast<::GSocketMsgFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
