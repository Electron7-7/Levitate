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
enum class TlsAuthenticationMode : std::underlying_type<::GTlsAuthenticationMode>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::TlsAuthenticationMode>
{
  typedef Gio::TlsAuthenticationMode UnownedType;

  static Gio::TlsAuthenticationMode
  get (const ::GValue *value)
  {
    return static_cast<Gio::TlsAuthenticationMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::TlsAuthenticationMode m)
  {
    g_value_set_enum (value, static_cast<::GTlsAuthenticationMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::TlsAuthenticationMode m)
  {
    set (value, m);
  }

  static Gio::TlsAuthenticationMode
  cast_for_create (Gio::TlsAuthenticationMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::TlsAuthenticationMode> ()
{
  return g_tls_authentication_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::TlsAuthenticationMode>
{
  Gio::TlsAuthenticationMode default_value;

  constexpr PspecTraits (Gio::TlsAuthenticationMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_tls_authentication_mode_get_type (),
                              static_cast<::GTlsAuthenticationMode> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class TlsAuthenticationMode : std::underlying_type<::GTlsAuthenticationMode>::type
{
  NONE = G_TLS_AUTHENTICATION_NONE,
  REQUESTED = G_TLS_AUTHENTICATION_REQUESTED,
  REQUIRED = G_TLS_AUTHENTICATION_REQUIRED,
}; /* enum TlsAuthenticationMode */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
