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
enum class SocketType : std::underlying_type<::GSocketType>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::SocketType>
{
  typedef Gio::SocketType UnownedType;

  static Gio::SocketType
  get (const ::GValue *value)
  {
    return static_cast<Gio::SocketType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::SocketType m)
  {
    g_value_set_enum (value, static_cast<::GSocketType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::SocketType m)
  {
    set (value, m);
  }

  static Gio::SocketType
  cast_for_create (Gio::SocketType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::SocketType> ()
{
  return g_socket_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::SocketType>
{
  Gio::SocketType default_value;

  constexpr PspecTraits (Gio::SocketType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_socket_type_get_type (),
                              static_cast<::GSocketType> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class SocketType : std::underlying_type<::GSocketType>::type
{
  INVALID = G_SOCKET_TYPE_INVALID,
  STREAM = G_SOCKET_TYPE_STREAM,
  DATAGRAM = G_SOCKET_TYPE_DATAGRAM,
  SEQPACKET = G_SOCKET_TYPE_SEQPACKET,
}; /* enum SocketType */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
