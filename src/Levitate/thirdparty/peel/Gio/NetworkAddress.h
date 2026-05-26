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
#include <peel/Gio/SocketConnectable.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class NetworkAddress;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::NetworkAddress> ()
{
  return g_network_address_get_type ();
}


namespace Gio
{
class NetworkAddress : public SocketConnectable
/* extends GObject::Object */
/* implements SocketConnectable */
{
private:
  unsigned char _placeholder[sizeof (::GNetworkAddress) - sizeof (SocketConnectable)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  NetworkAddress () = delete;
  NetworkAddress (const NetworkAddress &) = delete;
  NetworkAddress (NetworkAddress &&) = delete;
  NetworkAddress &
  operator = (const NetworkAddress &) = delete;
  NetworkAddress &
  operator = (NetworkAddress &&) = delete;
protected:
  ~NetworkAddress () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<NetworkAddress>
  create (const char *hostname, uint16_t port) noexcept
  {
    ::GSocketConnectable *_peel_return = g_network_address_new (hostname, port);
    peel_assume (_peel_return);
    return peel::RefPtr<NetworkAddress>::adopt_ref (reinterpret_cast<NetworkAddress *> (_peel_return));
  }

  static peel::RefPtr<NetworkAddress>
  create_loopback (uint16_t port) noexcept
  {
    ::GSocketConnectable *_peel_return = g_network_address_new_loopback (port);
    peel_assume (_peel_return);
    return peel::RefPtr<NetworkAddress>::adopt_ref (reinterpret_cast<NetworkAddress *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<NetworkAddress>
  parse (const char *host_and_port, uint16_t default_port, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GSocketConnectable *_peel_return = g_network_address_parse (host_and_port, default_port, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<NetworkAddress>::adopt_ref (reinterpret_cast<NetworkAddress *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<NetworkAddress>
  parse_uri (const char *uri, uint16_t default_port, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GSocketConnectable *_peel_return = g_network_address_parse_uri (uri, default_port, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<NetworkAddress>::adopt_ref (reinterpret_cast<NetworkAddress *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_hostname () noexcept
  {
    ::GNetworkAddress *_peel_this = reinterpret_cast<::GNetworkAddress *> (this);
    return g_network_address_get_hostname (_peel_this);
  }

  uint16_t
  get_port () noexcept
  {
    ::GNetworkAddress *_peel_this = reinterpret_cast<::GNetworkAddress *> (this);
    return g_network_address_get_port (_peel_this);
  }

  const char *
  get_scheme () noexcept
  {
    ::GNetworkAddress *_peel_this = reinterpret_cast<::GNetworkAddress *> (this);
    return g_network_address_get_scheme (_peel_this);
  }

  static peel::Property<const char *>
  prop_hostname ()
  {
    return peel::Property<const char *> { "hostname" };
  }

  static peel::Property<unsigned>
  prop_port ()
  {
    return peel::Property<unsigned> { "port" };
  }

  static peel::Property<const char *>
  prop_scheme ()
  {
    return peel::Property<const char *> { "scheme" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<NetworkAddress> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GNetworkAddressClass),
                 "NetworkAddress::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GNetworkAddressClass),
                 "NetworkAddress::Class align mismatch");
}; /* class NetworkAddress */

static_assert (sizeof (NetworkAddress) == sizeof (::GNetworkAddress),
               "NetworkAddress size mismatch");
static_assert (alignof (NetworkAddress) == alignof (::GNetworkAddress),
               "NetworkAddress align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
