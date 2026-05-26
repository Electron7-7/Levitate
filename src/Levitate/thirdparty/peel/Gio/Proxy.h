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
#include <peel/GObject/TypeInterface.h>

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
class IOStream;
class /* interface */ Proxy;
class ProxyAddress;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Proxy> ()
{
  return g_proxy_get_type ();
}


namespace Gio
{
class /* interface */ Proxy : public GObject::Object
/* requires GObject::Object */
{
private:
  Proxy () = delete;
  Proxy (const Proxy &) = delete;
  Proxy (Proxy &&) = delete;

  Proxy &
  operator = (const Proxy &) = delete;
  Proxy &
  operator = (Proxy &&) = delete;

protected:
  ~Proxy () = default;

public:

  peel_nonnull_args (1)
  static peel::RefPtr<Proxy>
  get_default_for_protocol (const char *protocol) noexcept
  {
    ::GProxy *_peel_return = g_proxy_get_default_for_protocol (protocol);
    return peel::RefPtr<Proxy>::adopt_ref (reinterpret_cast<Proxy *> (_peel_return));
  }

  peel_nonnull_args (2, 3)
  peel::RefPtr<IOStream>
  connect (IOStream *connection, ProxyAddress *proxy_address, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GProxy *_peel_this = reinterpret_cast<::GProxy *> (this);
    ::GIOStream *_peel_connection = reinterpret_cast<::GIOStream *> (connection);
    ::GProxyAddress *_peel_proxy_address = reinterpret_cast<::GProxyAddress *> (proxy_address);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GIOStream *_peel_return = g_proxy_connect (_peel_this, _peel_connection, _peel_proxy_address, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<IOStream>::adopt_ref (reinterpret_cast<IOStream *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2, 3)
  void
  connect_async (IOStream *connection, ProxyAddress *proxy_address, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GProxy *_peel_this = reinterpret_cast<::GProxy *> (this);
    ::GIOStream *_peel_connection = reinterpret_cast<::GIOStream *> (connection);
    ::GProxyAddress *_peel_proxy_address = reinterpret_cast<::GProxyAddress *> (proxy_address);
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
    g_proxy_connect_async (_peel_this, _peel_connection, _peel_proxy_address, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<IOStream>
  connect_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GProxy *_peel_this = reinterpret_cast<::GProxy *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GIOStream *_peel_return = g_proxy_connect_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<IOStream>::adopt_ref (reinterpret_cast<IOStream *> (_peel_return));
  }

  bool
  supports_hostname () noexcept
  {
    ::GProxy *_peel_this = reinterpret_cast<::GProxy *> (this);
    gboolean _peel_return = g_proxy_supports_hostname (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  peel::RefPtr<IOStream>
  parent_vfunc_connect (IOStream *connection, ProxyAddress *proxy_address, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GProxyInterface *_peel_iface = reinterpret_cast<::GProxyInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Proxy> ())->peek_parent ());
    ::GProxy *_peel_this = reinterpret_cast<::GProxy *> (this);
    ::GIOStream *_peel_connection = reinterpret_cast<::GIOStream *> (connection);
    ::GProxyAddress *_peel_proxy_address = reinterpret_cast<::GProxyAddress *> (proxy_address);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GIOStream *_peel_return = _peel_iface->connect (_peel_this, _peel_connection, _peel_proxy_address, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<IOStream>::adopt_ref (reinterpret_cast<IOStream *> (_peel_return));
  }

  peel_nonnull_args (2, 3)
  peel::RefPtr<IOStream>
  default_vfunc_connect (IOStream *connection, ProxyAddress *proxy_address, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GProxyInterface *_peel_iface = reinterpret_cast<::GProxyInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Proxy> ()));
    ::GProxy *_peel_this = reinterpret_cast<::GProxy *> (this);
    ::GIOStream *_peel_connection = reinterpret_cast<::GIOStream *> (connection);
    ::GProxyAddress *_peel_proxy_address = reinterpret_cast<::GProxyAddress *> (proxy_address);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GIOStream *_peel_return = _peel_iface->connect (_peel_this, _peel_connection, _peel_proxy_address, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<IOStream>::adopt_ref (reinterpret_cast<IOStream *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_connect_async (IOStream *connection, ProxyAddress *proxy_address, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GProxyInterface *_peel_iface = reinterpret_cast<::GProxyInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Proxy> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GProxy *_peel_this = reinterpret_cast<::GProxy *> (this);
    ::GIOStream *_peel_connection = reinterpret_cast<::GIOStream *> (connection);
    ::GProxyAddress *_peel_proxy_address = reinterpret_cast<::GProxyAddress *> (proxy_address);
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
    _peel_iface->connect_async (_peel_this, _peel_connection, _peel_proxy_address, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2, 3)
  void
  default_vfunc_connect_async (IOStream *connection, ProxyAddress *proxy_address, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GProxyInterface *_peel_iface = reinterpret_cast<::GProxyInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Proxy> ()));
    gpointer _peel_user_data;
    ::GProxy *_peel_this = reinterpret_cast<::GProxy *> (this);
    ::GIOStream *_peel_connection = reinterpret_cast<::GIOStream *> (connection);
    ::GProxyAddress *_peel_proxy_address = reinterpret_cast<::GProxyAddress *> (proxy_address);
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
    _peel_iface->connect_async (_peel_this, _peel_connection, _peel_proxy_address, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<IOStream>
  parent_vfunc_connect_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GProxyInterface *_peel_iface = reinterpret_cast<::GProxyInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Proxy> ())->peek_parent ());
    ::GProxy *_peel_this = reinterpret_cast<::GProxy *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GIOStream *_peel_return = _peel_iface->connect_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<IOStream>::adopt_ref (reinterpret_cast<IOStream *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<IOStream>
  default_vfunc_connect_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GProxyInterface *_peel_iface = reinterpret_cast<::GProxyInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Proxy> ()));
    ::GProxy *_peel_this = reinterpret_cast<::GProxy *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GIOStream *_peel_return = _peel_iface->connect_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<IOStream>::adopt_ref (reinterpret_cast<IOStream *> (_peel_return));
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_supports_hostname () noexcept
  {
    ::GProxyInterface *_peel_iface = reinterpret_cast<::GProxyInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Proxy> ())->peek_parent ());
    ::GProxy *_peel_this = reinterpret_cast<::GProxy *> (this);
    gboolean _peel_return = _peel_iface->supports_hostname (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_supports_hostname () noexcept
  {
    ::GProxyInterface *_peel_iface = reinterpret_cast<::GProxyInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Proxy> ()));
    ::GProxy *_peel_this = reinterpret_cast<::GProxy *> (this);
    gboolean _peel_return = _peel_iface->supports_hostname (_peel_this);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GProxyInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_connect ()
    {
      ::GProxyInterface *klass = reinterpret_cast<::GProxyInterface *> (this);
      klass->connect = +[] (::GProxy *proxy, ::GIOStream *connection, ::GProxyAddress *proxy_address, ::GCancellable *cancellable, ::GError **error) -> ::GIOStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (proxy);
        IOStream *_peel_connection = reinterpret_cast<IOStream *> (connection);
        ProxyAddress *_peel_proxy_address = reinterpret_cast<ProxyAddress *> (proxy_address);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<IOStream> _peel_return = _peel_this->DerivedClass::vfunc_connect (_peel_connection, _peel_proxy_address, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GIOStream *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: connect_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_connect_finish ()
    {
      ::GProxyInterface *klass = reinterpret_cast<::GProxyInterface *> (this);
      klass->connect_finish = +[] (::GProxy *proxy, ::GAsyncResult *result, ::GError **error) -> ::GIOStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (proxy);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<IOStream> _peel_return = _peel_this->DerivedClass::vfunc_connect_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GIOStream *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_supports_hostname ()
    {
      ::GProxyInterface *klass = reinterpret_cast<::GProxyInterface *> (this);
      klass->supports_hostname = +[] (::GProxy *proxy) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (proxy);
        bool _peel_return = _peel_this->DerivedClass::vfunc_supports_hostname ();
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GProxyInterface),
                 "Proxy::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GProxyInterface),
                 "Proxy::Iface align mismatch");
}; /* interface Proxy */
static_assert (sizeof (Proxy) == sizeof (GObject::Object),
               "Proxy size mismatch");
static_assert (alignof (Proxy) == alignof (GObject::Object),
               "Proxy align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/IOStream.h>
