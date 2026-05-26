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
namespace Gio
{
class /* interface */ Drive;
class /* interface */ Mount;
class /* interface */ Volume;
class VolumeMonitor;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::VolumeMonitor> ()
{
  return g_volume_monitor_get_type ();
}


namespace Gio
{
class VolumeMonitor : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GVolumeMonitor) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  VolumeMonitor () = delete;
  VolumeMonitor (const VolumeMonitor &) = delete;
  VolumeMonitor (VolumeMonitor &&) = delete;
  VolumeMonitor &
  operator = (const VolumeMonitor &) = delete;
  VolumeMonitor &
  operator = (VolumeMonitor &&) = delete;
protected:
  ~VolumeMonitor () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<Volume>
  adopt_orphan_mount (Mount *mount) noexcept
  {
    ::GMount *_peel_mount = reinterpret_cast<::GMount *> (mount);
    ::GVolume *_peel_return = g_volume_monitor_adopt_orphan_mount (_peel_mount);
    peel_assume (_peel_return);
    return peel::RefPtr<Volume>::adopt_ref (reinterpret_cast<Volume *> (_peel_return));
  }

  static peel::RefPtr<VolumeMonitor>
  get () noexcept
  {
    ::GVolumeMonitor *_peel_return = g_volume_monitor_get ();
    peel_assume (_peel_return);
    return peel::RefPtr<VolumeMonitor>::adopt_ref (reinterpret_cast<VolumeMonitor *> (_peel_return));
  }

  GLib::List<peel::RefPtr<Drive>>
  get_connected_drives () noexcept
  {
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    GList *_peel_return = g_volume_monitor_get_connected_drives (_peel_this);
    return GLib::List<peel::RefPtr<Drive>>::adopt_list (_peel_return);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Mount>
  get_mount_for_uuid (const char *uuid) noexcept
  {
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GMount *_peel_return = g_volume_monitor_get_mount_for_uuid (_peel_this, uuid);
    return peel::RefPtr<Mount>::adopt_ref (reinterpret_cast<Mount *> (_peel_return));
  }

  GLib::List<peel::RefPtr<Mount>>
  get_mounts () noexcept
  {
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    GList *_peel_return = g_volume_monitor_get_mounts (_peel_this);
    return GLib::List<peel::RefPtr<Mount>>::adopt_list (_peel_return);
  }

  peel_nonnull_args (2)
  peel::RefPtr<Volume>
  get_volume_for_uuid (const char *uuid) noexcept
  {
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GVolume *_peel_return = g_volume_monitor_get_volume_for_uuid (_peel_this, uuid);
    return peel::RefPtr<Volume>::adopt_ref (reinterpret_cast<Volume *> (_peel_return));
  }

  GLib::List<peel::RefPtr<Volume>>
  get_volumes () noexcept
  {
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    GList *_peel_return = g_volume_monitor_get_volumes (_peel_this);
    return GLib::List<peel::RefPtr<Volume>>::adopt_list (_peel_return);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drive_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Drive *)>::_peel_connect_by_name (this, "drive-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drive_changed (HandlerObject *object, void (HandlerObject::*handler_method) (VolumeMonitor *, Drive *), bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Drive *)>::_peel_connect_by_name (this, "drive-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drive_connected (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Drive *)>::_peel_connect_by_name (this, "drive-connected", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drive_connected (HandlerObject *object, void (HandlerObject::*handler_method) (VolumeMonitor *, Drive *), bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Drive *)>::_peel_connect_by_name (this, "drive-connected", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drive_disconnected (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Drive *)>::_peel_connect_by_name (this, "drive-disconnected", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drive_disconnected (HandlerObject *object, void (HandlerObject::*handler_method) (VolumeMonitor *, Drive *), bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Drive *)>::_peel_connect_by_name (this, "drive-disconnected", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drive_eject_button (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Drive *)>::_peel_connect_by_name (this, "drive-eject-button", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drive_eject_button (HandlerObject *object, void (HandlerObject::*handler_method) (VolumeMonitor *, Drive *), bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Drive *)>::_peel_connect_by_name (this, "drive-eject-button", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_drive_stop_button (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Drive *)>::_peel_connect_by_name (this, "drive-stop-button", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_drive_stop_button (HandlerObject *object, void (HandlerObject::*handler_method) (VolumeMonitor *, Drive *), bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Drive *)>::_peel_connect_by_name (this, "drive-stop-button", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_mount_added (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Mount *)>::_peel_connect_by_name (this, "mount-added", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_mount_added (HandlerObject *object, void (HandlerObject::*handler_method) (VolumeMonitor *, Mount *), bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Mount *)>::_peel_connect_by_name (this, "mount-added", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_mount_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Mount *)>::_peel_connect_by_name (this, "mount-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_mount_changed (HandlerObject *object, void (HandlerObject::*handler_method) (VolumeMonitor *, Mount *), bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Mount *)>::_peel_connect_by_name (this, "mount-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_mount_pre_unmount (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Mount *)>::_peel_connect_by_name (this, "mount-pre-unmount", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_mount_pre_unmount (HandlerObject *object, void (HandlerObject::*handler_method) (VolumeMonitor *, Mount *), bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Mount *)>::_peel_connect_by_name (this, "mount-pre-unmount", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_mount_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Mount *)>::_peel_connect_by_name (this, "mount-removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_mount_removed (HandlerObject *object, void (HandlerObject::*handler_method) (VolumeMonitor *, Mount *), bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Mount *)>::_peel_connect_by_name (this, "mount-removed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_volume_added (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Volume *)>::_peel_connect_by_name (this, "volume-added", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_volume_added (HandlerObject *object, void (HandlerObject::*handler_method) (VolumeMonitor *, Volume *), bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Volume *)>::_peel_connect_by_name (this, "volume-added", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_volume_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Volume *)>::_peel_connect_by_name (this, "volume-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_volume_changed (HandlerObject *object, void (HandlerObject::*handler_method) (VolumeMonitor *, Volume *), bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Volume *)>::_peel_connect_by_name (this, "volume-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_volume_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Volume *)>::_peel_connect_by_name (this, "volume-removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_volume_removed (HandlerObject *object, void (HandlerObject::*handler_method) (VolumeMonitor *, Volume *), bool after = false) noexcept
  {
    return Signal<VolumeMonitor, void (Volume *)>::_peel_connect_by_name (this, "volume-removed", object, handler_method, after);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<VolumeMonitor> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_drive_changed (Drive *drive) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GDrive *_peel_drive = reinterpret_cast<::GDrive *> (drive);
    _peel_class->drive_changed (_peel_this, _peel_drive);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_drive_connected (Drive *drive) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GDrive *_peel_drive = reinterpret_cast<::GDrive *> (drive);
    _peel_class->drive_connected (_peel_this, _peel_drive);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_drive_disconnected (Drive *drive) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GDrive *_peel_drive = reinterpret_cast<::GDrive *> (drive);
    _peel_class->drive_disconnected (_peel_this, _peel_drive);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_drive_eject_button (Drive *drive) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GDrive *_peel_drive = reinterpret_cast<::GDrive *> (drive);
    _peel_class->drive_eject_button (_peel_this, _peel_drive);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_drive_stop_button (Drive *drive) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GDrive *_peel_drive = reinterpret_cast<::GDrive *> (drive);
    _peel_class->drive_stop_button (_peel_this, _peel_drive);
  }

  template<typename DerivedClass>
  GLib::List<peel::RefPtr<Drive>>
  parent_vfunc_get_connected_drives () noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    GList *_peel_return = _peel_class->get_connected_drives (_peel_this);
    return GLib::List<peel::RefPtr<Drive>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<Mount>
  parent_vfunc_get_mount_for_uuid (const char *uuid) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GMount *_peel_return = _peel_class->get_mount_for_uuid (_peel_this, uuid);
    return peel::RefPtr<Mount>::adopt_ref (reinterpret_cast<Mount *> (_peel_return));
  }

  template<typename DerivedClass>
  GLib::List<peel::RefPtr<Mount>>
  parent_vfunc_get_mounts () noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    GList *_peel_return = _peel_class->get_mounts (_peel_this);
    return GLib::List<peel::RefPtr<Mount>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<Volume>
  parent_vfunc_get_volume_for_uuid (const char *uuid) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GVolume *_peel_return = _peel_class->get_volume_for_uuid (_peel_this, uuid);
    return peel::RefPtr<Volume>::adopt_ref (reinterpret_cast<Volume *> (_peel_return));
  }

  template<typename DerivedClass>
  GLib::List<peel::RefPtr<Volume>>
  parent_vfunc_get_volumes () noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    GList *_peel_return = _peel_class->get_volumes (_peel_this);
    return GLib::List<peel::RefPtr<Volume>>::adopt_list (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_mount_added (Mount *mount) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GMount *_peel_mount = reinterpret_cast<::GMount *> (mount);
    _peel_class->mount_added (_peel_this, _peel_mount);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_mount_changed (Mount *mount) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GMount *_peel_mount = reinterpret_cast<::GMount *> (mount);
    _peel_class->mount_changed (_peel_this, _peel_mount);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_mount_pre_unmount (Mount *mount) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GMount *_peel_mount = reinterpret_cast<::GMount *> (mount);
    _peel_class->mount_pre_unmount (_peel_this, _peel_mount);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_mount_removed (Mount *mount) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GMount *_peel_mount = reinterpret_cast<::GMount *> (mount);
    _peel_class->mount_removed (_peel_this, _peel_mount);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_volume_added (Volume *volume) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GVolume *_peel_volume = reinterpret_cast<::GVolume *> (volume);
    _peel_class->volume_added (_peel_this, _peel_volume);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_volume_changed (Volume *volume) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GVolume *_peel_volume = reinterpret_cast<::GVolume *> (volume);
    _peel_class->volume_changed (_peel_this, _peel_volume);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_volume_removed (Volume *volume) noexcept
  {
    ::GVolumeMonitorClass *_peel_class = reinterpret_cast<::GVolumeMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVolumeMonitor *_peel_this = reinterpret_cast<::GVolumeMonitor *> (this);
    ::GVolume *_peel_volume = reinterpret_cast<::GVolume *> (volume);
    _peel_class->volume_removed (_peel_this, _peel_volume);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GVolumeMonitorClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_drive_changed ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->drive_changed = +[] (::GVolumeMonitor *volume_monitor, ::GDrive *drive) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        Drive *_peel_drive = reinterpret_cast<Drive *> (drive);
        _peel_this->DerivedClass::vfunc_drive_changed (_peel_drive);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_drive_connected ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->drive_connected = +[] (::GVolumeMonitor *volume_monitor, ::GDrive *drive) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        Drive *_peel_drive = reinterpret_cast<Drive *> (drive);
        _peel_this->DerivedClass::vfunc_drive_connected (_peel_drive);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_drive_disconnected ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->drive_disconnected = +[] (::GVolumeMonitor *volume_monitor, ::GDrive *drive) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        Drive *_peel_drive = reinterpret_cast<Drive *> (drive);
        _peel_this->DerivedClass::vfunc_drive_disconnected (_peel_drive);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_drive_eject_button ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->drive_eject_button = +[] (::GVolumeMonitor *volume_monitor, ::GDrive *drive) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        Drive *_peel_drive = reinterpret_cast<Drive *> (drive);
        _peel_this->DerivedClass::vfunc_drive_eject_button (_peel_drive);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_drive_stop_button ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->drive_stop_button = +[] (::GVolumeMonitor *volume_monitor, ::GDrive *drive) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        Drive *_peel_drive = reinterpret_cast<Drive *> (drive);
        _peel_this->DerivedClass::vfunc_drive_stop_button (_peel_drive);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_connected_drives ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->get_connected_drives = +[] (::GVolumeMonitor *volume_monitor) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        GLib::List<peel::RefPtr<Drive>> _peel_return = _peel_this->DerivedClass::vfunc_get_connected_drives ();
        return std::move (_peel_return).release_list ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_mount_for_uuid ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->get_mount_for_uuid = +[] (::GVolumeMonitor *volume_monitor, const char *uuid) -> ::GMount *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        peel::RefPtr<Mount> _peel_return = _peel_this->DerivedClass::vfunc_get_mount_for_uuid (uuid);
        return reinterpret_cast<::GMount *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_mounts ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->get_mounts = +[] (::GVolumeMonitor *volume_monitor) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        GLib::List<peel::RefPtr<Mount>> _peel_return = _peel_this->DerivedClass::vfunc_get_mounts ();
        return std::move (_peel_return).release_list ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_volume_for_uuid ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->get_volume_for_uuid = +[] (::GVolumeMonitor *volume_monitor, const char *uuid) -> ::GVolume *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        peel::RefPtr<Volume> _peel_return = _peel_this->DerivedClass::vfunc_get_volume_for_uuid (uuid);
        return reinterpret_cast<::GVolume *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_volumes ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->get_volumes = +[] (::GVolumeMonitor *volume_monitor) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        GLib::List<peel::RefPtr<Volume>> _peel_return = _peel_this->DerivedClass::vfunc_get_volumes ();
        return std::move (_peel_return).release_list ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_mount_added ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->mount_added = +[] (::GVolumeMonitor *volume_monitor, ::GMount *mount) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        Mount *_peel_mount = reinterpret_cast<Mount *> (mount);
        _peel_this->DerivedClass::vfunc_mount_added (_peel_mount);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_mount_changed ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->mount_changed = +[] (::GVolumeMonitor *volume_monitor, ::GMount *mount) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        Mount *_peel_mount = reinterpret_cast<Mount *> (mount);
        _peel_this->DerivedClass::vfunc_mount_changed (_peel_mount);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_mount_pre_unmount ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->mount_pre_unmount = +[] (::GVolumeMonitor *volume_monitor, ::GMount *mount) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        Mount *_peel_mount = reinterpret_cast<Mount *> (mount);
        _peel_this->DerivedClass::vfunc_mount_pre_unmount (_peel_mount);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_mount_removed ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->mount_removed = +[] (::GVolumeMonitor *volume_monitor, ::GMount *mount) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        Mount *_peel_mount = reinterpret_cast<Mount *> (mount);
        _peel_this->DerivedClass::vfunc_mount_removed (_peel_mount);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_volume_added ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->volume_added = +[] (::GVolumeMonitor *volume_monitor, ::GVolume *volume) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        Volume *_peel_volume = reinterpret_cast<Volume *> (volume);
        _peel_this->DerivedClass::vfunc_volume_added (_peel_volume);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_volume_changed ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->volume_changed = +[] (::GVolumeMonitor *volume_monitor, ::GVolume *volume) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        Volume *_peel_volume = reinterpret_cast<Volume *> (volume);
        _peel_this->DerivedClass::vfunc_volume_changed (_peel_volume);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_volume_removed ()
    {
      ::GVolumeMonitorClass *klass = reinterpret_cast<::GVolumeMonitorClass *> (this);
      klass->volume_removed = +[] (::GVolumeMonitor *volume_monitor, ::GVolume *volume) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (volume_monitor);
        Volume *_peel_volume = reinterpret_cast<Volume *> (volume);
        _peel_this->DerivedClass::vfunc_volume_removed (_peel_volume);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GVolumeMonitorClass),
                 "VolumeMonitor::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GVolumeMonitorClass),
                 "VolumeMonitor::Class align mismatch");
}; /* class VolumeMonitor */

static_assert (sizeof (VolumeMonitor) == sizeof (::GVolumeMonitor),
               "VolumeMonitor size mismatch");
static_assert (alignof (VolumeMonitor) == alignof (::GVolumeMonitor),
               "VolumeMonitor align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/Gio/Drive.h>
#include <peel/Gio/Mount.h>
#include <peel/Gio/Volume.h>
