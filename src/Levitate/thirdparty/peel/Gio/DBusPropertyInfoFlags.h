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
#include <peel/Gio/DBusPropertyInfo.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusPropertyInfo::Flags>
{
  typedef Gio::DBusPropertyInfo::Flags UnownedType;

  static Gio::DBusPropertyInfo::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusPropertyInfo::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::DBusPropertyInfo::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GDBusPropertyInfoFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusPropertyInfo::Flags flags)
  {
    set (value, flags);
  }

  static Gio::DBusPropertyInfo::Flags
  cast_for_create (Gio::DBusPropertyInfo::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusPropertyInfo::Flags> ()
{
  return g_dbus_property_info_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusPropertyInfo::Flags>
{
  Gio::DBusPropertyInfo::Flags default_value;

  constexpr PspecTraits (Gio::DBusPropertyInfo::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_dbus_property_info_flags_get_type (),
                               static_cast<::GDBusPropertyInfoFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ DBusPropertyInfo::Flags : std::underlying_type<::GDBusPropertyInfoFlags>::type
{
  NONE = G_DBUS_PROPERTY_INFO_FLAGS_NONE,
  READABLE = G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
  WRITABLE = G_DBUS_PROPERTY_INFO_FLAGS_WRITABLE,
}; /* bitfield DBusPropertyInfo::Flags */

static constexpr inline DBusPropertyInfo::Flags
operator | (DBusPropertyInfo::Flags lhs, DBusPropertyInfo::Flags rhs)
{
  return DBusPropertyInfo::Flags (static_cast<::GDBusPropertyInfoFlags> (lhs) | static_cast<::GDBusPropertyInfoFlags> (rhs));
}

static constexpr inline DBusPropertyInfo::Flags
operator & (DBusPropertyInfo::Flags lhs, DBusPropertyInfo::Flags rhs)
{
  return DBusPropertyInfo::Flags (static_cast<::GDBusPropertyInfoFlags> (lhs) & static_cast<::GDBusPropertyInfoFlags> (rhs));
}

static constexpr inline DBusPropertyInfo::Flags
operator ^ (DBusPropertyInfo::Flags lhs, DBusPropertyInfo::Flags rhs)
{
  return DBusPropertyInfo::Flags (static_cast<::GDBusPropertyInfoFlags> (lhs) ^ static_cast<::GDBusPropertyInfoFlags> (rhs));
}

static constexpr inline DBusPropertyInfo::Flags
operator ~ (DBusPropertyInfo::Flags lhs)
{
  return DBusPropertyInfo::Flags (~static_cast<::GDBusPropertyInfoFlags> (lhs));
}

static inline DBusPropertyInfo::Flags &
operator |= (DBusPropertyInfo::Flags &lhs, DBusPropertyInfo::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DBusPropertyInfo::Flags &
operator &= (DBusPropertyInfo::Flags &lhs, DBusPropertyInfo::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DBusPropertyInfo::Flags &
operator ^= (DBusPropertyInfo::Flags &lhs, DBusPropertyInfo::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DBusPropertyInfo::Flags lhs)
{
  return !static_cast<::GDBusPropertyInfoFlags> (lhs);
}

static constexpr inline bool
operator + (DBusPropertyInfo::Flags lhs)
{
  return !!static_cast<::GDBusPropertyInfoFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
