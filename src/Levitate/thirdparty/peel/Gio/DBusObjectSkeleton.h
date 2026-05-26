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
#include <peel/Gio/DBusObject.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class DBusInterfaceSkeleton;
class DBusMethodInvocation;
class DBusObjectSkeleton;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusObjectSkeleton> ()
{
  return g_dbus_object_skeleton_get_type ();
}


namespace Gio
{
class DBusObjectSkeleton : public DBusObject
/* extends GObject::Object */
/* implements DBusObject */
{
private:
  unsigned char _placeholder[sizeof (::GDBusObjectSkeleton) - sizeof (DBusObject)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusObjectSkeleton () = delete;
  DBusObjectSkeleton (const DBusObjectSkeleton &) = delete;
  DBusObjectSkeleton (DBusObjectSkeleton &&) = delete;
  DBusObjectSkeleton &
  operator = (const DBusObjectSkeleton &) = delete;
  DBusObjectSkeleton &
  operator = (DBusObjectSkeleton &&) = delete;
protected:
  ~DBusObjectSkeleton () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<DBusObjectSkeleton>
  create (const char *object_path) noexcept
  {
    ::GDBusObjectSkeleton *_peel_return = g_dbus_object_skeleton_new (object_path);
    peel_assume (_peel_return);
    return peel::RefPtr<DBusObjectSkeleton>::adopt_ref (reinterpret_cast<DBusObjectSkeleton *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_interface (DBusInterfaceSkeleton *interface_) noexcept
  {
    ::GDBusObjectSkeleton *_peel_this = reinterpret_cast<::GDBusObjectSkeleton *> (this);
    ::GDBusInterfaceSkeleton *_peel_interface_ = reinterpret_cast<::GDBusInterfaceSkeleton *> (interface_);
    g_dbus_object_skeleton_add_interface (_peel_this, _peel_interface_);
  }

  void
  flush () noexcept
  {
    ::GDBusObjectSkeleton *_peel_this = reinterpret_cast<::GDBusObjectSkeleton *> (this);
    g_dbus_object_skeleton_flush (_peel_this);
  }

  peel_nonnull_args (2)
  void
  remove_interface (DBusInterfaceSkeleton *interface_) noexcept
  {
    ::GDBusObjectSkeleton *_peel_this = reinterpret_cast<::GDBusObjectSkeleton *> (this);
    ::GDBusInterfaceSkeleton *_peel_interface_ = reinterpret_cast<::GDBusInterfaceSkeleton *> (interface_);
    g_dbus_object_skeleton_remove_interface (_peel_this, _peel_interface_);
  }

  peel_nonnull_args (2)
  void
  remove_interface_by_name (const char *interface_name) noexcept
  {
    ::GDBusObjectSkeleton *_peel_this = reinterpret_cast<::GDBusObjectSkeleton *> (this);
    g_dbus_object_skeleton_remove_interface_by_name (_peel_this, interface_name);
  }

  peel_nonnull_args (2)
  void
  set_object_path (const char *object_path) noexcept
  {
    ::GDBusObjectSkeleton *_peel_this = reinterpret_cast<::GDBusObjectSkeleton *> (this);
    g_dbus_object_skeleton_set_object_path (_peel_this, object_path);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_authorize_method (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DBusObjectSkeleton, bool (DBusInterfaceSkeleton *, DBusMethodInvocation *)>::_peel_connect_by_name (this, "authorize-method", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_authorize_method (HandlerObject *object, bool (HandlerObject::*handler_method) (DBusObjectSkeleton *, DBusInterfaceSkeleton *, DBusMethodInvocation *), bool after = false) noexcept
  {
    return Signal<DBusObjectSkeleton, bool (DBusInterfaceSkeleton *, DBusMethodInvocation *)>::_peel_connect_by_name (this, "authorize-method", object, handler_method, after);
  }

  static peel::Property<const char *>
  prop_g_object_path ()
  {
    return peel::Property<const char *> { "g-object-path" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<DBusObjectSkeleton> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  bool
  parent_vfunc_authorize_method (DBusInterfaceSkeleton *interface_, DBusMethodInvocation *invocation) noexcept
  {
    ::GDBusObjectSkeletonClass *_peel_class = reinterpret_cast<::GDBusObjectSkeletonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GDBusObjectSkeleton *_peel_this = reinterpret_cast<::GDBusObjectSkeleton *> (this);
    ::GDBusInterfaceSkeleton *_peel_interface_ = reinterpret_cast<::GDBusInterfaceSkeleton *> (interface_);
    ::GDBusMethodInvocation *_peel_invocation = reinterpret_cast<::GDBusMethodInvocation *> (invocation);
    gboolean _peel_return = _peel_class->authorize_method (_peel_this, _peel_interface_, _peel_invocation);
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GDBusObjectSkeletonClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_authorize_method ()
    {
      ::GDBusObjectSkeletonClass *klass = reinterpret_cast<::GDBusObjectSkeletonClass *> (this);
      klass->authorize_method = +[] (::GDBusObjectSkeleton *object, ::GDBusInterfaceSkeleton *interface_, ::GDBusMethodInvocation *invocation) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (object);
        DBusInterfaceSkeleton *_peel_interface_ = reinterpret_cast<DBusInterfaceSkeleton *> (interface_);
        DBusMethodInvocation *_peel_invocation = reinterpret_cast<DBusMethodInvocation *> (invocation);
        bool _peel_return = _peel_this->DerivedClass::vfunc_authorize_method (_peel_interface_, _peel_invocation);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GDBusObjectSkeletonClass),
                 "DBusObjectSkeleton::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GDBusObjectSkeletonClass),
                 "DBusObjectSkeleton::Class align mismatch");
}; /* class DBusObjectSkeleton */

static_assert (sizeof (DBusObjectSkeleton) == sizeof (::GDBusObjectSkeleton),
               "DBusObjectSkeleton size mismatch");
static_assert (alignof (DBusObjectSkeleton) == alignof (::GDBusObjectSkeleton),
               "DBusObjectSkeleton align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
