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
class /* interface */ ProxyResolver;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ProxyResolver> ()
{
  return g_proxy_resolver_get_type ();
}


namespace Gio
{
class /* interface */ ProxyResolver : public GObject::Object
/* requires GObject::Object */
{
private:
  ProxyResolver () = delete;
  ProxyResolver (const ProxyResolver &) = delete;
  ProxyResolver (ProxyResolver &&) = delete;

  ProxyResolver &
  operator = (const ProxyResolver &) = delete;
  ProxyResolver &
  operator = (ProxyResolver &&) = delete;

protected:
  ~ProxyResolver () = default;

public:

  peel_returns_nonnull
  static ProxyResolver *
  get_default () noexcept
  {
    ::GProxyResolver *_peel_return = g_proxy_resolver_get_default ();
    peel_assume (_peel_return);
    return reinterpret_cast<ProxyResolver *> (_peel_return);
  }

  bool
  is_supported () noexcept
  {
    ::GProxyResolver *_peel_this = reinterpret_cast<::GProxyResolver *> (this);
    gboolean _peel_return = g_proxy_resolver_is_supported (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::Strv
  lookup (const char *uri, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GProxyResolver *_peel_this = reinterpret_cast<::GProxyResolver *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = g_proxy_resolver_lookup (_peel_this, uri, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  lookup_async (const char *uri, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GProxyResolver *_peel_this = reinterpret_cast<::GProxyResolver *> (this);
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
    g_proxy_resolver_lookup_async (_peel_this, uri, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::Strv
  lookup_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GProxyResolver *_peel_this = reinterpret_cast<::GProxyResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = g_proxy_resolver_lookup_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_supported () noexcept
  {
    ::GProxyResolverInterface *_peel_iface = reinterpret_cast<::GProxyResolverInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ProxyResolver> ())->peek_parent ());
    ::GProxyResolver *_peel_this = reinterpret_cast<::GProxyResolver *> (this);
    gboolean _peel_return = _peel_iface->is_supported (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_is_supported () noexcept
  {
    ::GProxyResolverInterface *_peel_iface = reinterpret_cast<::GProxyResolverInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ProxyResolver> ()));
    ::GProxyResolver *_peel_this = reinterpret_cast<::GProxyResolver *> (this);
    gboolean _peel_return = _peel_iface->is_supported (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::Strv
  parent_vfunc_lookup (const char *uri, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GProxyResolverInterface *_peel_iface = reinterpret_cast<::GProxyResolverInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ProxyResolver> ())->peek_parent ());
    ::GProxyResolver *_peel_this = reinterpret_cast<::GProxyResolver *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = _peel_iface->lookup (_peel_this, uri, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::Strv
  default_vfunc_lookup (const char *uri, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GProxyResolverInterface *_peel_iface = reinterpret_cast<::GProxyResolverInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ProxyResolver> ()));
    ::GProxyResolver *_peel_this = reinterpret_cast<::GProxyResolver *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = _peel_iface->lookup (_peel_this, uri, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_lookup_async (const char *uri, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GProxyResolverInterface *_peel_iface = reinterpret_cast<::GProxyResolverInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ProxyResolver> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GProxyResolver *_peel_this = reinterpret_cast<::GProxyResolver *> (this);
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
    _peel_iface->lookup_async (_peel_this, uri, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  default_vfunc_lookup_async (const char *uri, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GProxyResolverInterface *_peel_iface = reinterpret_cast<::GProxyResolverInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ProxyResolver> ()));
    gpointer _peel_user_data;
    ::GProxyResolver *_peel_this = reinterpret_cast<::GProxyResolver *> (this);
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
    _peel_iface->lookup_async (_peel_this, uri, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::Strv
  parent_vfunc_lookup_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GProxyResolverInterface *_peel_iface = reinterpret_cast<::GProxyResolverInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ProxyResolver> ())->peek_parent ());
    ::GProxyResolver *_peel_this = reinterpret_cast<::GProxyResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = _peel_iface->lookup_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::Strv
  default_vfunc_lookup_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GProxyResolverInterface *_peel_iface = reinterpret_cast<::GProxyResolverInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ProxyResolver> ()));
    ::GProxyResolver *_peel_this = reinterpret_cast<::GProxyResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = _peel_iface->lookup_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GProxyResolverInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_is_supported ()
    {
      ::GProxyResolverInterface *klass = reinterpret_cast<::GProxyResolverInterface *> (this);
      klass->is_supported = +[] (::GProxyResolver *resolver) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_supported ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_lookup ()
    {
      ::GProxyResolverInterface *klass = reinterpret_cast<::GProxyResolverInterface *> (this);
      klass->lookup = +[] (::GProxyResolver *resolver, const gchar *uri, ::GCancellable *cancellable, ::GError **error) -> gchar **
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::Strv _peel_return = _peel_this->DerivedClass::vfunc_lookup (uri, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<gchar **> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: lookup_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_lookup_finish ()
    {
      ::GProxyResolverInterface *klass = reinterpret_cast<::GProxyResolverInterface *> (this);
      klass->lookup_finish = +[] (::GProxyResolver *resolver, ::GAsyncResult *result, ::GError **error) -> gchar **
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::Strv _peel_return = _peel_this->DerivedClass::vfunc_lookup_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<gchar **> (std::move (_peel_return).release_ref ());
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GProxyResolverInterface),
                 "ProxyResolver::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GProxyResolverInterface),
                 "ProxyResolver::Iface align mismatch");
}; /* interface ProxyResolver */
static_assert (sizeof (ProxyResolver) == sizeof (GObject::Object),
               "ProxyResolver size mismatch");
static_assert (alignof (ProxyResolver) == alignof (GObject::Object),
               "ProxyResolver align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
