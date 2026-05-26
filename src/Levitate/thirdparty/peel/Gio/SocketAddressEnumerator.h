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
class SocketAddress;
class SocketAddressEnumerator;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SocketAddressEnumerator> ()
{
  return g_socket_address_enumerator_get_type ();
}


namespace Gio
{
class SocketAddressEnumerator : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SocketAddressEnumerator () = delete;
  SocketAddressEnumerator (const SocketAddressEnumerator &) = delete;
  SocketAddressEnumerator (SocketAddressEnumerator &&) = delete;
  SocketAddressEnumerator &
  operator = (const SocketAddressEnumerator &) = delete;
  SocketAddressEnumerator &
  operator = (SocketAddressEnumerator &&) = delete;
protected:
  ~SocketAddressEnumerator () = default;
public:

  peel::RefPtr<SocketAddress>
  next (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketAddressEnumerator *_peel_this = reinterpret_cast<::GSocketAddressEnumerator *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GSocketAddress *_peel_return = g_socket_address_enumerator_next (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  next_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GSocketAddressEnumerator *_peel_this = reinterpret_cast<::GSocketAddressEnumerator *> (this);
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
    g_socket_address_enumerator_next_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<SocketAddress>
  next_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketAddressEnumerator *_peel_this = reinterpret_cast<::GSocketAddressEnumerator *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GSocketAddress *_peel_return = g_socket_address_enumerator_next_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_return));
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<SocketAddressEnumerator> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel::RefPtr<SocketAddress>
  parent_vfunc_next (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketAddressEnumeratorClass *_peel_class = reinterpret_cast<::GSocketAddressEnumeratorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketAddressEnumerator *_peel_this = reinterpret_cast<::GSocketAddressEnumerator *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GSocketAddress *_peel_return = _peel_class->next (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_next_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GSocketAddressEnumeratorClass *_peel_class = reinterpret_cast<::GSocketAddressEnumeratorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GSocketAddressEnumerator *_peel_this = reinterpret_cast<::GSocketAddressEnumerator *> (this);
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
    _peel_class->next_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<SocketAddress>
  parent_vfunc_next_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSocketAddressEnumeratorClass *_peel_class = reinterpret_cast<::GSocketAddressEnumeratorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketAddressEnumerator *_peel_this = reinterpret_cast<::GSocketAddressEnumerator *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GSocketAddress *_peel_return = _peel_class->next_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<SocketAddress>::adopt_ref (reinterpret_cast<SocketAddress *> (_peel_return));
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GSocketAddressEnumeratorClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_next ()
    {
      ::GSocketAddressEnumeratorClass *klass = reinterpret_cast<::GSocketAddressEnumeratorClass *> (this);
      klass->next = +[] (::GSocketAddressEnumerator *enumerator, ::GCancellable *cancellable, ::GError **error) -> ::GSocketAddress *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (enumerator);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<SocketAddress> _peel_return = _peel_this->DerivedClass::vfunc_next (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GSocketAddress *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: next_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_next_finish ()
    {
      ::GSocketAddressEnumeratorClass *klass = reinterpret_cast<::GSocketAddressEnumeratorClass *> (this);
      klass->next_finish = +[] (::GSocketAddressEnumerator *enumerator, ::GAsyncResult *result, ::GError **error) -> ::GSocketAddress *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (enumerator);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<SocketAddress> _peel_return = _peel_this->DerivedClass::vfunc_next_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GSocketAddress *> (std::move (_peel_return).release_ref ());
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GSocketAddressEnumeratorClass),
                 "SocketAddressEnumerator::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GSocketAddressEnumeratorClass),
                 "SocketAddressEnumerator::Class align mismatch");
}; /* class SocketAddressEnumerator */

static_assert (sizeof (SocketAddressEnumerator) == sizeof (::GSocketAddressEnumerator),
               "SocketAddressEnumerator size mismatch");
static_assert (alignof (SocketAddressEnumerator) == alignof (::GSocketAddressEnumerator),
               "SocketAddressEnumerator align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/SocketAddress.h>
