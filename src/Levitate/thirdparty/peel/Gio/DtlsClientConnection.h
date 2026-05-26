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
#include <peel/GLib/List.h>
#include <peel/GObject/TypeInterface.h>
#include <peel/Gio/DtlsConnection.h>
#include <peel/Gio/TlsCertificate.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct ByteArray;
struct Error;
} /* namespace GLib */

namespace Gio
{
class /* interface */ DatagramBased;
class /* interface */ DtlsClientConnection;
class /* interface */ SocketConnectable;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DtlsClientConnection> ()
{
  return g_dtls_client_connection_get_type ();
}


namespace Gio
{
class /* interface */ DtlsClientConnection : public DtlsConnection
/* requires DatagramBased, DtlsConnection */
{
private:
  DtlsClientConnection () = delete;
  DtlsClientConnection (const DtlsClientConnection &) = delete;
  DtlsClientConnection (DtlsClientConnection &&) = delete;

  DtlsClientConnection &
  operator = (const DtlsClientConnection &) = delete;
  DtlsClientConnection &
  operator = (DtlsClientConnection &&) = delete;

protected:
  ~DtlsClientConnection () = default;

public:

  peel_nonnull_args (1)
  static peel::RefPtr<DtlsClientConnection>
  create (DatagramBased *base_socket, SocketConnectable *server_identity, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDatagramBased *_peel_base_socket = reinterpret_cast<::GDatagramBased *> (base_socket);
    ::GSocketConnectable *_peel_server_identity = reinterpret_cast<::GSocketConnectable *> (server_identity);
    ::GError *_peel_error = nullptr;
    ::GDatagramBased *_peel_return = g_dtls_client_connection_new (_peel_base_socket, _peel_server_identity, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DtlsClientConnection>::adopt_ref (reinterpret_cast<DtlsClientConnection *> (_peel_return));
  }

  GLib::List<peel::RefPtr<GLib::ByteArray>>
  get_accepted_cas () noexcept
  {
    ::GDtlsClientConnection *_peel_this = reinterpret_cast<::GDtlsClientConnection *> (this);
    GList *_peel_return = g_dtls_client_connection_get_accepted_cas (_peel_this);
    return GLib::List<peel::RefPtr<GLib::ByteArray>>::adopt_list (_peel_return);
  }

  peel_returns_nonnull
  SocketConnectable *
  get_server_identity () noexcept
  {
    ::GDtlsClientConnection *_peel_this = reinterpret_cast<::GDtlsClientConnection *> (this);
    ::GSocketConnectable *_peel_return = g_dtls_client_connection_get_server_identity (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<SocketConnectable *> (_peel_return);
  }

  TlsCertificate::Flags
  get_validation_flags () noexcept
  {
    ::GDtlsClientConnection *_peel_this = reinterpret_cast<::GDtlsClientConnection *> (this);
    ::GTlsCertificateFlags _peel_return = g_dtls_client_connection_get_validation_flags (_peel_this);
    return static_cast<TlsCertificate::Flags> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  set_server_identity (SocketConnectable *identity) noexcept
  {
    ::GDtlsClientConnection *_peel_this = reinterpret_cast<::GDtlsClientConnection *> (this);
    ::GSocketConnectable *_peel_identity = reinterpret_cast<::GSocketConnectable *> (identity);
    g_dtls_client_connection_set_server_identity (_peel_this, _peel_identity);
  }

  void
  set_validation_flags (TlsCertificate::Flags flags) noexcept
  {
    ::GDtlsClientConnection *_peel_this = reinterpret_cast<::GDtlsClientConnection *> (this);
    ::GTlsCertificateFlags _peel_flags = static_cast<::GTlsCertificateFlags> (flags);
    g_dtls_client_connection_set_validation_flags (_peel_this, _peel_flags);
  }

  static peel::Property<void *>
  prop_accepted_cas ()
  {
    return peel::Property<void *> { "accepted-cas" };
  }

  static peel::Property<SocketConnectable>
  prop_server_identity ()
  {
    return peel::Property<SocketConnectable> { "server-identity" };
  }

  static peel::Property<TlsCertificate::Flags>
  prop_validation_flags ()
  {
    return peel::Property<TlsCertificate::Flags> { "validation-flags" };
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
  };

  static_assert (sizeof (Iface) == sizeof (::GDtlsClientConnectionInterface),
                 "DtlsClientConnection::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GDtlsClientConnectionInterface),
                 "DtlsClientConnection::Iface align mismatch");
}; /* interface DtlsClientConnection */
static_assert (sizeof (DtlsClientConnection) == sizeof (DtlsConnection),
               "DtlsClientConnection size mismatch");
static_assert (alignof (DtlsClientConnection) == alignof (DtlsConnection),
               "DtlsClientConnection align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/ByteArray.h>
#include <peel/GLib/Error.h>
