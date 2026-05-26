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
enum class DBusSubtreeFlags : std::underlying_type<::GDBusSubtreeFlags>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusSubtreeFlags>
{
  typedef Gio::DBusSubtreeFlags UnownedType;

  static Gio::DBusSubtreeFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusSubtreeFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::DBusSubtreeFlags flags)
  {
    g_value_set_flags (value, static_cast<::GDBusSubtreeFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusSubtreeFlags flags)
  {
    set (value, flags);
  }

  static Gio::DBusSubtreeFlags
  cast_for_create (Gio::DBusSubtreeFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusSubtreeFlags> ()
{
  return g_dbus_subtree_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusSubtreeFlags>
{
  Gio::DBusSubtreeFlags default_value;

  constexpr PspecTraits (Gio::DBusSubtreeFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_dbus_subtree_flags_get_type (),
                               static_cast<::GDBusSubtreeFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ DBusSubtreeFlags : std::underlying_type<::GDBusSubtreeFlags>::type
{
  NONE = G_DBUS_SUBTREE_FLAGS_NONE,
  DISPATCH_TO_UNENUMERATED_NODES = G_DBUS_SUBTREE_FLAGS_DISPATCH_TO_UNENUMERATED_NODES,
}; /* bitfield DBusSubtreeFlags */

static constexpr inline DBusSubtreeFlags
operator | (DBusSubtreeFlags lhs, DBusSubtreeFlags rhs)
{
  return DBusSubtreeFlags (static_cast<::GDBusSubtreeFlags> (lhs) | static_cast<::GDBusSubtreeFlags> (rhs));
}

static constexpr inline DBusSubtreeFlags
operator & (DBusSubtreeFlags lhs, DBusSubtreeFlags rhs)
{
  return DBusSubtreeFlags (static_cast<::GDBusSubtreeFlags> (lhs) & static_cast<::GDBusSubtreeFlags> (rhs));
}

static constexpr inline DBusSubtreeFlags
operator ^ (DBusSubtreeFlags lhs, DBusSubtreeFlags rhs)
{
  return DBusSubtreeFlags (static_cast<::GDBusSubtreeFlags> (lhs) ^ static_cast<::GDBusSubtreeFlags> (rhs));
}

static constexpr inline DBusSubtreeFlags
operator ~ (DBusSubtreeFlags lhs)
{
  return DBusSubtreeFlags (~static_cast<::GDBusSubtreeFlags> (lhs));
}

static inline DBusSubtreeFlags &
operator |= (DBusSubtreeFlags &lhs, DBusSubtreeFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline DBusSubtreeFlags &
operator &= (DBusSubtreeFlags &lhs, DBusSubtreeFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline DBusSubtreeFlags &
operator ^= (DBusSubtreeFlags &lhs, DBusSubtreeFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (DBusSubtreeFlags lhs)
{
  return !static_cast<::GDBusSubtreeFlags> (lhs);
}

static constexpr inline bool
operator + (DBusSubtreeFlags lhs)
{
  return !!static_cast<::GDBusSubtreeFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
