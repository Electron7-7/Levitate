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
enum class TlsProtocolVersion : std::underlying_type<::GTlsProtocolVersion>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::TlsProtocolVersion>
{
  typedef Gio::TlsProtocolVersion UnownedType;

  static Gio::TlsProtocolVersion
  get (const ::GValue *value)
  {
    return static_cast<Gio::TlsProtocolVersion> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::TlsProtocolVersion m)
  {
    g_value_set_enum (value, static_cast<::GTlsProtocolVersion> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::TlsProtocolVersion m)
  {
    set (value, m);
  }

  static Gio::TlsProtocolVersion
  cast_for_create (Gio::TlsProtocolVersion m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::TlsProtocolVersion> ()
{
  return g_tls_protocol_version_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::TlsProtocolVersion>
{
  Gio::TlsProtocolVersion default_value;

  constexpr PspecTraits (Gio::TlsProtocolVersion default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_tls_protocol_version_get_type (),
                              static_cast<::GTlsProtocolVersion> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class TlsProtocolVersion : std::underlying_type<::GTlsProtocolVersion>::type
{
  UNKNOWN = G_TLS_PROTOCOL_VERSION_UNKNOWN,
  SSL_3_0 = G_TLS_PROTOCOL_VERSION_SSL_3_0,
  TLS_1_0 = G_TLS_PROTOCOL_VERSION_TLS_1_0,
  TLS_1_1 = G_TLS_PROTOCOL_VERSION_TLS_1_1,
  TLS_1_2 = G_TLS_PROTOCOL_VERSION_TLS_1_2,
  TLS_1_3 = G_TLS_PROTOCOL_VERSION_TLS_1_3,
  DTLS_1_0 = G_TLS_PROTOCOL_VERSION_DTLS_1_0,
  DTLS_1_2 = G_TLS_PROTOCOL_VERSION_DTLS_1_2,
}; /* enum TlsProtocolVersion */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
