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
#include <peel/Gio/TcpConnection.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class IOStream;
class Socket;
class TcpWrapperConnection;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::TcpWrapperConnection> ()
{
  return g_tcp_wrapper_connection_get_type ();
}


namespace Gio
{
class TcpWrapperConnection : public TcpConnection
{
private:
  unsigned char _placeholder[sizeof (::GTcpWrapperConnection) - sizeof (TcpConnection)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TcpWrapperConnection () = delete;
  TcpWrapperConnection (const TcpWrapperConnection &) = delete;
  TcpWrapperConnection (TcpWrapperConnection &&) = delete;
  TcpWrapperConnection &
  operator = (const TcpWrapperConnection &) = delete;
  TcpWrapperConnection &
  operator = (TcpWrapperConnection &&) = delete;
protected:
  ~TcpWrapperConnection () = default;
public:

  peel_nonnull_args (1, 2)
  static peel::RefPtr<TcpWrapperConnection>
  create (IOStream *base_io_stream, Socket *socket) noexcept
  {
    ::GIOStream *_peel_base_io_stream = reinterpret_cast<::GIOStream *> (base_io_stream);
    ::GSocket *_peel_socket = reinterpret_cast<::GSocket *> (socket);
    ::GSocketConnection *_peel_return = g_tcp_wrapper_connection_new (_peel_base_io_stream, _peel_socket);
    peel_assume (_peel_return);
    return peel::RefPtr<TcpWrapperConnection>::adopt_ref (reinterpret_cast<TcpWrapperConnection *> (_peel_return));
  }

  peel_returns_nonnull
  IOStream *
  get_base_io_stream () noexcept
  {
    ::GTcpWrapperConnection *_peel_this = reinterpret_cast<::GTcpWrapperConnection *> (this);
    ::GIOStream *_peel_return = g_tcp_wrapper_connection_get_base_io_stream (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<IOStream *> (_peel_return);
  }

  static peel::Property<IOStream>
  prop_base_io_stream ()
  {
    return peel::Property<IOStream> { "base-io-stream" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TcpWrapperConnection> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public TcpConnection::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GTcpWrapperConnectionClass),
                 "TcpWrapperConnection::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GTcpWrapperConnectionClass),
                 "TcpWrapperConnection::Class align mismatch");
}; /* class TcpWrapperConnection */

static_assert (sizeof (TcpWrapperConnection) == sizeof (::GTcpWrapperConnection),
               "TcpWrapperConnection size mismatch");
static_assert (alignof (TcpWrapperConnection) == alignof (::GTcpWrapperConnection),
               "TcpWrapperConnection align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
