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
class /* interface */ DBusObjectManager;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusObjectManager> ()
{
  return g_dbus_object_manager_get_type ();
}


namespace Gio
{
class /* interface */ DBusObjectManager : public GObject::Object
/* requires GObject::Object */
{
private:
  DBusObjectManager () = delete;
  DBusObjectManager (const DBusObjectManager &) = delete;
  DBusObjectManager (DBusObjectManager &&) = delete;

  DBusObjectManager &
  operator = (const DBusObjectManager &) = delete;
  DBusObjectManager &
  operator = (DBusObjectManager &&) = delete;

protected:
  ~DBusObjectManager () = default;

public:

  peel_nonnull_args (2, 3)
  peel::RefPtr<DBusInterface>
  get_interface (const char *object_path, const char *interface_name) noexcept
  {
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusInterface *_peel_return = g_dbus_object_manager_get_interface (_peel_this, object_path, interface_name);
    return peel::RefPtr<DBusInterface>::adopt_ref (reinterpret_cast<DBusInterface *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<DBusObject>
  get_object (const char *object_path) noexcept
  {
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusObject *_peel_return = g_dbus_object_manager_get_object (_peel_this, object_path);
    return peel::RefPtr<DBusObject>::adopt_ref (reinterpret_cast<DBusObject *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_object_path () noexcept
  {
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    return g_dbus_object_manager_get_object_path (_peel_this);
  }

  GLib::List<peel::RefPtr<DBusObject>>
  get_objects () noexcept
  {
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    GList *_peel_return = g_dbus_object_manager_get_objects (_peel_this);
    return GLib::List<peel::RefPtr<DBusObject>>::adopt_list (_peel_return);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_interface_added (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusObjectManager, void (DBusObject *, DBusInterface *)>::_peel_connect_by_name (this, "interface-added", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_interface_added (HandlerObject *object, void (HandlerObject::*handler_method) (DBusObjectManager *, DBusObject *, DBusInterface *), bool after = false) noexcept
  {
    return Signal<DBusObjectManager, void (DBusObject *, DBusInterface *)>::_peel_connect_by_name (this, "interface-added", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_interface_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusObjectManager, void (DBusObject *, DBusInterface *)>::_peel_connect_by_name (this, "interface-removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_interface_removed (HandlerObject *object, void (HandlerObject::*handler_method) (DBusObjectManager *, DBusObject *, DBusInterface *), bool after = false) noexcept
  {
    return Signal<DBusObjectManager, void (DBusObject *, DBusInterface *)>::_peel_connect_by_name (this, "interface-removed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_object_added (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusObjectManager, void (DBusObject *)>::_peel_connect_by_name (this, "object-added", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_object_added (HandlerObject *object, void (HandlerObject::*handler_method) (DBusObjectManager *, DBusObject *), bool after = false) noexcept
  {
    return Signal<DBusObjectManager, void (DBusObject *)>::_peel_connect_by_name (this, "object-added", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_object_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusObjectManager, void (DBusObject *)>::_peel_connect_by_name (this, "object-removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_object_removed (HandlerObject *object, void (HandlerObject::*handler_method) (DBusObjectManager *, DBusObject *), bool after = false) noexcept
  {
    return Signal<DBusObjectManager, void (DBusObject *)>::_peel_connect_by_name (this, "object-removed", object, handler_method, after);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  peel::RefPtr<DBusInterface>
  parent_vfunc_get_interface (const char *object_path, const char *interface_name) noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObjectManager> ())->peek_parent ());
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusInterface *_peel_return = _peel_iface->get_interface (_peel_this, object_path, interface_name);
    return peel::RefPtr<DBusInterface>::adopt_ref (reinterpret_cast<DBusInterface *> (_peel_return));
  }

  peel_nonnull_args (2, 3)
  peel::RefPtr<DBusInterface>
  default_vfunc_get_interface (const char *object_path, const char *interface_name) noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObjectManager> ()));
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusInterface *_peel_return = _peel_iface->get_interface (_peel_this, object_path, interface_name);
    return peel::RefPtr<DBusInterface>::adopt_ref (reinterpret_cast<DBusInterface *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<DBusObject>
  parent_vfunc_get_object (const char *object_path) noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObjectManager> ())->peek_parent ());
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusObject *_peel_return = _peel_iface->get_object (_peel_this, object_path);
    return peel::RefPtr<DBusObject>::adopt_ref (reinterpret_cast<DBusObject *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<DBusObject>
  default_vfunc_get_object (const char *object_path) noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObjectManager> ()));
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusObject *_peel_return = _peel_iface->get_object (_peel_this, object_path);
    return peel::RefPtr<DBusObject>::adopt_ref (reinterpret_cast<DBusObject *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  const char *
  parent_vfunc_get_object_path () noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObjectManager> ())->peek_parent ());
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    return _peel_iface->get_object_path (_peel_this);
  }

  peel_returns_nonnull
  const char *
  default_vfunc_get_object_path () noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObjectManager> ()));
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    return _peel_iface->get_object_path (_peel_this);
  }

  template<typename DerivedClass>
  GLib::List<peel::RefPtr<DBusObject>>
  parent_vfunc_get_objects () noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObjectManager> ())->peek_parent ());
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    GList *_peel_return = _peel_iface->get_objects (_peel_this);
    return GLib::List<peel::RefPtr<DBusObject>>::adopt_list (_peel_return);
  }

  GLib::List<peel::RefPtr<DBusObject>>
  default_vfunc_get_objects () noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObjectManager> ()));
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    GList *_peel_return = _peel_iface->get_objects (_peel_this);
    return GLib::List<peel::RefPtr<DBusObject>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_interface_added (DBusObject *object, DBusInterface *interface_) noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObjectManager> ())->peek_parent ());
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusObject *_peel_object = reinterpret_cast<::GDBusObject *> (object);
    ::GDBusInterface *_peel_interface_ = reinterpret_cast<::GDBusInterface *> (interface_);
    _peel_iface->interface_added (_peel_this, _peel_object, _peel_interface_);
  }

  peel_nonnull_args (2, 3)
  void
  default_vfunc_interface_added (DBusObject *object, DBusInterface *interface_) noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObjectManager> ()));
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusObject *_peel_object = reinterpret_cast<::GDBusObject *> (object);
    ::GDBusInterface *_peel_interface_ = reinterpret_cast<::GDBusInterface *> (interface_);
    _peel_iface->interface_added (_peel_this, _peel_object, _peel_interface_);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_interface_removed (DBusObject *object, DBusInterface *interface_) noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObjectManager> ())->peek_parent ());
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusObject *_peel_object = reinterpret_cast<::GDBusObject *> (object);
    ::GDBusInterface *_peel_interface_ = reinterpret_cast<::GDBusInterface *> (interface_);
    _peel_iface->interface_removed (_peel_this, _peel_object, _peel_interface_);
  }

  peel_nonnull_args (2, 3)
  void
  default_vfunc_interface_removed (DBusObject *object, DBusInterface *interface_) noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObjectManager> ()));
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusObject *_peel_object = reinterpret_cast<::GDBusObject *> (object);
    ::GDBusInterface *_peel_interface_ = reinterpret_cast<::GDBusInterface *> (interface_);
    _peel_iface->interface_removed (_peel_this, _peel_object, _peel_interface_);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_object_added (DBusObject *object) noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObjectManager> ())->peek_parent ());
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusObject *_peel_object = reinterpret_cast<::GDBusObject *> (object);
    _peel_iface->object_added (_peel_this, _peel_object);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_object_added (DBusObject *object) noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObjectManager> ()));
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusObject *_peel_object = reinterpret_cast<::GDBusObject *> (object);
    _peel_iface->object_added (_peel_this, _peel_object);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_object_removed (DBusObject *object) noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DBusObjectManager> ())->peek_parent ());
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusObject *_peel_object = reinterpret_cast<::GDBusObject *> (object);
    _peel_iface->object_removed (_peel_this, _peel_object);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_object_removed (DBusObject *object) noexcept
  {
    ::GDBusObjectManagerIface *_peel_iface = reinterpret_cast<::GDBusObjectManagerIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DBusObjectManager> ()));
    ::GDBusObjectManager *_peel_this = reinterpret_cast<::GDBusObjectManager *> (this);
    ::GDBusObject *_peel_object = reinterpret_cast<::GDBusObject *> (object);
    _peel_iface->object_removed (_peel_this, _peel_object);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GDBusObjectManagerIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_interface ()
    {
      ::GDBusObjectManagerIface *klass = reinterpret_cast<::GDBusObjectManagerIface *> (this);
      klass->get_interface = +[] (::GDBusObjectManager *manager, const gchar *object_path, const gchar *interface_name) -> ::GDBusInterface *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        peel::RefPtr<DBusInterface> _peel_return = _peel_this->DerivedClass::vfunc_get_interface (object_path, interface_name);
        return reinterpret_cast<::GDBusInterface *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_object ()
    {
      ::GDBusObjectManagerIface *klass = reinterpret_cast<::GDBusObjectManagerIface *> (this);
      klass->get_object = +[] (::GDBusObjectManager *manager, const gchar *object_path) -> ::GDBusObject *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        peel::RefPtr<DBusObject> _peel_return = _peel_this->DerivedClass::vfunc_get_object (object_path);
        return reinterpret_cast<::GDBusObject *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_object_path ()
    {
      ::GDBusObjectManagerIface *klass = reinterpret_cast<::GDBusObjectManagerIface *> (this);
      klass->get_object_path = +[] (::GDBusObjectManager *manager) -> const gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        return _peel_this->DerivedClass::vfunc_get_object_path ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_objects ()
    {
      ::GDBusObjectManagerIface *klass = reinterpret_cast<::GDBusObjectManagerIface *> (this);
      klass->get_objects = +[] (::GDBusObjectManager *manager) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        GLib::List<peel::RefPtr<DBusObject>> _peel_return = _peel_this->DerivedClass::vfunc_get_objects ();
        return std::move (_peel_return).release_list ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_interface_added ()
    {
      ::GDBusObjectManagerIface *klass = reinterpret_cast<::GDBusObjectManagerIface *> (this);
      klass->interface_added = +[] (::GDBusObjectManager *manager, ::GDBusObject *object, ::GDBusInterface *interface_) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        DBusObject *_peel_object = reinterpret_cast<DBusObject *> (object);
        DBusInterface *_peel_interface_ = reinterpret_cast<DBusInterface *> (interface_);
        _peel_this->DerivedClass::vfunc_interface_added (_peel_object, _peel_interface_);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_interface_removed ()
    {
      ::GDBusObjectManagerIface *klass = reinterpret_cast<::GDBusObjectManagerIface *> (this);
      klass->interface_removed = +[] (::GDBusObjectManager *manager, ::GDBusObject *object, ::GDBusInterface *interface_) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        DBusObject *_peel_object = reinterpret_cast<DBusObject *> (object);
        DBusInterface *_peel_interface_ = reinterpret_cast<DBusInterface *> (interface_);
        _peel_this->DerivedClass::vfunc_interface_removed (_peel_object, _peel_interface_);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_object_added ()
    {
      ::GDBusObjectManagerIface *klass = reinterpret_cast<::GDBusObjectManagerIface *> (this);
      klass->object_added = +[] (::GDBusObjectManager *manager, ::GDBusObject *object) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        DBusObject *_peel_object = reinterpret_cast<DBusObject *> (object);
        _peel_this->DerivedClass::vfunc_object_added (_peel_object);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_object_removed ()
    {
      ::GDBusObjectManagerIface *klass = reinterpret_cast<::GDBusObjectManagerIface *> (this);
      klass->object_removed = +[] (::GDBusObjectManager *manager, ::GDBusObject *object) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        DBusObject *_peel_object = reinterpret_cast<DBusObject *> (object);
        _peel_this->DerivedClass::vfunc_object_removed (_peel_object);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GDBusObjectManagerIface),
                 "DBusObjectManager::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GDBusObjectManagerIface),
                 "DBusObjectManager::Iface align mismatch");
}; /* interface DBusObjectManager */
static_assert (sizeof (DBusObjectManager) == sizeof (GObject::Object),
               "DBusObjectManager size mismatch");
static_assert (alignof (DBusObjectManager) == alignof (GObject::Object),
               "DBusObjectManager align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/Gio/DBusInterface.h>
#include <peel/Gio/DBusObject.h>
