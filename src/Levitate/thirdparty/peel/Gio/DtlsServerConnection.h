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
#include <peel/Gio/DtlsConnection.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class /* interface */ DatagramBased;
class /* interface */ DtlsServerConnection;
enum class TlsAuthenticationMode : std::underlying_type<::GTlsAuthenticationMode>::type;
class TlsCertificate;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DtlsServerConnection> ()
{
  return g_dtls_server_connection_get_type ();
}


namespace Gio
{
class /* interface */ DtlsServerConnection : public DtlsConnection
/* requires DatagramBased, DtlsConnection */
{
private:
  DtlsServerConnection () = delete;
  DtlsServerConnection (const DtlsServerConnection &) = delete;
  DtlsServerConnection (DtlsServerConnection &&) = delete;

  DtlsServerConnection &
  operator = (const DtlsServerConnection &) = delete;
  DtlsServerConnection &
  operator = (DtlsServerConnection &&) = delete;

protected:
  ~DtlsServerConnection () = default;

public:

  peel_nonnull_args (1)
  static peel::RefPtr<DtlsServerConnection>
  create (DatagramBased *base_socket, TlsCertificate *certificate, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDatagramBased *_peel_base_socket = reinterpret_cast<::GDatagramBased *> (base_socket);
    ::GTlsCertificate *_peel_certificate = reinterpret_cast<::GTlsCertificate *> (certificate);
    ::GError *_peel_error = nullptr;
    ::GDatagramBased *_peel_return = g_dtls_server_connection_new (_peel_base_socket, _peel_certificate, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DtlsServerConnection>::adopt_ref (reinterpret_cast<DtlsServerConnection *> (_peel_return));
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

  static_assert (sizeof (Iface) == sizeof (::GDtlsServerConnectionInterface),
                 "DtlsServerConnection::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GDtlsServerConnectionInterface),
                 "DtlsServerConnection::Iface align mismatch");
}; /* interface DtlsServerConnection */
static_assert (sizeof (DtlsServerConnection) == sizeof (DtlsConnection),
               "DtlsServerConnection size mismatch");
static_assert (alignof (DtlsServerConnection) == alignof (DtlsConnection),
               "DtlsServerConnection align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
