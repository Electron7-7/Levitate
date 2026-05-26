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
#include <peel/Gio/AppInfo.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::AppInfo::CreateFlags>
{
  typedef Gio::AppInfo::CreateFlags UnownedType;

  static Gio::AppInfo::CreateFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::AppInfo::CreateFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::AppInfo::CreateFlags flags)
  {
    g_value_set_flags (value, static_cast<::GAppInfoCreateFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::AppInfo::CreateFlags flags)
  {
    set (value, flags);
  }

  static Gio::AppInfo::CreateFlags
  cast_for_create (Gio::AppInfo::CreateFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::AppInfo::CreateFlags> ()
{
  return g_app_info_create_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::AppInfo::CreateFlags>
{
  Gio::AppInfo::CreateFlags default_value;

  constexpr PspecTraits (Gio::AppInfo::CreateFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_app_info_create_flags_get_type (),
                               static_cast<::GAppInfoCreateFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ AppInfo::CreateFlags : std::underlying_type<::GAppInfoCreateFlags>::type
{
  NONE = G_APP_INFO_CREATE_NONE,
  NEEDS_TERMINAL = G_APP_INFO_CREATE_NEEDS_TERMINAL,
  SUPPORTS_URIS = G_APP_INFO_CREATE_SUPPORTS_URIS,
  SUPPORTS_STARTUP_NOTIFICATION = G_APP_INFO_CREATE_SUPPORTS_STARTUP_NOTIFICATION,
}; /* bitfield AppInfo::CreateFlags */

static constexpr inline AppInfo::CreateFlags
operator | (AppInfo::CreateFlags lhs, AppInfo::CreateFlags rhs)
{
  return AppInfo::CreateFlags (static_cast<::GAppInfoCreateFlags> (lhs) | static_cast<::GAppInfoCreateFlags> (rhs));
}

static constexpr inline AppInfo::CreateFlags
operator & (AppInfo::CreateFlags lhs, AppInfo::CreateFlags rhs)
{
  return AppInfo::CreateFlags (static_cast<::GAppInfoCreateFlags> (lhs) & static_cast<::GAppInfoCreateFlags> (rhs));
}

static constexpr inline AppInfo::CreateFlags
operator ^ (AppInfo::CreateFlags lhs, AppInfo::CreateFlags rhs)
{
  return AppInfo::CreateFlags (static_cast<::GAppInfoCreateFlags> (lhs) ^ static_cast<::GAppInfoCreateFlags> (rhs));
}

static constexpr inline AppInfo::CreateFlags
operator ~ (AppInfo::CreateFlags lhs)
{
  return AppInfo::CreateFlags (~static_cast<::GAppInfoCreateFlags> (lhs));
}

static inline AppInfo::CreateFlags &
operator |= (AppInfo::CreateFlags &lhs, AppInfo::CreateFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline AppInfo::CreateFlags &
operator &= (AppInfo::CreateFlags &lhs, AppInfo::CreateFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline AppInfo::CreateFlags &
operator ^= (AppInfo::CreateFlags &lhs, AppInfo::CreateFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (AppInfo::CreateFlags lhs)
{
  return !static_cast<::GAppInfoCreateFlags> (lhs);
}

static constexpr inline bool
operator + (AppInfo::CreateFlags lhs)
{
  return !!static_cast<::GAppInfoCreateFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
