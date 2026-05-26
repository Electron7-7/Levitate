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
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Gio
{
enum class TlsChannelBindingError : std::underlying_type<::GTlsChannelBindingError>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::TlsChannelBindingError>
{
  typedef Gio::TlsChannelBindingError UnownedType;

  static Gio::TlsChannelBindingError
  get (const ::GValue *value)
  {
    return static_cast<Gio::TlsChannelBindingError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::TlsChannelBindingError m)
  {
    g_value_set_enum (value, static_cast<::GTlsChannelBindingError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::TlsChannelBindingError m)
  {
    set (value, m);
  }

  static Gio::TlsChannelBindingError
  cast_for_create (Gio::TlsChannelBindingError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::TlsChannelBindingError> ()
{
  return g_tls_channel_binding_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::TlsChannelBindingError>
{
  Gio::TlsChannelBindingError default_value;

  constexpr PspecTraits (Gio::TlsChannelBindingError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_tls_channel_binding_error_get_type (),
                              static_cast<::GTlsChannelBindingError> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class TlsChannelBindingError : std::underlying_type<::GTlsChannelBindingError>::type
{
  NOT_IMPLEMENTED = G_TLS_CHANNEL_BINDING_ERROR_NOT_IMPLEMENTED,
  INVALID_STATE = G_TLS_CHANNEL_BINDING_ERROR_INVALID_STATE,
  NOT_AVAILABLE = G_TLS_CHANNEL_BINDING_ERROR_NOT_AVAILABLE,
  NOT_SUPPORTED = G_TLS_CHANNEL_BINDING_ERROR_NOT_SUPPORTED,
  GENERAL_ERROR = G_TLS_CHANNEL_BINDING_ERROR_GENERAL_ERROR,
}; /* enum TlsChannelBindingError */

peel_no_warn_unused
static GLib::Quark
tls_channel_binding_error_quark () noexcept
{
  ::GQuark _peel_return = g_tls_channel_binding_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
