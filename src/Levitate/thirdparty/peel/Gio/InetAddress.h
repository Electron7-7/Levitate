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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class InetAddress;
enum class SocketFamily : std::underlying_type<::GSocketFamily>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::InetAddress> ()
{
  return g_inet_address_get_type ();
}


namespace Gio
{
class InetAddress : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GInetAddress) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  InetAddress () = delete;
  InetAddress (const InetAddress &) = delete;
  InetAddress (InetAddress &&) = delete;
  InetAddress &
  operator = (const InetAddress &) = delete;
  InetAddress &
  operator = (InetAddress &&) = delete;
protected:
  ~InetAddress () = default;
public:

  static peel::RefPtr<InetAddress>
  create_any (SocketFamily family) noexcept
  {
    ::GSocketFamily _peel_family = static_cast<::GSocketFamily> (family);
    ::GInetAddress *_peel_return = g_inet_address_new_any (_peel_family);
    peel_assume (_peel_return);
    return peel::RefPtr<InetAddress>::adopt_ref (reinterpret_cast<InetAddress *> (_peel_return));
  }

  static peel::RefPtr<InetAddress>
  create_from_bytes (const uint8_t *bytes, SocketFamily family) noexcept
  {
    const guint8 *_peel_bytes = reinterpret_cast<const guint8 *> (bytes);
    ::GSocketFamily _peel_family = static_cast<::GSocketFamily> (family);
    ::GInetAddress *_peel_return = g_inet_address_new_from_bytes (_peel_bytes, _peel_family);
    peel_assume (_peel_return);
    return peel::RefPtr<InetAddress>::adopt_ref (reinterpret_cast<InetAddress *> (_peel_return));
  }

  static peel::RefPtr<InetAddress>
  create_from_bytes_with_ipv6_info (const uint8_t *bytes, SocketFamily family, uint32_t flowinfo, uint32_t scope_id) noexcept
  {
    const guint8 *_peel_bytes = reinterpret_cast<const guint8 *> (bytes);
    ::GSocketFamily _peel_family = static_cast<::GSocketFamily> (family);
    ::GInetAddress *_peel_return = g_inet_address_new_from_bytes_with_ipv6_info (_peel_bytes, _peel_family, flowinfo, scope_id);
    peel_assume (_peel_return);
    return peel::RefPtr<InetAddress>::adopt_ref (reinterpret_cast<InetAddress *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<InetAddress>
  create_from_string (const char *string) noexcept
  {
    ::GInetAddress *_peel_return = g_inet_address_new_from_string (string);
    return peel::RefPtr<InetAddress>::adopt_ref (reinterpret_cast<InetAddress *> (_peel_return));
  }

  static peel::RefPtr<InetAddress>
  create_loopback (SocketFamily family) noexcept
  {
    ::GSocketFamily _peel_family = static_cast<::GSocketFamily> (family);
    ::GInetAddress *_peel_return = g_inet_address_new_loopback (_peel_family);
    peel_assume (_peel_return);
    return peel::RefPtr<InetAddress>::adopt_ref (reinterpret_cast<InetAddress *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  equal (InetAddress *other_address) noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    ::GInetAddress *_peel_other_address = reinterpret_cast<::GInetAddress *> (other_address);
    gboolean _peel_return = g_inet_address_equal (_peel_this, _peel_other_address);
    return !!_peel_return;
  }

  SocketFamily
  get_family () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    ::GSocketFamily _peel_return = g_inet_address_get_family (_peel_this);
    return static_cast<SocketFamily> (_peel_return);
  }

  uint32_t
  get_flowinfo () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    return g_inet_address_get_flowinfo (_peel_this);
  }

  bool
  get_is_any () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    gboolean _peel_return = g_inet_address_get_is_any (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_link_local () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    gboolean _peel_return = g_inet_address_get_is_link_local (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_loopback () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    gboolean _peel_return = g_inet_address_get_is_loopback (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_mc_global () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    gboolean _peel_return = g_inet_address_get_is_mc_global (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_mc_link_local () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    gboolean _peel_return = g_inet_address_get_is_mc_link_local (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_mc_node_local () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    gboolean _peel_return = g_inet_address_get_is_mc_node_local (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_mc_org_local () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    gboolean _peel_return = g_inet_address_get_is_mc_org_local (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_mc_site_local () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    gboolean _peel_return = g_inet_address_get_is_mc_site_local (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_multicast () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    gboolean _peel_return = g_inet_address_get_is_multicast (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_site_local () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    gboolean _peel_return = g_inet_address_get_is_site_local (_peel_this);
    return !!_peel_return;
  }

  size_t
  get_native_size () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    return g_inet_address_get_native_size (_peel_this);
  }

  uint32_t
  get_scope_id () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    return g_inet_address_get_scope_id (_peel_this);
  }

  /* Unsupported for now: to_bytes: explicitly skipped */
  static void
  to_bytes (UnsupportedForNowToken);

  peel::String
  to_string () noexcept
  {
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    gchar *_peel_return = g_inet_address_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  static peel::Property<void *>
  prop_bytes ()
  {
    return peel::Property<void *> { "bytes" };
  }

  static peel::Property<SocketFamily>
  prop_family ()
  {
    return peel::Property<SocketFamily> { "family" };
  }

  static peel::Property<unsigned>
  prop_flowinfo ()
  {
    return peel::Property<unsigned> { "flowinfo" };
  }

  static peel::Property<bool>
  prop_is_any ()
  {
    return peel::Property<bool> { "is-any" };
  }

  static peel::Property<bool>
  prop_is_link_local ()
  {
    return peel::Property<bool> { "is-link-local" };
  }

  static peel::Property<bool>
  prop_is_loopback ()
  {
    return peel::Property<bool> { "is-loopback" };
  }

  static peel::Property<bool>
  prop_is_mc_global ()
  {
    return peel::Property<bool> { "is-mc-global" };
  }

  static peel::Property<bool>
  prop_is_mc_link_local ()
  {
    return peel::Property<bool> { "is-mc-link-local" };
  }

  static peel::Property<bool>
  prop_is_mc_node_local ()
  {
    return peel::Property<bool> { "is-mc-node-local" };
  }

  static peel::Property<bool>
  prop_is_mc_org_local ()
  {
    return peel::Property<bool> { "is-mc-org-local" };
  }

  static peel::Property<bool>
  prop_is_mc_site_local ()
  {
    return peel::Property<bool> { "is-mc-site-local" };
  }

  static peel::Property<bool>
  prop_is_multicast ()
  {
    return peel::Property<bool> { "is-multicast" };
  }

  static peel::Property<bool>
  prop_is_site_local ()
  {
    return peel::Property<bool> { "is-site-local" };
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
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<InetAddress> ());
    _peel_class->finalize (obj);
  }

  /* Unsupported for now: to_bytes: explicitly skipped */

  template<typename DerivedClass>
  peel::String
  parent_vfunc_to_string () noexcept
  {
    ::GInetAddressClass *_peel_class = reinterpret_cast<::GInetAddressClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GInetAddress *_peel_this = reinterpret_cast<::GInetAddress *> (this);
    gchar *_peel_return = _peel_class->to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GInetAddressClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    /* Unsupported for now: to_bytes: explicitly skipped */

    template<typename DerivedClass>
    void
    override_vfunc_to_string ()
    {
      ::GInetAddressClass *klass = reinterpret_cast<::GInetAddressClass *> (this);
      klass->to_string = +[] (::GInetAddress *address) -> gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (address);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_to_string ();
        return std::move (_peel_return).release_string ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GInetAddressClass),
                 "InetAddress::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GInetAddressClass),
                 "InetAddress::Class align mismatch");
}; /* class InetAddress */

static_assert (sizeof (InetAddress) == sizeof (::GInetAddress),
               "InetAddress size mismatch");
static_assert (alignof (InetAddress) == alignof (::GInetAddress),
               "InetAddress align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
