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
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class InetAddress;
class InetAddressMask;
enum class SocketFamily : std::underlying_type<::GSocketFamily>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::InetAddressMask> ()
{
  return g_inet_address_mask_get_type ();
}


namespace Gio
{
class InetAddressMask : public GObject::Object
/* implements Initable */
{
private:
  unsigned char _placeholder[sizeof (::GInetAddressMask) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  InetAddressMask () = delete;
  InetAddressMask (const InetAddressMask &) = delete;
  InetAddressMask (InetAddressMask &&) = delete;
  InetAddressMask &
  operator = (const InetAddressMask &) = delete;
  InetAddressMask &
  operator = (InetAddressMask &&) = delete;
protected:
  ~InetAddressMask () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<InetAddressMask>
  create (InetAddress *addr, unsigned length, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInetAddress *_peel_addr = reinterpret_cast<::GInetAddress *> (addr);
    ::GError *_peel_error = nullptr;
    ::GInetAddressMask *_peel_return = g_inet_address_mask_new (_peel_addr, length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<InetAddressMask>::adopt_ref (reinterpret_cast<InetAddressMask *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<InetAddressMask>
  create_from_string (const char *mask_string, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GInetAddressMask *_peel_return = g_inet_address_mask_new_from_string (mask_string, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<InetAddressMask>::adopt_ref (reinterpret_cast<InetAddressMask *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  equal (InetAddressMask *mask2) noexcept
  {
    ::GInetAddressMask *_peel_this = reinterpret_cast<::GInetAddressMask *> (this);
    ::GInetAddressMask *_peel_mask2 = reinterpret_cast<::GInetAddressMask *> (mask2);
    gboolean _peel_return = g_inet_address_mask_equal (_peel_this, _peel_mask2);
    return !!_peel_return;
  }

  peel_returns_nonnull
  InetAddress *
  get_address () noexcept
  {
    ::GInetAddressMask *_peel_this = reinterpret_cast<::GInetAddressMask *> (this);
    ::GInetAddress *_peel_return = g_inet_address_mask_get_address (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<InetAddress *> (_peel_return);
  }

  SocketFamily
  get_family () noexcept
  {
    ::GInetAddressMask *_peel_this = reinterpret_cast<::GInetAddressMask *> (this);
    ::GSocketFamily _peel_return = g_inet_address_mask_get_family (_peel_this);
    return static_cast<SocketFamily> (_peel_return);
  }

  unsigned
  get_length () noexcept
  {
    ::GInetAddressMask *_peel_this = reinterpret_cast<::GInetAddressMask *> (this);
    return g_inet_address_mask_get_length (_peel_this);
  }

  peel_nonnull_args (2)
  bool
  matches (InetAddress *address) noexcept
  {
    ::GInetAddressMask *_peel_this = reinterpret_cast<::GInetAddressMask *> (this);
    ::GInetAddress *_peel_address = reinterpret_cast<::GInetAddress *> (address);
    gboolean _peel_return = g_inet_address_mask_matches (_peel_this, _peel_address);
    return !!_peel_return;
  }

  peel::String
  to_string () noexcept
  {
    ::GInetAddressMask *_peel_this = reinterpret_cast<::GInetAddressMask *> (this);
    gchar *_peel_return = g_inet_address_mask_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  static peel::Property<InetAddress>
  prop_address ()
  {
    return peel::Property<InetAddress> { "address" };
  }

  static peel::Property<SocketFamily>
  prop_family ()
  {
    return peel::Property<SocketFamily> { "family" };
  }

  static peel::Property<unsigned>
  prop_length ()
  {
    return peel::Property<unsigned> { "length" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<InetAddressMask> ());
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

  static_assert (sizeof (Class) == sizeof (::GInetAddressMaskClass),
                 "InetAddressMask::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GInetAddressMaskClass),
                 "InetAddressMask::Class align mismatch");
}; /* class InetAddressMask */

static_assert (sizeof (InetAddressMask) == sizeof (::GInetAddressMask),
               "InetAddressMask size mismatch");
static_assert (alignof (InetAddressMask) == alignof (::GInetAddressMask),
               "InetAddressMask align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
