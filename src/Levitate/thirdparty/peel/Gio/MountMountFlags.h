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
#include <peel/Gio/Mount.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::Mount::MountFlags>
{
  typedef Gio::Mount::MountFlags UnownedType;

  static Gio::Mount::MountFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::Mount::MountFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::Mount::MountFlags flags)
  {
    g_value_set_flags (value, static_cast<::GMountMountFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Mount::MountFlags flags)
  {
    set (value, flags);
  }

  static Gio::Mount::MountFlags
  cast_for_create (Gio::Mount::MountFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Mount::MountFlags> ()
{
  return g_mount_mount_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Mount::MountFlags>
{
  Gio::Mount::MountFlags default_value;

  constexpr PspecTraits (Gio::Mount::MountFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_mount_mount_flags_get_type (),
                               static_cast<::GMountMountFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ Mount::MountFlags : std::underlying_type<::GMountMountFlags>::type
{
  NONE = G_MOUNT_MOUNT_NONE,
}; /* bitfield Mount::MountFlags */

static constexpr inline Mount::MountFlags
operator | (Mount::MountFlags lhs, Mount::MountFlags rhs)
{
  return Mount::MountFlags (static_cast<::GMountMountFlags> (lhs) | static_cast<::GMountMountFlags> (rhs));
}

static constexpr inline Mount::MountFlags
operator & (Mount::MountFlags lhs, Mount::MountFlags rhs)
{
  return Mount::MountFlags (static_cast<::GMountMountFlags> (lhs) & static_cast<::GMountMountFlags> (rhs));
}

static constexpr inline Mount::MountFlags
operator ^ (Mount::MountFlags lhs, Mount::MountFlags rhs)
{
  return Mount::MountFlags (static_cast<::GMountMountFlags> (lhs) ^ static_cast<::GMountMountFlags> (rhs));
}

static constexpr inline Mount::MountFlags
operator ~ (Mount::MountFlags lhs)
{
  return Mount::MountFlags (~static_cast<::GMountMountFlags> (lhs));
}

static inline Mount::MountFlags &
operator |= (Mount::MountFlags &lhs, Mount::MountFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Mount::MountFlags &
operator &= (Mount::MountFlags &lhs, Mount::MountFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Mount::MountFlags &
operator ^= (Mount::MountFlags &lhs, Mount::MountFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Mount::MountFlags lhs)
{
  return !static_cast<::GMountMountFlags> (lhs);
}

static constexpr inline bool
operator + (Mount::MountFlags lhs)
{
  return !!static_cast<::GMountMountFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
