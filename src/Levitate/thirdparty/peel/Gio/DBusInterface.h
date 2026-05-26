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
class /* interface */ DBusInterface;
class /* interface */ DBusObject;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusInterface> ()
{
  return g_dbus_interface_get_type ();
}


namespace Gio
{
class /* interface */ DBusInterface : public GObject::Object
/* requires GObject::Object */
{
private:
  DBusInterface () = delete;
  DBusInterface (const DBusInterface &) = delete;
  DBusInterface (DBusInterface &&) = delete;

  DBusInterface &
  operator = (const DBusInterface &) = delete;
  DBusInterface &
  operator = (DBusInterface &&) = delete;

protected:
  ~DBusInterface () = default;

public:
  struct Info;
  struct VTable;

  peel::RefPtr<DBusObject>
  dup_object () noexcept
  {
    ::GDBusInterface *_peel_this = reinterpret_cast<::GDBusInterface *> (this);
    ::GDBusObject *_peel_return = g_dbus_interface_dup_object (_peel_this);
    return peel::RefPtr<DBusObject>::adopt_ref (reinterpret_cast<DBusObject *> (_peel_return));
  }

  DBusInterface::Info *
  get_info () noexcept
  {
    ::GDBusInterface *_peel_this = reinterpret_cast<::GDBusInterface *> (this);
    ::GDBusInterfaceInfo *_peel_return = g_dbus_interface_get_info (_peel_this);
    return reinterpret_cast<DBusInterface::Info *> (_peel_return);
  }

  DBusObject *
  get_object () noexcept
  {
    ::GDBusInterface *_peel_this = reinterpret_cast<::GDBusInterface *> (this);
    ::GDBusObject *_peel_return = g_dbus_interface_get_object (_peel_this);
    return reinterpret_cast<DBusObject *> (_peel_return);
  }

  void
  set_object (DBusObject *object) noexcept
  {
    ::GDBusInterface *_peel_this = reinterpret_cast<::GDBusInterface *> (this);
    ::GDBusObject *_peel_object = reinterpret_cast<::GDBusObject *> (object);
    g_dbus_interface_set_object (_peel_this, _peel_object);
  }

  template<typename DerivedClass>
  peel::RefPtr<DBusObject>
  parent_vfunc_dup_object () noexcept
  {
    ::GDBusInterfaceIface *_peel_iface = reinterpret_cast<::GDBusInterfaceIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusInterface> ())->peek_parent ());
    ::GDBusInterface *_peel_this = reinterpret_cast<::GDBusInterface *> (this);
    ::GDBusObject *_peel_return = _peel_iface->dup_object (_peel_this);
    return peel::RefPtr<DBusObject>::adopt_ref (reinterpret_cast<DBusObject *> (_peel_return));
  }

  peel::RefPtr<DBusObject>
  default_vfunc_dup_object () noexcept
  {
    ::GDBusInterfaceIface *_peel_iface = reinterpret_cast<::GDBusInterfaceIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusInterface> ()));
    ::GDBusInterface *_peel_this = reinterpret_cast<::GDBusInterface *> (this);
    ::GDBusObject *_peel_return = _peel_iface->dup_object (_peel_this);
    return peel::RefPtr<DBusObject>::adopt_ref (reinterpret_cast<DBusObject *> (_peel_return));
  }

  template<typename DerivedClass>
  DBusInterface::Info *
  parent_vfunc_get_info () noexcept
  {
    ::GDBusInterfaceIface *_peel_iface = reinterpret_cast<::GDBusInterfaceIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusInterface> ())->peek_parent ());
    ::GDBusInterface *_peel_this = reinterpret_cast<::GDBusInterface *> (this);
    ::GDBusInterfaceInfo *_peel_return = _peel_iface->get_info (_peel_this);
    return reinterpret_cast<DBusInterface::Info *> (_peel_return);
  }

  DBusInterface::Info *
  default_vfunc_get_info () noexcept
  {
    ::GDBusInterfaceIface *_peel_iface = reinterpret_cast<::GDBusInterfaceIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusInterface> ()));
    ::GDBusInterface *_peel_this = reinterpret_cast<::GDBusInterface *> (this);
    ::GDBusInterfaceInfo *_peel_return = _peel_iface->get_info (_peel_this);
    return reinterpret_cast<DBusInterface::Info *> (_peel_return);
  }

  template<typename DerivedClass>
  DBusObject *
  parent_vfunc_get_object () noexcept
  {
    ::GDBusInterfaceIface *_peel_iface = reinterpret_cast<::GDBusInterfaceIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusInterface> ())->peek_parent ());
    ::GDBusInterface *_peel_this = reinterpret_cast<::GDBusInterface *> (this);
    ::GDBusObject *_peel_return = _peel_iface->get_object (_peel_this);
    return reinterpret_cast<DBusObject *> (_peel_return);
  }

  DBusObject *
  default_vfunc_get_object () noexcept
  {
    ::GDBusInterfaceIface *_peel_iface = reinterpret_cast<::GDBusInterfaceIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusInterface> ()));
    ::GDBusInterface *_peel_this = reinterpret_cast<::GDBusInterface *> (this);
    ::GDBusObject *_peel_return = _peel_iface->get_object (_peel_this);
    return reinterpret_cast<DBusObject *> (_peel_return);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_set_object (DBusObject *object) noexcept
  {
    ::GDBusInterfaceIface *_peel_iface = reinterpret_cast<::GDBusInterfaceIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusInterface> ())->peek_parent ());
    ::GDBusInterface *_peel_this = reinterpret_cast<::GDBusInterface *> (this);
    ::GDBusObject *_peel_object = reinterpret_cast<::GDBusObject *> (object);
    _peel_iface->set_object (_peel_this, _peel_object);
  }

  void
  default_vfunc_set_object (DBusObject *object) noexcept
  {
    ::GDBusInterfaceIface *_peel_iface = reinterpret_cast<::GDBusInterfaceIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusInterface> ()));
    ::GDBusInterface *_peel_this = reinterpret_cast<::GDBusInterface *> (this);
    ::GDBusObject *_peel_object = reinterpret_cast<::GDBusObject *> (object);
    _peel_iface->set_object (_peel_this, _peel_object);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GDBusInterfaceIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_dup_object ()
    {
      ::GDBusInterfaceIface *klass = reinterpret_cast<::GDBusInterfaceIface *> (this);
      klass->dup_object = +[] (::GDBusInterface *interface_) -> ::GDBusObject *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interface_);
        peel::RefPtr<DBusObject> _peel_return = _peel_this->DerivedClass::vfunc_dup_object ();
        return reinterpret_cast<::GDBusObject *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_info ()
    {
      ::GDBusInterfaceIface *klass = reinterpret_cast<::GDBusInterfaceIface *> (this);
      klass->get_info = +[] (::GDBusInterface *interface_) -> ::GDBusInterfaceInfo *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interface_);
        DBusInterface::Info *_peel_return = _peel_this->DerivedClass::vfunc_get_info ();
        return reinterpret_cast<::GDBusInterfaceInfo *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_object ()
    {
      ::GDBusInterfaceIface *klass = reinterpret_cast<::GDBusInterfaceIface *> (this);
      klass->get_object = +[] (::GDBusInterface *interface_) -> ::GDBusObject *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interface_);
        DBusObject *_peel_return = _peel_this->DerivedClass::vfunc_get_object ();
        return reinterpret_cast<::GDBusObject *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_object ()
    {
      ::GDBusInterfaceIface *klass = reinterpret_cast<::GDBusInterfaceIface *> (this);
      klass->set_object = +[] (::GDBusInterface *interface_, ::GDBusObject *object) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interface_);
        DBusObject *_peel_object = reinterpret_cast<DBusObject *> (object);
        _peel_this->DerivedClass::vfunc_set_object (_peel_object);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GDBusInterfaceIface),
                 "DBusInterface::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GDBusInterfaceIface),
                 "DBusInterface::Iface align mismatch");
}; /* interface DBusInterface */
static_assert (sizeof (DBusInterface) == sizeof (GObject::Object),
               "DBusInterface size mismatch");
static_assert (alignof (DBusInterface) == alignof (GObject::Object),
               "DBusInterface align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/Gio/DBusObject.h>
