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
enum class NetworkConnectivity : std::underlying_type<::GNetworkConnectivity>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::NetworkConnectivity>
{
  typedef Gio::NetworkConnectivity UnownedType;

  static Gio::NetworkConnectivity
  get (const ::GValue *value)
  {
    return static_cast<Gio::NetworkConnectivity> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::NetworkConnectivity m)
  {
    g_value_set_enum (value, static_cast<::GNetworkConnectivity> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::NetworkConnectivity m)
  {
    set (value, m);
  }

  static Gio::NetworkConnectivity
  cast_for_create (Gio::NetworkConnectivity m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::NetworkConnectivity> ()
{
  return g_network_connectivity_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::NetworkConnectivity>
{
  Gio::NetworkConnectivity default_value;

  constexpr PspecTraits (Gio::NetworkConnectivity default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_network_connectivity_get_type (),
                              static_cast<::GNetworkConnectivity> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class NetworkConnectivity : std::underlying_type<::GNetworkConnectivity>::type
{
  LOCAL = G_NETWORK_CONNECTIVITY_LOCAL,
  LIMITED = G_NETWORK_CONNECTIVITY_LIMITED,
  PORTAL = G_NETWORK_CONNECTIVITY_PORTAL,
  FULL = G_NETWORK_CONNECTIVITY_FULL,
}; /* enum NetworkConnectivity */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
