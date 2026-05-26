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
#include <peel/Gio/VolumeMonitor.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class NativeVolumeMonitor;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::NativeVolumeMonitor> ()
{
  return g_native_volume_monitor_get_type ();
}


namespace Gio
{
class NativeVolumeMonitor : public VolumeMonitor
{
private:
  using VolumeMonitor::adopt_orphan_mount;
  using VolumeMonitor::get;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  NativeVolumeMonitor () = delete;
  NativeVolumeMonitor (const NativeVolumeMonitor &) = delete;
  NativeVolumeMonitor (NativeVolumeMonitor &&) = delete;
  NativeVolumeMonitor &
  operator = (const NativeVolumeMonitor &) = delete;
  NativeVolumeMonitor &
  operator = (NativeVolumeMonitor &&) = delete;
protected:
  ~NativeVolumeMonitor () = default;
public:

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<NativeVolumeMonitor> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public VolumeMonitor::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GNativeVolumeMonitorClass) - sizeof (VolumeMonitor::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GNativeVolumeMonitorClass),
                 "NativeVolumeMonitor::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GNativeVolumeMonitorClass),
                 "NativeVolumeMonitor::Class align mismatch");
}; /* class NativeVolumeMonitor */

static_assert (sizeof (NativeVolumeMonitor) == sizeof (::GNativeVolumeMonitor),
               "NativeVolumeMonitor size mismatch");
static_assert (alignof (NativeVolumeMonitor) == alignof (::GNativeVolumeMonitor),
               "NativeVolumeMonitor align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
