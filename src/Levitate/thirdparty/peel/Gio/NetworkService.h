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
namespace Gio
{
class NetworkService;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::NetworkService> ()
{
  return g_network_service_get_type ();
}


namespace Gio
{
class NetworkService : public SocketConnectable
/* extends GObject::Object */
/* implements SocketConnectable */
{
private:
  unsigned char _placeholder[sizeof (::GNetworkService) - sizeof (SocketConnectable)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  NetworkService () = delete;
  NetworkService (const NetworkService &) = delete;
  NetworkService (NetworkService &&) = delete;
  NetworkService &
  operator = (const NetworkService &) = delete;
  NetworkService &
  operator = (NetworkService &&) = delete;
protected:
  ~NetworkService () = default;
public:

  peel_nonnull_args (1, 2, 3)
  static peel::RefPtr<NetworkService>
  create (const char *service, const char *protocol, const char *domain) noexcept
  {
    ::GSocketConnectable *_peel_return = g_network_service_new (service, protocol, domain);
    peel_assume (_peel_return);
    return peel::RefPtr<NetworkService>::adopt_ref (reinterpret_cast<NetworkService *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_domain () noexcept
  {
    ::GNetworkService *_peel_this = reinterpret_cast<::GNetworkService *> (this);
    return g_network_service_get_domain (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_protocol () noexcept
  {
    ::GNetworkService *_peel_this = reinterpret_cast<::GNetworkService *> (this);
    return g_network_service_get_protocol (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_scheme () noexcept
  {
    ::GNetworkService *_peel_this = reinterpret_cast<::GNetworkService *> (this);
    return g_network_service_get_scheme (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_service () noexcept
  {
    ::GNetworkService *_peel_this = reinterpret_cast<::GNetworkService *> (this);
    return g_network_service_get_service (_peel_this);
  }

  peel_nonnull_args (2)
  void
  set_scheme (const char *scheme) noexcept
  {
    ::GNetworkService *_peel_this = reinterpret_cast<::GNetworkService *> (this);
    g_network_service_set_scheme (_peel_this, scheme);
  }

  static peel::Property<const char *>
  prop_domain ()
  {
    return peel::Property<const char *> { "domain" };
  }

  static peel::Property<const char *>
  prop_protocol ()
  {
    return peel::Property<const char *> { "protocol" };
  }

  static peel::Property<const char *>
  prop_scheme ()
  {
    return peel::Property<const char *> { "scheme" };
  }

  static peel::Property<const char *>
  prop_service ()
  {
    return peel::Property<const char *> { "service" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<NetworkService> ());
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

  static_assert (sizeof (Class) == sizeof (::GNetworkServiceClass),
                 "NetworkService::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GNetworkServiceClass),
                 "NetworkService::Class align mismatch");
}; /* class NetworkService */

static_assert (sizeof (NetworkService) == sizeof (::GNetworkService),
               "NetworkService size mismatch");
static_assert (alignof (NetworkService) == alignof (::GNetworkService),
               "NetworkService align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
