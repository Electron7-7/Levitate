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
namespace Gio
{
class /* interface */ PowerProfileMonitor;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::PowerProfileMonitor> ()
{
  return g_power_profile_monitor_get_type ();
}


namespace Gio
{
class /* interface */ PowerProfileMonitor : public Initable
/* requires Initable */
{
private:
  PowerProfileMonitor () = delete;
  PowerProfileMonitor (const PowerProfileMonitor &) = delete;
  PowerProfileMonitor (PowerProfileMonitor &&) = delete;

  PowerProfileMonitor &
  operator = (const PowerProfileMonitor &) = delete;
  PowerProfileMonitor &
  operator = (PowerProfileMonitor &&) = delete;

protected:
  ~PowerProfileMonitor () = default;

public:

  static peel::RefPtr<PowerProfileMonitor>
  dup_default () noexcept
  {
    ::GPowerProfileMonitor *_peel_return = g_power_profile_monitor_dup_default ();
    peel_assume (_peel_return);
    return peel::RefPtr<PowerProfileMonitor>::adopt_ref (reinterpret_cast<PowerProfileMonitor *> (_peel_return));
  }

  bool
  get_power_saver_enabled () noexcept
  {
    ::GPowerProfileMonitor *_peel_this = reinterpret_cast<::GPowerProfileMonitor *> (this);
    gboolean _peel_return = g_power_profile_monitor_get_power_saver_enabled (_peel_this);
    return !!_peel_return;
  }

  static peel::Property<bool>
  prop_power_saver_enabled ()
  {
    return peel::Property<bool> { "power-saver-enabled" };
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
  };

  static_assert (sizeof (Iface) == sizeof (::GPowerProfileMonitorInterface),
                 "PowerProfileMonitor::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GPowerProfileMonitorInterface),
                 "PowerProfileMonitor::Iface align mismatch");
}; /* interface PowerProfileMonitor */
static_assert (sizeof (PowerProfileMonitor) == sizeof (Initable),
               "PowerProfileMonitor size mismatch");
static_assert (alignof (PowerProfileMonitor) == alignof (Initable),
               "PowerProfileMonitor align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
