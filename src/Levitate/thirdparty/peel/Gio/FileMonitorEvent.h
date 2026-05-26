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
#include <peel/Gio/FileMonitor.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::FileMonitor::Event>
{
  typedef Gio::FileMonitor::Event UnownedType;

  static Gio::FileMonitor::Event
  get (const ::GValue *value)
  {
    return static_cast<Gio::FileMonitor::Event> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::FileMonitor::Event m)
  {
    g_value_set_enum (value, static_cast<::GFileMonitorEvent> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::FileMonitor::Event m)
  {
    set (value, m);
  }

  static Gio::FileMonitor::Event
  cast_for_create (Gio::FileMonitor::Event m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::FileMonitor::Event> ()
{
  return g_file_monitor_event_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::FileMonitor::Event>
{
  Gio::FileMonitor::Event default_value;

  constexpr PspecTraits (Gio::FileMonitor::Event default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_file_monitor_event_get_type (),
                              static_cast<::GFileMonitorEvent> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class FileMonitor::Event : std::underlying_type<::GFileMonitorEvent>::type
{
  CHANGED = G_FILE_MONITOR_EVENT_CHANGED,
  CHANGES_DONE_HINT = G_FILE_MONITOR_EVENT_CHANGES_DONE_HINT,
  DELETED = G_FILE_MONITOR_EVENT_DELETED,
  CREATED = G_FILE_MONITOR_EVENT_CREATED,
  ATTRIBUTE_CHANGED = G_FILE_MONITOR_EVENT_ATTRIBUTE_CHANGED,
  PRE_UNMOUNT = G_FILE_MONITOR_EVENT_PRE_UNMOUNT,
  UNMOUNTED = G_FILE_MONITOR_EVENT_UNMOUNTED,
  MOVED = G_FILE_MONITOR_EVENT_MOVED,
  RENAMED = G_FILE_MONITOR_EVENT_RENAMED,
  MOVED_IN = G_FILE_MONITOR_EVENT_MOVED_IN,
  MOVED_OUT = G_FILE_MONITOR_EVENT_MOVED_OUT,
}; /* enum FileMonitor::Event */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
