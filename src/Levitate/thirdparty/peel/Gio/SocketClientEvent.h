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
enum class SocketClientEvent : std::underlying_type<::GSocketClientEvent>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::SocketClientEvent>
{
  typedef Gio::SocketClientEvent UnownedType;

  static Gio::SocketClientEvent
  get (const ::GValue *value)
  {
    return static_cast<Gio::SocketClientEvent> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::SocketClientEvent m)
  {
    g_value_set_enum (value, static_cast<::GSocketClientEvent> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::SocketClientEvent m)
  {
    set (value, m);
  }

  static Gio::SocketClientEvent
  cast_for_create (Gio::SocketClientEvent m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::SocketClientEvent> ()
{
  return g_socket_client_event_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::SocketClientEvent>
{
  Gio::SocketClientEvent default_value;

  constexpr PspecTraits (Gio::SocketClientEvent default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_socket_client_event_get_type (),
                              static_cast<::GSocketClientEvent> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class SocketClientEvent : std::underlying_type<::GSocketClientEvent>::type
{
  RESOLVING = G_SOCKET_CLIENT_RESOLVING,
  RESOLVED = G_SOCKET_CLIENT_RESOLVED,
  CONNECTING = G_SOCKET_CLIENT_CONNECTING,
  CONNECTED = G_SOCKET_CLIENT_CONNECTED,
  PROXY_NEGOTIATING = G_SOCKET_CLIENT_PROXY_NEGOTIATING,
  PROXY_NEGOTIATED = G_SOCKET_CLIENT_PROXY_NEGOTIATED,
  TLS_HANDSHAKING = G_SOCKET_CLIENT_TLS_HANDSHAKING,
  TLS_HANDSHAKED = G_SOCKET_CLIENT_TLS_HANDSHAKED,
  COMPLETE = G_SOCKET_CLIENT_COMPLETE,
}; /* enum SocketClientEvent */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
