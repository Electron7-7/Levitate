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
#include <peel/Gio/SocketAddress.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class InetAddress;
class InetSocketAddress;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::InetSocketAddress> ()
{
  return g_inet_socket_address_get_type ();
}


namespace Gio
{
class InetSocketAddress : public SocketAddress
/* implements SocketConnectable */
{
private:
  unsigned char _placeholder[sizeof (::GInetSocketAddress) - sizeof (SocketAddress)] peel_no_warn_unused;
  using SocketAddress::create_from_native;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  InetSocketAddress () = delete;
  InetSocketAddress (const InetSocketAddress &) = delete;
  InetSocketAddress (InetSocketAddress &&) = delete;
  InetSocketAddress &
  operator = (const InetSocketAddress &) = delete;
  InetSocketAddress &
  operator = (InetSocketAddress &&) = delete;
protected:
  ~InetSocketAddress () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<InetSocketAddress>
  create (InetAddress *address, uint16_t port) noexcept
  {
    ::GInetAddress *_peel_address = reinterpret_cast<::GInetAddress *> (address);
    ::GSocketAddress *_peel_return = g_inet_socket_address_new (_peel_address, port);
    peel_assume (_peel_return);
    return peel::RefPtr<InetSocketAddress>::adopt_ref (reinterpret_cast<InetSocketAddress *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<InetSocketAddress>
  create_from_string (const char *address, unsigned port) noexcept
  {
    ::GSocketAddress *_peel_return = g_inet_socket_address_new_from_string (address, port);
    return peel::RefPtr<InetSocketAddress>::adopt_ref (reinterpret_cast<InetSocketAddress *> (_peel_return));
  }

  peel_returns_nonnull
  InetAddress *
  get_address () noexcept
  {
    ::GInetSocketAddress *_peel_this = reinterpret_cast<::GInetSocketAddress *> (this);
    ::GInetAddress *_peel_return = g_inet_socket_address_get_address (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<InetAddress *> (_peel_return);
  }

  uint32_t
  get_flowinfo () noexcept
  {
    ::GInetSocketAddress *_peel_this = reinterpret_cast<::GInetSocketAddress *> (this);
    return g_inet_socket_address_get_flowinfo (_peel_this);
  }

  uint16_t
  get_port () noexcept
  {
    ::GInetSocketAddress *_peel_this = reinterpret_cast<::GInetSocketAddress *> (this);
    return g_inet_socket_address_get_port (_peel_this);
  }

  uint32_t
  get_scope_id () noexcept
  {
    ::GInetSocketAddress *_peel_this = reinterpret_cast<::GInetSocketAddress *> (this);
    return g_inet_socket_address_get_scope_id (_peel_this);
  }

  static peel::Property<InetAddress>
  prop_address ()
  {
    return peel::Property<InetAddress> { "address" };
  }

  static peel::Property<unsigned>
  prop_flowinfo ()
  {
    return peel::Property<unsigned> { "flowinfo" };
  }

  static peel::Property<unsigned>
  prop_port ()
  {
    return peel::Property<unsigned> { "port" };
  }

  static peel::Property<unsigned>
  prop_scope_id ()
  {
    return peel::Property<unsigned> { "scope-id" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<InetSocketAddress> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public SocketAddress::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GInetSocketAddressClass),
                 "InetSocketAddress::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GInetSocketAddressClass),
                 "InetSocketAddress::Class align mismatch");
}; /* class InetSocketAddress */

static_assert (sizeof (InetSocketAddress) == sizeof (::GInetSocketAddress),
               "InetSocketAddress size mismatch");
static_assert (alignof (InetSocketAddress) == alignof (::GInetSocketAddress),
               "InetSocketAddress align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
