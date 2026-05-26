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
enum class TlsChannelBindingType : std::underlying_type<::GTlsChannelBindingType>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::TlsChannelBindingType>
{
  typedef Gio::TlsChannelBindingType UnownedType;

  static Gio::TlsChannelBindingType
  get (const ::GValue *value)
  {
    return static_cast<Gio::TlsChannelBindingType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::TlsChannelBindingType m)
  {
    g_value_set_enum (value, static_cast<::GTlsChannelBindingType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::TlsChannelBindingType m)
  {
    set (value, m);
  }

  static Gio::TlsChannelBindingType
  cast_for_create (Gio::TlsChannelBindingType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::TlsChannelBindingType> ()
{
  return g_tls_channel_binding_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::TlsChannelBindingType>
{
  Gio::TlsChannelBindingType default_value;

  constexpr PspecTraits (Gio::TlsChannelBindingType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_tls_channel_binding_type_get_type (),
                              static_cast<::GTlsChannelBindingType> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class TlsChannelBindingType : std::underlying_type<::GTlsChannelBindingType>::type
{
  UNIQUE = G_TLS_CHANNEL_BINDING_TLS_UNIQUE,
  SERVER_END_POINT = G_TLS_CHANNEL_BINDING_TLS_SERVER_END_POINT,
  EXPORTER = G_TLS_CHANNEL_BINDING_TLS_EXPORTER,
}; /* enum TlsChannelBindingType */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
