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
class /* interface */ Icon;
class MountOperation;
class /* interface */ Volume;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Drive> ()
{
  return g_drive_get_type ();
}


namespace Gio
{
class /* interface */ Drive : public GObject::Object
/* requires GObject::Object */
{
private:
  Drive () = delete;
  Drive (const Drive &) = delete;
  Drive (Drive &&) = delete;

  Drive &
  operator = (const Drive &) = delete;
  Drive &
  operator = (Drive &&) = delete;

protected:
  ~Drive () = default;

public:
  enum class StartFlags : std::underlying_type<::GDriveStartFlags>::type;
  enum class StartStopType : std::underlying_type<::GDriveStartStopType>::type;

  bool
  can_eject () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = g_drive_can_eject (_peel_this);
    return !!_peel_return;
  }

  bool
  can_poll_for_media () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = g_drive_can_poll_for_media (_peel_this);
    return !!_peel_return;
  }

  bool
  can_start () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = g_drive_can_start (_peel_this);
    return !!_peel_return;
  }

  bool
  can_start_degraded () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = g_drive_can_start_degraded (_peel_this);
    return !!_peel_return;
  }

  bool
  can_stop () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = g_drive_can_stop (_peel_this);
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  eject (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    g_drive_eject (_peel_this, _peel_flags, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  eject_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_drive_eject_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  eject_with_operation (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    g_drive_eject_with_operation (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  eject_with_operation_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_drive_eject_with_operation_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::Strv
  enumerate_identifiers () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    char **_peel_return = g_drive_enumerate_identifiers (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::RefPtr<Icon>
  get_icon () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GIcon *_peel_return = g_drive_get_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::String
  get_identifier (const char *kind) noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    char *_peel_return = g_drive_get_identifier (_peel_this, kind);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  get_name () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    char *_peel_return = g_drive_get_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  const char *
  get_sort_key () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    return g_drive_get_sort_key (_peel_this);
  }

  Drive::StartStopType
  get_start_stop_type () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GDriveStartStopType _peel_return = g_drive_get_start_stop_type (_peel_this);
    return static_cast<Drive::StartStopType> (_peel_return);
  }

  peel::RefPtr<Icon>
  get_symbolic_icon () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GIcon *_peel_return = g_drive_get_symbolic_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  GLib::List<peel::RefPtr<Volume>>
  get_volumes () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    GList *_peel_return = g_drive_get_volumes (_peel_this);
    return GLib::List<peel::RefPtr<Volume>>::adopt_list (_peel_return);
  }

  bool
  has_media () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = g_drive_has_media (_peel_this);
    return !!_peel_return;
  }

  bool
  has_volumes () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = g_drive_has_volumes (_peel_this);
    return !!_peel_return;
  }

  bool
  is_media_check_automatic () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = g_drive_is_media_check_automatic (_peel_this);
    return !!_peel_return;
  }

  bool
  is_media_removable () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = g_drive_is_media_removable (_peel_this);
    return !!_peel_return;
  }

  bool
  is_removable () noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = g_drive_is_removable (_peel_this);
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  poll_for_media (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    g_drive_poll_for_media (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  poll_for_media_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_drive_poll_for_media_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  start (Drive::StartFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GDriveStartFlags _peel_flags = static_cast<::GDriveStartFlags> (flags);
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
    g_drive_start (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  start_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_drive_start_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  stop (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    g_drive_stop (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  stop_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_drive_stop_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Drive, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Drive *), bool after = false) noexcept
  {
    return Signal<Drive, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_disconnected (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Drive, void ()>::_peel_connect_by_name (this, "disconnected", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_disconnected (HandlerObject *object, void (HandlerObject::*handler_method) (Drive *), bool after = false) noexcept
  {
    return Signal<Drive, void ()>::_peel_connect_by_name (this, "disconnected", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_eject_button (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Drive, void ()>::_peel_connect_by_name (this, "eject-button", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_eject_button (HandlerObject *object, void (HandlerObject::*handler_method) (Drive *), bool after = false) noexcept
  {
    return Signal<Drive, void ()>::_peel_connect_by_name (this, "eject-button", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_stop_button (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Drive, void ()>::_peel_connect_by_name (this, "stop-button", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_stop_button (HandlerObject *object, void (HandlerObject::*handler_method) (Drive *), bool after = false) noexcept
  {
    return Signal<Drive, void ()>::_peel_connect_by_name (this, "stop-button", object, handler_method, after);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_eject () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->can_eject (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_eject () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->can_eject (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_poll_for_media () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->can_poll_for_media (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_poll_for_media () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->can_poll_for_media (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_start () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->can_start (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_start () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->can_start (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_start_degraded () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->can_start_degraded (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_start_degraded () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->can_start_degraded (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_stop () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->can_stop (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_stop () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->can_stop (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_changed () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    _peel_iface->changed (_peel_this);
  }

  void
  default_vfunc_changed () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    _peel_iface->changed (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_disconnected () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    _peel_iface->disconnected (_peel_this);
  }

  void
  default_vfunc_disconnected () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    _peel_iface->disconnected (_peel_this);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_eject (Mount::UnmountFlags flags, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
  void
  parent_vfunc_eject_button () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    _peel_iface->eject_button (_peel_this);
  }

  void
  default_vfunc_eject_button () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    _peel_iface->eject_button (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_eject_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    char **_peel_return = _peel_iface->enumerate_identifiers (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::Strv
  default_vfunc_enumerate_identifiers () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    char **_peel_return = _peel_iface->enumerate_identifiers (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<Icon>
  parent_vfunc_get_icon () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GIcon *_peel_return = _peel_iface->get_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  peel::RefPtr<Icon>
  default_vfunc_get_icon () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GIcon *_peel_return = _peel_iface->get_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::String
  parent_vfunc_get_identifier (const char *kind) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    char *_peel_return = _peel_iface->get_identifier (_peel_this, kind);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::String
  default_vfunc_get_identifier (const char *kind) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    char *_peel_return = _peel_iface->get_identifier (_peel_this, kind);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_name () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    char *_peel_return = _peel_iface->get_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  default_vfunc_get_name () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    char *_peel_return = _peel_iface->get_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  const char *
  parent_vfunc_get_sort_key () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    return _peel_iface->get_sort_key (_peel_this);
  }

  const char *
  default_vfunc_get_sort_key () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    return _peel_iface->get_sort_key (_peel_this);
  }

  template<typename DerivedClass>
  Drive::StartStopType
  parent_vfunc_get_start_stop_type () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GDriveStartStopType _peel_return = _peel_iface->get_start_stop_type (_peel_this);
    return static_cast<Drive::StartStopType> (_peel_return);
  }

  Drive::StartStopType
  default_vfunc_get_start_stop_type () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GDriveStartStopType _peel_return = _peel_iface->get_start_stop_type (_peel_this);
    return static_cast<Drive::StartStopType> (_peel_return);
  }

  template<typename DerivedClass>
  peel::RefPtr<Icon>
  parent_vfunc_get_symbolic_icon () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GIcon *_peel_return = _peel_iface->get_symbolic_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  peel::RefPtr<Icon>
  default_vfunc_get_symbolic_icon () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GIcon *_peel_return = _peel_iface->get_symbolic_icon (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  template<typename DerivedClass>
  GLib::List<peel::RefPtr<Volume>>
  parent_vfunc_get_volumes () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    GList *_peel_return = _peel_iface->get_volumes (_peel_this);
    return GLib::List<peel::RefPtr<Volume>>::adopt_list (_peel_return);
  }

  GLib::List<peel::RefPtr<Volume>>
  default_vfunc_get_volumes () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    GList *_peel_return = _peel_iface->get_volumes (_peel_this);
    return GLib::List<peel::RefPtr<Volume>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_has_media () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->has_media (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_has_media () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->has_media (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_has_volumes () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->has_volumes (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_has_volumes () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->has_volumes (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_media_check_automatic () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->is_media_check_automatic (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_is_media_check_automatic () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->is_media_check_automatic (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_media_removable () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->is_media_removable (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_is_media_removable () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->is_media_removable (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_removable () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->is_removable (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_is_removable () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    gboolean _peel_return = _peel_iface->is_removable (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_poll_for_media (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    _peel_iface->poll_for_media (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_poll_for_media (Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    _peel_iface->poll_for_media (_peel_this, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_poll_for_media_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->poll_for_media_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_poll_for_media_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->poll_for_media_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_start (Drive::StartFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GDriveStartFlags _peel_flags = static_cast<::GDriveStartFlags> (flags);
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
    _peel_iface->start (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_start (Drive::StartFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GDriveStartFlags _peel_flags = static_cast<::GDriveStartFlags> (flags);
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
    _peel_iface->start (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_start_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->start_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_start_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->start_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_stop (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    _peel_iface->stop (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename AsyncReadyCallback>
  void
  default_vfunc_stop (Mount::UnmountFlags flags, MountOperation *mount_operation, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    gpointer _peel_user_data;
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
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
    _peel_iface->stop (_peel_this, _peel_flags, _peel_mount_operation, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_stop_button () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    _peel_iface->stop_button (_peel_this);
  }

  void
  default_vfunc_stop_button () noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    _peel_iface->stop_button (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_stop_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Drive> ())->peek_parent ());
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->stop_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  default_vfunc_stop_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDriveIface *_peel_iface = reinterpret_cast<::GDriveIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Drive> ()));
    ::GDrive *_peel_this = reinterpret_cast<::GDrive *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->stop_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GDriveIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_can_eject ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->can_eject = +[] (::GDrive *drive) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_eject ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_can_poll_for_media ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->can_poll_for_media = +[] (::GDrive *drive) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_poll_for_media ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_can_start ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->can_start = +[] (::GDrive *drive) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_start ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_can_start_degraded ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->can_start_degraded = +[] (::GDrive *drive) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_start_degraded ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_can_stop ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->can_stop = +[] (::GDrive *drive) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_stop ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->changed = +[] (::GDrive *drive) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        _peel_this->DerivedClass::vfunc_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_disconnected ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->disconnected = +[] (::GDrive *drive) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        _peel_this->DerivedClass::vfunc_disconnected ();
      };
    }

    /* Unsupported for now: eject: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_eject_button ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->eject_button = +[] (::GDrive *drive) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        _peel_this->DerivedClass::vfunc_eject_button ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_eject_finish ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->eject_finish = +[] (::GDrive *drive, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
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
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->eject_with_operation_finish = +[] (::GDrive *drive, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
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
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->enumerate_identifiers = +[] (::GDrive *drive) -> char **
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        peel::Strv _peel_return = _peel_this->DerivedClass::vfunc_enumerate_identifiers ();
        return reinterpret_cast<char **> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_icon ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->get_icon = +[] (::GDrive *drive) -> ::GIcon *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        peel::RefPtr<Icon> _peel_return = _peel_this->DerivedClass::vfunc_get_icon ();
        return reinterpret_cast<::GIcon *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_identifier ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->get_identifier = +[] (::GDrive *drive, const char *kind) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_identifier (kind);
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_name ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->get_name = +[] (::GDrive *drive) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_name ();
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_sort_key ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->get_sort_key = +[] (::GDrive *drive) -> const gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        return _peel_this->DerivedClass::vfunc_get_sort_key ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_start_stop_type ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->get_start_stop_type = +[] (::GDrive *drive) -> ::GDriveStartStopType
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        Drive::StartStopType _peel_return = _peel_this->DerivedClass::vfunc_get_start_stop_type ();
        return static_cast<::GDriveStartStopType> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_symbolic_icon ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->get_symbolic_icon = +[] (::GDrive *drive) -> ::GIcon *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        peel::RefPtr<Icon> _peel_return = _peel_this->DerivedClass::vfunc_get_symbolic_icon ();
        return reinterpret_cast<::GIcon *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_volumes ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->get_volumes = +[] (::GDrive *drive) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        GLib::List<peel::RefPtr<Volume>> _peel_return = _peel_this->DerivedClass::vfunc_get_volumes ();
        return std::move (_peel_return).release_list ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_has_media ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->has_media = +[] (::GDrive *drive) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        bool _peel_return = _peel_this->DerivedClass::vfunc_has_media ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_has_volumes ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->has_volumes = +[] (::GDrive *drive) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        bool _peel_return = _peel_this->DerivedClass::vfunc_has_volumes ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_media_check_automatic ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->is_media_check_automatic = +[] (::GDrive *drive) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_media_check_automatic ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_media_removable ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->is_media_removable = +[] (::GDrive *drive) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_media_removable ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_removable ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->is_removable = +[] (::GDrive *drive) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_removable ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: poll_for_media: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_poll_for_media_finish ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->poll_for_media_finish = +[] (::GDrive *drive, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_poll_for_media_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: start: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_start_finish ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->start_finish = +[] (::GDrive *drive, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_start_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: stop: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_stop_button ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->stop_button = +[] (::GDrive *drive) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        _peel_this->DerivedClass::vfunc_stop_button ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_stop_finish ()
    {
      ::GDriveIface *klass = reinterpret_cast<::GDriveIface *> (this);
      klass->stop_finish = +[] (::GDrive *drive, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (drive);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_stop_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GDriveIface),
                 "Drive::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GDriveIface),
                 "Drive::Iface align mismatch");
}; /* interface Drive */
static_assert (sizeof (Drive) == sizeof (GObject::Object),
               "Drive size mismatch");
static_assert (alignof (Drive) == alignof (GObject::Object),
               "Drive align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/Icon.h>
#include <peel/Gio/Volume.h>
