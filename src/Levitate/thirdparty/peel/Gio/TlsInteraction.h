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
#include <peel/GObject/Object.h>
#include <peel/Gio/TlsCertificate.h>

peel_begin_header

namespace peel
{
namespace GLib
{
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
class TlsConnection;
class TlsInteraction;
enum class TlsInteractionResult : std::underlying_type<::GTlsInteractionResult>::type;
class TlsPassword;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::TlsInteraction> ()
{
  return g_tls_interaction_get_type ();
}


namespace Gio
{
class TlsInteraction : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GTlsInteraction) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TlsInteraction () = delete;
  TlsInteraction (const TlsInteraction &) = delete;
  TlsInteraction (TlsInteraction &&) = delete;
  TlsInteraction &
  operator = (const TlsInteraction &) = delete;
  TlsInteraction &
  operator = (TlsInteraction &&) = delete;
protected:
  ~TlsInteraction () = default;
public:

  peel_nonnull_args (2)
  TlsInteractionResult
  ask_password (TlsPassword *password, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GTlsPassword *_peel_password = reinterpret_cast<::GTlsPassword *> (password);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GTlsInteractionResult _peel_return = g_tls_interaction_ask_password (_peel_this, _peel_password, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsInteractionResult> (_peel_return);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  ask_password_async (TlsPassword *password, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GTlsPassword *_peel_password = reinterpret_cast<::GTlsPassword *> (password);
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
    g_tls_interaction_ask_password_async (_peel_this, _peel_password, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  TlsInteractionResult
  ask_password_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GTlsInteractionResult _peel_return = g_tls_interaction_ask_password_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsInteractionResult> (_peel_return);
  }

  peel_nonnull_args (2)
  TlsInteractionResult
  invoke_ask_password (TlsPassword *password, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GTlsPassword *_peel_password = reinterpret_cast<::GTlsPassword *> (password);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GTlsInteractionResult _peel_return = g_tls_interaction_invoke_ask_password (_peel_this, _peel_password, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsInteractionResult> (_peel_return);
  }

  peel_nonnull_args (2)
  TlsInteractionResult
  invoke_request_certificate (TlsConnection *connection, TlsCertificate::RequestFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GTlsConnection *_peel_connection = reinterpret_cast<::GTlsConnection *> (connection);
    ::GTlsCertificateRequestFlags _peel_flags = static_cast<::GTlsCertificateRequestFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GTlsInteractionResult _peel_return = g_tls_interaction_invoke_request_certificate (_peel_this, _peel_connection, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsInteractionResult> (_peel_return);
  }

  peel_nonnull_args (2)
  TlsInteractionResult
  request_certificate (TlsConnection *connection, TlsCertificate::RequestFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GTlsConnection *_peel_connection = reinterpret_cast<::GTlsConnection *> (connection);
    ::GTlsCertificateRequestFlags _peel_flags = static_cast<::GTlsCertificateRequestFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GTlsInteractionResult _peel_return = g_tls_interaction_request_certificate (_peel_this, _peel_connection, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsInteractionResult> (_peel_return);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  request_certificate_async (TlsConnection *connection, TlsCertificate::RequestFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GTlsConnection *_peel_connection = reinterpret_cast<::GTlsConnection *> (connection);
    ::GTlsCertificateRequestFlags _peel_flags = static_cast<::GTlsCertificateRequestFlags> (flags);
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
    g_tls_interaction_request_certificate_async (_peel_this, _peel_connection, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  TlsInteractionResult
  request_certificate_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GTlsInteractionResult _peel_return = g_tls_interaction_request_certificate_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsInteractionResult> (_peel_return);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TlsInteraction> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  TlsInteractionResult
  parent_vfunc_ask_password (TlsPassword *password, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsInteractionClass *_peel_class = reinterpret_cast<::GTlsInteractionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GTlsPassword *_peel_password = reinterpret_cast<::GTlsPassword *> (password);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GTlsInteractionResult _peel_return = _peel_class->ask_password (_peel_this, _peel_password, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsInteractionResult> (_peel_return);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_ask_password_async (TlsPassword *password, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GTlsInteractionClass *_peel_class = reinterpret_cast<::GTlsInteractionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GTlsPassword *_peel_password = reinterpret_cast<::GTlsPassword *> (password);
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
    _peel_class->ask_password_async (_peel_this, _peel_password, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  TlsInteractionResult
  parent_vfunc_ask_password_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsInteractionClass *_peel_class = reinterpret_cast<::GTlsInteractionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GTlsInteractionResult _peel_return = _peel_class->ask_password_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsInteractionResult> (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  TlsInteractionResult
  parent_vfunc_request_certificate (TlsConnection *connection, TlsCertificate::RequestFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsInteractionClass *_peel_class = reinterpret_cast<::GTlsInteractionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GTlsConnection *_peel_connection = reinterpret_cast<::GTlsConnection *> (connection);
    ::GTlsCertificateRequestFlags _peel_flags = static_cast<::GTlsCertificateRequestFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GTlsInteractionResult _peel_return = _peel_class->request_certificate (_peel_this, _peel_connection, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsInteractionResult> (_peel_return);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_request_certificate_async (TlsConnection *connection, TlsCertificate::RequestFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GTlsInteractionClass *_peel_class = reinterpret_cast<::GTlsInteractionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GTlsConnection *_peel_connection = reinterpret_cast<::GTlsConnection *> (connection);
    ::GTlsCertificateRequestFlags _peel_flags = static_cast<::GTlsCertificateRequestFlags> (flags);
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
    _peel_class->request_certificate_async (_peel_this, _peel_connection, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  TlsInteractionResult
  parent_vfunc_request_certificate_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GTlsInteractionClass *_peel_class = reinterpret_cast<::GTlsInteractionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsInteraction *_peel_this = reinterpret_cast<::GTlsInteraction *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GTlsInteractionResult _peel_return = _peel_class->request_certificate_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<TlsInteractionResult> (_peel_return);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GTlsInteractionClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_ask_password ()
    {
      ::GTlsInteractionClass *klass = reinterpret_cast<::GTlsInteractionClass *> (this);
      klass->ask_password = +[] (::GTlsInteraction *interaction, ::GTlsPassword *password, ::GCancellable *cancellable, ::GError **error) -> ::GTlsInteractionResult
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interaction);
        TlsPassword *_peel_password = reinterpret_cast<TlsPassword *> (password);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        TlsInteractionResult _peel_return = _peel_this->DerivedClass::vfunc_ask_password (_peel_password, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<::GTlsInteractionResult> (_peel_return);
      };
    }

    /* Unsupported for now: ask_password_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_ask_password_finish ()
    {
      ::GTlsInteractionClass *klass = reinterpret_cast<::GTlsInteractionClass *> (this);
      klass->ask_password_finish = +[] (::GTlsInteraction *interaction, ::GAsyncResult *result, ::GError **error) -> ::GTlsInteractionResult
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interaction);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        TlsInteractionResult _peel_return = _peel_this->DerivedClass::vfunc_ask_password_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<::GTlsInteractionResult> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_request_certificate ()
    {
      ::GTlsInteractionClass *klass = reinterpret_cast<::GTlsInteractionClass *> (this);
      klass->request_certificate = +[] (::GTlsInteraction *interaction, ::GTlsConnection *connection, ::GTlsCertificateRequestFlags flags, ::GCancellable *cancellable, ::GError **error) -> ::GTlsInteractionResult
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interaction);
        TlsConnection *_peel_connection = reinterpret_cast<TlsConnection *> (connection);
        TlsCertificate::RequestFlags _peel_flags = static_cast<TlsCertificate::RequestFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        TlsInteractionResult _peel_return = _peel_this->DerivedClass::vfunc_request_certificate (_peel_connection, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<::GTlsInteractionResult> (_peel_return);
      };
    }

    /* Unsupported for now: request_certificate_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_request_certificate_finish ()
    {
      ::GTlsInteractionClass *klass = reinterpret_cast<::GTlsInteractionClass *> (this);
      klass->request_certificate_finish = +[] (::GTlsInteraction *interaction, ::GAsyncResult *result, ::GError **error) -> ::GTlsInteractionResult
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (interaction);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        TlsInteractionResult _peel_return = _peel_this->DerivedClass::vfunc_request_certificate_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<::GTlsInteractionResult> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GTlsInteractionClass),
                 "TlsInteraction::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GTlsInteractionClass),
                 "TlsInteraction::Class align mismatch");
}; /* class TlsInteraction */

static_assert (sizeof (TlsInteraction) == sizeof (::GTlsInteraction),
               "TlsInteraction size mismatch");
static_assert (alignof (TlsInteraction) == alignof (::GTlsInteraction),
               "TlsInteraction align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
