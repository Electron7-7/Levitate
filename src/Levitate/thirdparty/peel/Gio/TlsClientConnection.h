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
#include <peel/Gio/TlsCertificate.h>
#include <peel/Gio/TlsConnection.h>

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
class IOStream;
class /* interface */ SocketConnectable;
class /* interface */ TlsClientConnection;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::TlsClientConnection> ()
{
  return g_tls_client_connection_get_type ();
}


namespace Gio
{
class /* interface */ TlsClientConnection : public TlsConnection
/* requires TlsConnection */
{
private:
  TlsClientConnection () = delete;
  TlsClientConnection (const TlsClientConnection &) = delete;
  TlsClientConnection (TlsClientConnection &&) = delete;

  TlsClientConnection &
  operator = (const TlsClientConnection &) = delete;
  TlsClientConnection &
  operator = (TlsClientConnection &&) = delete;

protected:
  ~TlsClientConnection () = default;

public:

  peel_nonnull_args (1)
  static peel::RefPtr<TlsClientConnection>
  create (IOStream *base_io_stream, SocketConnectable *server_identity, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOStream *_peel_base_io_stream = reinterpret_cast<::GIOStream *> (base_io_stream);
    ::GSocketConnectable *_peel_server_identity = reinterpret_cast<::GSocketConnectable *> (server_identity);
    ::GError *_peel_error = nullptr;
    ::GIOStream *_peel_return = g_tls_client_connection_new (_peel_base_io_stream, _peel_server_identity, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsClientConnection>::adopt_ref (reinterpret_cast<TlsClientConnection *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  copy_session_state (TlsClientConnection *source) noexcept
  {
    ::GTlsClientConnection *_peel_this = reinterpret_cast<::GTlsClientConnection *> (this);
    ::GTlsClientConnection *_peel_source = reinterpret_cast<::GTlsClientConnection *> (source);
    g_tls_client_connection_copy_session_state (_peel_this, _peel_source);
  }

  GLib::List<peel::RefPtr<GLib::ByteArray>>
  get_accepted_cas () noexcept
  {
    ::GTlsClientConnection *_peel_this = reinterpret_cast<::GTlsClientConnection *> (this);
    GList *_peel_return = g_tls_client_connection_get_accepted_cas (_peel_this);
    return GLib::List<peel::RefPtr<GLib::ByteArray>>::adopt_list (_peel_return);
  }

  SocketConnectable *
  get_server_identity () noexcept
  {
    ::GTlsClientConnection *_peel_this = reinterpret_cast<::GTlsClientConnection *> (this);
    ::GSocketConnectable *_peel_return = g_tls_client_connection_get_server_identity (_peel_this);
    return reinterpret_cast<SocketConnectable *> (_peel_return);
  }

  bool
  get_use_ssl3 () noexcept
  {
    ::GTlsClientConnection *_peel_this = reinterpret_cast<::GTlsClientConnection *> (this);
    gboolean _peel_return = g_tls_client_connection_get_use_ssl3 (_peel_this);
    return !!_peel_return;
  }

  TlsCertificate::Flags
  get_validation_flags () noexcept
  {
    ::GTlsClientConnection *_peel_this = reinterpret_cast<::GTlsClientConnection *> (this);
    ::GTlsCertificateFlags _peel_return = g_tls_client_connection_get_validation_flags (_peel_this);
    return static_cast<TlsCertificate::Flags> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  set_server_identity (SocketConnectable *identity) noexcept
  {
    ::GTlsClientConnection *_peel_this = reinterpret_cast<::GTlsClientConnection *> (this);
    ::GSocketConnectable *_peel_identity = reinterpret_cast<::GSocketConnectable *> (identity);
    g_tls_client_connection_set_server_identity (_peel_this, _peel_identity);
  }

  void
  set_use_ssl3 (bool use_ssl3) noexcept
  {
    ::GTlsClientConnection *_peel_this = reinterpret_cast<::GTlsClientConnection *> (this);
    gboolean _peel_use_ssl3 = static_cast<gboolean> (use_ssl3);
    g_tls_client_connection_set_use_ssl3 (_peel_this, _peel_use_ssl3);
  }

  void
  set_validation_flags (TlsCertificate::Flags flags) noexcept
  {
    ::GTlsClientConnection *_peel_this = reinterpret_cast<::GTlsClientConnection *> (this);
    ::GTlsCertificateFlags _peel_flags = static_cast<::GTlsCertificateFlags> (flags);
    g_tls_client_connection_set_validation_flags (_peel_this, _peel_flags);
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

  static peel::Property<bool>
  prop_use_ssl3 ()
  {
    return peel::Property<bool> { "use-ssl3" };
  }

  static peel::Property<TlsCertificate::Flags>
  prop_validation_flags ()
  {
    return peel::Property<TlsCertificate::Flags> { "validation-flags" };
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_copy_session_state (TlsClientConnection *source) noexcept
  {
    ::GTlsClientConnectionInterface *_peel_iface = reinterpret_cast<::GTlsClientConnectionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TlsClientConnection> ())->peek_parent ());
    ::GTlsClientConnection *_peel_this = reinterpret_cast<::GTlsClientConnection *> (this);
    ::GTlsClientConnection *_peel_source = reinterpret_cast<::GTlsClientConnection *> (source);
    _peel_iface->copy_session_state (_peel_this, _peel_source);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_copy_session_state (TlsClientConnection *source) noexcept
  {
    ::GTlsClientConnectionInterface *_peel_iface = reinterpret_cast<::GTlsClientConnectionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TlsClientConnection> ()));
    ::GTlsClientConnection *_peel_this = reinterpret_cast<::GTlsClientConnection *> (this);
    ::GTlsClientConnection *_peel_source = reinterpret_cast<::GTlsClientConnection *> (source);
    _peel_iface->copy_session_state (_peel_this, _peel_source);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GTlsClientConnectionInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_copy_session_state ()
    {
      ::GTlsClientConnectionInterface *klass = reinterpret_cast<::GTlsClientConnectionInterface *> (this);
      klass->copy_session_state = +[] (::GTlsClientConnection *conn, ::GTlsClientConnection *source) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (conn);
        TlsClientConnection *_peel_source = reinterpret_cast<TlsClientConnection *> (source);
        _peel_this->DerivedClass::vfunc_copy_session_state (_peel_source);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GTlsClientConnectionInterface),
                 "TlsClientConnection::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GTlsClientConnectionInterface),
                 "TlsClientConnection::Iface align mismatch");
}; /* interface TlsClientConnection */
static_assert (sizeof (TlsClientConnection) == sizeof (TlsConnection),
               "TlsClientConnection size mismatch");
static_assert (alignof (TlsClientConnection) == alignof (TlsConnection),
               "TlsClientConnection align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/ByteArray.h>
#include <peel/GLib/Error.h>
