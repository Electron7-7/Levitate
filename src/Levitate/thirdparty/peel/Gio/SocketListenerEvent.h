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
enum class SocketListenerEvent : std::underlying_type<::GSocketListenerEvent>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::SocketListenerEvent>
{
  typedef Gio::SocketListenerEvent UnownedType;

  static Gio::SocketListenerEvent
  get (const ::GValue *value)
  {
    return static_cast<Gio::SocketListenerEvent> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::SocketListenerEvent m)
  {
    g_value_set_enum (value, static_cast<::GSocketListenerEvent> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::SocketListenerEvent m)
  {
    set (value, m);
  }

  static Gio::SocketListenerEvent
  cast_for_create (Gio::SocketListenerEvent m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::SocketListenerEvent> ()
{
  return g_socket_listener_event_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::SocketListenerEvent>
{
  Gio::SocketListenerEvent default_value;

  constexpr PspecTraits (Gio::SocketListenerEvent default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_socket_listener_event_get_type (),
                              static_cast<::GSocketListenerEvent> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class SocketListenerEvent : std::underlying_type<::GSocketListenerEvent>::type
{
  BINDING = G_SOCKET_LISTENER_BINDING,
  BOUND = G_SOCKET_LISTENER_BOUND,
  LISTENING = G_SOCKET_LISTENER_LISTENING,
  LISTENED = G_SOCKET_LISTENER_LISTENED,
}; /* enum SocketListenerEvent */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
