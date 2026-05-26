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
class Credentials;
class UnixConnection;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::UnixConnection> ()
{
  return g_unix_connection_get_type ();
}


namespace Gio
{
class UnixConnection : public SocketConnection
{
private:
  unsigned char _placeholder[sizeof (::GUnixConnection) - sizeof (SocketConnection)] peel_no_warn_unused;
  using SocketConnection::factory_lookup_type;
  using SocketConnection::factory_register_type;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  UnixConnection () = delete;
  UnixConnection (const UnixConnection &) = delete;
  UnixConnection (UnixConnection &&) = delete;
  UnixConnection &
  operator = (const UnixConnection &) = delete;
  UnixConnection &
  operator = (UnixConnection &&) = delete;
protected:
  ~UnixConnection () = default;
public:

  peel::RefPtr<Credentials>
  receive_credentials (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUnixConnection *_peel_this = reinterpret_cast<::GUnixConnection *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GCredentials *_peel_return = g_unix_connection_receive_credentials (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Credentials>::adopt_ref (reinterpret_cast<Credentials *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  receive_credentials_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GUnixConnection *_peel_this = reinterpret_cast<::GUnixConnection *> (this);
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
    g_unix_connection_receive_credentials_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Credentials>
  receive_credentials_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUnixConnection *_peel_this = reinterpret_cast<::GUnixConnection *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GCredentials *_peel_return = g_unix_connection_receive_credentials_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Credentials>::adopt_ref (reinterpret_cast<Credentials *> (_peel_return));
  }

  int
  receive_fd (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUnixConnection *_peel_this = reinterpret_cast<::GUnixConnection *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gint _peel_return = g_unix_connection_receive_fd (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  bool
  send_credentials (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUnixConnection *_peel_this = reinterpret_cast<::GUnixConnection *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_unix_connection_send_credentials (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  send_credentials_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GUnixConnection *_peel_this = reinterpret_cast<::GUnixConnection *> (this);
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
    g_unix_connection_send_credentials_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  send_credentials_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUnixConnection *_peel_this = reinterpret_cast<::GUnixConnection *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_unix_connection_send_credentials_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  send_fd (int fd, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUnixConnection *_peel_this = reinterpret_cast<::GUnixConnection *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_unix_connection_send_fd (_peel_this, fd, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<UnixConnection> ());
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

  static_assert (sizeof (Class) == sizeof (::GUnixConnectionClass),
                 "UnixConnection::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GUnixConnectionClass),
                 "UnixConnection::Class align mismatch");
}; /* class UnixConnection */

static_assert (sizeof (UnixConnection) == sizeof (::GUnixConnection),
               "UnixConnection size mismatch");
static_assert (alignof (UnixConnection) == alignof (::GUnixConnection),
               "UnixConnection align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/Credentials.h>
