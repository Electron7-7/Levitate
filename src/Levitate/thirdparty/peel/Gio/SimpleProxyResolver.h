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
#include <peel/Gio/ProxyResolver.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ ProxyResolver;
class SimpleProxyResolver;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SimpleProxyResolver> ()
{
  return g_simple_proxy_resolver_get_type ();
}


namespace Gio
{
class SimpleProxyResolver : public ProxyResolver
/* extends GObject::Object */
/* implements ProxyResolver */
{
private:
  unsigned char _placeholder[sizeof (::GSimpleProxyResolver) - sizeof (ProxyResolver)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SimpleProxyResolver () = delete;
  SimpleProxyResolver (const SimpleProxyResolver &) = delete;
  SimpleProxyResolver (SimpleProxyResolver &&) = delete;
  SimpleProxyResolver &
  operator = (const SimpleProxyResolver &) = delete;
  SimpleProxyResolver &
  operator = (SimpleProxyResolver &&) = delete;
protected:
  ~SimpleProxyResolver () = default;
public:

  static peel::RefPtr<ProxyResolver>
  new_ (const char *default_proxy, peel::StrvRef ignore_hosts) noexcept
  {
    gchar **_peel_ignore_hosts = const_cast<gchar **> (ignore_hosts.data ());
    ::GProxyResolver *_peel_return = g_simple_proxy_resolver_new (default_proxy, _peel_ignore_hosts);
    peel_assume (_peel_return);
    return peel::RefPtr<ProxyResolver>::adopt_ref (reinterpret_cast<ProxyResolver *> (_peel_return));
  }

  void
  set_default_proxy (const char *default_proxy) noexcept
  {
    ::GSimpleProxyResolver *_peel_this = reinterpret_cast<::GSimpleProxyResolver *> (this);
    g_simple_proxy_resolver_set_default_proxy (_peel_this, default_proxy);
  }

  void
  set_ignore_hosts (peel::StrvRef ignore_hosts) noexcept
  {
    ::GSimpleProxyResolver *_peel_this = reinterpret_cast<::GSimpleProxyResolver *> (this);
    gchar **_peel_ignore_hosts = const_cast<gchar **> (ignore_hosts.data ());
    g_simple_proxy_resolver_set_ignore_hosts (_peel_this, _peel_ignore_hosts);
  }

  peel_nonnull_args (2, 3)
  void
  set_uri_proxy (const char *uri_scheme, const char *proxy) noexcept
  {
    ::GSimpleProxyResolver *_peel_this = reinterpret_cast<::GSimpleProxyResolver *> (this);
    g_simple_proxy_resolver_set_uri_proxy (_peel_this, uri_scheme, proxy);
  }

  static peel::Property<const char *>
  prop_default_proxy ()
  {
    return peel::Property<const char *> { "default-proxy" };
  }

  static peel::Property<peel::Strv>
  prop_ignore_hosts ()
  {
    return peel::Property<peel::Strv> { "ignore-hosts" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<SimpleProxyResolver> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GSimpleProxyResolverClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GSimpleProxyResolverClass),
                 "SimpleProxyResolver::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GSimpleProxyResolverClass),
                 "SimpleProxyResolver::Class align mismatch");
}; /* class SimpleProxyResolver */

static_assert (sizeof (SimpleProxyResolver) == sizeof (::GSimpleProxyResolver),
               "SimpleProxyResolver size mismatch");
static_assert (alignof (SimpleProxyResolver) == alignof (::GSimpleProxyResolver),
               "SimpleProxyResolver align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
