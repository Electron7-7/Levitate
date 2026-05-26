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
struct GObject::Value::Traits<Gio::Mount::UnmountFlags>
{
  typedef Gio::Mount::UnmountFlags UnownedType;

  static Gio::Mount::UnmountFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::Mount::UnmountFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::Mount::UnmountFlags flags)
  {
    g_value_set_flags (value, static_cast<::GMountUnmountFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Mount::UnmountFlags flags)
  {
    set (value, flags);
  }

  static Gio::Mount::UnmountFlags
  cast_for_create (Gio::Mount::UnmountFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Mount::UnmountFlags> ()
{
  return g_mount_unmount_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Mount::UnmountFlags>
{
  Gio::Mount::UnmountFlags default_value;

  constexpr PspecTraits (Gio::Mount::UnmountFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_mount_unmount_flags_get_type (),
                               static_cast<::GMountUnmountFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ Mount::UnmountFlags : std::underlying_type<::GMountUnmountFlags>::type
{
  NONE = G_MOUNT_UNMOUNT_NONE,
  FORCE = G_MOUNT_UNMOUNT_FORCE,
}; /* bitfield Mount::UnmountFlags */

static constexpr inline Mount::UnmountFlags
operator | (Mount::UnmountFlags lhs, Mount::UnmountFlags rhs)
{
  return Mount::UnmountFlags (static_cast<::GMountUnmountFlags> (lhs) | static_cast<::GMountUnmountFlags> (rhs));
}

static constexpr inline Mount::UnmountFlags
operator & (Mount::UnmountFlags lhs, Mount::UnmountFlags rhs)
{
  return Mount::UnmountFlags (static_cast<::GMountUnmountFlags> (lhs) & static_cast<::GMountUnmountFlags> (rhs));
}

static constexpr inline Mount::UnmountFlags
operator ^ (Mount::UnmountFlags lhs, Mount::UnmountFlags rhs)
{
  return Mount::UnmountFlags (static_cast<::GMountUnmountFlags> (lhs) ^ static_cast<::GMountUnmountFlags> (rhs));
}

static constexpr inline Mount::UnmountFlags
operator ~ (Mount::UnmountFlags lhs)
{
  return Mount::UnmountFlags (~static_cast<::GMountUnmountFlags> (lhs));
}

static inline Mount::UnmountFlags &
operator |= (Mount::UnmountFlags &lhs, Mount::UnmountFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Mount::UnmountFlags &
operator &= (Mount::UnmountFlags &lhs, Mount::UnmountFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Mount::UnmountFlags &
operator ^= (Mount::UnmountFlags &lhs, Mount::UnmountFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Mount::UnmountFlags lhs)
{
  return !static_cast<::GMountUnmountFlags> (lhs);
}

static constexpr inline bool
operator + (Mount::UnmountFlags lhs)
{
  return !!static_cast<::GMountUnmountFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
