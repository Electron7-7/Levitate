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
#include <peel/Gio/IOStream.h>

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
enum class SocketFamily : std::underlying_type<::GSocketFamily>::type;
enum class SocketType : std::underlying_type<::GSocketType>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SocketConnection> ()
{
  return g_socket_connection_get_type ();
}


namespace Gio
{
class SocketConnection : public IOStream
{
private:
  unsigned char _placeholder[sizeof (::GSocketConnection) - sizeof (IOStream)] peel_no_warn_unused;
  using IOStream::splice_finish;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SocketConnection () = delete;
  SocketConnection (const SocketConnection &) = delete;
  SocketConnection (SocketConnection &&) = delete;
  SocketConnection &
  operator = (const SocketConnection &) = delete;
  SocketConnection &
  operator = (SocketConnection &&) = delete;
protected:
  ~SocketConnection () = default;
public:

  static GObject::Type
  factory_lookup_type (SocketFamily family, SocketType type, int protocol_id) noexcept
  {
    ::GSocketFamily _peel_family = static_cast<::GSocketFamily> (family);
    ::GSocketType _peel_type = static_cast<::GSocketType> (type);
    return g_socket_connection_factory_lookup_type (_peel_family, _peel_type, protocol_id);
  }

  static void
  factory_register_type (GObject::Type g_type, SocketFamily family, SocketType type, int protocol) noexcept
  {
    ::GSocketFamily _peel_family = static_cast<::GSocketFamily> (family);
    ::GSocketType _peel_type = static_cast<::GSocketType> (type);
    g_socket_connection_factory_register_type (g_type, _peel_family, _peel_type, protocol);
  }

  peel_nonnull_args (2)
  bool
  connect (SocketAddress *address, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketConnection *_peel_this = reinterpret_cast<::GSocketConnection *> (this);
    ::GSocketAddress *_peel_address = reinterpret_cast<::GSocketAddress *> (address);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_connection_connect (_peel_this, _peel_address, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  connect_async (SocketAddress *address, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GSocketConnection *_peel_this = reinterpret_cast<::GSocketConnection *> (this);
    ::GSocketAddress *_peel_address = reinterpret_cast<::GSocketAddress *> (address);
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
    g_socket_connection_connect_async (_peel_this, _peel_address, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  connect_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketConnection *_peel_this = reinterpret_cast<::GSocketConnection *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_connection_connect_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<SocketAddress>
  get_local_address (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketConnection *_peel_this = reinterpret_cast<::GSocketConnection *> (this);
    ::GError *_peel_error = nullptr;
    ::GSocketAddress *_peel_return = g_socket_connection_get_local_address (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_return));
  }

  peel::RefPtr<SocketAddress>
  get_remote_address (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketConnection *_peel_this = reinterpret_cast<::GSocketConnection *> (this);
    ::GError *_peel_error = nullptr;
    ::GSocketAddress *_peel_return = g_socket_connection_get_remote_address (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_return));
  }

  peel_returns_nonnull
  Socket *
  get_socket () noexcept
  {
    ::GSocketConnection *_peel_this = reinterpret_cast<::GSocketConnection *> (this);
    ::GSocket *_peel_return = g_socket_connection_get_socket (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Socket *> (_peel_return);
  }

  bool
  is_connected () noexcept
  {
    ::GSocketConnection *_peel_this = reinterpret_cast<::GSocketConnection *> (this);
    gboolean _peel_return = g_socket_connection_is_connected (_peel_this);
    return !!_peel_return;
  }

  static peel::Property<Socket>
  prop_socket ()
  {
    return peel::Property<Socket> { "socket" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<SocketConnection> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public IOStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GSocketConnectionClass) - sizeof (IOStream::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GSocketConnectionClass),
                 "SocketConnection::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GSocketConnectionClass),
                 "SocketConnection::Class align mismatch");
}; /* class SocketConnection */

static_assert (sizeof (SocketConnection) == sizeof (::GSocketConnection),
               "SocketConnection size mismatch");
static_assert (alignof (SocketConnection) == alignof (::GSocketConnection),
               "SocketConnection align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/SocketAddress.h>
