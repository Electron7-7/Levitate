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
#include <peel/Gio/DatagramBased.h>
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
class /* interface */ DatagramBased;
class /* interface */ DtlsConnection;
class TlsCertificate;
enum class TlsChannelBindingType : std::underlying_type<::GTlsChannelBindingType>::type;
class TlsDatabase;
class TlsInteraction;
enum class TlsProtocolVersion : std::underlying_type<::GTlsProtocolVersion>::type;
enum class TlsRehandshakeMode : std::underlying_type<::GTlsRehandshakeMode>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DtlsConnection> ()
{
  return g_dtls_connection_get_type ();
}


namespace Gio
{
class /* interface */ DtlsConnection : public DatagramBased
/* requires DatagramBased */
{
private:
  DtlsConnection () = delete;
  DtlsConnection (const DtlsConnection &) = delete;
  DtlsConnection (DtlsConnection &&) = delete;

  DtlsConnection &
  operator = (const DtlsConnection &) = delete;
  DtlsConnection &
  operator = (DtlsConnection &&) = delete;

protected:
  ~DtlsConnection () = default;

public:

  bool
  close (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dtls_connection_close (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  close_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
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
    g_dtls_connection_close_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  close_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dtls_connection_close_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  emit_accept_certificate (TlsCertificate *peer_cert, TlsCertificate::Flags errors) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsCertificate *_peel_peer_cert = reinterpret_cast<::GTlsCertificate *> (peer_cert);
    ::GTlsCertificateFlags _peel_errors = static_cast<::GTlsCertificateFlags> (errors);
    gboolean _peel_return = g_dtls_connection_emit_accept_certificate (_peel_this, _peel_peer_cert, _peel_errors);
    return !!_peel_return;
  }

  TlsCertificate *
  get_certificate () noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsCertificate *_peel_return = g_dtls_connection_get_certificate (_peel_this);
    return reinterpret_cast<TlsCertificate *> (_peel_return);
  }

  peel_arg_out (3)
  bool
  get_channel_binding_data (TlsChannelBindingType type, GLib::ByteArray *data, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsChannelBindingType _peel_type = static_cast<::GTlsChannelBindingType> (type);
    ::GByteArray *_peel_data = reinterpret_cast<::GByteArray *> (data);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dtls_connection_get_channel_binding_data (_peel_this, _peel_type, _peel_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::String
  get_ciphersuite_name () noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    gchar *_peel_return = g_dtls_connection_get_ciphersuite_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  TlsDatabase *
  get_database () noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsDatabase *_peel_return = g_dtls_connection_get_database (_peel_this);
    return reinterpret_cast<TlsDatabase *> (_peel_return);
  }

  TlsInteraction *
  get_interaction () noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsInteraction *_peel_return = g_dtls_connection_get_interaction (_peel_this);
    return reinterpret_cast<TlsInteraction *> (_peel_return);
  }

  const char *
  get_negotiated_protocol () noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    return g_dtls_connection_get_negotiated_protocol (_peel_this);
  }

  TlsCertificate *
  get_peer_certificate () noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsCertificate *_peel_return = g_dtls_connection_get_peer_certificate (_peel_this);
    return reinterpret_cast<TlsCertificate *> (_peel_return);
  }

  TlsCertificate::Flags
  get_peer_certificate_errors () noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsCertificateFlags _peel_return = g_dtls_connection_get_peer_certificate_errors (_peel_this);
    return static_cast<TlsCertificate::Flags> (_peel_return);
  }

  TlsProtocolVersion
  get_protocol_version () noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsProtocolVersion _peel_return = g_dtls_connection_get_protocol_version (_peel_this);
    return static_cast<TlsProtocolVersion> (_peel_return);
  }

  TlsRehandshakeMode
  get_rehandshake_mode () noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsRehandshakeMode _peel_return = g_dtls_connection_get_rehandshake_mode (_peel_this);
    return static_cast<TlsRehandshakeMode> (_peel_return);
  }

  bool
  get_require_close_notify () noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    gboolean _peel_return = g_dtls_connection_get_require_close_notify (_peel_this);
    return !!_peel_return;
  }

  bool
  handshake (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dtls_connection_handshake (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  handshake_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
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
    g_dtls_connection_handshake_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  handshake_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dtls_connection_handshake_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  set_advertised_protocols (peel::StrvRef protocols) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    const gchar* const *_peel_protocols = reinterpret_cast<const gchar* const *> (protocols.data ());
    g_dtls_connection_set_advertised_protocols (_peel_this, _peel_protocols);
  }

  peel_nonnull_args (2)
  void
  set_certificate (TlsCertificate *certificate) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsCertificate *_peel_certificate = reinterpret_cast<::GTlsCertificate *> (certificate);
    g_dtls_connection_set_certificate (_peel_this, _peel_certificate);
  }

  void
  set_database (TlsDatabase *database) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsDatabase *_peel_database = reinterpret_cast<::GTlsDatabase *> (database);
    g_dtls_connection_set_database (_peel_this, _peel_database);
  }

  void
  set_interaction (TlsInteraction *interaction) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    g_dtls_connection_set_interaction (_peel_this, _peel_interaction);
  }

  void
  set_rehandshake_mode (TlsRehandshakeMode mode) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsRehandshakeMode _peel_mode = static_cast<::GTlsRehandshakeMode> (mode);
    g_dtls_connection_set_rehandshake_mode (_peel_this, _peel_mode);
  }

  void
  set_require_close_notify (bool require_close_notify) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    gboolean _peel_require_close_notify = static_cast<gboolean> (require_close_notify);
    g_dtls_connection_set_require_close_notify (_peel_this, _peel_require_close_notify);
  }

  bool
  shutdown (bool shutdown_read, bool shutdown_write, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    gboolean _peel_shutdown_read = static_cast<gboolean> (shutdown_read);
    gboolean _peel_shutdown_write = static_cast<gboolean> (shutdown_write);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dtls_connection_shutdown (_peel_this, _peel_shutdown_read, _peel_shutdown_write, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  shutdown_async (bool shutdown_read, bool shutdown_write, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    gboolean _peel_shutdown_read = static_cast<gboolean> (shutdown_read);
    gboolean _peel_shutdown_write = static_cast<gboolean> (shutdown_write);
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
    g_dtls_connection_shutdown_async (_peel_this, _peel_shutdown_read, _peel_shutdown_write, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  shutdown_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dtls_connection_shutdown_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_accept_certificate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DtlsConnection, bool (TlsCertificate *, TlsCertificate::Flags)>::_peel_connect_by_name (this, "accept-certificate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_accept_certificate (HandlerObject *object, bool (HandlerObject::*handler_method) (DtlsConnection *, TlsCertificate *, TlsCertificate::Flags), bool after = false) noexcept
  {
    return Signal<DtlsConnection, bool (TlsCertificate *, TlsCertificate::Flags)>::_peel_connect_by_name (this, "accept-certificate", object, handler_method, after);
  }

  static peel::Property<peel::Strv>
  prop_advertised_protocols ()
  {
    return peel::Property<peel::Strv> { "advertised-protocols" };
  }

  static peel::Property<DatagramBased>
  prop_base_socket ()
  {
    return peel::Property<DatagramBased> { "base-socket" };
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

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_accept_certificate (TlsCertificate *peer_cert, TlsCertificate::Flags errors) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DtlsConnection> ())->peek_parent ());
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsCertificate *_peel_peer_cert = reinterpret_cast<::GTlsCertificate *> (peer_cert);
    ::GTlsCertificateFlags _peel_errors = static_cast<::GTlsCertificateFlags> (errors);
    gboolean _peel_return = _peel_iface->accept_certificate (_peel_this, _peel_peer_cert, _peel_errors);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_accept_certificate (TlsCertificate *peer_cert, TlsCertificate::Flags errors) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DtlsConnection> ()));
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsCertificate *_peel_peer_cert = reinterpret_cast<::GTlsCertificate *> (peer_cert);
    ::GTlsCertificateFlags _peel_errors = static_cast<::GTlsCertificateFlags> (errors);
    gboolean _peel_return = _peel_iface->accept_certificate (_peel_this, _peel_peer_cert, _peel_errors);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (3)
  bool
  parent_vfunc_get_binding_data (TlsChannelBindingType type, GLib::ByteArray *data, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DtlsConnection> ())->peek_parent ());
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsChannelBindingType _peel_type = static_cast<::GTlsChannelBindingType> (type);
    ::GByteArray *_peel_data = reinterpret_cast<::GByteArray *> (data);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->get_binding_data (_peel_this, _peel_type, _peel_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_in (3) peel_nonnull_args (3)
  bool
  default_vfunc_get_binding_data (TlsChannelBindingType type, GLib::ByteArray *data, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DtlsConnection> ()));
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GTlsChannelBindingType _peel_type = static_cast<::GTlsChannelBindingType> (type);
    ::GByteArray *_peel_data = reinterpret_cast<::GByteArray *> (data);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->get_binding_data (_peel_this, _peel_type, _peel_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  const char *
  parent_vfunc_get_negotiated_protocol () noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DtlsConnection> ())->peek_parent ());
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    return _peel_iface->get_negotiated_protocol (_peel_this);
  }

  const char *
  default_vfunc_get_negotiated_protocol () noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DtlsConnection> ()));
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    return _peel_iface->get_negotiated_protocol (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_handshake (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DtlsConnection> ())->peek_parent ());
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->handshake (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  default_vfunc_handshake (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DtlsConnection> ()));
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->handshake (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_handshake_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DtlsConnection> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
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
    _peel_iface->handshake_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_handshake_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DtlsConnection> ()));
    gpointer _peel_user_data;
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
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
    _peel_iface->handshake_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_handshake_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DtlsConnection> ())->peek_parent ());
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->handshake_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_handshake_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DtlsConnection> ()));
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->handshake_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_set_advertised_protocols (peel::StrvRef protocols) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DtlsConnection> ())->peek_parent ());
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    const gchar* const *_peel_protocols = reinterpret_cast<const gchar* const *> (protocols.data ());
    _peel_iface->set_advertised_protocols (_peel_this, _peel_protocols);
  }

  void
  default_vfunc_set_advertised_protocols (peel::StrvRef protocols) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DtlsConnection> ()));
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    const gchar* const *_peel_protocols = reinterpret_cast<const gchar* const *> (protocols.data ());
    _peel_iface->set_advertised_protocols (_peel_this, _peel_protocols);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_shutdown (bool shutdown_read, bool shutdown_write, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DtlsConnection> ())->peek_parent ());
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    gboolean _peel_shutdown_read = static_cast<gboolean> (shutdown_read);
    gboolean _peel_shutdown_write = static_cast<gboolean> (shutdown_write);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->shutdown (_peel_this, _peel_shutdown_read, _peel_shutdown_write, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  default_vfunc_shutdown (bool shutdown_read, bool shutdown_write, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DtlsConnection> ()));
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    gboolean _peel_shutdown_read = static_cast<gboolean> (shutdown_read);
    gboolean _peel_shutdown_write = static_cast<gboolean> (shutdown_write);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->shutdown (_peel_this, _peel_shutdown_read, _peel_shutdown_write, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_shutdown_async (bool shutdown_read, bool shutdown_write, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DtlsConnection> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    gboolean _peel_shutdown_read = static_cast<gboolean> (shutdown_read);
    gboolean _peel_shutdown_write = static_cast<gboolean> (shutdown_write);
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
    _peel_iface->shutdown_async (_peel_this, _peel_shutdown_read, _peel_shutdown_write, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_shutdown_async (bool shutdown_read, bool shutdown_write, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DtlsConnection> ()));
    gpointer _peel_user_data;
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    gboolean _peel_shutdown_read = static_cast<gboolean> (shutdown_read);
    gboolean _peel_shutdown_write = static_cast<gboolean> (shutdown_write);
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
    _peel_iface->shutdown_async (_peel_this, _peel_shutdown_read, _peel_shutdown_write, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_shutdown_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DtlsConnection> ())->peek_parent ());
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->shutdown_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_shutdown_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDtlsConnectionInterface *_peel_iface = reinterpret_cast<::GDtlsConnectionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DtlsConnection> ()));
    ::GDtlsConnection *_peel_this = reinterpret_cast<::GDtlsConnection *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->shutdown_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GDtlsConnectionInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_accept_certificate ()
    {
      ::GDtlsConnectionInterface *klass = reinterpret_cast<::GDtlsConnectionInterface *> (this);
      klass->accept_certificate = +[] (::GDtlsConnection *connection, ::GTlsCertificate *peer_cert, ::GTlsCertificateFlags errors) -> gboolean
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
      ::GDtlsConnectionInterface *klass = reinterpret_cast<::GDtlsConnectionInterface *> (this);
      klass->get_binding_data = +[] (::GDtlsConnection *conn, ::GTlsChannelBindingType type, ::GByteArray *data, ::GError **error) -> gboolean
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
      ::GDtlsConnectionInterface *klass = reinterpret_cast<::GDtlsConnectionInterface *> (this);
      klass->get_negotiated_protocol = +[] (::GDtlsConnection *conn) -> const gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (conn);
        return _peel_this->DerivedClass::vfunc_get_negotiated_protocol ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_handshake ()
    {
      ::GDtlsConnectionInterface *klass = reinterpret_cast<::GDtlsConnectionInterface *> (this);
      klass->handshake = +[] (::GDtlsConnection *conn, ::GCancellable *cancellable, ::GError **error) -> gboolean
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
      ::GDtlsConnectionInterface *klass = reinterpret_cast<::GDtlsConnectionInterface *> (this);
      klass->handshake_finish = +[] (::GDtlsConnection *conn, ::GAsyncResult *result, ::GError **error) -> gboolean
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

    template<typename DerivedClass>
    void
    override_vfunc_set_advertised_protocols ()
    {
      ::GDtlsConnectionInterface *klass = reinterpret_cast<::GDtlsConnectionInterface *> (this);
      klass->set_advertised_protocols = +[] (::GDtlsConnection *conn, const gchar* const *protocols) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (conn);
        peel::StrvRef _peel_protocols = peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (protocols));
        _peel_this->DerivedClass::vfunc_set_advertised_protocols (_peel_protocols);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_shutdown ()
    {
      ::GDtlsConnectionInterface *klass = reinterpret_cast<::GDtlsConnectionInterface *> (this);
      klass->shutdown = +[] (::GDtlsConnection *conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (conn);
        bool _peel_shutdown_read = !!shutdown_read;
        bool _peel_shutdown_write = !!shutdown_write;
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_shutdown (_peel_shutdown_read, _peel_shutdown_write, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: shutdown_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_shutdown_finish ()
    {
      ::GDtlsConnectionInterface *klass = reinterpret_cast<::GDtlsConnectionInterface *> (this);
      klass->shutdown_finish = +[] (::GDtlsConnection *conn, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (conn);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_shutdown_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GDtlsConnectionInterface),
                 "DtlsConnection::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GDtlsConnectionInterface),
                 "DtlsConnection::Iface align mismatch");
}; /* interface DtlsConnection */
static_assert (sizeof (DtlsConnection) == sizeof (DatagramBased),
               "DtlsConnection size mismatch");
static_assert (alignof (DtlsConnection) == alignof (DatagramBased),
               "DtlsConnection align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
