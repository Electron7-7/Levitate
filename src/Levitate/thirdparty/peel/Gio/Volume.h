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
#include <peel/Gio/Mount.h>

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
GObject::Type::of<Gio::Volume> ()
{
  return g_volume_get_type ();
}


namespace Gio
{
class /* interface */ Volume : public GObject::Object
/* requires GObject::Object */
{
private:
  Volume () = delete;
  Volume (const Volume &) = delete;
  Volume (Volume &&) = delete;

  Volume &
  operator = (const Volume &) = delete;
  Volume &
  operator = (Volume &&) = delete;

protected:
  ~Volume () = default;

public:

  bool
  can_eject () noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    gboolean _peel_return = g_volume_can_eject (_peel_this);
    return !!_peel_return;
  }

  bool
  can_mount () noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    gboolean _peel_return = g_volume_can_mount (_peel_this);
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  eject (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
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
    g_volume_eject (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  eject_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_volume_eject_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  eject_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
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
    g_volume_eject_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  eject_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_volume_eject_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::Strv
  enumerate_identifiers () noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    char **_peel_return = g_volume_enumerate_identifiers (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::RefPtr<File>
  get_activation_root () noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GFile *_peel_return = g_volume_get_activation_root (_peel_this);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel::RefPtr<Drive>
  get_drive () noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GDrive *_peel_return = g_volume_get_drive (_peel_this);
    return peel::RefPtr<Drive>::adopt_ref (reinterpret_cast<Drive *> (_peel_return));
  }

  peel::RefPtr<Icon>
  get_icon () noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GIcon *_peel_return = g_volume_get_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::String
  get_identifier (const char *kind) noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    char *_peel_return = g_volume_get_identifier (_peel_this, kind);
    return peel::String::adopt_string (_peel_return);
  }

  peel::RefPtr<Mount>
  get_mount () noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GMount *_peel_return = g_volume_get_mount (_peel_this);
    return peel::RefPtr<Mount>::adopt_ref (reinterpret_cast<Mount *> (_peel_return));
  }

  peel::String
  get_name () noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    char *_peel_return = g_volume_get_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  const char *
  get_sort_key () noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    return g_volume_get_sort_key (_peel_this);
  }

  peel::RefPtr<Icon>
  get_symbolic_icon () noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GIcon *_peel_return = g_volume_get_symbolic_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  peel::String
  get_uuid () noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    char *_peel_return = g_volume_get_uuid (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename AsyncReadyCallback>
  void
  mount (Mount::MountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
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
    g_volume_mount (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  mount_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_volume_mount_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  should_automount () noexcept
  {
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    gboolean _peel_return = g_volume_should_automount (_peel_this);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Volume, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Volume *), bool after = false) noexcept
  {
    return Signal<Volume, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Volume, void ()>::_peel_connect_by_name (this, "removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_removed (HandlerObject *object, void (HandlerObject::*handler_method) (Volume *), bool after = false) noexcept
  {
    return Signal<Volume, void ()>::_peel_connect_by_name (this, "removed", object, handler_method, after);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_eject () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    gboolean _peel_return = _peel_iface->can_eject (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_eject () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    gboolean _peel_return = _peel_iface->can_eject (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_mount () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    gboolean _peel_return = _peel_iface->can_mount (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_mount () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    gboolean _peel_return = _peel_iface->can_mount (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_changed () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    _peel_iface->changed (_peel_this);
  }

  void
  default_vfunc_changed () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    _peel_iface->changed (_peel_this);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_eject (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
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
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    gpointer _peel_user_data;
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
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
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
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
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
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
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
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
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    gpointer _peel_user_data;
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
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
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
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
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->eject_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::Strv
  parent_vfunc_enumerate_identifiers () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    char **_peel_return = _peel_iface->enumerate_identifiers (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::Strv
  default_vfunc_enumerate_identifiers () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    char **_peel_return = _peel_iface->enumerate_identifiers (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<File>
  parent_vfunc_get_activation_root () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GFile *_peel_return = _peel_iface->get_activation_root (_peel_this);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel::RefPtr<File>
  default_vfunc_get_activation_root () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GFile *_peel_return = _peel_iface->get_activation_root (_peel_this);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<Drive>
  parent_vfunc_get_drive () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GDrive *_peel_return = _peel_iface->get_drive (_peel_this);
    return peel::RefPtr<Drive>::adopt_ref (reinterpret_cast<Drive *> (_peel_return));
  }

  peel::RefPtr<Drive>
  default_vfunc_get_drive () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GDrive *_peel_return = _peel_iface->get_drive (_peel_this);
    return peel::RefPtr<Drive>::adopt_ref (reinterpret_cast<Drive *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<Icon>
  parent_vfunc_get_icon () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GIcon *_peel_return = _peel_iface->get_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  peel::RefPtr<Icon>
  default_vfunc_get_icon () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GIcon *_peel_return = _peel_iface->get_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::String
  parent_vfunc_get_identifier (const char *kind) noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    char *_peel_return = _peel_iface->get_identifier (_peel_this, kind);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::String
  default_vfunc_get_identifier (const char *kind) noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    char *_peel_return = _peel_iface->get_identifier (_peel_this, kind);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel::RefPtr<Mount>
  parent_vfunc_get_mount () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GMount *_peel_return = _peel_iface->get_mount (_peel_this);
    return peel::RefPtr<Mount>::adopt_ref (reinterpret_cast<Mount *> (_peel_return));
  }

  peel::RefPtr<Mount>
  default_vfunc_get_mount () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GMount *_peel_return = _peel_iface->get_mount (_peel_this);
    return peel::RefPtr<Mount>::adopt_ref (reinterpret_cast<Mount *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_name () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    char *_peel_return = _peel_iface->get_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  default_vfunc_get_name () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    char *_peel_return = _peel_iface->get_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  const char *
  parent_vfunc_get_sort_key () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    return _peel_iface->get_sort_key (_peel_this);
  }

  const char *
  default_vfunc_get_sort_key () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    return _peel_iface->get_sort_key (_peel_this);
  }

  template<typename DerivedClass>
  peel::RefPtr<Icon>
  parent_vfunc_get_symbolic_icon () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GIcon *_peel_return = _peel_iface->get_symbolic_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  peel::RefPtr<Icon>
  default_vfunc_get_symbolic_icon () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GIcon *_peel_return = _peel_iface->get_symbolic_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_uuid () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    char *_peel_return = _peel_iface->get_uuid (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  default_vfunc_get_uuid () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    char *_peel_return = _peel_iface->get_uuid (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_mount_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->mount_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_mount_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->mount_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_mount_fn (Mount::MountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
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
    _peel_iface->mount_fn (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_mount_fn (Mount::MountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    gpointer _peel_user_data;
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
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
    _peel_iface->mount_fn (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_removed () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    _peel_iface->removed (_peel_this);
  }

  void
  default_vfunc_removed () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    _peel_iface->removed (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_should_automount () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Volume> ())->peek_parent ());
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    gboolean _peel_return = _peel_iface->should_automount (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_should_automount () noexcept
  {
    ::GVolumeIface *_peel_iface = reinterpret_cast<::GVolumeIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Volume> ()));
    ::GVolume *_peel_this = reinterpret_cast<::GVolume *> (this);
    gboolean _peel_return = _peel_iface->should_automount (_peel_this);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GVolumeIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_can_eject ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->can_eject = +[] (::GVolume *volume) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_eject ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_can_mount ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->can_mount = +[] (::GVolume *volume) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_mount ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->changed = +[] (::GVolume *volume) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        _peel_this->DerivedClass::vfunc_changed ();
      };
    }

    /* Unsupported for now: eject: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_eject_finish ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->eject_finish = +[] (::GVolume *volume, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
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
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->eject_with_operation_finish = +[] (::GVolume *volume, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
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
    override_vfunc_enumerate_identifiers ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->enumerate_identifiers = +[] (::GVolume *volume) -> char **
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        peel::Strv _peel_return = _peel_this->DerivedClass::vfunc_enumerate_identifiers ();
        return reinterpret_cast<char **> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_activation_root ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->get_activation_root = +[] (::GVolume *volume) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_get_activation_root ();
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_drive ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->get_drive = +[] (::GVolume *volume) -> ::GDrive *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        peel::RefPtr<Drive> _peel_return = _peel_this->DerivedClass::vfunc_get_drive ();
        return reinterpret_cast<::GDrive *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_icon ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->get_icon = +[] (::GVolume *volume) -> ::GIcon *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        peel::RefPtr<Icon> _peel_return = _peel_this->DerivedClass::vfunc_get_icon ();
        return reinterpret_cast<::GIcon *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_identifier ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->get_identifier = +[] (::GVolume *volume, const char *kind) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_identifier (kind);
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_mount ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->get_mount = +[] (::GVolume *volume) -> ::GMount *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        peel::RefPtr<Mount> _peel_return = _peel_this->DerivedClass::vfunc_get_mount ();
        return reinterpret_cast<::GMount *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_name ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->get_name = +[] (::GVolume *volume) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_name ();
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_sort_key ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->get_sort_key = +[] (::GVolume *volume) -> const gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        return _peel_this->DerivedClass::vfunc_get_sort_key ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_symbolic_icon ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->get_symbolic_icon = +[] (::GVolume *volume) -> ::GIcon *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        peel::RefPtr<Icon> _peel_return = _peel_this->DerivedClass::vfunc_get_symbolic_icon ();
        return reinterpret_cast<::GIcon *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_uuid ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->get_uuid = +[] (::GVolume *volume) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_uuid ();
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_mount_finish ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->mount_finish = +[] (::GVolume *volume, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_mount_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: mount_fn: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_removed ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->removed = +[] (::GVolume *volume) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        _peel_this->DerivedClass::vfunc_removed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_should_automount ()
    {
      ::GVolumeIface *klass = reinterpret_cast<::GVolumeIface *> (this);
      klass->should_automount = +[] (::GVolume *volume) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume);
        bool _peel_return = _peel_this->DerivedClass::vfunc_should_automount ();
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GVolumeIface),
                 "Volume::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GVolumeIface),
                 "Volume::Iface align mismatch");
}; /* interface Volume */
static_assert (sizeof (Volume) == sizeof (GObject::Object),
               "Volume size mismatch");
static_assert (alignof (Volume) == alignof (GObject::Object),
               "Volume align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/Drive.h>
#include <peel/Gio/File.h>
#include <peel/Gio/Icon.h>
