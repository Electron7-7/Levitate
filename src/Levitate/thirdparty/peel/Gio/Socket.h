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
#include <peel/Gio/DatagramBased.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
enum class IOCondition : std::underlying_type<::GIOCondition>::type;
struct Source;
} /* namespace GLib */

namespace Gio
{
class Cancellable;
class Credentials;
class InetAddress;
struct InputMessage;
struct InputVector;
struct OutputMessage;
struct OutputVector;
enum class PollableReturn : std::underlying_type<::GPollableReturn>::type;
class Socket;
class SocketAddress;
class SocketConnection;
class SocketControlMessage;
enum class SocketFamily : std::underlying_type<::GSocketFamily>::type;
enum class SocketProtocol : std::underlying_type<::GSocketProtocol>::type;
enum class SocketType : std::underlying_type<::GSocketType>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Socket> ()
{
  return g_socket_get_type ();
}


namespace Gio
{
class Socket : public DatagramBased
/* extends GObject::Object */
/* implements DatagramBased, Initable */
{
private:
  unsigned char _placeholder[sizeof (::GSocket) - sizeof (DatagramBased)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Socket () = delete;
  Socket (const Socket &) = delete;
  Socket (Socket &&) = delete;
  Socket &
  operator = (const Socket &) = delete;
  Socket &
  operator = (Socket &&) = delete;
protected:
  ~Socket () = default;
public:

  static peel::RefPtr<Socket>
  create (SocketFamily family, SocketType type, SocketProtocol protocol, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketFamily _peel_family = static_cast<::GSocketFamily> (family);
    ::GSocketType _peel_type = static_cast<::GSocketType> (type);
    ::GSocketProtocol _peel_protocol = static_cast<::GSocketProtocol> (protocol);
    ::GError *_peel_error = nullptr;
    ::GSocket *_peel_return = g_socket_new (_peel_family, _peel_type, _peel_protocol, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Socket>::adopt_ref (reinterpret_cast<Socket *> (_peel_return));
  }

  static peel::RefPtr<Socket>
  create_from_fd (int fd, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GSocket *_peel_return = g_socket_new_from_fd (fd, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Socket>::adopt_ref (reinterpret_cast<Socket *> (_peel_return));
  }

  peel::RefPtr<Socket>
  accept (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GSocket *_peel_return = g_socket_accept (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Socket>::adopt_ref (reinterpret_cast<Socket *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  bind (SocketAddress *address, bool allow_reuse, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GSocketAddress *_peel_address = reinterpret_cast<::GSocketAddress *> (address);
    gboolean _peel_allow_reuse = static_cast<gboolean> (allow_reuse);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_bind (_peel_this, _peel_address, _peel_allow_reuse, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  check_connect_result (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_check_connect_result (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  close (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_close (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  GLib::IOCondition
  condition_check (GLib::IOCondition condition) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GIOCondition _peel_return = g_socket_condition_check (_peel_this, _peel_condition);
    return static_cast<GLib::IOCondition> (_peel_return);
  }

  bool
  condition_timed_wait (GLib::IOCondition condition, int64_t timeout_us, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_condition_timed_wait (_peel_this, _peel_condition, timeout_us, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  condition_wait (GLib::IOCondition condition, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_condition_wait (_peel_this, _peel_condition, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  connect (SocketAddress *address, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GSocketAddress *_peel_address = reinterpret_cast<::GSocketAddress *> (address);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_connect (_peel_this, _peel_address, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<SocketConnection>
  connection_factory_create_connection () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GSocketConnection *_peel_return = g_socket_connection_factory_create_connection (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<SocketConnection>::adopt_ref (reinterpret_cast<SocketConnection *> (_peel_return));
  }

  peel::RefPtr<GLib::Source>
  create_source (GLib::IOCondition condition, Cancellable *cancellable) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GSource *_peel_return = g_socket_create_source (_peel_this, _peel_condition, _peel_cancellable);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
  }

  gssize
  get_available_bytes () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    return g_socket_get_available_bytes (_peel_this);
  }

  bool
  get_blocking () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gboolean _peel_return = g_socket_get_blocking (_peel_this);
    return !!_peel_return;
  }

  bool
  get_broadcast () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gboolean _peel_return = g_socket_get_broadcast (_peel_this);
    return !!_peel_return;
  }

  peel::RefPtr<Credentials>
  get_credentials (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GError *_peel_error = nullptr;
    ::GCredentials *_peel_return = g_socket_get_credentials (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Credentials>::adopt_ref (reinterpret_cast<Credentials *> (_peel_return));
  }

  SocketFamily
  get_family () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GSocketFamily _peel_return = g_socket_get_family (_peel_this);
    return static_cast<SocketFamily> (_peel_return);
  }

  int
  get_fd () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    return g_socket_get_fd (_peel_this);
  }

  bool
  get_keepalive () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gboolean _peel_return = g_socket_get_keepalive (_peel_this);
    return !!_peel_return;
  }

  int
  get_listen_backlog () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    return g_socket_get_listen_backlog (_peel_this);
  }

  peel::RefPtr<SocketAddress>
  get_local_address (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GError *_peel_error = nullptr;
    ::GSocketAddress *_peel_return = g_socket_get_local_address (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_return));
  }

  bool
  get_multicast_loopback () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gboolean _peel_return = g_socket_get_multicast_loopback (_peel_this);
    return !!_peel_return;
  }

  unsigned
  get_multicast_ttl () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    return g_socket_get_multicast_ttl (_peel_this);
  }

  peel_arg_out (4) peel_nonnull_args (4)
  bool
  get_option (int level, int optname, int *value, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gint *_peel_value = reinterpret_cast<gint *> (value);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_get_option (_peel_this, level, optname, _peel_value, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  SocketProtocol
  get_protocol () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GSocketProtocol _peel_return = g_socket_get_protocol (_peel_this);
    return static_cast<SocketProtocol> (_peel_return);
  }

  peel::RefPtr<SocketAddress>
  get_remote_address (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GError *_peel_error = nullptr;
    ::GSocketAddress *_peel_return = g_socket_get_remote_address (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_return));
  }

  SocketType
  get_socket_type () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GSocketType _peel_return = g_socket_get_socket_type (_peel_this);
    return static_cast<SocketType> (_peel_return);
  }

  unsigned
  get_timeout () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    return g_socket_get_timeout (_peel_this);
  }

  unsigned
  get_ttl () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    return g_socket_get_ttl (_peel_this);
  }

  bool
  is_closed () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gboolean _peel_return = g_socket_is_closed (_peel_this);
    return !!_peel_return;
  }

  bool
  is_connected () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gboolean _peel_return = g_socket_is_connected (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  join_multicast_group (InetAddress *group, bool source_specific, const char *iface, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GInetAddress *_peel_group = reinterpret_cast<::GInetAddress *> (group);
    gboolean _peel_source_specific = static_cast<gboolean> (source_specific);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_join_multicast_group (_peel_this, _peel_group, _peel_source_specific, iface, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  join_multicast_group_ssm (InetAddress *group, InetAddress *source_specific, const char *iface, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GInetAddress *_peel_group = reinterpret_cast<::GInetAddress *> (group);
    ::GInetAddress *_peel_source_specific = reinterpret_cast<::GInetAddress *> (source_specific);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_join_multicast_group_ssm (_peel_this, _peel_group, _peel_source_specific, iface, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  leave_multicast_group (InetAddress *group, bool source_specific, const char *iface, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GInetAddress *_peel_group = reinterpret_cast<::GInetAddress *> (group);
    gboolean _peel_source_specific = static_cast<gboolean> (source_specific);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_leave_multicast_group (_peel_this, _peel_group, _peel_source_specific, iface, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  leave_multicast_group_ssm (InetAddress *group, InetAddress *source_specific, const char *iface, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GInetAddress *_peel_group = reinterpret_cast<::GInetAddress *> (group);
    ::GInetAddress *_peel_source_specific = reinterpret_cast<::GInetAddress *> (source_specific);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_leave_multicast_group_ssm (_peel_this, _peel_group, _peel_source_specific, iface, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  listen (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_listen (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  gssize
  receive (peel::ArrayRef<uint8_t> buffer, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_size;
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gchar *_peel_buffer = (_peel_size = buffer.size (), reinterpret_cast<gchar *> (buffer.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_socket_receive (_peel_this, _peel_buffer, _peel_size, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel::RefPtr<GLib::Bytes>
  receive_bytes (size_t size, int64_t timeout_us, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GBytes *_peel_return = g_socket_receive_bytes (_peel_this, size, timeout_us, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  peel_arg_out (2)
  peel::RefPtr<GLib::Bytes>
  receive_bytes_from (peel::RefPtr<SocketAddress> *address, size_t size, int64_t timeout_us, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GSocketAddress *_peel_address;
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GBytes *_peel_return = g_socket_receive_bytes_from (_peel_this, address ? &_peel_address : nullptr, size, timeout_us, _peel_cancellable, &_peel_error);
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
        if (address)
          *address = peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_address));
      }
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  peel_arg_out (2)
  gssize
  receive_from (peel::RefPtr<SocketAddress> *address, peel::ArrayRef<uint8_t> buffer, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_size;
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GSocketAddress *_peel_address;
    gchar *_peel_buffer = (_peel_size = buffer.size (), reinterpret_cast<gchar *> (buffer.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_socket_receive_from (_peel_this, address ? &_peel_address : nullptr, _peel_buffer, _peel_size, _peel_cancellable, &_peel_error);
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
        if (address)
          *address = peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_address));
      }
    return _peel_return;
  }

  peel_arg_out (2) peel_arg_inout (5) peel_nonnull_args (5)
  gssize
  receive_message (peel::RefPtr<SocketAddress> *address, peel::ArrayRef<InputVector> vectors, peel::UniquePtr<peel::RefPtr<SocketControlMessage>[]> *messages, int *flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gint _peel_num_vectors;
    gint _peel_num_messages;
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GSocketAddress *_peel_address;
    ::GInputVector *_peel_vectors = (_peel_num_vectors = vectors.size (), reinterpret_cast<::GInputVector *> (vectors.data ()));
    ::GSocketControlMessage **_peel_messages;
    gint *_peel_flags = reinterpret_cast<gint *> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_socket_receive_message (_peel_this, address ? &_peel_address : nullptr, _peel_vectors, _peel_num_vectors, messages ? &_peel_messages : nullptr, &_peel_num_messages, _peel_flags, _peel_cancellable, &_peel_error);
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
        if (address)
          *address = peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_address));
        if (messages)
          *messages = peel::UniquePtr<peel::RefPtr<SocketControlMessage>[]>::adopt_ref (reinterpret_cast<peel::RefPtr<SocketControlMessage> *> (_peel_messages), _peel_num_messages);
      }
    return _peel_return;
  }

  int
  receive_messages (peel::ArrayRef<InputMessage> messages, int flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    guint _peel_num_messages;
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GInputMessage *_peel_messages = (_peel_num_messages = messages.size (), reinterpret_cast<::GInputMessage *> (messages.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gint _peel_return = g_socket_receive_messages (_peel_this, _peel_messages, _peel_num_messages, flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  gssize
  receive_with_blocking (peel::ArrayRef<uint8_t> buffer, bool blocking, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_size;
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gchar *_peel_buffer = (_peel_size = buffer.size (), reinterpret_cast<gchar *> (buffer.data ()));
    gboolean _peel_blocking = static_cast<gboolean> (blocking);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_socket_receive_with_blocking (_peel_this, _peel_buffer, _peel_size, _peel_blocking, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  gssize
  send (peel::ArrayRef<const uint8_t> buffer, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_size;
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    const gchar *_peel_buffer = (_peel_size = buffer.size (), reinterpret_cast<const gchar *> (buffer.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_socket_send (_peel_this, _peel_buffer, _peel_size, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  gssize
  send_message (SocketAddress *address, peel::ArrayRef<OutputVector> vectors, peel::ArrayRef<SocketControlMessage *> messages, int flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gint _peel_num_vectors;
    gint _peel_num_messages;
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GSocketAddress *_peel_address = reinterpret_cast<::GSocketAddress *> (address);
    ::GOutputVector *_peel_vectors = (_peel_num_vectors = vectors.size (), reinterpret_cast<::GOutputVector *> (vectors.data ()));
    ::GSocketControlMessage **_peel_messages = (_peel_num_messages = messages.size (), reinterpret_cast<::GSocketControlMessage **> (messages.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_socket_send_message (_peel_this, _peel_address, _peel_vectors, _peel_num_vectors, _peel_messages, _peel_num_messages, flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_arg_out (7)
  PollableReturn
  send_message_with_timeout (SocketAddress *address, peel::ArrayRef<const OutputVector> vectors, peel::ArrayRef<SocketControlMessage *> messages, int flags, int64_t timeout_us, size_t *bytes_written, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gint _peel_num_vectors;
    gint _peel_num_messages;
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GSocketAddress *_peel_address = reinterpret_cast<::GSocketAddress *> (address);
    const ::GOutputVector *_peel_vectors = (_peel_num_vectors = vectors.size (), reinterpret_cast<const ::GOutputVector *> (vectors.data ()));
    ::GSocketControlMessage **_peel_messages = (_peel_num_messages = messages.size (), reinterpret_cast<::GSocketControlMessage **> (messages.data ()));
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GPollableReturn _peel_return = g_socket_send_message_with_timeout (_peel_this, _peel_address, _peel_vectors, _peel_num_vectors, _peel_messages, _peel_num_messages, flags, timeout_us, _peel_bytes_written, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<PollableReturn> (_peel_return);
  }

  int
  send_messages (peel::ArrayRef<OutputMessage> messages, int flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    guint _peel_num_messages;
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GOutputMessage *_peel_messages = (_peel_num_messages = messages.size (), reinterpret_cast<::GOutputMessage *> (messages.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gint _peel_return = g_socket_send_messages (_peel_this, _peel_messages, _peel_num_messages, flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  gssize
  send_to (SocketAddress *address, peel::ArrayRef<const uint8_t> buffer, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_size;
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GSocketAddress *_peel_address = reinterpret_cast<::GSocketAddress *> (address);
    const gchar *_peel_buffer = (_peel_size = buffer.size (), reinterpret_cast<const gchar *> (buffer.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_socket_send_to (_peel_this, _peel_address, _peel_buffer, _peel_size, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  gssize
  send_with_blocking (peel::ArrayRef<const uint8_t> buffer, bool blocking, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_size;
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    const gchar *_peel_buffer = (_peel_size = buffer.size (), reinterpret_cast<const gchar *> (buffer.data ()));
    gboolean _peel_blocking = static_cast<gboolean> (blocking);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_socket_send_with_blocking (_peel_this, _peel_buffer, _peel_size, _peel_blocking, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  void
  set_blocking (bool blocking) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gboolean _peel_blocking = static_cast<gboolean> (blocking);
    g_socket_set_blocking (_peel_this, _peel_blocking);
  }

  void
  set_broadcast (bool broadcast) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gboolean _peel_broadcast = static_cast<gboolean> (broadcast);
    g_socket_set_broadcast (_peel_this, _peel_broadcast);
  }

  void
  set_keepalive (bool keepalive) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gboolean _peel_keepalive = static_cast<gboolean> (keepalive);
    g_socket_set_keepalive (_peel_this, _peel_keepalive);
  }

  void
  set_listen_backlog (int backlog) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    g_socket_set_listen_backlog (_peel_this, backlog);
  }

  void
  set_multicast_loopback (bool loopback) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gboolean _peel_loopback = static_cast<gboolean> (loopback);
    g_socket_set_multicast_loopback (_peel_this, _peel_loopback);
  }

  void
  set_multicast_ttl (unsigned ttl) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    g_socket_set_multicast_ttl (_peel_this, ttl);
  }

  bool
  set_option (int level, int optname, int value, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_set_option (_peel_this, level, optname, value, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  set_timeout (unsigned timeout) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    g_socket_set_timeout (_peel_this, timeout);
  }

  void
  set_ttl (unsigned ttl) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    g_socket_set_ttl (_peel_this, ttl);
  }

  bool
  shutdown (bool shutdown_read, bool shutdown_write, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gboolean _peel_shutdown_read = static_cast<gboolean> (shutdown_read);
    gboolean _peel_shutdown_write = static_cast<gboolean> (shutdown_write);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_socket_shutdown (_peel_this, _peel_shutdown_read, _peel_shutdown_write, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  speaks_ipv4 () noexcept
  {
    ::GSocket *_peel_this = reinterpret_cast<::GSocket *> (this);
    gboolean _peel_return = g_socket_speaks_ipv4 (_peel_this);
    return !!_peel_return;
  }

  static peel::Property<bool>
  prop_blocking ()
  {
    return peel::Property<bool> { "blocking" };
  }

  static peel::Property<bool>
  prop_broadcast ()
  {
    return peel::Property<bool> { "broadcast" };
  }

  static peel::Property<SocketFamily>
  prop_family ()
  {
    return peel::Property<SocketFamily> { "family" };
  }

  static peel::Property<int>
  prop_fd ()
  {
    return peel::Property<int> { "fd" };
  }

  static peel::Property<bool>
  prop_keepalive ()
  {
    return peel::Property<bool> { "keepalive" };
  }

  static peel::Property<int>
  prop_listen_backlog ()
  {
    return peel::Property<int> { "listen-backlog" };
  }

  static peel::Property<SocketAddress>
  prop_local_address ()
  {
    return peel::Property<SocketAddress> { "local-address" };
  }

  static peel::Property<bool>
  prop_multicast_loopback ()
  {
    return peel::Property<bool> { "multicast-loopback" };
  }

  static peel::Property<unsigned>
  prop_multicast_ttl ()
  {
    return peel::Property<unsigned> { "multicast-ttl" };
  }

  static peel::Property<SocketProtocol>
  prop_protocol ()
  {
    return peel::Property<SocketProtocol> { "protocol" };
  }

  static peel::Property<SocketAddress>
  prop_remote_address ()
  {
    return peel::Property<SocketAddress> { "remote-address" };
  }

  static peel::Property<unsigned>
  prop_timeout ()
  {
    return peel::Property<unsigned> { "timeout" };
  }

  static peel::Property<unsigned>
  prop_ttl ()
  {
    return peel::Property<unsigned> { "ttl" };
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
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Socket> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GSocketClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GSocketClass),
                 "Socket::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GSocketClass),
                 "Socket::Class align mismatch");
}; /* class Socket */

static_assert (sizeof (Socket) == sizeof (::GSocket),
               "Socket size mismatch");
static_assert (alignof (Socket) == alignof (::GSocket),
               "Socket align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
#include <peel/GLib/Source.h>
#include <peel/Gio/Credentials.h>
#include <peel/Gio/SocketAddress.h>
#include <peel/Gio/SocketConnection.h>
#include <peel/Gio/SocketControlMessage.h>
