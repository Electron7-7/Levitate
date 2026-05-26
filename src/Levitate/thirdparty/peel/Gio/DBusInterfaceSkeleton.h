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
#include <peel/Gio/DBusInterface.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class DBusConnection;
class DBusInterfaceSkeleton;
class DBusMethodInvocation;
class /* interface */ DBusObject;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusInterfaceSkeleton> ()
{
  return g_dbus_interface_skeleton_get_type ();
}


namespace Gio
{
class DBusInterfaceSkeleton : public DBusInterface
/* extends GObject::Object */
/* implements DBusInterface */
{
private:
  unsigned char _placeholder[sizeof (::GDBusInterfaceSkeleton) - sizeof (DBusInterface)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusInterfaceSkeleton () = delete;
  DBusInterfaceSkeleton (const DBusInterfaceSkeleton &) = delete;
  DBusInterfaceSkeleton (DBusInterfaceSkeleton &&) = delete;
  DBusInterfaceSkeleton &
  operator = (const DBusInterfaceSkeleton &) = delete;
  DBusInterfaceSkeleton &
  operator = (DBusInterfaceSkeleton &&) = delete;
protected:
  ~DBusInterfaceSkeleton () = default;
public:
  enum class Flags : std::underlying_type<::GDBusInterfaceSkeletonFlags>::type;

  peel_nonnull_args (2, 3)
  bool
  export_ (DBusConnection *connection, const char *object_path, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dbus_interface_skeleton_export (_peel_this, _peel_connection, object_path, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  flush () noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    g_dbus_interface_skeleton_flush (_peel_this);
  }

  DBusConnection *
  get_connection () noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GDBusConnection *_peel_return = g_dbus_interface_skeleton_get_connection (_peel_this);
    return reinterpret_cast<DBusConnection *> (_peel_return);
  }

  GLib::List<peel::RefPtr<DBusConnection>>
  get_connections () noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    GList *_peel_return = g_dbus_interface_skeleton_get_connections (_peel_this);
    return GLib::List<peel::RefPtr<DBusConnection>>::adopt_list (_peel_return);
  }

  DBusInterfaceSkeleton::Flags
  get_flags () noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GDBusInterfaceSkeletonFlags _peel_return = g_dbus_interface_skeleton_get_flags (_peel_this);
    return static_cast<DBusInterfaceSkeleton::Flags> (_peel_return);
  }

  peel_returns_nonnull
  DBusInterface::Info *
  get_info () noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GDBusInterfaceInfo *_peel_return = g_dbus_interface_skeleton_get_info (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<DBusInterface::Info *> (_peel_return);
  }

  const char *
  get_object_path () noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    return g_dbus_interface_skeleton_get_object_path (_peel_this);
  }

  peel::RefPtr<GLib::Variant>
  get_properties () noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GVariant *_peel_return = g_dbus_interface_skeleton_get_properties (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_returns_nonnull
  DBusInterface::VTable *
  get_vtable () noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GDBusInterfaceVTable *_peel_return = g_dbus_interface_skeleton_get_vtable (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<DBusInterface::VTable *> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  has_connection (DBusConnection *connection) noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    gboolean _peel_return = g_dbus_interface_skeleton_has_connection (_peel_this, _peel_connection);
    return !!_peel_return;
  }

  void
  set_flags (DBusInterfaceSkeleton::Flags flags) noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GDBusInterfaceSkeletonFlags _peel_flags = static_cast<::GDBusInterfaceSkeletonFlags> (flags);
    g_dbus_interface_skeleton_set_flags (_peel_this, _peel_flags);
  }

  void
  unexport () noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    g_dbus_interface_skeleton_unexport (_peel_this);
  }

  peel_nonnull_args (2)
  void
  unexport_from_connection (DBusConnection *connection) noexcept
  {
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    g_dbus_interface_skeleton_unexport_from_connection (_peel_this, _peel_connection);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_g_authorize_method (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusInterfaceSkeleton, bool (DBusMethodInvocation *)>::_peel_connect_by_name (this, "g-authorize-method", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_g_authorize_method (HandlerObject *object, bool (HandlerObject::*handler_method) (DBusInterfaceSkeleton *, DBusMethodInvocation *), bool after = false) noexcept
  {
    return Signal<DBusInterfaceSkeleton, bool (DBusMethodInvocation *)>::_peel_connect_by_name (this, "g-authorize-method", object, handler_method, after);
  }

  static peel::Property<DBusInterfaceSkeleton::Flags>
  prop_g_flags ()
  {
    return peel::Property<DBusInterfaceSkeleton::Flags> { "g-flags" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<DBusInterfaceSkeleton> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_flush () noexcept
  {
    ::GDBusInterfaceSkeletonClass *_peel_class = reinterpret_cast<::GDBusInterfaceSkeletonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    _peel_class->flush (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_g_authorize_method (DBusMethodInvocation *invocation) noexcept
  {
    ::GDBusInterfaceSkeletonClass *_peel_class = reinterpret_cast<::GDBusInterfaceSkeletonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GDBusMethodInvocation *_peel_invocation = reinterpret_cast<::GDBusMethodInvocation *> (invocation);
    gboolean _peel_return = _peel_class->g_authorize_method (_peel_this, _peel_invocation);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  DBusInterface::Info *
  parent_vfunc_get_info () noexcept
  {
    ::GDBusInterfaceSkeletonClass *_peel_class = reinterpret_cast<::GDBusInterfaceSkeletonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GDBusInterfaceInfo *_peel_return = _peel_class->get_info (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<DBusInterface::Info *> (_peel_return);
  }

  template<typename DerivedClass>
  peel::RefPtr<GLib::Variant>
  parent_vfunc_get_properties () noexcept
  {
    ::GDBusInterfaceSkeletonClass *_peel_class = reinterpret_cast<::GDBusInterfaceSkeletonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GVariant *_peel_return = _peel_class->get_properties (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  DBusInterface::VTable *
  parent_vfunc_get_vtable () noexcept
  {
    ::GDBusInterfaceSkeletonClass *_peel_class = reinterpret_cast<::GDBusInterfaceSkeletonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GDBusInterfaceVTable *_peel_return = _peel_class->get_vtable (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<DBusInterface::VTable *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (3, 5)
  void
  parent_vfunc_method_dispatch (::GDBusInterfaceMethodCallFunc method_call_func, DBusMethodInvocation *invocation, DBusInterfaceSkeleton::Flags flags, DBusObject *object) noexcept
  {
    ::GDBusInterfaceSkeletonClass *_peel_class = reinterpret_cast<::GDBusInterfaceSkeletonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GDBusInterfaceSkeleton *_peel_this = reinterpret_cast<::GDBusInterfaceSkeleton *> (this);
    ::GDBusMethodInvocation *_peel_invocation = reinterpret_cast<::GDBusMethodInvocation *> (invocation);
    ::GDBusInterfaceSkeletonFlags _peel_flags = static_cast<::GDBusInterfaceSkeletonFlags> (flags);
    ::GDBusObject *_peel_object = reinterpret_cast<::GDBusObject *> (object);
    _peel_class->method_dispatch (_peel_this, method_call_func, _peel_invocation, _peel_flags, _peel_object);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GDBusInterfaceSkeletonClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_flush ()
    {
      ::GDBusInterfaceSkeletonClass *klass = reinterpret_cast<::GDBusInterfaceSkeletonClass *> (this);
      klass->flush = +[] (::GDBusInterfaceSkeleton *interface_) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interface_);
        _peel_this->DerivedClass::vfunc_flush ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_g_authorize_method ()
    {
      ::GDBusInterfaceSkeletonClass *klass = reinterpret_cast<::GDBusInterfaceSkeletonClass *> (this);
      klass->g_authorize_method = +[] (::GDBusInterfaceSkeleton *interface_, ::GDBusMethodInvocation *invocation) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interface_);
        DBusMethodInvocation *_peel_invocation = reinterpret_cast<DBusMethodInvocation *> (invocation);
        bool _peel_return = _peel_this->DerivedClass::vfunc_g_authorize_method (_peel_invocation);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_info ()
    {
      ::GDBusInterfaceSkeletonClass *klass = reinterpret_cast<::GDBusInterfaceSkeletonClass *> (this);
      klass->get_info = +[] (::GDBusInterfaceSkeleton *interface_) -> ::GDBusInterfaceInfo *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interface_);
        DBusInterface::Info *_peel_return = _peel_this->DerivedClass::vfunc_get_info ();
        return reinterpret_cast<::GDBusInterfaceInfo *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_properties ()
    {
      ::GDBusInterfaceSkeletonClass *klass = reinterpret_cast<::GDBusInterfaceSkeletonClass *> (this);
      klass->get_properties = +[] (::GDBusInterfaceSkeleton *interface_) -> ::GVariant *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interface_);
        peel::RefPtr<GLib::Variant> _peel_return = _peel_this->DerivedClass::vfunc_get_properties ();
        return reinterpret_cast<::GVariant *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_vtable ()
    {
      ::GDBusInterfaceSkeletonClass *klass = reinterpret_cast<::GDBusInterfaceSkeletonClass *> (this);
      klass->get_vtable = +[] (::GDBusInterfaceSkeleton *interface_) -> ::GDBusInterfaceVTable *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interface_);
        DBusInterface::VTable *_peel_return = _peel_this->DerivedClass::vfunc_get_vtable ();
        return reinterpret_cast<::GDBusInterfaceVTable *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_method_dispatch ()
    {
      ::GDBusInterfaceSkeletonClass *klass = reinterpret_cast<::GDBusInterfaceSkeletonClass *> (this);
      klass->method_dispatch = +[] (::GDBusInterfaceSkeleton *interface_, ::GDBusInterfaceMethodCallFunc method_call_func, ::GDBusMethodInvocation *invocation, ::GDBusInterfaceSkeletonFlags flags, ::GDBusObject *object) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interface_);
        DBusMethodInvocation *_peel_invocation = reinterpret_cast<DBusMethodInvocation *> (invocation);
        DBusInterfaceSkeleton::Flags _peel_flags = static_cast<DBusInterfaceSkeleton::Flags> (flags);
        DBusObject *_peel_object = reinterpret_cast<DBusObject *> (object);
        _peel_this->DerivedClass::vfunc_method_dispatch (method_call_func, _peel_invocation, _peel_flags, _peel_object);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GDBusInterfaceSkeletonClass),
                 "DBusInterfaceSkeleton::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GDBusInterfaceSkeletonClass),
                 "DBusInterfaceSkeleton::Class align mismatch");
}; /* class DBusInterfaceSkeleton */

static_assert (sizeof (DBusInterfaceSkeleton) == sizeof (::GDBusInterfaceSkeleton),
               "DBusInterfaceSkeleton size mismatch");
static_assert (alignof (DBusInterfaceSkeleton) == alignof (::GDBusInterfaceSkeleton),
               "DBusInterfaceSkeleton align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Variant.h>
#include <peel/Gio/DBusConnection.h>
#include <peel/Gio/DBusMethodInvocation.h>
