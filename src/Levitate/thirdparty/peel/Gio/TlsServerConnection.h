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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gio/TlsConnection.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class IOStream;
enum class TlsAuthenticationMode : std::underlying_type<::GTlsAuthenticationMode>::type;
class TlsCertificate;
class /* interface */ TlsServerConnection;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::TlsServerConnection> ()
{
  return g_tls_server_connection_get_type ();
}


namespace Gio
{
class /* interface */ TlsServerConnection : public TlsConnection
/* requires TlsConnection */
{
private:
  TlsServerConnection () = delete;
  TlsServerConnection (const TlsServerConnection &) = delete;
  TlsServerConnection (TlsServerConnection &&) = delete;

  TlsServerConnection &
  operator = (const TlsServerConnection &) = delete;
  TlsServerConnection &
  operator = (TlsServerConnection &&) = delete;

protected:
  ~TlsServerConnection () = default;

public:

  peel_nonnull_args (1)
  static peel::RefPtr<TlsServerConnection>
  create (IOStream *base_io_stream, TlsCertificate *certificate, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOStream *_peel_base_io_stream = reinterpret_cast<::GIOStream *> (base_io_stream);
    ::GTlsCertificate *_peel_certificate = reinterpret_cast<::GTlsCertificate *> (certificate);
    ::GError *_peel_error = nullptr;
    ::GIOStream *_peel_return = g_tls_server_connection_new (_peel_base_io_stream, _peel_certificate, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsServerConnection>::adopt_ref (reinterpret_cast<TlsServerConnection *> (_peel_return));
  }

  static peel::Property<TlsAuthenticationMode>
  prop_authentication_mode ()
  {
    return peel::Property<TlsAuthenticationMode> { "authentication-mode" };
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
  };

  static_assert (sizeof (Iface) == sizeof (::GTlsServerConnectionInterface),
                 "TlsServerConnection::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GTlsServerConnectionInterface),
                 "TlsServerConnection::Iface align mismatch");
}; /* interface TlsServerConnection */
static_assert (sizeof (TlsServerConnection) == sizeof (TlsConnection),
               "TlsServerConnection size mismatch");
static_assert (alignof (TlsServerConnection) == alignof (TlsConnection),
               "TlsServerConnection align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
