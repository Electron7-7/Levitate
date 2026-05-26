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
#include <peel/Gio/SocketAddressEnumerator.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class ProxyAddressEnumerator;
class /* interface */ ProxyResolver;
class /* interface */ SocketConnectable;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ProxyAddressEnumerator> ()
{
  return g_proxy_address_enumerator_get_type ();
}


namespace Gio
{
class ProxyAddressEnumerator : public SocketAddressEnumerator
{
private:
  unsigned char _placeholder[sizeof (::GProxyAddressEnumerator) - sizeof (SocketAddressEnumerator)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ProxyAddressEnumerator () = delete;
  ProxyAddressEnumerator (const ProxyAddressEnumerator &) = delete;
  ProxyAddressEnumerator (ProxyAddressEnumerator &&) = delete;
  ProxyAddressEnumerator &
  operator = (const ProxyAddressEnumerator &) = delete;
  ProxyAddressEnumerator &
  operator = (ProxyAddressEnumerator &&) = delete;
protected:
  ~ProxyAddressEnumerator () = default;
public:

  static peel::Property<SocketConnectable>
  prop_connectable ()
  {
    return peel::Property<SocketConnectable> { "connectable" };
  }

  static peel::Property<unsigned>
  prop_default_port ()
  {
    return peel::Property<unsigned> { "default-port" };
  }

  static peel::Property<ProxyResolver>
  prop_proxy_resolver ()
  {
    return peel::Property<ProxyResolver> { "proxy-resolver" };
  }

  static peel::Property<const char *>
  prop_uri ()
  {
    return peel::Property<const char *> { "uri" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<ProxyAddressEnumerator> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public SocketAddressEnumerator::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GProxyAddressEnumeratorClass) - sizeof (SocketAddressEnumerator::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GProxyAddressEnumeratorClass),
                 "ProxyAddressEnumerator::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GProxyAddressEnumeratorClass),
                 "ProxyAddressEnumerator::Class align mismatch");
}; /* class ProxyAddressEnumerator */

static_assert (sizeof (ProxyAddressEnumerator) == sizeof (::GProxyAddressEnumerator),
               "ProxyAddressEnumerator size mismatch");
static_assert (alignof (ProxyAddressEnumerator) == alignof (::GProxyAddressEnumerator),
               "ProxyAddressEnumerator align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
