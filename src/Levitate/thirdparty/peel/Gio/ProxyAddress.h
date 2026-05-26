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
#include <peel/Gio/InetSocketAddress.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class InetAddress;
class ProxyAddress;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ProxyAddress> ()
{
  return g_proxy_address_get_type ();
}


namespace Gio
{
class ProxyAddress : public InetSocketAddress
/* implements SocketConnectable */
{
private:
  unsigned char _placeholder[sizeof (::GProxyAddress) - sizeof (InetSocketAddress)] peel_no_warn_unused;
  using InetSocketAddress::create_from_string;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ProxyAddress () = delete;
  ProxyAddress (const ProxyAddress &) = delete;
  ProxyAddress (ProxyAddress &&) = delete;
  ProxyAddress &
  operator = (const ProxyAddress &) = delete;
  ProxyAddress &
  operator = (ProxyAddress &&) = delete;
protected:
  ~ProxyAddress () = default;
public:

  peel_nonnull_args (1, 3, 4)
  static peel::RefPtr<ProxyAddress>
  create (InetAddress *inetaddr, uint16_t port, const char *protocol, const char *dest_hostname, uint16_t dest_port, const char *username, const char *password) noexcept
  {
    ::GInetAddress *_peel_inetaddr = reinterpret_cast<::GInetAddress *> (inetaddr);
    ::GSocketAddress *_peel_return = g_proxy_address_new (_peel_inetaddr, port, protocol, dest_hostname, dest_port, username, password);
    peel_assume (_peel_return);
    return peel::RefPtr<ProxyAddress>::adopt_ref (reinterpret_cast<ProxyAddress *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_destination_hostname () noexcept
  {
    ::GProxyAddress *_peel_this = reinterpret_cast<::GProxyAddress *> (this);
    return g_proxy_address_get_destination_hostname (_peel_this);
  }

  uint16_t
  get_destination_port () noexcept
  {
    ::GProxyAddress *_peel_this = reinterpret_cast<::GProxyAddress *> (this);
    return g_proxy_address_get_destination_port (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_destination_protocol () noexcept
  {
    ::GProxyAddress *_peel_this = reinterpret_cast<::GProxyAddress *> (this);
    return g_proxy_address_get_destination_protocol (_peel_this);
  }

  const char *
  get_password () noexcept
  {
    ::GProxyAddress *_peel_this = reinterpret_cast<::GProxyAddress *> (this);
    return g_proxy_address_get_password (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_protocol () noexcept
  {
    ::GProxyAddress *_peel_this = reinterpret_cast<::GProxyAddress *> (this);
    return g_proxy_address_get_protocol (_peel_this);
  }

  const char *
  get_uri () noexcept
  {
    ::GProxyAddress *_peel_this = reinterpret_cast<::GProxyAddress *> (this);
    return g_proxy_address_get_uri (_peel_this);
  }

  const char *
  get_username () noexcept
  {
    ::GProxyAddress *_peel_this = reinterpret_cast<::GProxyAddress *> (this);
    return g_proxy_address_get_username (_peel_this);
  }

  static peel::Property<const char *>
  prop_destination_hostname ()
  {
    return peel::Property<const char *> { "destination-hostname" };
  }

  static peel::Property<unsigned>
  prop_destination_port ()
  {
    return peel::Property<unsigned> { "destination-port" };
  }

  static peel::Property<const char *>
  prop_destination_protocol ()
  {
    return peel::Property<const char *> { "destination-protocol" };
  }

  static peel::Property<const char *>
  prop_password ()
  {
    return peel::Property<const char *> { "password" };
  }

  static peel::Property<const char *>
  prop_protocol ()
  {
    return peel::Property<const char *> { "protocol" };
  }

  static peel::Property<const char *>
  prop_uri ()
  {
    return peel::Property<const char *> { "uri" };
  }

  static peel::Property<const char *>
  prop_username ()
  {
    return peel::Property<const char *> { "username" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<ProxyAddress> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public InetSocketAddress::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GProxyAddressClass),
                 "ProxyAddress::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GProxyAddressClass),
                 "ProxyAddress::Class align mismatch");
}; /* class ProxyAddress */

static_assert (sizeof (ProxyAddress) == sizeof (::GProxyAddress),
               "ProxyAddress size mismatch");
static_assert (alignof (ProxyAddress) == alignof (::GProxyAddress),
               "ProxyAddress align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
