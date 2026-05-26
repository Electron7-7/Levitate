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
class NativeSocketAddress;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::NativeSocketAddress> ()
{
  return g_native_socket_address_get_type ();
}


namespace Gio
{
class NativeSocketAddress : public SocketAddress
/* implements SocketConnectable */
{
private:
  unsigned char _placeholder[sizeof (::GNativeSocketAddress) - sizeof (SocketAddress)] peel_no_warn_unused;
  using SocketAddress::create_from_native;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  NativeSocketAddress () = delete;
  NativeSocketAddress (const NativeSocketAddress &) = delete;
  NativeSocketAddress (NativeSocketAddress &&) = delete;
  NativeSocketAddress &
  operator = (const NativeSocketAddress &) = delete;
  NativeSocketAddress &
  operator = (NativeSocketAddress &&) = delete;
protected:
  ~NativeSocketAddress () = default;
public:

  static peel::RefPtr<NativeSocketAddress>
  create (void *native, size_t len) noexcept
  {
    ::GSocketAddress *_peel_return = g_native_socket_address_new (native, len);
    peel_assume (_peel_return);
    return peel::RefPtr<NativeSocketAddress>::adopt_ref (reinterpret_cast<NativeSocketAddress *> (_peel_return));
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<NativeSocketAddress> ());
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

  static_assert (sizeof (Class) == sizeof (::GNativeSocketAddressClass),
                 "NativeSocketAddress::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GNativeSocketAddressClass),
                 "NativeSocketAddress::Class align mismatch");
}; /* class NativeSocketAddress */

static_assert (sizeof (NativeSocketAddress) == sizeof (::GNativeSocketAddress),
               "NativeSocketAddress size mismatch");
static_assert (alignof (NativeSocketAddress) == alignof (::GNativeSocketAddress),
               "NativeSocketAddress align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
