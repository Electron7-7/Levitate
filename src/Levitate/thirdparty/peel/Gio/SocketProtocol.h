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
enum class SocketProtocol : std::underlying_type<::GSocketProtocol>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::SocketProtocol>
{
  typedef Gio::SocketProtocol UnownedType;

  static Gio::SocketProtocol
  get (const ::GValue *value)
  {
    return static_cast<Gio::SocketProtocol> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::SocketProtocol m)
  {
    g_value_set_enum (value, static_cast<::GSocketProtocol> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::SocketProtocol m)
  {
    set (value, m);
  }

  static Gio::SocketProtocol
  cast_for_create (Gio::SocketProtocol m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::SocketProtocol> ()
{
  return g_socket_protocol_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::SocketProtocol>
{
  Gio::SocketProtocol default_value;

  constexpr PspecTraits (Gio::SocketProtocol default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_socket_protocol_get_type (),
                              static_cast<::GSocketProtocol> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class SocketProtocol : std::underlying_type<::GSocketProtocol>::type
{
  UNKNOWN = G_SOCKET_PROTOCOL_UNKNOWN,
  DEFAULT = G_SOCKET_PROTOCOL_DEFAULT,
  TCP = G_SOCKET_PROTOCOL_TCP,
  UDP = G_SOCKET_PROTOCOL_UDP,
  SCTP = G_SOCKET_PROTOCOL_SCTP,
}; /* enum SocketProtocol */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
