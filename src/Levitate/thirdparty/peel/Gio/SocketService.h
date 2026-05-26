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
#include <peel/Gio/SocketListener.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class SocketConnection;
class SocketService;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SocketService> ()
{
  return g_socket_service_get_type ();
}


namespace Gio
{
class SocketService : public SocketListener
{
private:
  unsigned char _placeholder[sizeof (::GSocketService) - sizeof (SocketListener)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SocketService () = delete;
  SocketService (const SocketService &) = delete;
  SocketService (SocketService &&) = delete;
  SocketService &
  operator = (const SocketService &) = delete;
  SocketService &
  operator = (SocketService &&) = delete;
protected:
  ~SocketService () = default;
public:

  static peel::RefPtr<SocketService>
  create () noexcept
  {
    ::GSocketService *_peel_return = g_socket_service_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<SocketService>::adopt_ref (reinterpret_cast<SocketService *> (_peel_return));
  }

  bool
  is_active () noexcept
  {
    ::GSocketService *_peel_this = reinterpret_cast<::GSocketService *> (this);
    gboolean _peel_return = g_socket_service_is_active (_peel_this);
    return !!_peel_return;
  }

  void
  start () noexcept
  {
    ::GSocketService *_peel_this = reinterpret_cast<::GSocketService *> (this);
    g_socket_service_start (_peel_this);
  }

  void
  stop () noexcept
  {
    ::GSocketService *_peel_this = reinterpret_cast<::GSocketService *> (this);
    g_socket_service_stop (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_incoming (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SocketService, bool (SocketConnection *, GObject::Object *)>::_peel_connect_by_name (this, "incoming", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_incoming (HandlerObject *object, bool (HandlerObject::*handler_method) (SocketService *, SocketConnection *, GObject::Object *), bool after = false) noexcept
  {
    return Signal<SocketService, bool (SocketConnection *, GObject::Object *)>::_peel_connect_by_name (this, "incoming", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_active ()
  {
    return peel::Property<bool> { "active" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<SocketService> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  bool
  parent_vfunc_incoming (SocketConnection *connection, GObject::Object *source_object) noexcept
  {
    ::GSocketServiceClass *_peel_class = reinterpret_cast<::GSocketServiceClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketService *_peel_this = reinterpret_cast<::GSocketService *> (this);
    ::GSocketConnection *_peel_connection = reinterpret_cast<::GSocketConnection *> (connection);
    ::GObject *_peel_source_object = reinterpret_cast<::GObject *> (source_object);
    gboolean _peel_return = _peel_class->incoming (_peel_this, _peel_connection, _peel_source_object);
    return !!_peel_return;
  }

public:
  class Class : public SocketListener::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GSocketServiceClass) - sizeof (SocketListener::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_incoming ()
    {
      ::GSocketServiceClass *klass = reinterpret_cast<::GSocketServiceClass *> (this);
      klass->incoming = +[] (::GSocketService *service, ::GSocketConnection *connection, ::GObject *source_object) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (service);
        SocketConnection *_peel_connection = reinterpret_cast<SocketConnection *> (connection);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        bool _peel_return = _peel_this->DerivedClass::vfunc_incoming (_peel_connection, _peel_source_object);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GSocketServiceClass),
                 "SocketService::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GSocketServiceClass),
                 "SocketService::Class align mismatch");
}; /* class SocketService */

static_assert (sizeof (SocketService) == sizeof (::GSocketService),
               "SocketService size mismatch");
static_assert (alignof (SocketService) == alignof (::GSocketService),
               "SocketService align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
