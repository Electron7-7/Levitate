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
#include <peel/Gio/Drive.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::Drive::StartFlags>
{
  typedef Gio::Drive::StartFlags UnownedType;

  static Gio::Drive::StartFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::Drive::StartFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::Drive::StartFlags flags)
  {
    g_value_set_flags (value, static_cast<::GDriveStartFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Drive::StartFlags flags)
  {
    set (value, flags);
  }

  static Gio::Drive::StartFlags
  cast_for_create (Gio::Drive::StartFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Drive::StartFlags> ()
{
  return g_drive_start_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Drive::StartFlags>
{
  Gio::Drive::StartFlags default_value;

  constexpr PspecTraits (Gio::Drive::StartFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_drive_start_flags_get_type (),
                               static_cast<::GDriveStartFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ Drive::StartFlags : std::underlying_type<::GDriveStartFlags>::type
{
  NONE = G_DRIVE_START_NONE,
}; /* bitfield Drive::StartFlags */

static constexpr inline Drive::StartFlags
operator | (Drive::StartFlags lhs, Drive::StartFlags rhs)
{
  return Drive::StartFlags (static_cast<::GDriveStartFlags> (lhs) | static_cast<::GDriveStartFlags> (rhs));
}

static constexpr inline Drive::StartFlags
operator & (Drive::StartFlags lhs, Drive::StartFlags rhs)
{
  return Drive::StartFlags (static_cast<::GDriveStartFlags> (lhs) & static_cast<::GDriveStartFlags> (rhs));
}

static constexpr inline Drive::StartFlags
operator ^ (Drive::StartFlags lhs, Drive::StartFlags rhs)
{
  return Drive::StartFlags (static_cast<::GDriveStartFlags> (lhs) ^ static_cast<::GDriveStartFlags> (rhs));
}

static constexpr inline Drive::StartFlags
operator ~ (Drive::StartFlags lhs)
{
  return Drive::StartFlags (~static_cast<::GDriveStartFlags> (lhs));
}

static inline Drive::StartFlags &
operator |= (Drive::StartFlags &lhs, Drive::StartFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Drive::StartFlags &
operator &= (Drive::StartFlags &lhs, Drive::StartFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Drive::StartFlags &
operator ^= (Drive::StartFlags &lhs, Drive::StartFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Drive::StartFlags lhs)
{
  return !static_cast<::GDriveStartFlags> (lhs);
}

static constexpr inline bool
operator + (Drive::StartFlags lhs)
{
  return !!static_cast<::GDriveStartFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
