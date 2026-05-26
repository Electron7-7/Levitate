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
enum class TlsRehandshakeMode : std::underlying_type<::GTlsRehandshakeMode>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::TlsRehandshakeMode>
{
  typedef Gio::TlsRehandshakeMode UnownedType;

  static Gio::TlsRehandshakeMode
  get (const ::GValue *value)
  {
    return static_cast<Gio::TlsRehandshakeMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::TlsRehandshakeMode m)
  {
    g_value_set_enum (value, static_cast<::GTlsRehandshakeMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::TlsRehandshakeMode m)
  {
    set (value, m);
  }

  static Gio::TlsRehandshakeMode
  cast_for_create (Gio::TlsRehandshakeMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::TlsRehandshakeMode> ()
{
  return g_tls_rehandshake_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::TlsRehandshakeMode>
{
  Gio::TlsRehandshakeMode default_value;

  constexpr PspecTraits (Gio::TlsRehandshakeMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_tls_rehandshake_mode_get_type (),
                              static_cast<::GTlsRehandshakeMode> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class TlsRehandshakeMode : std::underlying_type<::GTlsRehandshakeMode>::type
{
  NEVER = G_TLS_REHANDSHAKE_NEVER,
  SAFELY = G_TLS_REHANDSHAKE_SAFELY,
  UNSAFELY = G_TLS_REHANDSHAKE_UNSAFELY,
}; /* enum TlsRehandshakeMode */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
