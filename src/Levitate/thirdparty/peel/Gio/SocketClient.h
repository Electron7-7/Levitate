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
#include <peel/Gio/TlsCertificate.h>

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
class IOStream;
class /* interface */ ProxyResolver;
class SocketAddress;
class SocketClient;
enum class SocketClientEvent : std::underlying_type<::GSocketClientEvent>::type;
class /* interface */ SocketConnectable;
class SocketConnection;
enum class SocketFamily : std::underlying_type<::GSocketFamily>::type;
enum class SocketProtocol : std::underlying_type<::GSocketProtocol>::type;
enum class SocketType : std::underlying_type<::GSocketType>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SocketClient> ()
{
  return g_socket_client_get_type ();
}


namespace Gio
{
class SocketClient : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GSocketClient) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SocketClient () = delete;
  SocketClient (const SocketClient &) = delete;
  SocketClient (SocketClient &&) = delete;
  SocketClient &
  operator = (const SocketClient &) = delete;
  SocketClient &
  operator = (SocketClient &&) = delete;
protected:
  ~SocketClient () = default;
public:

  static peel::RefPtr<SocketClient>
  create () noexcept
  {
    ::GSocketClient *_peel_return = g_socket_client_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<SocketClient>::adopt_ref (reinterpret_cast<SocketClient *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_application_proxy (const char *protocol) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    g_socket_client_add_application_proxy (_peel_this, protocol);
  }

  peel_nonnull_args (2)
  peel::RefPtr<SocketConnection>
  connect (SocketConnectable *connectable, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GSocketConnectable *_peel_connectable = reinterpret_cast<::GSocketConnectable *> (connectable);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GSocketConnection *_peel_return = g_socket_client_connect (_peel_this, _peel_connectable, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketConnection>::adopt_ref (reinterpret_cast<SocketConnection *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  connect_async (SocketConnectable *connectable, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GSocketConnectable *_peel_connectable = reinterpret_cast<::GSocketConnectable *> (connectable);
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
    g_socket_client_connect_async (_peel_this, _peel_connectable, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<SocketConnection>
  connect_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GSocketConnection *_peel_return = g_socket_client_connect_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketConnection>::adopt_ref (reinterpret_cast<SocketConnection *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<SocketConnection>
  connect_to_host (const char *host_and_port, uint16_t default_port, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GSocketConnection *_peel_return = g_socket_client_connect_to_host (_peel_this, host_and_port, default_port, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketConnection>::adopt_ref (reinterpret_cast<SocketConnection *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  connect_to_host_async (const char *host_and_port, uint16_t default_port, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
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
    g_socket_client_connect_to_host_async (_peel_this, host_and_port, default_port, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<SocketConnection>
  connect_to_host_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GSocketConnection *_peel_return = g_socket_client_connect_to_host_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketConnection>::adopt_ref (reinterpret_cast<SocketConnection *> (_peel_return));
  }

  peel_nonnull_args (2, 3)
  peel::RefPtr<SocketConnection>
  connect_to_service (const char *domain, const char *service, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GSocketConnection *_peel_return = g_socket_client_connect_to_service (_peel_this, domain, service, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketConnection>::adopt_ref (reinterpret_cast<SocketConnection *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2, 3)
  void
  connect_to_service_async (const char *domain, const char *service, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
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
    g_socket_client_connect_to_service_async (_peel_this, domain, service, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<SocketConnection>
  connect_to_service_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GSocketConnection *_peel_return = g_socket_client_connect_to_service_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketConnection>::adopt_ref (reinterpret_cast<SocketConnection *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<SocketConnection>
  connect_to_uri (const char *uri, uint16_t default_port, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GSocketConnection *_peel_return = g_socket_client_connect_to_uri (_peel_this, uri, default_port, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketConnection>::adopt_ref (reinterpret_cast<SocketConnection *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  connect_to_uri_async (const char *uri, uint16_t default_port, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
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
    g_socket_client_connect_to_uri_async (_peel_this, uri, default_port, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<SocketConnection>
  connect_to_uri_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GSocketConnection *_peel_return = g_socket_client_connect_to_uri_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketConnection>::adopt_ref (reinterpret_cast<SocketConnection *> (_peel_return));
  }

  bool
  get_enable_proxy () noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    gboolean _peel_return = g_socket_client_get_enable_proxy (_peel_this);
    return !!_peel_return;
  }

  SocketFamily
  get_family () noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GSocketFamily _peel_return = g_socket_client_get_family (_peel_this);
    return static_cast<SocketFamily> (_peel_return);
  }

  SocketAddress *
  get_local_address () noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GSocketAddress *_peel_return = g_socket_client_get_local_address (_peel_this);
    return reinterpret_cast<SocketAddress *> (_peel_return);
  }

  SocketProtocol
  get_protocol () noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GSocketProtocol _peel_return = g_socket_client_get_protocol (_peel_this);
    return static_cast<SocketProtocol> (_peel_return);
  }

  peel_returns_nonnull
  ProxyResolver *
  get_proxy_resolver () noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GProxyResolver *_peel_return = g_socket_client_get_proxy_resolver (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<ProxyResolver *> (_peel_return);
  }

  SocketType
  get_socket_type () noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GSocketType _peel_return = g_socket_client_get_socket_type (_peel_this);
    return static_cast<SocketType> (_peel_return);
  }

  unsigned
  get_timeout () noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    return g_socket_client_get_timeout (_peel_this);
  }

  bool
  get_tls () noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    gboolean _peel_return = g_socket_client_get_tls (_peel_this);
    return !!_peel_return;
  }

  TlsCertificate::Flags
  get_tls_validation_flags () noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GTlsCertificateFlags _peel_return = g_socket_client_get_tls_validation_flags (_peel_this);
    return static_cast<TlsCertificate::Flags> (_peel_return);
  }

  void
  set_enable_proxy (bool enable) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    gboolean _peel_enable = static_cast<gboolean> (enable);
    g_socket_client_set_enable_proxy (_peel_this, _peel_enable);
  }

  void
  set_family (SocketFamily family) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GSocketFamily _peel_family = static_cast<::GSocketFamily> (family);
    g_socket_client_set_family (_peel_this, _peel_family);
  }

  void
  set_local_address (SocketAddress *address) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GSocketAddress *_peel_address = reinterpret_cast<::GSocketAddress *> (address);
    g_socket_client_set_local_address (_peel_this, _peel_address);
  }

  void
  set_protocol (SocketProtocol protocol) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GSocketProtocol _peel_protocol = static_cast<::GSocketProtocol> (protocol);
    g_socket_client_set_protocol (_peel_this, _peel_protocol);
  }

  void
  set_proxy_resolver (ProxyResolver *proxy_resolver) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GProxyResolver *_peel_proxy_resolver = reinterpret_cast<::GProxyResolver *> (proxy_resolver);
    g_socket_client_set_proxy_resolver (_peel_this, _peel_proxy_resolver);
  }

  void
  set_socket_type (SocketType type) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GSocketType _peel_type = static_cast<::GSocketType> (type);
    g_socket_client_set_socket_type (_peel_this, _peel_type);
  }

  void
  set_timeout (unsigned timeout) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    g_socket_client_set_timeout (_peel_this, timeout);
  }

  void
  set_tls (bool tls) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    gboolean _peel_tls = static_cast<gboolean> (tls);
    g_socket_client_set_tls (_peel_this, _peel_tls);
  }

  void
  set_tls_validation_flags (TlsCertificate::Flags flags) noexcept
  {
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GTlsCertificateFlags _peel_flags = static_cast<::GTlsCertificateFlags> (flags);
    g_socket_client_set_tls_validation_flags (_peel_this, _peel_flags);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_event (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SocketClient, void (SocketClientEvent, SocketConnectable *, IOStream *)>::_peel_connect_by_name (this, "event", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_event (HandlerObject *object, void (HandlerObject::*handler_method) (SocketClient *, SocketClientEvent, SocketConnectable *, IOStream *), bool after = false) noexcept
  {
    return Signal<SocketClient, void (SocketClientEvent, SocketConnectable *, IOStream *)>::_peel_connect_by_name (this, "event", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_enable_proxy ()
  {
    return peel::Property<bool> { "enable-proxy" };
  }

  static peel::Property<SocketFamily>
  prop_family ()
  {
    return peel::Property<SocketFamily> { "family" };
  }

  static peel::Property<SocketAddress>
  prop_local_address ()
  {
    return peel::Property<SocketAddress> { "local-address" };
  }

  static peel::Property<SocketProtocol>
  prop_protocol ()
  {
    return peel::Property<SocketProtocol> { "protocol" };
  }

  static peel::Property<ProxyResolver>
  prop_proxy_resolver ()
  {
    return peel::Property<ProxyResolver> { "proxy-resolver" };
  }

  static peel::Property<unsigned>
  prop_timeout ()
  {
    return peel::Property<unsigned> { "timeout" };
  }

  static peel::Property<bool>
  prop_tls ()
  {
    return peel::Property<bool> { "tls" };
  }

  static peel::Property<TlsCertificate::Flags>
  prop_tls_validation_flags ()
  {
    return peel::Property<TlsCertificate::Flags> { "tls-validation-flags" };
  }

  static peel::Property<SocketType>
  prop_type ()
  {
    return peel::Property<SocketType> { "type" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<SocketClient> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (3, 4)
  void
  parent_vfunc_event (SocketClientEvent event, SocketConnectable *connectable, IOStream *connection) noexcept
  {
    ::GSocketClientClass *_peel_class = reinterpret_cast<::GSocketClientClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketClient *_peel_this = reinterpret_cast<::GSocketClient *> (this);
    ::GSocketClientEvent _peel_event = static_cast<::GSocketClientEvent> (event);
    ::GSocketConnectable *_peel_connectable = reinterpret_cast<::GSocketConnectable *> (connectable);
    ::GIOStream *_peel_connection = reinterpret_cast<::GIOStream *> (connection);
    _peel_class->event (_peel_this, _peel_event, _peel_connectable, _peel_connection);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GSocketClientClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_event ()
    {
      ::GSocketClientClass *klass = reinterpret_cast<::GSocketClientClass *> (this);
      klass->event = +[] (::GSocketClient *client, ::GSocketClientEvent event, ::GSocketConnectable *connectable, ::GIOStream *connection) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (client);
        SocketClientEvent _peel_event = static_cast<SocketClientEvent> (event);
        SocketConnectable *_peel_connectable = reinterpret_cast<SocketConnectable *> (connectable);
        IOStream *_peel_connection = reinterpret_cast<IOStream *> (connection);
        _peel_this->DerivedClass::vfunc_event (_peel_event, _peel_connectable, _peel_connection);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GSocketClientClass),
                 "SocketClient::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GSocketClientClass),
                 "SocketClient::Class align mismatch");
}; /* class SocketClient */

static_assert (sizeof (SocketClient) == sizeof (::GSocketClient),
               "SocketClient size mismatch");
static_assert (alignof (SocketClient) == alignof (::GSocketClient),
               "SocketClient align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/SocketConnection.h>
