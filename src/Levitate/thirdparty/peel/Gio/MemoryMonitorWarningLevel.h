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

peel_begin_header

namespace peel
{
namespace Gio
{
enum class MemoryMonitorWarningLevel : std::underlying_type<::GMemoryMonitorWarningLevel>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::MemoryMonitorWarningLevel>
{
  typedef Gio::MemoryMonitorWarningLevel UnownedType;

  static Gio::MemoryMonitorWarningLevel
  get (const ::GValue *value)
  {
    return static_cast<Gio::MemoryMonitorWarningLevel> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::MemoryMonitorWarningLevel m)
  {
    g_value_set_enum (value, static_cast<::GMemoryMonitorWarningLevel> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::MemoryMonitorWarningLevel m)
  {
    set (value, m);
  }

  static Gio::MemoryMonitorWarningLevel
  cast_for_create (Gio::MemoryMonitorWarningLevel m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::MemoryMonitorWarningLevel> ()
{
  return g_memory_monitor_warning_level_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::MemoryMonitorWarningLevel>
{
  Gio::MemoryMonitorWarningLevel default_value;

  constexpr PspecTraits (Gio::MemoryMonitorWarningLevel default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_memory_monitor_warning_level_get_type (),
                              static_cast<::GMemoryMonitorWarningLevel> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class MemoryMonitorWarningLevel : std::underlying_type<::GMemoryMonitorWarningLevel>::type
{
  LOW = G_MEMORY_MONITOR_WARNING_LEVEL_LOW,
  MEDIUM = G_MEMORY_MONITOR_WARNING_LEVEL_MEDIUM,
  CRITICAL = G_MEMORY_MONITOR_WARNING_LEVEL_CRITICAL,
}; /* enum MemoryMonitorWarningLevel */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
