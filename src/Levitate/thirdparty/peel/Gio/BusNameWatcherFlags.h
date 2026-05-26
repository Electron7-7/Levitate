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
enum class BusNameWatcherFlags : std::underlying_type<::GBusNameWatcherFlags>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::BusNameWatcherFlags>
{
  typedef Gio::BusNameWatcherFlags UnownedType;

  static Gio::BusNameWatcherFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::BusNameWatcherFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::BusNameWatcherFlags flags)
  {
    g_value_set_flags (value, static_cast<::GBusNameWatcherFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::BusNameWatcherFlags flags)
  {
    set (value, flags);
  }

  static Gio::BusNameWatcherFlags
  cast_for_create (Gio::BusNameWatcherFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::BusNameWatcherFlags> ()
{
  return g_bus_name_watcher_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::BusNameWatcherFlags>
{
  Gio::BusNameWatcherFlags default_value;

  constexpr PspecTraits (Gio::BusNameWatcherFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_bus_name_watcher_flags_get_type (),
                               static_cast<::GBusNameWatcherFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ BusNameWatcherFlags : std::underlying_type<::GBusNameWatcherFlags>::type
{
  NONE = G_BUS_NAME_WATCHER_FLAGS_NONE,
  AUTO_START = G_BUS_NAME_WATCHER_FLAGS_AUTO_START,
}; /* bitfield BusNameWatcherFlags */

static constexpr inline BusNameWatcherFlags
operator | (BusNameWatcherFlags lhs, BusNameWatcherFlags rhs)
{
  return BusNameWatcherFlags (static_cast<::GBusNameWatcherFlags> (lhs) | static_cast<::GBusNameWatcherFlags> (rhs));
}

static constexpr inline BusNameWatcherFlags
operator & (BusNameWatcherFlags lhs, BusNameWatcherFlags rhs)
{
  return BusNameWatcherFlags (static_cast<::GBusNameWatcherFlags> (lhs) & static_cast<::GBusNameWatcherFlags> (rhs));
}

static constexpr inline BusNameWatcherFlags
operator ^ (BusNameWatcherFlags lhs, BusNameWatcherFlags rhs)
{
  return BusNameWatcherFlags (static_cast<::GBusNameWatcherFlags> (lhs) ^ static_cast<::GBusNameWatcherFlags> (rhs));
}

static constexpr inline BusNameWatcherFlags
operator ~ (BusNameWatcherFlags lhs)
{
  return BusNameWatcherFlags (~static_cast<::GBusNameWatcherFlags> (lhs));
}

static inline BusNameWatcherFlags &
operator |= (BusNameWatcherFlags &lhs, BusNameWatcherFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline BusNameWatcherFlags &
operator &= (BusNameWatcherFlags &lhs, BusNameWatcherFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline BusNameWatcherFlags &
operator ^= (BusNameWatcherFlags &lhs, BusNameWatcherFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (BusNameWatcherFlags lhs)
{
  return !static_cast<::GBusNameWatcherFlags> (lhs);
}

static constexpr inline bool
operator + (BusNameWatcherFlags lhs)
{
  return !!static_cast<::GBusNameWatcherFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
