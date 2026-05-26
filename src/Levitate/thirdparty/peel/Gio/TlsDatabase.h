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
#include <peel/GObject/Object.h>
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
class /* interface */ SocketConnectable;
class TlsCertificate;
class TlsDatabase;
class TlsInteraction;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::TlsDatabase> ()
{
  return g_tls_database_get_type ();
}


namespace Gio
{
class TlsDatabase : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GTlsDatabase) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TlsDatabase () = delete;
  TlsDatabase (const TlsDatabase &) = delete;
  TlsDatabase (TlsDatabase &&) = delete;
  TlsDatabase &
  operator = (const TlsDatabase &) = delete;
  TlsDatabase &
  operator = (TlsDatabase &&) = delete;
protected:
  ~TlsDatabase () = default;
public:
  enum class LookupFlags : std::underlying_type<::GTlsDatabaseLookupFlags>::type;
  enum class VerifyFlags : std::underlying_type<::GTlsDatabaseVerifyFlags>::type;

  peel_nonnull_args (2)
  peel::String
  create_certificate_handle (TlsCertificate *certificate) noexcept
  {
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsCertificate *_peel_certificate = reinterpret_cast<::GTlsCertificate *> (certificate);
    gchar *_peel_return = g_tls_database_create_certificate_handle (_peel_this, _peel_certificate);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::RefPtr<TlsCertificate>
  lookup_certificate_for_handle (const char *handle, TlsInteraction *interaction, TlsDatabase::LookupFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseLookupFlags _peel_flags = static_cast<::GTlsDatabaseLookupFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = g_tls_database_lookup_certificate_for_handle (_peel_this, handle, _peel_interaction, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  lookup_certificate_for_handle_async (const char *handle, TlsInteraction *interaction, TlsDatabase::LookupFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseLookupFlags _peel_flags = static_cast<::GTlsDatabaseLookupFlags> (flags);
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
    g_tls_database_lookup_certificate_for_handle_async (_peel_this, handle, _peel_interaction, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<TlsCertificate>
  lookup_certificate_for_handle_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = g_tls_database_lookup_certificate_for_handle_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<TlsCertificate>
  lookup_certificate_issuer (TlsCertificate *certificate, TlsInteraction *interaction, TlsDatabase::LookupFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsCertificate *_peel_certificate = reinterpret_cast<::GTlsCertificate *> (certificate);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseLookupFlags _peel_flags = static_cast<::GTlsDatabaseLookupFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = g_tls_database_lookup_certificate_issuer (_peel_this, _peel_certificate, _peel_interaction, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  lookup_certificate_issuer_async (TlsCertificate *certificate, TlsInteraction *interaction, TlsDatabase::LookupFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsCertificate *_peel_certificate = reinterpret_cast<::GTlsCertificate *> (certificate);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseLookupFlags _peel_flags = static_cast<::GTlsDatabaseLookupFlags> (flags);
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
    g_tls_database_lookup_certificate_issuer_async (_peel_this, _peel_certificate, _peel_interaction, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<TlsCertificate>
  lookup_certificate_issuer_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = g_tls_database_lookup_certificate_issuer_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  GLib::List<peel::RefPtr<TlsCertificate>>
  lookup_certificates_issued_by (GLib::ByteArray *issuer_raw_dn, TlsInteraction *interaction, TlsDatabase::LookupFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GByteArray *_peel_issuer_raw_dn = reinterpret_cast<::GByteArray *> (issuer_raw_dn);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseLookupFlags _peel_flags = static_cast<::GTlsDatabaseLookupFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = g_tls_database_lookup_certificates_issued_by (_peel_this, _peel_issuer_raw_dn, _peel_interaction, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<TlsCertificate>>::adopt_list (_peel_return);
  }

  template<typename AsyncReadyCallback>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  lookup_certificates_issued_by_async (GLib::ByteArray *issuer_raw_dn, TlsInteraction *interaction, TlsDatabase::LookupFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GByteArray *_peel_issuer_raw_dn = reinterpret_cast<::GByteArray *> (issuer_raw_dn);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseLookupFlags _peel_flags = static_cast<::GTlsDatabaseLookupFlags> (flags);
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
    g_tls_database_lookup_certificates_issued_by_async (_peel_this, _peel_issuer_raw_dn, _peel_interaction, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<TlsCertificate>>
  lookup_certificates_issued_by_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = g_tls_database_lookup_certificates_issued_by_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<TlsCertificate>>::adopt_list (_peel_return);
  }

  peel_nonnull_args (2, 3)
  TlsCertificate::Flags
  verify_chain (TlsCertificate *chain, const char *purpose, SocketConnectable *identity, TlsInteraction *interaction, TlsDatabase::VerifyFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsCertificate *_peel_chain = reinterpret_cast<::GTlsCertificate *> (chain);
    ::GSocketConnectable *_peel_identity = reinterpret_cast<::GSocketConnectable *> (identity);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseVerifyFlags _peel_flags = static_cast<::GTlsDatabaseVerifyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GTlsCertificateFlags _peel_return = g_tls_database_verify_chain (_peel_this, _peel_chain, purpose, _peel_identity, _peel_interaction, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsCertificate::Flags> (_peel_return);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2, 3)
  void
  verify_chain_async (TlsCertificate *chain, const char *purpose, SocketConnectable *identity, TlsInteraction *interaction, TlsDatabase::VerifyFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsCertificate *_peel_chain = reinterpret_cast<::GTlsCertificate *> (chain);
    ::GSocketConnectable *_peel_identity = reinterpret_cast<::GSocketConnectable *> (identity);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseVerifyFlags _peel_flags = static_cast<::GTlsDatabaseVerifyFlags> (flags);
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
    g_tls_database_verify_chain_async (_peel_this, _peel_chain, purpose, _peel_identity, _peel_interaction, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  TlsCertificate::Flags
  verify_chain_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GTlsCertificateFlags _peel_return = g_tls_database_verify_chain_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsCertificate::Flags> (_peel_return);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TlsDatabase> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::String
  parent_vfunc_create_certificate_handle (TlsCertificate *certificate) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsCertificate *_peel_certificate = reinterpret_cast<::GTlsCertificate *> (certificate);
    gchar *_peel_return = _peel_class->create_certificate_handle (_peel_this, _peel_certificate);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<TlsCertificate>
  parent_vfunc_lookup_certificate_for_handle (const char *handle, TlsInteraction *interaction, TlsDatabase::LookupFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseLookupFlags _peel_flags = static_cast<::GTlsDatabaseLookupFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = _peel_class->lookup_certificate_for_handle (_peel_this, handle, _peel_interaction, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_lookup_certificate_for_handle_async (const char *handle, TlsInteraction *interaction, TlsDatabase::LookupFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseLookupFlags _peel_flags = static_cast<::GTlsDatabaseLookupFlags> (flags);
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
    _peel_class->lookup_certificate_for_handle_async (_peel_this, handle, _peel_interaction, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<TlsCertificate>
  parent_vfunc_lookup_certificate_for_handle_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = _peel_class->lookup_certificate_for_handle_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<TlsCertificate>
  parent_vfunc_lookup_certificate_issuer (TlsCertificate *certificate, TlsInteraction *interaction, TlsDatabase::LookupFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsCertificate *_peel_certificate = reinterpret_cast<::GTlsCertificate *> (certificate);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseLookupFlags _peel_flags = static_cast<::GTlsDatabaseLookupFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = _peel_class->lookup_certificate_issuer (_peel_this, _peel_certificate, _peel_interaction, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_lookup_certificate_issuer_async (TlsCertificate *certificate, TlsInteraction *interaction, TlsDatabase::LookupFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsCertificate *_peel_certificate = reinterpret_cast<::GTlsCertificate *> (certificate);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseLookupFlags _peel_flags = static_cast<::GTlsDatabaseLookupFlags> (flags);
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
    _peel_class->lookup_certificate_issuer_async (_peel_this, _peel_certificate, _peel_interaction, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<TlsCertificate>
  parent_vfunc_lookup_certificate_issuer_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = _peel_class->lookup_certificate_issuer_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  GLib::List<peel::RefPtr<TlsCertificate>>
  parent_vfunc_lookup_certificates_issued_by (GLib::ByteArray *issuer_raw_dn, TlsInteraction *interaction, TlsDatabase::LookupFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GByteArray *_peel_issuer_raw_dn = reinterpret_cast<::GByteArray *> (issuer_raw_dn);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseLookupFlags _peel_flags = static_cast<::GTlsDatabaseLookupFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = _peel_class->lookup_certificates_issued_by (_peel_this, _peel_issuer_raw_dn, _peel_interaction, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<TlsCertificate>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_lookup_certificates_issued_by_async (GLib::ByteArray *issuer_raw_dn, TlsInteraction *interaction, TlsDatabase::LookupFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GByteArray *_peel_issuer_raw_dn = reinterpret_cast<::GByteArray *> (issuer_raw_dn);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseLookupFlags _peel_flags = static_cast<::GTlsDatabaseLookupFlags> (flags);
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
    _peel_class->lookup_certificates_issued_by_async (_peel_this, _peel_issuer_raw_dn, _peel_interaction, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<TlsCertificate>>
  parent_vfunc_lookup_certificates_issued_by_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = _peel_class->lookup_certificates_issued_by_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<TlsCertificate>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  TlsCertificate::Flags
  parent_vfunc_verify_chain (TlsCertificate *chain, const char *purpose, SocketConnectable *identity, TlsInteraction *interaction, TlsDatabase::VerifyFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsCertificate *_peel_chain = reinterpret_cast<::GTlsCertificate *> (chain);
    ::GSocketConnectable *_peel_identity = reinterpret_cast<::GSocketConnectable *> (identity);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseVerifyFlags _peel_flags = static_cast<::GTlsDatabaseVerifyFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GTlsCertificateFlags _peel_return = _peel_class->verify_chain (_peel_this, _peel_chain, purpose, _peel_identity, _peel_interaction, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsCertificate::Flags> (_peel_return);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_verify_chain_async (TlsCertificate *chain, const char *purpose, SocketConnectable *identity, TlsInteraction *interaction, TlsDatabase::VerifyFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GTlsCertificate *_peel_chain = reinterpret_cast<::GTlsCertificate *> (chain);
    ::GSocketConnectable *_peel_identity = reinterpret_cast<::GSocketConnectable *> (identity);
    ::GTlsInteraction *_peel_interaction = reinterpret_cast<::GTlsInteraction *> (interaction);
    ::GTlsDatabaseVerifyFlags _peel_flags = static_cast<::GTlsDatabaseVerifyFlags> (flags);
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
    _peel_class->verify_chain_async (_peel_this, _peel_chain, purpose, _peel_identity, _peel_interaction, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  TlsCertificate::Flags
  parent_vfunc_verify_chain_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsDatabaseClass *_peel_class = reinterpret_cast<::GTlsDatabaseClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsDatabase *_peel_this = reinterpret_cast<::GTlsDatabase *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GTlsCertificateFlags _peel_return = _peel_class->verify_chain_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsCertificate::Flags> (_peel_return);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GTlsDatabaseClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_create_certificate_handle ()
    {
      ::GTlsDatabaseClass *klass = reinterpret_cast<::GTlsDatabaseClass *> (this);
      klass->create_certificate_handle = +[] (::GTlsDatabase *self, ::GTlsCertificate *certificate) -> gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        TlsCertificate *_peel_certificate = reinterpret_cast<TlsCertificate *> (certificate);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_create_certificate_handle (_peel_certificate);
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_lookup_certificate_for_handle ()
    {
      ::GTlsDatabaseClass *klass = reinterpret_cast<::GTlsDatabaseClass *> (this);
      klass->lookup_certificate_for_handle = +[] (::GTlsDatabase *self, const gchar *handle, ::GTlsInteraction *interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GTlsCertificate *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        TlsInteraction *_peel_interaction = reinterpret_cast<TlsInteraction *> (interaction);
        TlsDatabase::LookupFlags _peel_flags = static_cast<TlsDatabase::LookupFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<TlsCertificate> _peel_return = _peel_this->DerivedClass::vfunc_lookup_certificate_for_handle (handle, _peel_interaction, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GTlsCertificate *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: lookup_certificate_for_handle_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_lookup_certificate_for_handle_finish ()
    {
      ::GTlsDatabaseClass *klass = reinterpret_cast<::GTlsDatabaseClass *> (this);
      klass->lookup_certificate_for_handle_finish = +[] (::GTlsDatabase *self, ::GAsyncResult *result, ::GError **error) -> ::GTlsCertificate *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<TlsCertificate> _peel_return = _peel_this->DerivedClass::vfunc_lookup_certificate_for_handle_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GTlsCertificate *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_lookup_certificate_issuer ()
    {
      ::GTlsDatabaseClass *klass = reinterpret_cast<::GTlsDatabaseClass *> (this);
      klass->lookup_certificate_issuer = +[] (::GTlsDatabase *self, ::GTlsCertificate *certificate, ::GTlsInteraction *interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GTlsCertificate *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        TlsCertificate *_peel_certificate = reinterpret_cast<TlsCertificate *> (certificate);
        TlsInteraction *_peel_interaction = reinterpret_cast<TlsInteraction *> (interaction);
        TlsDatabase::LookupFlags _peel_flags = static_cast<TlsDatabase::LookupFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<TlsCertificate> _peel_return = _peel_this->DerivedClass::vfunc_lookup_certificate_issuer (_peel_certificate, _peel_interaction, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GTlsCertificate *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: lookup_certificate_issuer_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_lookup_certificate_issuer_finish ()
    {
      ::GTlsDatabaseClass *klass = reinterpret_cast<::GTlsDatabaseClass *> (this);
      klass->lookup_certificate_issuer_finish = +[] (::GTlsDatabase *self, ::GAsyncResult *result, ::GError **error) -> ::GTlsCertificate *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<TlsCertificate> _peel_return = _peel_this->DerivedClass::vfunc_lookup_certificate_issuer_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GTlsCertificate *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_lookup_certificates_issued_by ()
    {
      ::GTlsDatabaseClass *klass = reinterpret_cast<::GTlsDatabaseClass *> (this);
      klass->lookup_certificates_issued_by = +[] (::GTlsDatabase *self, ::GByteArray *issuer_raw_dn, ::GTlsInteraction *interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable *cancellable, ::GError **error) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        GLib::ByteArray *_peel_issuer_raw_dn = reinterpret_cast<GLib::ByteArray *> (issuer_raw_dn);
        TlsInteraction *_peel_interaction = reinterpret_cast<TlsInteraction *> (interaction);
        TlsDatabase::LookupFlags _peel_flags = static_cast<TlsDatabase::LookupFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        GLib::List<peel::RefPtr<TlsCertificate>> _peel_return = _peel_this->DerivedClass::vfunc_lookup_certificates_issued_by (_peel_issuer_raw_dn, _peel_interaction, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return std::move (_peel_return).release_list ();
      };
    }

    /* Unsupported for now: lookup_certificates_issued_by_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_lookup_certificates_issued_by_finish ()
    {
      ::GTlsDatabaseClass *klass = reinterpret_cast<::GTlsDatabaseClass *> (this);
      klass->lookup_certificates_issued_by_finish = +[] (::GTlsDatabase *self, ::GAsyncResult *result, ::GError **error) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        GLib::List<peel::RefPtr<TlsCertificate>> _peel_return = _peel_this->DerivedClass::vfunc_lookup_certificates_issued_by_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return std::move (_peel_return).release_list ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_verify_chain ()
    {
      ::GTlsDatabaseClass *klass = reinterpret_cast<::GTlsDatabaseClass *> (this);
      klass->verify_chain = +[] (::GTlsDatabase *self, ::GTlsCertificate *chain, const gchar *purpose, ::GSocketConnectable *identity, ::GTlsInteraction *interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GTlsCertificateFlags
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        TlsCertificate *_peel_chain = reinterpret_cast<TlsCertificate *> (chain);
        SocketConnectable *_peel_identity = reinterpret_cast<SocketConnectable *> (identity);
        TlsInteraction *_peel_interaction = reinterpret_cast<TlsInteraction *> (interaction);
        TlsDatabase::VerifyFlags _peel_flags = static_cast<TlsDatabase::VerifyFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        TlsCertificate::Flags _peel_return = _peel_this->DerivedClass::vfunc_verify_chain (_peel_chain, purpose, _peel_identity, _peel_interaction, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<::GTlsCertificateFlags> (_peel_return);
      };
    }

    /* Unsupported for now: verify_chain_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_verify_chain_finish ()
    {
      ::GTlsDatabaseClass *klass = reinterpret_cast<::GTlsDatabaseClass *> (this);
      klass->verify_chain_finish = +[] (::GTlsDatabase *self, ::GAsyncResult *result, ::GError **error) -> ::GTlsCertificateFlags
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        TlsCertificate::Flags _peel_return = _peel_this->DerivedClass::vfunc_verify_chain_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<::GTlsCertificateFlags> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GTlsDatabaseClass),
                 "TlsDatabase::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GTlsDatabaseClass),
                 "TlsDatabase::Class align mismatch");
}; /* class TlsDatabase */

static_assert (sizeof (TlsDatabase) == sizeof (::GTlsDatabase),
               "TlsDatabase size mismatch");
static_assert (alignof (TlsDatabase) == alignof (::GTlsDatabase),
               "TlsDatabase align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
