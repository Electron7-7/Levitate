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

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
class /* record */ Variant;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class InetAddress;
class Resolver;
enum class ResolverRecordType : std::underlying_type<::GResolverRecordType>::type;
class /* record */ SrvTarget;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Resolver> ()
{
  return g_resolver_get_type ();
}


namespace Gio
{
class Resolver : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GResolver) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Resolver () = delete;
  Resolver (const Resolver &) = delete;
  Resolver (Resolver &&) = delete;
  Resolver &
  operator = (const Resolver &) = delete;
  Resolver &
  operator = (Resolver &&) = delete;
protected:
  ~Resolver () = default;
public:
  enum class NameLookupFlags : std::underlying_type<::GResolverNameLookupFlags>::type;

  static void
  free_addresses (GLib::ListRef<void * const> addresses) noexcept
  {
    GList *_peel_addresses = addresses.raw_list ();
    g_resolver_free_addresses (_peel_addresses);
  }

  static void
  free_targets (GLib::ListRef<void * const> targets) noexcept
  {
    GList *_peel_targets = targets.raw_list ();
    g_resolver_free_targets (_peel_targets);
  }

  static peel::RefPtr<Resolver>
  get_default () noexcept
  {
    ::GResolver *_peel_return = g_resolver_get_default ();
    peel_assume (_peel_return);
    return peel::RefPtr<Resolver>::adopt_ref (reinterpret_cast<Resolver *> (_peel_return));
  }

  unsigned
  get_timeout () noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    return g_resolver_get_timeout (_peel_this);
  }

  peel_nonnull_args (2)
  peel::String
  lookup_by_address (InetAddress *address, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GInetAddress *_peel_address = reinterpret_cast<::GInetAddress *> (address);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_resolver_lookup_by_address (_peel_this, _peel_address, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  lookup_by_address_async (InetAddress *address, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GInetAddress *_peel_address = reinterpret_cast<::GInetAddress *> (address);
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
    g_resolver_lookup_by_address_async (_peel_this, _peel_address, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::String
  lookup_by_address_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_resolver_lookup_by_address_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<InetAddress>>
  lookup_by_name (const char *hostname, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = g_resolver_lookup_by_name (_peel_this, hostname, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<InetAddress>>::adopt_list (_peel_return);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  lookup_by_name_async (const char *hostname, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
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
    g_resolver_lookup_by_name_async (_peel_this, hostname, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<InetAddress>>
  lookup_by_name_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = g_resolver_lookup_by_name_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<InetAddress>>::adopt_list (_peel_return);
  }

  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<InetAddress>>
  lookup_by_name_with_flags (const char *hostname, Resolver::NameLookupFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GResolverNameLookupFlags _peel_flags = static_cast<::GResolverNameLookupFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = g_resolver_lookup_by_name_with_flags (_peel_this, hostname, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<InetAddress>>::adopt_list (_peel_return);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  lookup_by_name_with_flags_async (const char *hostname, Resolver::NameLookupFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GResolverNameLookupFlags _peel_flags = static_cast<::GResolverNameLookupFlags> (flags);
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
    g_resolver_lookup_by_name_with_flags_async (_peel_this, hostname, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<InetAddress>>
  lookup_by_name_with_flags_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = g_resolver_lookup_by_name_with_flags_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<InetAddress>>::adopt_list (_peel_return);
  }

  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<GLib::Variant>>
  lookup_records (const char *rrname, ResolverRecordType record_type, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GResolverRecordType _peel_record_type = static_cast<::GResolverRecordType> (record_type);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = g_resolver_lookup_records (_peel_this, rrname, _peel_record_type, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<GLib::Variant>>::adopt_list (_peel_return);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  lookup_records_async (const char *rrname, ResolverRecordType record_type, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GResolverRecordType _peel_record_type = static_cast<::GResolverRecordType> (record_type);
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
    g_resolver_lookup_records_async (_peel_this, rrname, _peel_record_type, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<GLib::Variant>>
  lookup_records_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = g_resolver_lookup_records_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<GLib::Variant>>::adopt_list (_peel_return);
  }

  peel_nonnull_args (2, 3, 4)
  GLib::List<peel::UniquePtr<SrvTarget>>
  lookup_service (const char *service, const char *protocol, const char *domain, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = g_resolver_lookup_service (_peel_this, service, protocol, domain, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::UniquePtr<SrvTarget>>::adopt_list (_peel_return);
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2, 3, 4)
  void
  lookup_service_async (const char *service, const char *protocol, const char *domain, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
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
    g_resolver_lookup_service_async (_peel_this, service, protocol, domain, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  GLib::List<peel::UniquePtr<SrvTarget>>
  lookup_service_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = g_resolver_lookup_service_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::UniquePtr<SrvTarget>>::adopt_list (_peel_return);
  }

  void
  set_default () noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    g_resolver_set_default (_peel_this);
  }

  void
  set_timeout (unsigned timeout_ms) noexcept
  {
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    g_resolver_set_timeout (_peel_this, timeout_ms);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_reload (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Resolver, void ()>::_peel_connect_by_name (this, "reload", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_reload (HandlerObject *object, void (HandlerObject::*handler_method) (Resolver *), bool after = false) noexcept
  {
    return Signal<Resolver, void ()>::_peel_connect_by_name (this, "reload", object, handler_method, after);
  }

  static peel::Property<unsigned>
  prop_timeout ()
  {
    return peel::Property<unsigned> { "timeout" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Resolver> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::String
  parent_vfunc_lookup_by_address (InetAddress *address, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GInetAddress *_peel_address = reinterpret_cast<::GInetAddress *> (address);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = _peel_class->lookup_by_address (_peel_this, _peel_address, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_lookup_by_address_async (InetAddress *address, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GInetAddress *_peel_address = reinterpret_cast<::GInetAddress *> (address);
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
    _peel_class->lookup_by_address_async (_peel_this, _peel_address, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::String
  parent_vfunc_lookup_by_address_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = _peel_class->lookup_by_address_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<InetAddress>>
  parent_vfunc_lookup_by_name (const char *hostname, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = _peel_class->lookup_by_name (_peel_this, hostname, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<InetAddress>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_lookup_by_name_async (const char *hostname, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
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
    _peel_class->lookup_by_name_async (_peel_this, hostname, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<InetAddress>>
  parent_vfunc_lookup_by_name_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = _peel_class->lookup_by_name_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<InetAddress>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<InetAddress>>
  parent_vfunc_lookup_by_name_with_flags (const char *hostname, Resolver::NameLookupFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GResolverNameLookupFlags _peel_flags = static_cast<::GResolverNameLookupFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = _peel_class->lookup_by_name_with_flags (_peel_this, hostname, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<InetAddress>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_lookup_by_name_with_flags_async (const char *hostname, Resolver::NameLookupFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GResolverNameLookupFlags _peel_flags = static_cast<::GResolverNameLookupFlags> (flags);
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
    _peel_class->lookup_by_name_with_flags_async (_peel_this, hostname, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<InetAddress>>
  parent_vfunc_lookup_by_name_with_flags_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = _peel_class->lookup_by_name_with_flags_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<InetAddress>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<GLib::Variant>>
  parent_vfunc_lookup_records (const char *rrname, ResolverRecordType record_type, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GResolverRecordType _peel_record_type = static_cast<::GResolverRecordType> (record_type);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = _peel_class->lookup_records (_peel_this, rrname, _peel_record_type, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<GLib::Variant>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_lookup_records_async (const char *rrname, ResolverRecordType record_type, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GResolverRecordType _peel_record_type = static_cast<::GResolverRecordType> (record_type);
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
    _peel_class->lookup_records_async (_peel_this, rrname, _peel_record_type, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<GLib::Variant>>
  parent_vfunc_lookup_records_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = _peel_class->lookup_records_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<GLib::Variant>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  GLib::ListRef<void * const>
  parent_vfunc_lookup_service (const char *rrname, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = _peel_class->lookup_service (_peel_this, rrname, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::ListRef<void * const>::from_raw_list (_peel_return);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_lookup_service_async (const char *rrname, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
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
    _peel_class->lookup_service_async (_peel_this, rrname, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  GLib::List<peel::UniquePtr<SrvTarget>>
  parent_vfunc_lookup_service_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = _peel_class->lookup_service_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::UniquePtr<SrvTarget>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_reload () noexcept
  {
    ::GResolverClass *_peel_class = reinterpret_cast<::GResolverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GResolver *_peel_this = reinterpret_cast<::GResolver *> (this);
    _peel_class->reload (_peel_this);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GResolverClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_lookup_by_address ()
    {
      ::GResolverClass *klass = reinterpret_cast<::GResolverClass *> (this);
      klass->lookup_by_address = +[] (::GResolver *resolver, ::GInetAddress *address, ::GCancellable *cancellable, ::GError **error) -> gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        InetAddress *_peel_address = reinterpret_cast<InetAddress *> (address);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_lookup_by_address (_peel_address, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return std::move (_peel_return).release_string ();
      };
    }

    /* Unsupported for now: lookup_by_address_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_lookup_by_address_finish ()
    {
      ::GResolverClass *klass = reinterpret_cast<::GResolverClass *> (this);
      klass->lookup_by_address_finish = +[] (::GResolver *resolver, ::GAsyncResult *result, ::GError **error) -> gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_lookup_by_address_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_lookup_by_name ()
    {
      ::GResolverClass *klass = reinterpret_cast<::GResolverClass *> (this);
      klass->lookup_by_name = +[] (::GResolver *resolver, const gchar *hostname, ::GCancellable *cancellable, ::GError **error) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        GLib::List<peel::RefPtr<InetAddress>> _peel_return = _peel_this->DerivedClass::vfunc_lookup_by_name (hostname, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return std::move (_peel_return).release_list ();
      };
    }

    /* Unsupported for now: lookup_by_name_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_lookup_by_name_finish ()
    {
      ::GResolverClass *klass = reinterpret_cast<::GResolverClass *> (this);
      klass->lookup_by_name_finish = +[] (::GResolver *resolver, ::GAsyncResult *result, ::GError **error) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        GLib::List<peel::RefPtr<InetAddress>> _peel_return = _peel_this->DerivedClass::vfunc_lookup_by_name_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return std::move (_peel_return).release_list ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_lookup_by_name_with_flags ()
    {
      ::GResolverClass *klass = reinterpret_cast<::GResolverClass *> (this);
      klass->lookup_by_name_with_flags = +[] (::GResolver *resolver, const gchar *hostname, ::GResolverNameLookupFlags flags, ::GCancellable *cancellable, ::GError **error) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        Resolver::NameLookupFlags _peel_flags = static_cast<Resolver::NameLookupFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        GLib::List<peel::RefPtr<InetAddress>> _peel_return = _peel_this->DerivedClass::vfunc_lookup_by_name_with_flags (hostname, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return std::move (_peel_return).release_list ();
      };
    }

    /* Unsupported for now: lookup_by_name_with_flags_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_lookup_by_name_with_flags_finish ()
    {
      ::GResolverClass *klass = reinterpret_cast<::GResolverClass *> (this);
      klass->lookup_by_name_with_flags_finish = +[] (::GResolver *resolver, ::GAsyncResult *result, ::GError **error) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        GLib::List<peel::RefPtr<InetAddress>> _peel_return = _peel_this->DerivedClass::vfunc_lookup_by_name_with_flags_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return std::move (_peel_return).release_list ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_lookup_records ()
    {
      ::GResolverClass *klass = reinterpret_cast<::GResolverClass *> (this);
      klass->lookup_records = +[] (::GResolver *resolver, const gchar *rrname, ::GResolverRecordType record_type, ::GCancellable *cancellable, ::GError **error) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        ResolverRecordType _peel_record_type = static_cast<ResolverRecordType> (record_type);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        GLib::List<peel::RefPtr<GLib::Variant>> _peel_return = _peel_this->DerivedClass::vfunc_lookup_records (rrname, _peel_record_type, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return std::move (_peel_return).release_list ();
      };
    }

    /* Unsupported for now: lookup_records_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_lookup_records_finish ()
    {
      ::GResolverClass *klass = reinterpret_cast<::GResolverClass *> (this);
      klass->lookup_records_finish = +[] (::GResolver *resolver, ::GAsyncResult *result, ::GError **error) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        GLib::List<peel::RefPtr<GLib::Variant>> _peel_return = _peel_this->DerivedClass::vfunc_lookup_records_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return std::move (_peel_return).release_list ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_lookup_service ()
    {
      ::GResolverClass *klass = reinterpret_cast<::GResolverClass *> (this);
      klass->lookup_service = +[] (::GResolver *resolver, const gchar *rrname, ::GCancellable *cancellable, ::GError **error) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        GLib::ListRef<void * const> _peel_return = _peel_this->DerivedClass::vfunc_lookup_service (rrname, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return.raw_list ();
      };
    }

    /* Unsupported for now: lookup_service_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_lookup_service_finish ()
    {
      ::GResolverClass *klass = reinterpret_cast<::GResolverClass *> (this);
      klass->lookup_service_finish = +[] (::GResolver *resolver, ::GAsyncResult *result, ::GError **error) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        GLib::List<peel::UniquePtr<SrvTarget>> _peel_return = _peel_this->DerivedClass::vfunc_lookup_service_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return std::move (_peel_return).release_list ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_reload ()
    {
      ::GResolverClass *klass = reinterpret_cast<::GResolverClass *> (this);
      klass->reload = +[] (::GResolver *resolver) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (resolver);
        _peel_this->DerivedClass::vfunc_reload ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GResolverClass),
                 "Resolver::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GResolverClass),
                 "Resolver::Class align mismatch");
}; /* class Resolver */

static_assert (sizeof (Resolver) == sizeof (::GResolver),
               "Resolver size mismatch");
static_assert (alignof (Resolver) == alignof (::GResolver),
               "Resolver align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Variant.h>
#include <peel/Gio/InetAddress.h>
#include <peel/Gio/SrvTarget.h>
