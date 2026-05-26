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
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class SocketAddressEnumerator;
class /* interface */ SocketConnectable;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SocketConnectable> ()
{
  return g_socket_connectable_get_type ();
}


namespace Gio
{
class /* interface */ SocketConnectable : public GObject::Object
/* requires GObject::Object */
{
private:
  SocketConnectable () = delete;
  SocketConnectable (const SocketConnectable &) = delete;
  SocketConnectable (SocketConnectable &&) = delete;

  SocketConnectable &
  operator = (const SocketConnectable &) = delete;
  SocketConnectable &
  operator = (SocketConnectable &&) = delete;

protected:
  ~SocketConnectable () = default;

public:

  peel::RefPtr<SocketAddressEnumerator>
  enumerate () noexcept
  {
    ::GSocketConnectable *_peel_this = reinterpret_cast<::GSocketConnectable *> (this);
    ::GSocketAddressEnumerator *_peel_return = g_socket_connectable_enumerate (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<SocketAddressEnumerator>::adopt_ref (reinterpret_cast<SocketAddressEnumerator *> (_peel_return));
  }

  peel::RefPtr<SocketAddressEnumerator>
  proxy_enumerate () noexcept
  {
    ::GSocketConnectable *_peel_this = reinterpret_cast<::GSocketConnectable *> (this);
    ::GSocketAddressEnumerator *_peel_return = g_socket_connectable_proxy_enumerate (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<SocketAddressEnumerator>::adopt_ref (reinterpret_cast<SocketAddressEnumerator *> (_peel_return));
  }

  peel::String
  to_string () noexcept
  {
    ::GSocketConnectable *_peel_this = reinterpret_cast<::GSocketConnectable *> (this);
    gchar *_peel_return = g_socket_connectable_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel::RefPtr<SocketAddressEnumerator>
  parent_vfunc_enumerate () noexcept
  {
    ::GSocketConnectableIface *_peel_iface = reinterpret_cast<::GSocketConnectableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SocketConnectable> ())->peek_parent ());
    ::GSocketConnectable *_peel_this = reinterpret_cast<::GSocketConnectable *> (this);
    ::GSocketAddressEnumerator *_peel_return = _peel_iface->enumerate (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<SocketAddressEnumerator>::adopt_ref (reinterpret_cast<SocketAddressEnumerator *> (_peel_return));
  }

  peel::RefPtr<SocketAddressEnumerator>
  default_vfunc_enumerate () noexcept
  {
    ::GSocketConnectableIface *_peel_iface = reinterpret_cast<::GSocketConnectableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SocketConnectable> ()));
    ::GSocketConnectable *_peel_this = reinterpret_cast<::GSocketConnectable *> (this);
    ::GSocketAddressEnumerator *_peel_return = _peel_iface->enumerate (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<SocketAddressEnumerator>::adopt_ref (reinterpret_cast<SocketAddressEnumerator *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<SocketAddressEnumerator>
  parent_vfunc_proxy_enumerate () noexcept
  {
    ::GSocketConnectableIface *_peel_iface = reinterpret_cast<::GSocketConnectableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SocketConnectable> ())->peek_parent ());
    ::GSocketConnectable *_peel_this = reinterpret_cast<::GSocketConnectable *> (this);
    ::GSocketAddressEnumerator *_peel_return = _peel_iface->proxy_enumerate (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<SocketAddressEnumerator>::adopt_ref (reinterpret_cast<SocketAddressEnumerator *> (_peel_return));
  }

  peel::RefPtr<SocketAddressEnumerator>
  default_vfunc_proxy_enumerate () noexcept
  {
    ::GSocketConnectableIface *_peel_iface = reinterpret_cast<::GSocketConnectableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SocketConnectable> ()));
    ::GSocketConnectable *_peel_this = reinterpret_cast<::GSocketConnectable *> (this);
    ::GSocketAddressEnumerator *_peel_return = _peel_iface->proxy_enumerate (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<SocketAddressEnumerator>::adopt_ref (reinterpret_cast<SocketAddressEnumerator *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_to_string () noexcept
  {
    ::GSocketConnectableIface *_peel_iface = reinterpret_cast<::GSocketConnectableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SocketConnectable> ())->peek_parent ());
    ::GSocketConnectable *_peel_this = reinterpret_cast<::GSocketConnectable *> (this);
    gchar *_peel_return = _peel_iface->to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  default_vfunc_to_string () noexcept
  {
    ::GSocketConnectableIface *_peel_iface = reinterpret_cast<::GSocketConnectableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SocketConnectable> ()));
    ::GSocketConnectable *_peel_this = reinterpret_cast<::GSocketConnectable *> (this);
    gchar *_peel_return = _peel_iface->to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GSocketConnectableIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_enumerate ()
    {
      ::GSocketConnectableIface *klass = reinterpret_cast<::GSocketConnectableIface *> (this);
      klass->enumerate = +[] (::GSocketConnectable *connectable) -> ::GSocketAddressEnumerator *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (connectable);
        peel::RefPtr<SocketAddressEnumerator> _peel_return = _peel_this->DerivedClass::vfunc_enumerate ();
        return reinterpret_cast<::GSocketAddressEnumerator *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_proxy_enumerate ()
    {
      ::GSocketConnectableIface *klass = reinterpret_cast<::GSocketConnectableIface *> (this);
      klass->proxy_enumerate = +[] (::GSocketConnectable *connectable) -> ::GSocketAddressEnumerator *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (connectable);
        peel::RefPtr<SocketAddressEnumerator> _peel_return = _peel_this->DerivedClass::vfunc_proxy_enumerate ();
        return reinterpret_cast<::GSocketAddressEnumerator *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_to_string ()
    {
      ::GSocketConnectableIface *klass = reinterpret_cast<::GSocketConnectableIface *> (this);
      klass->to_string = +[] (::GSocketConnectable *connectable) -> gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (connectable);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_to_string ();
        return std::move (_peel_return).release_string ();
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GSocketConnectableIface),
                 "SocketConnectable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GSocketConnectableIface),
                 "SocketConnectable::Iface align mismatch");
}; /* interface SocketConnectable */
static_assert (sizeof (SocketConnectable) == sizeof (GObject::Object),
               "SocketConnectable size mismatch");
static_assert (alignof (SocketConnectable) == alignof (GObject::Object),
               "SocketConnectable align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/Gio/SocketAddressEnumerator.h>
