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
enum class SocketFamily : std::underlying_type<::GSocketFamily>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::SocketFamily>
{
  typedef Gio::SocketFamily UnownedType;

  static Gio::SocketFamily
  get (const ::GValue *value)
  {
    return static_cast<Gio::SocketFamily> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::SocketFamily m)
  {
    g_value_set_enum (value, static_cast<::GSocketFamily> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::SocketFamily m)
  {
    set (value, m);
  }

  static Gio::SocketFamily
  cast_for_create (Gio::SocketFamily m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::SocketFamily> ()
{
  return g_socket_family_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::SocketFamily>
{
  Gio::SocketFamily default_value;

  constexpr PspecTraits (Gio::SocketFamily default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_socket_family_get_type (),
                              static_cast<::GSocketFamily> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class SocketFamily : std::underlying_type<::GSocketFamily>::type
{
  INVALID = G_SOCKET_FAMILY_INVALID,
  UNIX = G_SOCKET_FAMILY_UNIX,
  IPV4 = G_SOCKET_FAMILY_IPV4,
  IPV6 = G_SOCKET_FAMILY_IPV6,
}; /* enum SocketFamily */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
