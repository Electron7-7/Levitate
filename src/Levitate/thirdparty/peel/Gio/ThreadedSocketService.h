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
#include <peel/Gio/SocketService.h>

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
class ThreadedSocketService;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ThreadedSocketService> ()
{
  return g_threaded_socket_service_get_type ();
}


namespace Gio
{
class ThreadedSocketService : public SocketService
{
private:
  unsigned char _placeholder[sizeof (::GThreadedSocketService) - sizeof (SocketService)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ThreadedSocketService () = delete;
  ThreadedSocketService (const ThreadedSocketService &) = delete;
  ThreadedSocketService (ThreadedSocketService &&) = delete;
  ThreadedSocketService &
  operator = (const ThreadedSocketService &) = delete;
  ThreadedSocketService &
  operator = (ThreadedSocketService &&) = delete;
protected:
  ~ThreadedSocketService () = default;
public:

  static peel::RefPtr<ThreadedSocketService>
  create (int max_threads) noexcept
  {
    ::GSocketService *_peel_return = g_threaded_socket_service_new (max_threads);
    peel_assume (_peel_return);
    return peel::RefPtr<ThreadedSocketService>::adopt_ref (reinterpret_cast<ThreadedSocketService *> (_peel_return));
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_run (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ThreadedSocketService, bool (SocketConnection *, GObject::Object *)>::_peel_connect_by_name (this, "run", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_run (HandlerObject *object, bool (HandlerObject::*handler_method) (ThreadedSocketService *, SocketConnection *, GObject::Object *), bool after = false) noexcept
  {
    return Signal<ThreadedSocketService, bool (SocketConnection *, GObject::Object *)>::_peel_connect_by_name (this, "run", object, handler_method, after);
  }

  static peel::Property<int>
  prop_max_threads ()
  {
    return peel::Property<int> { "max-threads" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<ThreadedSocketService> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  bool
  parent_vfunc_run (SocketConnection *connection, GObject::Object *source_object) noexcept
  {
    ::GThreadedSocketServiceClass *_peel_class = reinterpret_cast<::GThreadedSocketServiceClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GThreadedSocketService *_peel_this = reinterpret_cast<::GThreadedSocketService *> (this);
    ::GSocketConnection *_peel_connection = reinterpret_cast<::GSocketConnection *> (connection);
    ::GObject *_peel_source_object = reinterpret_cast<::GObject *> (source_object);
    gboolean _peel_return = _peel_class->run (_peel_this, _peel_connection, _peel_source_object);
    return !!_peel_return;
  }

public:
  class Class : public SocketService::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GThreadedSocketServiceClass) - sizeof (SocketService::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_run ()
    {
      ::GThreadedSocketServiceClass *klass = reinterpret_cast<::GThreadedSocketServiceClass *> (this);
      klass->run = +[] (::GThreadedSocketService *service, ::GSocketConnection *connection, ::GObject *source_object) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (service);
        SocketConnection *_peel_connection = reinterpret_cast<SocketConnection *> (connection);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        bool _peel_return = _peel_this->DerivedClass::vfunc_run (_peel_connection, _peel_source_object);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GThreadedSocketServiceClass),
                 "ThreadedSocketService::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GThreadedSocketServiceClass),
                 "ThreadedSocketService::Class align mismatch");
}; /* class ThreadedSocketService */

static_assert (sizeof (ThreadedSocketService) == sizeof (::GThreadedSocketService),
               "ThreadedSocketService size mismatch");
static_assert (alignof (ThreadedSocketService) == alignof (::GThreadedSocketService),
               "ThreadedSocketService align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
