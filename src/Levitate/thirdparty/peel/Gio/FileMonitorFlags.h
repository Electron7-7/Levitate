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
#include <peel/Gio/File.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::File::MonitorFlags>
{
  typedef Gio::File::MonitorFlags UnownedType;

  static Gio::File::MonitorFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::File::MonitorFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::File::MonitorFlags flags)
  {
    g_value_set_flags (value, static_cast<::GFileMonitorFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::File::MonitorFlags flags)
  {
    set (value, flags);
  }

  static Gio::File::MonitorFlags
  cast_for_create (Gio::File::MonitorFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::File::MonitorFlags> ()
{
  return g_file_monitor_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::File::MonitorFlags>
{
  Gio::File::MonitorFlags default_value;

  constexpr PspecTraits (Gio::File::MonitorFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_file_monitor_flags_get_type (),
                               static_cast<::GFileMonitorFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ File::MonitorFlags : std::underlying_type<::GFileMonitorFlags>::type
{
  NONE = G_FILE_MONITOR_NONE,
  WATCH_MOUNTS = G_FILE_MONITOR_WATCH_MOUNTS,
  SEND_MOVED = G_FILE_MONITOR_SEND_MOVED,
  WATCH_HARD_LINKS = G_FILE_MONITOR_WATCH_HARD_LINKS,
  WATCH_MOVES = G_FILE_MONITOR_WATCH_MOVES,
}; /* bitfield File::MonitorFlags */

static constexpr inline File::MonitorFlags
operator | (File::MonitorFlags lhs, File::MonitorFlags rhs)
{
  return File::MonitorFlags (static_cast<::GFileMonitorFlags> (lhs) | static_cast<::GFileMonitorFlags> (rhs));
}

static constexpr inline File::MonitorFlags
operator & (File::MonitorFlags lhs, File::MonitorFlags rhs)
{
  return File::MonitorFlags (static_cast<::GFileMonitorFlags> (lhs) & static_cast<::GFileMonitorFlags> (rhs));
}

static constexpr inline File::MonitorFlags
operator ^ (File::MonitorFlags lhs, File::MonitorFlags rhs)
{
  return File::MonitorFlags (static_cast<::GFileMonitorFlags> (lhs) ^ static_cast<::GFileMonitorFlags> (rhs));
}

static constexpr inline File::MonitorFlags
operator ~ (File::MonitorFlags lhs)
{
  return File::MonitorFlags (~static_cast<::GFileMonitorFlags> (lhs));
}

static inline File::MonitorFlags &
operator |= (File::MonitorFlags &lhs, File::MonitorFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline File::MonitorFlags &
operator &= (File::MonitorFlags &lhs, File::MonitorFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline File::MonitorFlags &
operator ^= (File::MonitorFlags &lhs, File::MonitorFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (File::MonitorFlags lhs)
{
  return !static_cast<::GFileMonitorFlags> (lhs);
}

static constexpr inline bool
operator + (File::MonitorFlags lhs)
{
  return !!static_cast<::GFileMonitorFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
