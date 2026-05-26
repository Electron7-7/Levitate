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
#include <peel/Gio/Initable.h>

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
enum class NetworkConnectivity : std::underlying_type<::GNetworkConnectivity>::type;
class /* interface */ NetworkMonitor;
class /* interface */ SocketConnectable;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::NetworkMonitor> ()
{
  return g_network_monitor_get_type ();
}


namespace Gio
{
class /* interface */ NetworkMonitor : public Initable
/* requires Initable */
{
private:
  NetworkMonitor () = delete;
  NetworkMonitor (const NetworkMonitor &) = delete;
  NetworkMonitor (NetworkMonitor &&) = delete;

  NetworkMonitor &
  operator = (const NetworkMonitor &) = delete;
  NetworkMonitor &
  operator = (NetworkMonitor &&) = delete;

protected:
  ~NetworkMonitor () = default;

public:

  peel_returns_nonnull
  static NetworkMonitor *
  get_default () noexcept
  {
    ::GNetworkMonitor *_peel_return = g_network_monitor_get_default ();
    peel_assume (_peel_return);
    return reinterpret_cast<NetworkMonitor *> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  can_reach (SocketConnectable *connectable, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    ::GSocketConnectable *_peel_connectable = reinterpret_cast<::GSocketConnectable *> (connectable);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_network_monitor_can_reach (_peel_this, _peel_connectable, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  can_reach_async (SocketConnectable *connectable, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    ::GSocketConnectable *_peel_connectable = reinterpret_cast<::GSocketConnectable *> (connectable);
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
    g_network_monitor_can_reach_async (_peel_this, _peel_connectable, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  can_reach_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_network_monitor_can_reach_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  NetworkConnectivity
  get_connectivity () noexcept
  {
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    ::GNetworkConnectivity _peel_return = g_network_monitor_get_connectivity (_peel_this);
    return static_cast<NetworkConnectivity> (_peel_return);
  }

  bool
  get_network_available () noexcept
  {
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    gboolean _peel_return = g_network_monitor_get_network_available (_peel_this);
    return !!_peel_return;
  }

  bool
  get_network_metered () noexcept
  {
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    gboolean _peel_return = g_network_monitor_get_network_metered (_peel_this);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_network_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<NetworkMonitor, void (bool)>::_peel_connect_by_name (this, "network-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_network_changed (HandlerObject *object, void (HandlerObject::*handler_method) (NetworkMonitor *, bool), bool after = false) noexcept
  {
    return Signal<NetworkMonitor, void (bool)>::_peel_connect_by_name (this, "network-changed", object, handler_method, after);
  }

  static peel::Property<NetworkConnectivity>
  prop_connectivity ()
  {
    return peel::Property<NetworkConnectivity> { "connectivity" };
  }

  static peel::Property<bool>
  prop_network_available ()
  {
    return peel::Property<bool> { "network-available" };
  }

  static peel::Property<bool>
  prop_network_metered ()
  {
    return peel::Property<bool> { "network-metered" };
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_can_reach (SocketConnectable *connectable, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GNetworkMonitorInterface *_peel_iface = reinterpret_cast<::GNetworkMonitorInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<NetworkMonitor> ())->peek_parent ());
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    ::GSocketConnectable *_peel_connectable = reinterpret_cast<::GSocketConnectable *> (connectable);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->can_reach (_peel_this, _peel_connectable, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_can_reach (SocketConnectable *connectable, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GNetworkMonitorInterface *_peel_iface = reinterpret_cast<::GNetworkMonitorInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<NetworkMonitor> ()));
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    ::GSocketConnectable *_peel_connectable = reinterpret_cast<::GSocketConnectable *> (connectable);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->can_reach (_peel_this, _peel_connectable, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_can_reach_async (SocketConnectable *connectable, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GNetworkMonitorInterface *_peel_iface = reinterpret_cast<::GNetworkMonitorInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<NetworkMonitor> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    ::GSocketConnectable *_peel_connectable = reinterpret_cast<::GSocketConnectable *> (connectable);
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
    _peel_iface->can_reach_async (_peel_this, _peel_connectable, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  default_vfunc_can_reach_async (SocketConnectable *connectable, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GNetworkMonitorInterface *_peel_iface = reinterpret_cast<::GNetworkMonitorInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<NetworkMonitor> ()));
    gpointer _peel_user_data;
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    ::GSocketConnectable *_peel_connectable = reinterpret_cast<::GSocketConnectable *> (connectable);
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
    _peel_iface->can_reach_async (_peel_this, _peel_connectable, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_can_reach_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GNetworkMonitorInterface *_peel_iface = reinterpret_cast<::GNetworkMonitorInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<NetworkMonitor> ())->peek_parent ());
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->can_reach_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_can_reach_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GNetworkMonitorInterface *_peel_iface = reinterpret_cast<::GNetworkMonitorInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<NetworkMonitor> ()));
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->can_reach_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_network_changed (bool network_available) noexcept
  {
    ::GNetworkMonitorInterface *_peel_iface = reinterpret_cast<::GNetworkMonitorInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<NetworkMonitor> ())->peek_parent ());
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    gboolean _peel_network_available = static_cast<gboolean> (network_available);
    _peel_iface->network_changed (_peel_this, _peel_network_available);
  }

  void
  default_vfunc_network_changed (bool network_available) noexcept
  {
    ::GNetworkMonitorInterface *_peel_iface = reinterpret_cast<::GNetworkMonitorInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<NetworkMonitor> ()));
    ::GNetworkMonitor *_peel_this = reinterpret_cast<::GNetworkMonitor *> (this);
    gboolean _peel_network_available = static_cast<gboolean> (network_available);
    _peel_iface->network_changed (_peel_this, _peel_network_available);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GNetworkMonitorInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_can_reach ()
    {
      ::GNetworkMonitorInterface *klass = reinterpret_cast<::GNetworkMonitorInterface *> (this);
      klass->can_reach = +[] (::GNetworkMonitor *monitor, ::GSocketConnectable *connectable, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (monitor);
        SocketConnectable *_peel_connectable = reinterpret_cast<SocketConnectable *> (connectable);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_reach (_peel_connectable, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: can_reach_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_can_reach_finish ()
    {
      ::GNetworkMonitorInterface *klass = reinterpret_cast<::GNetworkMonitorInterface *> (this);
      klass->can_reach_finish = +[] (::GNetworkMonitor *monitor, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (monitor);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_reach_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_network_changed ()
    {
      ::GNetworkMonitorInterface *klass = reinterpret_cast<::GNetworkMonitorInterface *> (this);
      klass->network_changed = +[] (::GNetworkMonitor *monitor, gboolean network_available) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (monitor);
        bool _peel_network_available = !!network_available;
        _peel_this->DerivedClass::vfunc_network_changed (_peel_network_available);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GNetworkMonitorInterface),
                 "NetworkMonitor::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GNetworkMonitorInterface),
                 "NetworkMonitor::Iface align mismatch");
}; /* interface NetworkMonitor */
static_assert (sizeof (NetworkMonitor) == sizeof (Initable),
               "NetworkMonitor size mismatch");
static_assert (alignof (NetworkMonitor) == alignof (Initable),
               "NetworkMonitor align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
