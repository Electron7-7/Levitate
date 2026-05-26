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
#include <peel/Gio/SocketConnection.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class TcpConnection;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::TcpConnection> ()
{
  return g_tcp_connection_get_type ();
}


namespace Gio
{
class TcpConnection : public SocketConnection
{
private:
  unsigned char _placeholder[sizeof (::GTcpConnection) - sizeof (SocketConnection)] peel_no_warn_unused;
  using SocketConnection::factory_lookup_type;
  using SocketConnection::factory_register_type;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TcpConnection () = delete;
  TcpConnection (const TcpConnection &) = delete;
  TcpConnection (TcpConnection &&) = delete;
  TcpConnection &
  operator = (const TcpConnection &) = delete;
  TcpConnection &
  operator = (TcpConnection &&) = delete;
protected:
  ~TcpConnection () = default;
public:

  bool
  get_graceful_disconnect () noexcept
  {
    ::GTcpConnection *_peel_this = reinterpret_cast<::GTcpConnection *> (this);
    gboolean _peel_return = g_tcp_connection_get_graceful_disconnect (_peel_this);
    return !!_peel_return;
  }

  void
  set_graceful_disconnect (bool graceful_disconnect) noexcept
  {
    ::GTcpConnection *_peel_this = reinterpret_cast<::GTcpConnection *> (this);
    gboolean _peel_graceful_disconnect = static_cast<gboolean> (graceful_disconnect);
    g_tcp_connection_set_graceful_disconnect (_peel_this, _peel_graceful_disconnect);
  }

  static peel::Property<bool>
  prop_graceful_disconnect ()
  {
    return peel::Property<bool> { "graceful-disconnect" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TcpConnection> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public SocketConnection::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GTcpConnectionClass),
                 "TcpConnection::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GTcpConnectionClass),
                 "TcpConnection::Class align mismatch");
}; /* class TcpConnection */

static_assert (sizeof (TcpConnection) == sizeof (::GTcpConnection),
               "TcpConnection size mismatch");
static_assert (alignof (TcpConnection) == alignof (::GTcpConnection),
               "TcpConnection align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
