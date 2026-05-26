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
class Permission;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Permission> ()
{
  return g_permission_get_type ();
}


namespace Gio
{
class Permission : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GPermission) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Permission () = delete;
  Permission (const Permission &) = delete;
  Permission (Permission &&) = delete;
  Permission &
  operator = (const Permission &) = delete;
  Permission &
  operator = (Permission &&) = delete;
protected:
  ~Permission () = default;
public:

  bool
  acquire (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_permission_acquire (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  acquire_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
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
    g_permission_acquire_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  acquire_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_permission_acquire_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  get_allowed () noexcept
  {
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
    gboolean _peel_return = g_permission_get_allowed (_peel_this);
    return !!_peel_return;
  }

  bool
  get_can_acquire () noexcept
  {
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
    gboolean _peel_return = g_permission_get_can_acquire (_peel_this);
    return !!_peel_return;
  }

  bool
  get_can_release () noexcept
  {
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
    gboolean _peel_return = g_permission_get_can_release (_peel_this);
    return !!_peel_return;
  }

  void
  impl_update (bool allowed, bool can_acquire, bool can_release) noexcept
  {
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
    gboolean _peel_allowed = static_cast<gboolean> (allowed);
    gboolean _peel_can_acquire = static_cast<gboolean> (can_acquire);
    gboolean _peel_can_release = static_cast<gboolean> (can_release);
    g_permission_impl_update (_peel_this, _peel_allowed, _peel_can_acquire, _peel_can_release);
  }

  bool
  release (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_permission_release (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  release_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
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
    g_permission_release_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  release_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_permission_release_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  static peel::Property<bool>
  prop_allowed ()
  {
    return peel::Property<bool> { "allowed" };
  }

  static peel::Property<bool>
  prop_can_acquire ()
  {
    return peel::Property<bool> { "can-acquire" };
  }

  static peel::Property<bool>
  prop_can_release ()
  {
    return peel::Property<bool> { "can-release" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Permission> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_acquire (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPermissionClass *_peel_class = reinterpret_cast<::GPermissionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->acquire (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_acquire_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GPermissionClass *_peel_class = reinterpret_cast<::GPermissionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
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
    _peel_class->acquire_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_acquire_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPermissionClass *_peel_class = reinterpret_cast<::GPermissionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->acquire_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_release (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPermissionClass *_peel_class = reinterpret_cast<::GPermissionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->release (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_release_async (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GPermissionClass *_peel_class = reinterpret_cast<::GPermissionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
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
    _peel_class->release_async (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_release_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPermissionClass *_peel_class = reinterpret_cast<::GPermissionClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GPermission *_peel_this = reinterpret_cast<::GPermission *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->release_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GPermissionClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_acquire ()
    {
      ::GPermissionClass *klass = reinterpret_cast<::GPermissionClass *> (this);
      klass->acquire = +[] (::GPermission *permission, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (permission);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_acquire (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: acquire_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_acquire_finish ()
    {
      ::GPermissionClass *klass = reinterpret_cast<::GPermissionClass *> (this);
      klass->acquire_finish = +[] (::GPermission *permission, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (permission);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_acquire_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_release ()
    {
      ::GPermissionClass *klass = reinterpret_cast<::GPermissionClass *> (this);
      klass->release = +[] (::GPermission *permission, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (permission);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_release (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: release_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_release_finish ()
    {
      ::GPermissionClass *klass = reinterpret_cast<::GPermissionClass *> (this);
      klass->release_finish = +[] (::GPermission *permission, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (permission);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_release_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GPermissionClass),
                 "Permission::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GPermissionClass),
                 "Permission::Class align mismatch");
}; /* class Permission */

static_assert (sizeof (Permission) == sizeof (::GPermission),
               "Permission size mismatch");
static_assert (alignof (Permission) == alignof (::GPermission),
               "Permission align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
