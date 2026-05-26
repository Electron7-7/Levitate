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
#include <peel/GLib/List.h>
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
GObject::Type::of<Gio::DBusObject> ()
{
  return g_dbus_object_get_type ();
}


namespace Gio
{
class /* interface */ DBusObject : public GObject::Object
/* requires GObject::Object */
{
private:
  DBusObject () = delete;
  DBusObject (const DBusObject &) = delete;
  DBusObject (DBusObject &&) = delete;

  DBusObject &
  operator = (const DBusObject &) = delete;
  DBusObject &
  operator = (DBusObject &&) = delete;

protected:
  ~DBusObject () = default;

public:

  peel_nonnull_args (2)
  peel::RefPtr<DBusInterface>
  get_interface (const char *interface_name) noexcept
  {
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    ::GDBusInterface *_peel_return = g_dbus_object_get_interface (_peel_this, interface_name);
    return peel::RefPtr<DBusInterface>::adopt_ref (reinterpret_cast<DBusInterface *> (_peel_return));
  }

  GLib::List<peel::RefPtr<DBusInterface>>
  get_interfaces () noexcept
  {
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    GList *_peel_return = g_dbus_object_get_interfaces (_peel_this);
    return GLib::List<peel::RefPtr<DBusInterface>>::adopt_list (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_object_path () noexcept
  {
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    return g_dbus_object_get_object_path (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_interface_added (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusObject, void (DBusInterface *)>::_peel_connect_by_name (this, "interface-added", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_interface_added (HandlerObject *object, void (HandlerObject::*handler_method) (DBusObject *, DBusInterface *), bool after = false) noexcept
  {
    return Signal<DBusObject, void (DBusInterface *)>::_peel_connect_by_name (this, "interface-added", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_interface_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusObject, void (DBusInterface *)>::_peel_connect_by_name (this, "interface-removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_interface_removed (HandlerObject *object, void (HandlerObject::*handler_method) (DBusObject *, DBusInterface *), bool after = false) noexcept
  {
    return Signal<DBusObject, void (DBusInterface *)>::_peel_connect_by_name (this, "interface-removed", object, handler_method, after);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<DBusInterface>
  parent_vfunc_get_interface (const char *interface_name) noexcept
  {
    ::GDBusObjectIface *_peel_iface = reinterpret_cast<::GDBusObjectIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObject> ())->peek_parent ());
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    ::GDBusInterface *_peel_return = _peel_iface->get_interface (_peel_this, interface_name);
    return peel::RefPtr<DBusInterface>::adopt_ref (reinterpret_cast<DBusInterface *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<DBusInterface>
  default_vfunc_get_interface (const char *interface_name) noexcept
  {
    ::GDBusObjectIface *_peel_iface = reinterpret_cast<::GDBusObjectIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObject> ()));
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    ::GDBusInterface *_peel_return = _peel_iface->get_interface (_peel_this, interface_name);
    return peel::RefPtr<DBusInterface>::adopt_ref (reinterpret_cast<DBusInterface *> (_peel_return));
  }

  template<typename DerivedClass>
  GLib::List<peel::RefPtr<DBusInterface>>
  parent_vfunc_get_interfaces () noexcept
  {
    ::GDBusObjectIface *_peel_iface = reinterpret_cast<::GDBusObjectIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObject> ())->peek_parent ());
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    GList *_peel_return = _peel_iface->get_interfaces (_peel_this);
    return GLib::List<peel::RefPtr<DBusInterface>>::adopt_list (_peel_return);
  }

  GLib::List<peel::RefPtr<DBusInterface>>
  default_vfunc_get_interfaces () noexcept
  {
    ::GDBusObjectIface *_peel_iface = reinterpret_cast<::GDBusObjectIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObject> ()));
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    GList *_peel_return = _peel_iface->get_interfaces (_peel_this);
    return GLib::List<peel::RefPtr<DBusInterface>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  const char *
  parent_vfunc_get_object_path () noexcept
  {
    ::GDBusObjectIface *_peel_iface = reinterpret_cast<::GDBusObjectIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObject> ())->peek_parent ());
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    return _peel_iface->get_object_path (_peel_this);
  }

  peel_returns_nonnull
  const char *
  default_vfunc_get_object_path () noexcept
  {
    ::GDBusObjectIface *_peel_iface = reinterpret_cast<::GDBusObjectIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObject> ()));
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    return _peel_iface->get_object_path (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_interface_added (DBusInterface *interface_) noexcept
  {
    ::GDBusObjectIface *_peel_iface = reinterpret_cast<::GDBusObjectIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObject> ())->peek_parent ());
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    ::GDBusInterface *_peel_interface_ = reinterpret_cast<::GDBusInterface *> (interface_);
    _peel_iface->interface_added (_peel_this, _peel_interface_);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_interface_added (DBusInterface *interface_) noexcept
  {
    ::GDBusObjectIface *_peel_iface = reinterpret_cast<::GDBusObjectIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObject> ()));
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    ::GDBusInterface *_peel_interface_ = reinterpret_cast<::GDBusInterface *> (interface_);
    _peel_iface->interface_added (_peel_this, _peel_interface_);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_interface_removed (DBusInterface *interface_) noexcept
  {
    ::GDBusObjectIface *_peel_iface = reinterpret_cast<::GDBusObjectIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObject> ())->peek_parent ());
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    ::GDBusInterface *_peel_interface_ = reinterpret_cast<::GDBusInterface *> (interface_);
    _peel_iface->interface_removed (_peel_this, _peel_interface_);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_interface_removed (DBusInterface *interface_) noexcept
  {
    ::GDBusObjectIface *_peel_iface = reinterpret_cast<::GDBusObjectIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObject> ()));
    ::GDBusObject *_peel_this = reinterpret_cast<::GDBusObject *> (this);
    ::GDBusInterface *_peel_interface_ = reinterpret_cast<::GDBusInterface *> (interface_);
    _peel_iface->interface_removed (_peel_this, _peel_interface_);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GDBusObjectIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_interface ()
    {
      ::GDBusObjectIface *klass = reinterpret_cast<::GDBusObjectIface *> (this);
      klass->get_interface = +[] (::GDBusObject *object, const gchar *interface_name) -> ::GDBusInterface *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (object);
        peel::RefPtr<DBusInterface> _peel_return = _peel_this->DerivedClass::vfunc_get_interface (interface_name);
        return reinterpret_cast<::GDBusInterface *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_interfaces ()
    {
      ::GDBusObjectIface *klass = reinterpret_cast<::GDBusObjectIface *> (this);
      klass->get_interfaces = +[] (::GDBusObject *object) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (object);
        GLib::List<peel::RefPtr<DBusInterface>> _peel_return = _peel_this->DerivedClass::vfunc_get_interfaces ();
        return std::move (_peel_return).release_list ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_object_path ()
    {
      ::GDBusObjectIface *klass = reinterpret_cast<::GDBusObjectIface *> (this);
      klass->get_object_path = +[] (::GDBusObject *object) -> const gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (object);
        return _peel_this->DerivedClass::vfunc_get_object_path ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_interface_added ()
    {
      ::GDBusObjectIface *klass = reinterpret_cast<::GDBusObjectIface *> (this);
      klass->interface_added = +[] (::GDBusObject *object, ::GDBusInterface *interface_) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (object);
        DBusInterface *_peel_interface_ = reinterpret_cast<DBusInterface *> (interface_);
        _peel_this->DerivedClass::vfunc_interface_added (_peel_interface_);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_interface_removed ()
    {
      ::GDBusObjectIface *klass = reinterpret_cast<::GDBusObjectIface *> (this);
      klass->interface_removed = +[] (::GDBusObject *object, ::GDBusInterface *interface_) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (object);
        DBusInterface *_peel_interface_ = reinterpret_cast<DBusInterface *> (interface_);
        _peel_this->DerivedClass::vfunc_interface_removed (_peel_interface_);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GDBusObjectIface),
                 "DBusObject::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GDBusObjectIface),
                 "DBusObject::Iface align mismatch");
}; /* interface DBusObject */
static_assert (sizeof (DBusObject) == sizeof (GObject::Object),
               "DBusObject size mismatch");
static_assert (alignof (DBusObject) == alignof (GObject::Object),
               "DBusObject align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/Gio/DBusInterface.h>
