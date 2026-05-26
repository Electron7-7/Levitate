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
class /* interface */ MemoryMonitor;
enum class MemoryMonitorWarningLevel : std::underlying_type<::GMemoryMonitorWarningLevel>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::MemoryMonitor> ()
{
  return g_memory_monitor_get_type ();
}


namespace Gio
{
class /* interface */ MemoryMonitor : public Initable
/* requires Initable */
{
private:
  MemoryMonitor () = delete;
  MemoryMonitor (const MemoryMonitor &) = delete;
  MemoryMonitor (MemoryMonitor &&) = delete;

  MemoryMonitor &
  operator = (const MemoryMonitor &) = delete;
  MemoryMonitor &
  operator = (MemoryMonitor &&) = delete;

protected:
  ~MemoryMonitor () = default;

public:

  static peel::RefPtr<MemoryMonitor>
  dup_default () noexcept
  {
    ::GMemoryMonitor *_peel_return = g_memory_monitor_dup_default ();
    peel_assume (_peel_return);
    return peel::RefPtr<MemoryMonitor>::adopt_ref (reinterpret_cast<MemoryMonitor *> (_peel_return));
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_low_memory_warning (Handler &&handler, bool after = false) noexcept
  {
    return Signal<MemoryMonitor, void (MemoryMonitorWarningLevel)>::_peel_connect_by_name (this, "low-memory-warning", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_low_memory_warning (HandlerObject *object, void (HandlerObject::*handler_method) (MemoryMonitor *, MemoryMonitorWarningLevel), bool after = false) noexcept
  {
    return Signal<MemoryMonitor, void (MemoryMonitorWarningLevel)>::_peel_connect_by_name (this, "low-memory-warning", object, handler_method, after);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_low_memory_warning (MemoryMonitorWarningLevel level) noexcept
  {
    ::GMemoryMonitorInterface *_peel_iface = reinterpret_cast<::GMemoryMonitorInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<MemoryMonitor> ())->peek_parent ());
    ::GMemoryMonitor *_peel_this = reinterpret_cast<::GMemoryMonitor *> (this);
    ::GMemoryMonitorWarningLevel _peel_level = static_cast<::GMemoryMonitorWarningLevel> (level);
    _peel_iface->low_memory_warning (_peel_this, _peel_level);
  }

  void
  default_vfunc_low_memory_warning (MemoryMonitorWarningLevel level) noexcept
  {
    ::GMemoryMonitorInterface *_peel_iface = reinterpret_cast<::GMemoryMonitorInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<MemoryMonitor> ()));
    ::GMemoryMonitor *_peel_this = reinterpret_cast<::GMemoryMonitor *> (this);
    ::GMemoryMonitorWarningLevel _peel_level = static_cast<::GMemoryMonitorWarningLevel> (level);
    _peel_iface->low_memory_warning (_peel_this, _peel_level);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GMemoryMonitorInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_low_memory_warning ()
    {
      ::GMemoryMonitorInterface *klass = reinterpret_cast<::GMemoryMonitorInterface *> (this);
      klass->low_memory_warning = +[] (::GMemoryMonitor *monitor, ::GMemoryMonitorWarningLevel level) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (monitor);
        MemoryMonitorWarningLevel _peel_level = static_cast<MemoryMonitorWarningLevel> (level);
        _peel_this->DerivedClass::vfunc_low_memory_warning (_peel_level);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GMemoryMonitorInterface),
                 "MemoryMonitor::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GMemoryMonitorInterface),
                 "MemoryMonitor::Iface align mismatch");
}; /* interface MemoryMonitor */
static_assert (sizeof (MemoryMonitor) == sizeof (Initable),
               "MemoryMonitor size mismatch");
static_assert (alignof (MemoryMonitor) == alignof (Initable),
               "MemoryMonitor align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
