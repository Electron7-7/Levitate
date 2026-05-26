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
class /* interface */ Drive;
class /* interface */ File;
class /* interface */ Icon;
class /* interface */ Mount;
class MountOperation;
class /* interface */ Volume;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Mount> ()
{
  return g_mount_get_type ();
}


namespace Gio
{
class /* interface */ Mount : public GObject::Object
/* requires GObject::Object */
{
private:
  Mount () = delete;
  Mount (const Mount &) = delete;
  Mount (Mount &&) = delete;

  Mount &
  operator = (const Mount &) = delete;
  Mount &
  operator = (Mount &&) = delete;

protected:
  ~Mount () = default;

public:
  enum class MountFlags : std::underlying_type<::GMountMountFlags>::type;
  enum class UnmountFlags : std::underlying_type<::GMountUnmountFlags>::type;

  bool
  can_eject () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_return = g_mount_can_eject (_peel_this);
    return !!_peel_return;
  }

  bool
  can_unmount () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_return = g_mount_can_unmount (_peel_this);
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  eject (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
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
    g_mount_eject (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  eject_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_mount_eject_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  eject_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    g_mount_eject_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  eject_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_mount_eject_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<File>
  get_default_location () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GFile *_peel_return = g_mount_get_default_location (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel::RefPtr<Drive>
  get_drive () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GDrive *_peel_return = g_mount_get_drive (_peel_this);
    return peel::RefPtr<Drive>::adopt_ref (reinterpret_cast<Drive *> (_peel_return));
  }

  peel::RefPtr<Icon>
  get_icon () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GIcon *_peel_return = g_mount_get_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  peel::String
  get_name () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    char *_peel_return = g_mount_get_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::RefPtr<File>
  get_root () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GFile *_peel_return = g_mount_get_root (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  const char *
  get_sort_key () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    return g_mount_get_sort_key (_peel_this);
  }

  peel::RefPtr<Icon>
  get_symbolic_icon () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GIcon *_peel_return = g_mount_get_symbolic_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  peel::String
  get_uuid () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    char *_peel_return = g_mount_get_uuid (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::RefPtr<Volume>
  get_volume () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GVolume *_peel_return = g_mount_get_volume (_peel_this);
    return peel::RefPtr<Volume>::adopt_ref (reinterpret_cast<Volume *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  guess_content_type (bool force_rescan, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_force_rescan = static_cast<gboolean> (force_rescan);
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
    g_mount_guess_content_type (_peel_this, _peel_force_rescan, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::Strv
  guess_content_type_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = g_mount_guess_content_type_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::Strv
  guess_content_type_sync (bool force_rescan, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_force_rescan = static_cast<gboolean> (force_rescan);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = g_mount_guess_content_type_sync (_peel_this, _peel_force_rescan, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  bool
  is_shadowed () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_return = g_mount_is_shadowed (_peel_this);
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  remount (Mount::MountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountMountFlags _peel_flags = static_cast<::GMountMountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    g_mount_remount (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  remount_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_mount_remount_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  shadow () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    g_mount_shadow (_peel_this);
  }

  template<typename AsyncReadyCallback>
  void
  unmount (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
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
    g_mount_unmount (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  unmount_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_mount_unmount_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  unmount_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    g_mount_unmount_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  unmount_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_mount_unmount_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  unshadow () noexcept
  {
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    g_mount_unshadow (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Mount, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Mount *), bool after = false) noexcept
  {
    return Signal<Mount, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_pre_unmount (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Mount, void ()>::_peel_connect_by_name (this, "pre-unmount", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_pre_unmount (HandlerObject *object, void (HandlerObject::*handler_method) (Mount *), bool after = false) noexcept
  {
    return Signal<Mount, void ()>::_peel_connect_by_name (this, "pre-unmount", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_unmounted (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Mount, void ()>::_peel_connect_by_name (this, "unmounted", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_unmounted (HandlerObject *object, void (HandlerObject::*handler_method) (Mount *), bool after = false) noexcept
  {
    return Signal<Mount, void ()>::_peel_connect_by_name (this, "unmounted", object, handler_method, after);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_eject () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_return = _peel_iface->can_eject (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_eject () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_return = _peel_iface->can_eject (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_unmount () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_return = _peel_iface->can_unmount (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_unmount () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_return = _peel_iface->can_unmount (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_changed () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    _peel_iface->changed (_peel_this);
  }

  void
  default_vfunc_changed () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    _peel_iface->changed (_peel_this);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_eject (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
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
    _peel_iface->eject (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_eject (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
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
    _peel_iface->eject (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_eject_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->eject_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_eject_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->eject_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_eject_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->eject_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_eject_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->eject_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_eject_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->eject_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_eject_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->eject_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<File>
  parent_vfunc_get_default_location () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GFile *_peel_return = _peel_iface->get_default_location (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel::RefPtr<File>
  default_vfunc_get_default_location () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GFile *_peel_return = _peel_iface->get_default_location (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<Drive>
  parent_vfunc_get_drive () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GDrive *_peel_return = _peel_iface->get_drive (_peel_this);
    return peel::RefPtr<Drive>::adopt_ref (reinterpret_cast<Drive *> (_peel_return));
  }

  peel::RefPtr<Drive>
  default_vfunc_get_drive () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GDrive *_peel_return = _peel_iface->get_drive (_peel_this);
    return peel::RefPtr<Drive>::adopt_ref (reinterpret_cast<Drive *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<Icon>
  parent_vfunc_get_icon () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GIcon *_peel_return = _peel_iface->get_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  peel::RefPtr<Icon>
  default_vfunc_get_icon () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GIcon *_peel_return = _peel_iface->get_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_name () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    char *_peel_return = _peel_iface->get_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  default_vfunc_get_name () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    char *_peel_return = _peel_iface->get_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel::RefPtr<File>
  parent_vfunc_get_root () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GFile *_peel_return = _peel_iface->get_root (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel::RefPtr<File>
  default_vfunc_get_root () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GFile *_peel_return = _peel_iface->get_root (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename DerivedClass>
  const char *
  parent_vfunc_get_sort_key () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    return _peel_iface->get_sort_key (_peel_this);
  }

  const char *
  default_vfunc_get_sort_key () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    return _peel_iface->get_sort_key (_peel_this);
  }

  template<typename DerivedClass>
  peel::RefPtr<Icon>
  parent_vfunc_get_symbolic_icon () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GIcon *_peel_return = _peel_iface->get_symbolic_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  peel::RefPtr<Icon>
  default_vfunc_get_symbolic_icon () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GIcon *_peel_return = _peel_iface->get_symbolic_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_uuid () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    char *_peel_return = _peel_iface->get_uuid (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  default_vfunc_get_uuid () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    char *_peel_return = _peel_iface->get_uuid (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel::RefPtr<Volume>
  parent_vfunc_get_volume () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GVolume *_peel_return = _peel_iface->get_volume (_peel_this);
    return peel::RefPtr<Volume>::adopt_ref (reinterpret_cast<Volume *> (_peel_return));
  }

  peel::RefPtr<Volume>
  default_vfunc_get_volume () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GVolume *_peel_return = _peel_iface->get_volume (_peel_this);
    return peel::RefPtr<Volume>::adopt_ref (reinterpret_cast<Volume *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_guess_content_type (bool force_rescan, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_force_rescan = static_cast<gboolean> (force_rescan);
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
    _peel_iface->guess_content_type (_peel_this, _peel_force_rescan, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_guess_content_type (bool force_rescan, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_force_rescan = static_cast<gboolean> (force_rescan);
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
    _peel_iface->guess_content_type (_peel_this, _peel_force_rescan, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::Strv
  parent_vfunc_guess_content_type_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = _peel_iface->guess_content_type_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::Strv
  default_vfunc_guess_content_type_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = _peel_iface->guess_content_type_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::Strv
  parent_vfunc_guess_content_type_sync (bool force_rescan, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_force_rescan = static_cast<gboolean> (force_rescan);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = _peel_iface->guess_content_type_sync (_peel_this, _peel_force_rescan, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::Strv
  default_vfunc_guess_content_type_sync (bool force_rescan, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    gboolean _peel_force_rescan = static_cast<gboolean> (force_rescan);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = _peel_iface->guess_content_type_sync (_peel_this, _peel_force_rescan, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  template<typename DerivedClass>
  void
  parent_vfunc_pre_unmount () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    _peel_iface->pre_unmount (_peel_this);
  }

  void
  default_vfunc_pre_unmount () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    _peel_iface->pre_unmount (_peel_this);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_remount (Mount::MountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountMountFlags _peel_flags = static_cast<::GMountMountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->remount (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_remount (Mount::MountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountMountFlags _peel_flags = static_cast<::GMountMountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->remount (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_remount_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->remount_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_remount_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->remount_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_unmount (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
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
    _peel_iface->unmount (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_unmount (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
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
    _peel_iface->unmount (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_unmount_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->unmount_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_unmount_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->unmount_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_unmount_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->unmount_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_unmount_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    gpointer _peel_user_data;
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GMountUnmountFlags _peel_flags = static_cast<::GMountUnmountFlags> (flags);
    ::GMountOperation *_peel_mount_operation = reinterpret_cast<::GMountOperation *> (mount_operation);
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
    _peel_iface->unmount_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_unmount_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->unmount_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_unmount_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->unmount_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_unmounted () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Mount> ())->peek_parent ());
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    _peel_iface->unmounted (_peel_this);
  }

  void
  default_vfunc_unmounted () noexcept
  {
    ::GMountIface *_peel_iface = reinterpret_cast<::GMountIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Mount> ()));
    ::GMount *_peel_this = reinterpret_cast<::GMount *> (this);
    _peel_iface->unmounted (_peel_this);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GMountIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_can_eject ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->can_eject = +[] (::GMount *mount) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_eject ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_can_unmount ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->can_unmount = +[] (::GMount *mount) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_unmount ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->changed = +[] (::GMount *mount) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        _peel_this->DerivedClass::vfunc_changed ();
      };
    }

    /* Unsupported for now: eject: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_eject_finish ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->eject_finish = +[] (::GMount *mount, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_eject_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: eject_with_operation: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_eject_with_operation_finish ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->eject_with_operation_finish = +[] (::GMount *mount, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_eject_with_operation_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_default_location ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->get_default_location = +[] (::GMount *mount) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_get_default_location ();
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_drive ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->get_drive = +[] (::GMount *mount) -> ::GDrive *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        peel::RefPtr<Drive> _peel_return = _peel_this->DerivedClass::vfunc_get_drive ();
        return reinterpret_cast<::GDrive *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_icon ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->get_icon = +[] (::GMount *mount) -> ::GIcon *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        peel::RefPtr<Icon> _peel_return = _peel_this->DerivedClass::vfunc_get_icon ();
        return reinterpret_cast<::GIcon *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_name ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->get_name = +[] (::GMount *mount) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_name ();
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_root ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->get_root = +[] (::GMount *mount) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_get_root ();
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_sort_key ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->get_sort_key = +[] (::GMount *mount) -> const gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        return _peel_this->DerivedClass::vfunc_get_sort_key ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_symbolic_icon ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->get_symbolic_icon = +[] (::GMount *mount) -> ::GIcon *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        peel::RefPtr<Icon> _peel_return = _peel_this->DerivedClass::vfunc_get_symbolic_icon ();
        return reinterpret_cast<::GIcon *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_uuid ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->get_uuid = +[] (::GMount *mount) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_uuid ();
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_volume ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->get_volume = +[] (::GMount *mount) -> ::GVolume *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        peel::RefPtr<Volume> _peel_return = _peel_this->DerivedClass::vfunc_get_volume ();
        return reinterpret_cast<::GVolume *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: guess_content_type: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_guess_content_type_finish ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->guess_content_type_finish = +[] (::GMount *mount, ::GAsyncResult *result, ::GError **error) -> gchar **
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::Strv _peel_return = _peel_this->DerivedClass::vfunc_guess_content_type_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<gchar **> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_guess_content_type_sync ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->guess_content_type_sync = +[] (::GMount *mount, gboolean force_rescan, ::GCancellable *cancellable, ::GError **error) -> gchar **
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        bool _peel_force_rescan = !!force_rescan;
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::Strv _peel_return = _peel_this->DerivedClass::vfunc_guess_content_type_sync (_peel_force_rescan, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<gchar **> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_pre_unmount ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->pre_unmount = +[] (::GMount *mount) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        _peel_this->DerivedClass::vfunc_pre_unmount ();
      };
    }

    /* Unsupported for now: remount: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_remount_finish ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->remount_finish = +[] (::GMount *mount, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_remount_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: unmount: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_unmount_finish ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->unmount_finish = +[] (::GMount *mount, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_unmount_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: unmount_with_operation: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_unmount_with_operation_finish ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->unmount_with_operation_finish = +[] (::GMount *mount, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_unmount_with_operation_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_unmounted ()
    {
      ::GMountIface *klass = reinterpret_cast<::GMountIface *> (this);
      klass->unmounted = +[] (::GMount *mount) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (mount);
        _peel_this->DerivedClass::vfunc_unmounted ();
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GMountIface),
                 "Mount::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GMountIface),
                 "Mount::Iface align mismatch");
}; /* interface Mount */
static_assert (sizeof (Mount) == sizeof (GObject::Object),
               "Mount size mismatch");
static_assert (alignof (Mount) == alignof (GObject::Object),
               "Mount align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/Drive.h>
#include <peel/Gio/File.h>
#include <peel/Gio/Icon.h>
#include <peel/Gio/Volume.h>
