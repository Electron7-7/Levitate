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
class SocketAddress;
enum class SocketFamily : std::underlying_type<::GSocketFamily>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SocketAddress> ()
{
  return g_socket_address_get_type ();
}


namespace Gio
{
class SocketAddress : public SocketConnectable
/* extends GObject::Object */
/* implements SocketConnectable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SocketAddress () = delete;
  SocketAddress (const SocketAddress &) = delete;
  SocketAddress (SocketAddress &&) = delete;
  SocketAddress &
  operator = (const SocketAddress &) = delete;
  SocketAddress &
  operator = (SocketAddress &&) = delete;
protected:
  ~SocketAddress () = default;
public:

  static peel::RefPtr<SocketAddress>
  create_from_native (void *native, size_t len) noexcept
  {
    ::GSocketAddress *_peel_return = g_socket_address_new_from_native (native, len);
    peel_assume (_peel_return);
    return peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_return));
  }

  SocketFamily
  get_family () noexcept
  {
    ::GSocketAddress *_peel_this = reinterpret_cast<::GSocketAddress *> (this);
    ::GSocketFamily _peel_return = g_socket_address_get_family (_peel_this);
    return static_cast<SocketFamily> (_peel_return);
  }

  gssize
  get_native_size () noexcept
  {
    ::GSocketAddress *_peel_this = reinterpret_cast<::GSocketAddress *> (this);
    return g_socket_address_get_native_size (_peel_this);
  }

  bool
  to_native (void *dest, size_t destlen, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketAddress *_peel_this = reinterpret_cast<::GSocketAddress *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_address_to_native (_peel_this, dest, destlen, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  static peel::Property<SocketFamily>
  prop_family ()
  {
    return peel::Property<SocketFamily> { "family" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<SocketAddress> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  SocketFamily
  parent_vfunc_get_family () noexcept
  {
    ::GSocketAddressClass *_peel_class = reinterpret_cast<::GSocketAddressClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketAddress *_peel_this = reinterpret_cast<::GSocketAddress *> (this);
    ::GSocketFamily _peel_return = _peel_class->get_family (_peel_this);
    return static_cast<SocketFamily> (_peel_return);
  }

  template<typename DerivedClass>
  gssize
  parent_vfunc_get_native_size () noexcept
  {
    ::GSocketAddressClass *_peel_class = reinterpret_cast<::GSocketAddressClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketAddress *_peel_this = reinterpret_cast<::GSocketAddress *> (this);
    return _peel_class->get_native_size (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_to_native (void *dest, size_t destlen, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketAddressClass *_peel_class = reinterpret_cast<::GSocketAddressClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketAddress *_peel_this = reinterpret_cast<::GSocketAddress *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->to_native (_peel_this, dest, destlen, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GSocketAddressClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_get_family ()
    {
      ::GSocketAddressClass *klass = reinterpret_cast<::GSocketAddressClass *> (this);
      klass->get_family = +[] (::GSocketAddress *address) -> ::GSocketFamily
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (address);
        SocketFamily _peel_return = _peel_this->DerivedClass::vfunc_get_family ();
        return static_cast<::GSocketFamily> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_native_size ()
    {
      ::GSocketAddressClass *klass = reinterpret_cast<::GSocketAddressClass *> (this);
      klass->get_native_size = +[] (::GSocketAddress *address) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (address);
        return _peel_this->DerivedClass::vfunc_get_native_size ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_to_native ()
    {
      ::GSocketAddressClass *klass = reinterpret_cast<::GSocketAddressClass *> (this);
      klass->to_native = +[] (::GSocketAddress *address, gpointer dest, gsize destlen, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (address);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_to_native (dest, destlen, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GSocketAddressClass),
                 "SocketAddress::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GSocketAddressClass),
                 "SocketAddress::Class align mismatch");
}; /* class SocketAddress */

static_assert (sizeof (SocketAddress) == sizeof (::GSocketAddress),
               "SocketAddress size mismatch");
static_assert (alignof (SocketAddress) == alignof (::GSocketAddress),
               "SocketAddress align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
