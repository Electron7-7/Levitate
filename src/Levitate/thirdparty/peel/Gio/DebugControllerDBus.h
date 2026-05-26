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
#include <peel/Gio/DebugController.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class Cancellable;
class DBusConnection;
class DBusMethodInvocation;
class DebugControllerDBus;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DebugControllerDBus> ()
{
  return g_debug_controller_dbus_get_type ();
}


namespace Gio
{
class DebugControllerDBus : public DebugController
/* extends GObject::Object */
/* implements DebugController, Initable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DebugControllerDBus () = delete;
  DebugControllerDBus (const DebugControllerDBus &) = delete;
  DebugControllerDBus (DebugControllerDBus &&) = delete;
  DebugControllerDBus &
  operator = (const DebugControllerDBus &) = delete;
  DebugControllerDBus &
  operator = (DebugControllerDBus &&) = delete;
protected:
  ~DebugControllerDBus () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<DebugControllerDBus>
  create (DBusConnection *connection, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GDebugControllerDBus *_peel_return = g_debug_controller_dbus_new (_peel_connection, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DebugControllerDBus>::adopt_ref (reinterpret_cast<DebugControllerDBus *> (_peel_return));
  }

  void
  stop () noexcept
  {
    ::GDebugControllerDBus *_peel_this = reinterpret_cast<::GDebugControllerDBus *> (this);
    g_debug_controller_dbus_stop (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_authorize (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DebugControllerDBus, bool (DBusMethodInvocation *)>::_peel_connect_by_name (this, "authorize", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_authorize (HandlerObject *object, bool (HandlerObject::*handler_method) (DebugControllerDBus *, DBusMethodInvocation *), bool after = false) noexcept
  {
    return Signal<DebugControllerDBus, bool (DBusMethodInvocation *)>::_peel_connect_by_name (this, "authorize", object, handler_method, after);
  }

  static peel::Property<DBusConnection>
  prop_connection ()
  {
    return peel::Property<DBusConnection> { "connection" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<DebugControllerDBus> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_authorize (DBusMethodInvocation *invocation) noexcept
  {
    ::GDebugControllerDBusClass *_peel_class = reinterpret_cast<::GDebugControllerDBusClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GDebugControllerDBus *_peel_this = reinterpret_cast<::GDebugControllerDBus *> (this);
    ::GDBusMethodInvocation *_peel_invocation = reinterpret_cast<::GDBusMethodInvocation *> (invocation);
    gboolean _peel_return = _peel_class->authorize (_peel_this, _peel_invocation);
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GDebugControllerDBusClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_authorize ()
    {
      ::GDebugControllerDBusClass *klass = reinterpret_cast<::GDebugControllerDBusClass *> (this);
      klass->authorize = +[] (::GDebugControllerDBus *controller, ::GDBusMethodInvocation *invocation) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (controller);
        DBusMethodInvocation *_peel_invocation = reinterpret_cast<DBusMethodInvocation *> (invocation);
        bool _peel_return = _peel_this->DerivedClass::vfunc_authorize (_peel_invocation);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GDebugControllerDBusClass),
                 "DebugControllerDBus::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GDebugControllerDBusClass),
                 "DebugControllerDBus::Class align mismatch");
}; /* class DebugControllerDBus */

static_assert (sizeof (DebugControllerDBus) == sizeof (::GDebugControllerDBus),
               "DebugControllerDBus size mismatch");
static_assert (alignof (DebugControllerDBus) == alignof (::GDebugControllerDBus),
               "DebugControllerDBus align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
