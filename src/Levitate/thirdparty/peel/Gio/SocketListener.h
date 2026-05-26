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

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class Socket;
class SocketAddress;
class SocketConnection;
class SocketListener;
enum class SocketListenerEvent : std::underlying_type<::GSocketListenerEvent>::type;
enum class SocketProtocol : std::underlying_type<::GSocketProtocol>::type;
enum class SocketType : std::underlying_type<::GSocketType>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SocketListener> ()
{
  return g_socket_listener_get_type ();
}


namespace Gio
{
class SocketListener : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GSocketListener) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SocketListener () = delete;
  SocketListener (const SocketListener &) = delete;
  SocketListener (SocketListener &&) = delete;
  SocketListener &
  operator = (const SocketListener &) = delete;
  SocketListener &
  operator = (SocketListener &&) = delete;
protected:
  ~SocketListener () = default;
public:

  static peel::RefPtr<SocketListener>
  create () noexcept
  {
    ::GSocketListener *_peel_return = g_socket_listener_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<SocketListener>::adopt_ref (reinterpret_cast<SocketListener *> (_peel_return));
  }

  peel_arg_out (2)
  peel::RefPtr<SocketConnection>
  accept (GObject::Object **source_object, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    ::GObject **_peel_source_object = reinterpret_cast<::GObject **> (source_object);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GSocketConnection *_peel_return = g_socket_listener_accept (_peel_this, _peel_source_object, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketConnection>::adopt_ref (reinterpret_cast<SocketConnection *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  accept_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_socket_listener_accept_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  peel::RefPtr<SocketConnection>
  accept_finish (AsyncResult *result, GObject::Object **source_object, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GObject **_peel_source_object = reinterpret_cast<::GObject **> (source_object);
    ::GError *_peel_error = nullptr;
    ::GSocketConnection *_peel_return = g_socket_listener_accept_finish (_peel_this, _peel_result, _peel_source_object, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketConnection>::adopt_ref (reinterpret_cast<SocketConnection *> (_peel_return));
  }

  peel_arg_out (2)
  peel::RefPtr<Socket>
  accept_socket (GObject::Object **source_object, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    ::GObject **_peel_source_object = reinterpret_cast<::GObject **> (source_object);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GSocket *_peel_return = g_socket_listener_accept_socket (_peel_this, _peel_source_object, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Socket>::adopt_ref (reinterpret_cast<Socket *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  accept_socket_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_socket_listener_accept_socket_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  peel::RefPtr<Socket>
  accept_socket_finish (AsyncResult *result, GObject::Object **source_object, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GObject **_peel_source_object = reinterpret_cast<::GObject **> (source_object);
    ::GError *_peel_error = nullptr;
    ::GSocket *_peel_return = g_socket_listener_accept_socket_finish (_peel_this, _peel_result, _peel_source_object, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Socket>::adopt_ref (reinterpret_cast<Socket *> (_peel_return));
  }

  peel_arg_out (6) peel_nonnull_args (2)
  bool
  add_address (SocketAddress *address, SocketType type, SocketProtocol protocol, GObject::Object *source_object, peel::RefPtr<SocketAddress> *effective_address, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    ::GSocketAddress *_peel_address = reinterpret_cast<::GSocketAddress *> (address);
    ::GSocketType _peel_type = static_cast<::GSocketType> (type);
    ::GSocketProtocol _peel_protocol = static_cast<::GSocketProtocol> (protocol);
    ::GObject *_peel_source_object = reinterpret_cast<::GObject *> (source_object);
    ::GSocketAddress *_peel_effective_address;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_listener_add_address (_peel_this, _peel_address, _peel_type, _peel_protocol, _peel_source_object, effective_address ? &_peel_effective_address : nullptr, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (effective_address)
          *effective_address = peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_effective_address));
      }
    return !!_peel_return;
  }

  uint16_t
  add_any_inet_port (GObject::Object *source_object, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    ::GObject *_peel_source_object = reinterpret_cast<::GObject *> (source_object);
    ::GError *_peel_error = nullptr;
    guint16 _peel_return = g_socket_listener_add_any_inet_port (_peel_this, _peel_source_object, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  bool
  add_inet_port (uint16_t port, GObject::Object *source_object, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    ::GObject *_peel_source_object = reinterpret_cast<::GObject *> (source_object);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_listener_add_inet_port (_peel_this, port, _peel_source_object, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  add_socket (Socket *socket, GObject::Object *source_object, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    ::GSocket *_peel_socket = reinterpret_cast<::GSocket *> (socket);
    ::GObject *_peel_source_object = reinterpret_cast<::GObject *> (source_object);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_listener_add_socket (_peel_this, _peel_socket, _peel_source_object, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  close () noexcept
  {
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    g_socket_listener_close (_peel_this);
  }

  void
  set_backlog (int listen_backlog) noexcept
  {
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    g_socket_listener_set_backlog (_peel_this, listen_backlog);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_event (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SocketListener, void (SocketListenerEvent, Socket *)>::_peel_connect_by_name (this, "event", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_event (HandlerObject *object, void (HandlerObject::*handler_method) (SocketListener *, SocketListenerEvent, Socket *), bool after = false) noexcept
  {
    return Signal<SocketListener, void (SocketListenerEvent, Socket *)>::_peel_connect_by_name (this, "event", object, handler_method, after);
  }

  static peel::Property<int>
  prop_listen_backlog ()
  {
    return peel::Property<int> { "listen-backlog" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<SocketListener> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_changed () noexcept
  {
    ::GSocketListenerClass *_peel_class = reinterpret_cast<::GSocketListenerClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    _peel_class->changed (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (3)
  void
  parent_vfunc_event (SocketListenerEvent event, Socket *socket) noexcept
  {
    ::GSocketListenerClass *_peel_class = reinterpret_cast<::GSocketListenerClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketListener *_peel_this = reinterpret_cast<::GSocketListener *> (this);
    ::GSocketListenerEvent _peel_event = static_cast<::GSocketListenerEvent> (event);
    ::GSocket *_peel_socket = reinterpret_cast<::GSocket *> (socket);
    _peel_class->event (_peel_this, _peel_event, _peel_socket);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GSocketListenerClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::GSocketListenerClass *klass = reinterpret_cast<::GSocketListenerClass *> (this);
      klass->changed = +[] (::GSocketListener *listener) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (listener);
        _peel_this->DerivedClass::vfunc_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_event ()
    {
      ::GSocketListenerClass *klass = reinterpret_cast<::GSocketListenerClass *> (this);
      klass->event = +[] (::GSocketListener *listener, ::GSocketListenerEvent event, ::GSocket *socket) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (listener);
        SocketListenerEvent _peel_event = static_cast<SocketListenerEvent> (event);
        Socket *_peel_socket = reinterpret_cast<Socket *> (socket);
        _peel_this->DerivedClass::vfunc_event (_peel_event, _peel_socket);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GSocketListenerClass),
                 "SocketListener::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GSocketListenerClass),
                 "SocketListener::Class align mismatch");
}; /* class SocketListener */

static_assert (sizeof (SocketListener) == sizeof (::GSocketListener),
               "SocketListener size mismatch");
static_assert (alignof (SocketListener) == alignof (::GSocketListener),
               "SocketListener align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/Socket.h>
#include <peel/Gio/SocketAddress.h>
#include <peel/Gio/SocketConnection.h>
