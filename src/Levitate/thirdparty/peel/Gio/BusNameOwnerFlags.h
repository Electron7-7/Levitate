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
enum class BusNameOwnerFlags : std::underlying_type<::GBusNameOwnerFlags>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::BusNameOwnerFlags>
{
  typedef Gio::BusNameOwnerFlags UnownedType;

  static Gio::BusNameOwnerFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::BusNameOwnerFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::BusNameOwnerFlags flags)
  {
    g_value_set_flags (value, static_cast<::GBusNameOwnerFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::BusNameOwnerFlags flags)
  {
    set (value, flags);
  }

  static Gio::BusNameOwnerFlags
  cast_for_create (Gio::BusNameOwnerFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::BusNameOwnerFlags> ()
{
  return g_bus_name_owner_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::BusNameOwnerFlags>
{
  Gio::BusNameOwnerFlags default_value;

  constexpr PspecTraits (Gio::BusNameOwnerFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_bus_name_owner_flags_get_type (),
                               static_cast<::GBusNameOwnerFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ BusNameOwnerFlags : std::underlying_type<::GBusNameOwnerFlags>::type
{
  NONE = G_BUS_NAME_OWNER_FLAGS_NONE,
  ALLOW_REPLACEMENT = G_BUS_NAME_OWNER_FLAGS_ALLOW_REPLACEMENT,
  REPLACE = G_BUS_NAME_OWNER_FLAGS_REPLACE,
  DO_NOT_QUEUE = G_BUS_NAME_OWNER_FLAGS_DO_NOT_QUEUE,
}; /* bitfield BusNameOwnerFlags */

static constexpr inline BusNameOwnerFlags
operator | (BusNameOwnerFlags lhs, BusNameOwnerFlags rhs)
{
  return BusNameOwnerFlags (static_cast<::GBusNameOwnerFlags> (lhs) | static_cast<::GBusNameOwnerFlags> (rhs));
}

static constexpr inline BusNameOwnerFlags
operator & (BusNameOwnerFlags lhs, BusNameOwnerFlags rhs)
{
  return BusNameOwnerFlags (static_cast<::GBusNameOwnerFlags> (lhs) & static_cast<::GBusNameOwnerFlags> (rhs));
}

static constexpr inline BusNameOwnerFlags
operator ^ (BusNameOwnerFlags lhs, BusNameOwnerFlags rhs)
{
  return BusNameOwnerFlags (static_cast<::GBusNameOwnerFlags> (lhs) ^ static_cast<::GBusNameOwnerFlags> (rhs));
}

static constexpr inline BusNameOwnerFlags
operator ~ (BusNameOwnerFlags lhs)
{
  return BusNameOwnerFlags (~static_cast<::GBusNameOwnerFlags> (lhs));
}

static inline BusNameOwnerFlags &
operator |= (BusNameOwnerFlags &lhs, BusNameOwnerFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline BusNameOwnerFlags &
operator &= (BusNameOwnerFlags &lhs, BusNameOwnerFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline BusNameOwnerFlags &
operator ^= (BusNameOwnerFlags &lhs, BusNameOwnerFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (BusNameOwnerFlags lhs)
{
  return !static_cast<::GBusNameOwnerFlags> (lhs);
}

static constexpr inline bool
operator + (BusNameOwnerFlags lhs)
{
  return !!static_cast<::GBusNameOwnerFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
