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
#include <peel/Gio/TlsCertificate.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct ByteArray;
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
class TlsCertificate;
enum class TlsChannelBindingType : std::underlying_type<::GTlsChannelBindingType>::type;
class TlsConnection;
class TlsDatabase;
class TlsInteraction;
enum class TlsProtocolVersion : std::underlying_type<::GTlsProtocolVersion>::type;
enum class TlsRehandshakeMode : std::underlying_type<::GTlsRehandshakeMode>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::TlsConnection> ()
{
  return g_tls_connection_get_type ();
}


namespace Gio
{
class TlsConnection : public IOStream
{
private:
  unsigned char _placeholder[sizeof (::GTlsConnection) - sizeof (IOStream)] peel_no_warn_unused;
  using IOStream::splice_finish;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TlsConnection () = delete;
  TlsConnection (const TlsConnection &) = delete;
  TlsConnection (TlsConnection &&) = delete;
  TlsConnection &
  operator = (const TlsConnection &) = delete;
  TlsConnection &
  operator = (TlsConnection &&) = delete;
protected:
  ~TlsConnection () = default;
public:

  peel_nonnull_args (2)
  bool
  emit_accept_certificate (TlsCertificate *peer_cert, TlsCertificate::Flags errors) noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsCertificate *_peel_peer_cert = reinterpret_cast<::GTlsCertificate *> (peer_cert);
    ::GTlsCertificateFlags _peel_errors = static_cast<::GTlsCertificateFlags> (errors);
    gboolean _peel_return = g_tls_connection_emit_accept_certificate (_peel_this, _peel_peer_cert, _peel_errors);
    return !!_peel_return;
  }

  TlsCertificate *
  get_certificate () noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsCertificate *_peel_return = g_tls_connection_get_certificate (_peel_this);
    return reinterpret_cast<TlsCertificate *> (_peel_return);
  }

  peel_arg_out (3)
  bool
  get_channel_binding_data (TlsChannelBindingType type, GLib::ByteArray *data, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsChannelBindingType _peel_type = static_cast<::GTlsChannelBindingType> (type);
    ::GByteArray *_peel_data = reinterpret_cast<::GByteArray *> (data);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_tls_connection_get_channel_binding_data (_peel_this, _peel_type, _peel_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::String
  get_ciphersuite_name () noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    gchar *_peel_return = g_tls_connection_get_ciphersuite_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  TlsDatabase *
  get_database () noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsDatabase *_peel_return = g_tls_connection_get_database (_peel_this);
    return reinterpret_cast<TlsDatabase *> (_peel_return);
  }

  TlsInteraction *
  get_interaction () noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsInteraction *_peel_return = g_tls_connection_get_interaction (_peel_this);
    return reinterpret_cast<TlsInteraction *> (_peel_return);
  }

  const char *
  get_negotiated_protocol () noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    return g_tls_connection_get_negotiated_protocol (_peel_this);
  }

  TlsCertificate *
  get_peer_certificate () noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsCertificate *_peel_return = g_tls_connection_get_peer_certificate (_peel_this);
    return reinterpret_cast<TlsCertificate *> (_peel_return);
  }

  TlsCertificate::Flags
  get_peer_certificate_errors () noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsCertificateFlags _peel_return = g_tls_connection_get_peer_certificate_errors (_peel_this);
    return static_cast<TlsCertificate::Flags> (_peel_return);
  }

  TlsProtocolVersion
  get_protocol_version () noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsProtocolVersion _peel_return = g_tls_connection_get_protocol_version (_peel_this);
    return static_cast<TlsProtocolVersion> (_peel_return);
  }

  TlsRehandshakeMode
  get_rehandshake_mode () noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsRehandshakeMode _peel_return = g_tls_connection_get_rehandshake_mode (_peel_this);
    return static_cast<TlsRehandshakeMode> (_peel_return);
  }

  bool
  get_require_close_notify () noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    gboolean _peel_return = g_tls_connection_get_require_close_notify (_peel_this);
    return !!_peel_return;
  }

  bool
  get_use_system_certdb () noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    gboolean _peel_return = g_tls_connection_get_use_system_certdb (_peel_this);
    return !!_peel_return;
  }

  bool
  handshake (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_tls_connection_handshake (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  handshake_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
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
    g_tls_connection_handshake_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  handshake_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_tls_connection_handshake_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  set_advertised_protocols (peel::StrvRef protocols) noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    const gchar* const *_peel_protocols = reinterpret_cast<const gchar* const *> (protocols.data ());
    g_tls_connection_set_advertised_protocols (_peel_this, _peel_protocols);
  }

  peel_nonnull_args (2)
  void
  set_certificate (TlsCertificate *certificate) noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsCertificate *_peel_certificate = reinterpret_cast<::GTlsCertificate *> (certificate);
    g_tls_connection_set_certificate (_peel_this, _peel_certificate);
  }

  void
  set_database (TlsDatabase *database) noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsDatabase *_peel_database = reinterpret_cast<::GTlsDatabase *> (database);
    g_tls_connection_set_database (_peel_this, _peel_database);
  }

  void
  set_interaction (TlsInteraction *interaction) noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    g_tls_connection_set_interaction (_peel_this, _peel_interaction);
  }

  void
  set_rehandshake_mode (TlsRehandshakeMode mode) noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsRehandshakeMode _peel_mode = static_cast<::GTlsRehandshakeMode> (mode);
    g_tls_connection_set_rehandshake_mode (_peel_this, _peel_mode);
  }

  void
  set_require_close_notify (bool require_close_notify) noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    gboolean _peel_require_close_notify = static_cast<gboolean> (require_close_notify);
    g_tls_connection_set_require_close_notify (_peel_this, _peel_require_close_notify);
  }

  void
  set_use_system_certdb (bool use_system_certdb) noexcept
  {
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    gboolean _peel_use_system_certdb = static_cast<gboolean> (use_system_certdb);
    g_tls_connection_set_use_system_certdb (_peel_this, _peel_use_system_certdb);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_accept_certificate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TlsConnection, bool (TlsCertificate *, TlsCertificate::Flags)>::_peel_connect_by_name (this, "accept-certificate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_accept_certificate (HandlerObject *object, bool (HandlerObject::*handler_method) (TlsConnection *, TlsCertificate *, TlsCertificate::Flags), bool after = false) noexcept
  {
    return Signal<TlsConnection, bool (TlsCertificate *, TlsCertificate::Flags)>::_peel_connect_by_name (this, "accept-certificate", object, handler_method, after);
  }

  static peel::Property<peel::Strv>
  prop_advertised_protocols ()
  {
    return peel::Property<peel::Strv> { "advertised-protocols" };
  }

  static peel::Property<IOStream>
  prop_base_io_stream ()
  {
    return peel::Property<IOStream> { "base-io-stream" };
  }

  static peel::Property<TlsCertificate>
  prop_certificate ()
  {
    return peel::Property<TlsCertificate> { "certificate" };
  }

  static peel::Property<const char *>
  prop_ciphersuite_name ()
  {
    return peel::Property<const char *> { "ciphersuite-name" };
  }

  static peel::Property<TlsDatabase>
  prop_database ()
  {
    return peel::Property<TlsDatabase> { "database" };
  }

  static peel::Property<TlsInteraction>
  prop_interaction ()
  {
    return peel::Property<TlsInteraction> { "interaction" };
  }

  static peel::Property<const char *>
  prop_negotiated_protocol ()
  {
    return peel::Property<const char *> { "negotiated-protocol" };
  }

  static peel::Property<TlsCertificate>
  prop_peer_certificate ()
  {
    return peel::Property<TlsCertificate> { "peer-certificate" };
  }

  static peel::Property<TlsCertificate::Flags>
  prop_peer_certificate_errors ()
  {
    return peel::Property<TlsCertificate::Flags> { "peer-certificate-errors" };
  }

  static peel::Property<TlsProtocolVersion>
  prop_protocol_version ()
  {
    return peel::Property<TlsProtocolVersion> { "protocol-version" };
  }

  static peel::Property<TlsRehandshakeMode>
  prop_rehandshake_mode ()
  {
    return peel::Property<TlsRehandshakeMode> { "rehandshake-mode" };
  }

  static peel::Property<bool>
  prop_require_close_notify ()
  {
    return peel::Property<bool> { "require-close-notify" };
  }

  static peel::Property<bool>
  prop_use_system_certdb ()
  {
    return peel::Property<bool> { "use-system-certdb" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TlsConnection> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_accept_certificate (TlsCertificate *peer_cert, TlsCertificate::Flags errors) noexcept
  {
    ::GTlsConnectionClass *_peel_class = reinterpret_cast<::GTlsConnectionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsCertificate *_peel_peer_cert = reinterpret_cast<::GTlsCertificate *> (peer_cert);
    ::GTlsCertificateFlags _peel_errors = static_cast<::GTlsCertificateFlags> (errors);
    gboolean _peel_return = _peel_class->accept_certificate (_peel_this, _peel_peer_cert, _peel_errors);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (3)
  bool
  parent_vfunc_get_binding_data (TlsChannelBindingType type, GLib::ByteArray *data, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsConnectionClass *_peel_class = reinterpret_cast<::GTlsConnectionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GTlsChannelBindingType _peel_type = static_cast<::GTlsChannelBindingType> (type);
    ::GByteArray *_peel_data = reinterpret_cast<::GByteArray *> (data);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->get_binding_data (_peel_this, _peel_type, _peel_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  const char *
  parent_vfunc_get_negotiated_protocol () noexcept
  {
    ::GTlsConnectionClass *_peel_class = reinterpret_cast<::GTlsConnectionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    return _peel_class->get_negotiated_protocol (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_handshake (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsConnectionClass *_peel_class = reinterpret_cast<::GTlsConnectionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->handshake (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_handshake_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GTlsConnectionClass *_peel_class = reinterpret_cast<::GTlsConnectionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
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
    _peel_class->handshake_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_handshake_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsConnectionClass *_peel_class = reinterpret_cast<::GTlsConnectionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsConnection *_peel_this = reinterpret_cast<::GTlsConnection *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->handshake_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

public:
  class Class : public IOStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GTlsConnectionClass) - sizeof (IOStream::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_accept_certificate ()
    {
      ::GTlsConnectionClass *klass = reinterpret_cast<::GTlsConnectionClass *> (this);
      klass->accept_certificate = +[] (::GTlsConnection *connection, ::GTlsCertificate *peer_cert, ::GTlsCertificateFlags errors) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (connection);
        TlsCertificate *_peel_peer_cert = reinterpret_cast<TlsCertificate *> (peer_cert);
        TlsCertificate::Flags _peel_errors = static_cast<TlsCertificate::Flags> (errors);
        bool _peel_return = _peel_this->DerivedClass::vfunc_accept_certificate (_peel_peer_cert, _peel_errors);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_binding_data ()
    {
      ::GTlsConnectionClass *klass = reinterpret_cast<::GTlsConnectionClass *> (this);
      klass->get_binding_data = +[] (::GTlsConnection *conn, ::GTlsChannelBindingType type, ::GByteArray *data, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (conn);
        TlsChannelBindingType _peel_type = static_cast<TlsChannelBindingType> (type);
        GLib::ByteArray *_peel_data = reinterpret_cast<GLib::ByteArray *> (data);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_binding_data (_peel_type, _peel_data, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_negotiated_protocol ()
    {
      ::GTlsConnectionClass *klass = reinterpret_cast<::GTlsConnectionClass *> (this);
      klass->get_negotiated_protocol = +[] (::GTlsConnection *conn) -> const gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (conn);
        return _peel_this->DerivedClass::vfunc_get_negotiated_protocol ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_handshake ()
    {
      ::GTlsConnectionClass *klass = reinterpret_cast<::GTlsConnectionClass *> (this);
      klass->handshake = +[] (::GTlsConnection *conn, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (conn);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_handshake (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: handshake_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_handshake_finish ()
    {
      ::GTlsConnectionClass *klass = reinterpret_cast<::GTlsConnectionClass *> (this);
      klass->handshake_finish = +[] (::GTlsConnection *conn, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (conn);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_handshake_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GTlsConnectionClass),
                 "TlsConnection::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GTlsConnectionClass),
                 "TlsConnection::Class align mismatch");
}; /* class TlsConnection */

static_assert (sizeof (TlsConnection) == sizeof (::GTlsConnection),
               "TlsConnection size mismatch");
static_assert (alignof (TlsConnection) == alignof (::GTlsConnection),
               "TlsConnection align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
