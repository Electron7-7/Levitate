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
#include <peel/Gio/DBusInterfaceSkeleton.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusInterfaceSkeleton::Flags>
{
  typedef Gio::DBusInterfaceSkeleton::Flags UnownedType;

  static Gio::DBusInterfaceSkeleton::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusInterfaceSkeleton::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::DBusInterfaceSkeleton::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GDBusInterfaceSkeletonFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusInterfaceSkeleton::Flags flags)
  {
    set (value, flags);
  }

  static Gio::DBusInterfaceSkeleton::Flags
  cast_for_create (Gio::DBusInterfaceSkeleton::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusInterfaceSkeleton::Flags> ()
{
  return g_dbus_interface_skeleton_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusInterfaceSkeleton::Flags>
{
  Gio::DBusInterfaceSkeleton::Flags default_value;

  constexpr PspecTraits (Gio::DBusInterfaceSkeleton::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_dbus_interface_skeleton_flags_get_type (),
                               static_cast<::GDBusInterfaceSkeletonFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ DBusInterfaceSkeleton::Flags : std::underlying_type<::GDBusInterfaceSkeletonFlags>::type
{
  NONE = G_DBUS_INTERFACE_SKELETON_FLAGS_NONE,
  HANDLE_METHOD_INVOCATIONS_IN_THREAD = G_DBUS_INTERFACE_SKELETON_FLAGS_HANDLE_METHOD_INVOCATIONS_IN_THREAD,
}; /* bitfield DBusInterfaceSkeleton::Flags */

static constexpr inline DBusInterfaceSkeleton::Flags
operator | (DBusInterfaceSkeleton::Flags lhs, DBusInterfaceSkeleton::Flags rhs)
{
  return DBusInterfaceSkeleton::Flags (static_cast<::GDBusInterfaceSkeletonFlags> (lhs) | static_cast<::GDBusInterfaceSkeletonFlags> (rhs));
}

static constexpr inline DBusInterfaceSkeleton::Flags
operator & (DBusInterfaceSkeleton::Flags lhs, DBusInterfaceSkeleton::Flags rhs)
{
  return DBusInterfaceSkeleton::Flags (static_cast<::GDBusInterfaceSkeletonFlags> (lhs) & static_cast<::GDBusInterfaceSkeletonFlags> (rhs));
}

static constexpr inline DBusInterfaceSkeleton::Flags
operator ^ (DBusInterfaceSkeleton::Flags lhs, DBusInterfaceSkeleton::Flags rhs)
{
  return DBusInterfaceSkeleton::Flags (static_cast<::GDBusInterfaceSkeletonFlags> (lhs) ^ static_cast<::GDBusInterfaceSkeletonFlags> (rhs));
}

static constexpr inline DBusInterfaceSkeleton::Flags
operator ~ (DBusInterfaceSkeleton::Flags lhs)
{
  return DBusInterfaceSkeleton::Flags (~static_cast<::GDBusInterfaceSkeletonFlags> (lhs));
}

static inline DBusInterfaceSkeleton::Flags &
operator |= (DBusInterfaceSkeleton::Flags &lhs, DBusInterfaceSkeleton::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DBusInterfaceSkeleton::Flags &
operator &= (DBusInterfaceSkeleton::Flags &lhs, DBusInterfaceSkeleton::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DBusInterfaceSkeleton::Flags &
operator ^= (DBusInterfaceSkeleton::Flags &lhs, DBusInterfaceSkeleton::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DBusInterfaceSkeleton::Flags lhs)
{
  return !static_cast<::GDBusInterfaceSkeletonFlags> (lhs);
}

static constexpr inline bool
operator + (DBusInterfaceSkeleton::Flags lhs)
{
  return !!static_cast<::GDBusInterfaceSkeletonFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
