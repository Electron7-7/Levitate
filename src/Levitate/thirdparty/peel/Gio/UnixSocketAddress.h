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
namespace GLib
{
struct ByteArray;
} /* namespace GLib */

namespace Gio
{
class UnixSocketAddress;
enum class UnixSocketAddressType : std::underlying_type<::GUnixSocketAddressType>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::UnixSocketAddress> ()
{
  return g_unix_socket_address_get_type ();
}


namespace Gio
{
class UnixSocketAddress : public SocketAddress
/* implements SocketConnectable */
{
private:
  unsigned char _placeholder[sizeof (::GUnixSocketAddress) - sizeof (SocketAddress)] peel_no_warn_unused;
  using SocketAddress::create_from_native;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  UnixSocketAddress () = delete;
  UnixSocketAddress (const UnixSocketAddress &) = delete;
  UnixSocketAddress (UnixSocketAddress &&) = delete;
  UnixSocketAddress &
  operator = (const UnixSocketAddress &) = delete;
  UnixSocketAddress &
  operator = (UnixSocketAddress &&) = delete;
protected:
  ~UnixSocketAddress () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<UnixSocketAddress>
  create (const char *path) noexcept
  {
    ::GSocketAddress *_peel_return = g_unix_socket_address_new (path);
    peel_assume (_peel_return);
    return peel::RefPtr<UnixSocketAddress>::adopt_ref (reinterpret_cast<UnixSocketAddress *> (_peel_return));
  }

  static peel::RefPtr<UnixSocketAddress>
  create_abstract (peel::ArrayRef<const char> path) noexcept
  {
    gint _peel_path_len;
    const gchar *_peel_path = (_peel_path_len = path.size (), reinterpret_cast<const gchar *> (path.data ()));
    ::GSocketAddress *_peel_return = g_unix_socket_address_new_abstract (_peel_path, _peel_path_len);
    peel_assume (_peel_return);
    return peel::RefPtr<UnixSocketAddress>::adopt_ref (reinterpret_cast<UnixSocketAddress *> (_peel_return));
  }

  static peel::RefPtr<UnixSocketAddress>
  create_with_type (peel::ArrayRef<const char> path, UnixSocketAddressType type) noexcept
  {
    gint _peel_path_len;
    const gchar *_peel_path = (_peel_path_len = path.size (), reinterpret_cast<const gchar *> (path.data ()));
    ::GUnixSocketAddressType _peel_type = static_cast<::GUnixSocketAddressType> (type);
    ::GSocketAddress *_peel_return = g_unix_socket_address_new_with_type (_peel_path, _peel_path_len, _peel_type);
    peel_assume (_peel_return);
    return peel::RefPtr<UnixSocketAddress>::adopt_ref (reinterpret_cast<UnixSocketAddress *> (_peel_return));
  }

  static bool
  abstract_names_supported () noexcept
  {
    gboolean _peel_return = g_unix_socket_address_abstract_names_supported ();
    return !!_peel_return;
  }

  UnixSocketAddressType
  get_address_type () noexcept
  {
    ::GUnixSocketAddress *_peel_this = reinterpret_cast<::GUnixSocketAddress *> (this);
    ::GUnixSocketAddressType _peel_return = g_unix_socket_address_get_address_type (_peel_this);
    return static_cast<UnixSocketAddressType> (_peel_return);
  }

  bool
  get_is_abstract () noexcept
  {
    ::GUnixSocketAddress *_peel_this = reinterpret_cast<::GUnixSocketAddress *> (this);
    gboolean _peel_return = g_unix_socket_address_get_is_abstract (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  const char *
  get_path () noexcept
  {
    ::GUnixSocketAddress *_peel_this = reinterpret_cast<::GUnixSocketAddress *> (this);
    return g_unix_socket_address_get_path (_peel_this);
  }

  size_t
  get_path_len () noexcept
  {
    ::GUnixSocketAddress *_peel_this = reinterpret_cast<::GUnixSocketAddress *> (this);
    return g_unix_socket_address_get_path_len (_peel_this);
  }

  static peel::Property<bool>
  prop_abstract ()
  {
    return peel::Property<bool> { "abstract" };
  }

  static peel::Property<UnixSocketAddressType>
  prop_address_type ()
  {
    return peel::Property<UnixSocketAddressType> { "address-type" };
  }

  static peel::Property<const char *>
  prop_path ()
  {
    return peel::Property<const char *> { "path" };
  }

  static peel::Property<GLib::ByteArray>
  prop_path_as_array ()
  {
    return peel::Property<GLib::ByteArray> { "path-as-array" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<UnixSocketAddress> ());
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

  static_assert (sizeof (Class) == sizeof (::GUnixSocketAddressClass),
                 "UnixSocketAddress::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GUnixSocketAddressClass),
                 "UnixSocketAddress::Class align mismatch");
}; /* class UnixSocketAddress */

static_assert (sizeof (UnixSocketAddress) == sizeof (::GUnixSocketAddress),
               "UnixSocketAddress size mismatch");
static_assert (alignof (UnixSocketAddress) == alignof (::GUnixSocketAddress),
               "UnixSocketAddress align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
