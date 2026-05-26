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
enum class UnixSocketAddressType : std::underlying_type<::GUnixSocketAddressType>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::UnixSocketAddressType>
{
  typedef Gio::UnixSocketAddressType UnownedType;

  static Gio::UnixSocketAddressType
  get (const ::GValue *value)
  {
    return static_cast<Gio::UnixSocketAddressType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::UnixSocketAddressType m)
  {
    g_value_set_enum (value, static_cast<::GUnixSocketAddressType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::UnixSocketAddressType m)
  {
    set (value, m);
  }

  static Gio::UnixSocketAddressType
  cast_for_create (Gio::UnixSocketAddressType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::UnixSocketAddressType> ()
{
  return g_unix_socket_address_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::UnixSocketAddressType>
{
  Gio::UnixSocketAddressType default_value;

  constexpr PspecTraits (Gio::UnixSocketAddressType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_unix_socket_address_type_get_type (),
                              static_cast<::GUnixSocketAddressType> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class UnixSocketAddressType : std::underlying_type<::GUnixSocketAddressType>::type
{
  INVALID = G_UNIX_SOCKET_ADDRESS_INVALID,
  ANONYMOUS = G_UNIX_SOCKET_ADDRESS_ANONYMOUS,
  PATH = G_UNIX_SOCKET_ADDRESS_PATH,
  ABSTRACT = G_UNIX_SOCKET_ADDRESS_ABSTRACT,
  ABSTRACT_PADDED = G_UNIX_SOCKET_ADDRESS_ABSTRACT_PADDED,
}; /* enum UnixSocketAddressType */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
