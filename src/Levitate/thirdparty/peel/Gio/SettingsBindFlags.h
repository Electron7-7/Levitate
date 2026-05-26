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
#include <peel/Gio/Settings.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::Settings::BindFlags>
{
  typedef Gio::Settings::BindFlags UnownedType;

  static Gio::Settings::BindFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::Settings::BindFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::Settings::BindFlags flags)
  {
    g_value_set_flags (value, static_cast<::GSettingsBindFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Settings::BindFlags flags)
  {
    set (value, flags);
  }

  static Gio::Settings::BindFlags
  cast_for_create (Gio::Settings::BindFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Settings::BindFlags> ()
{
  return g_settings_bind_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Settings::BindFlags>
{
  Gio::Settings::BindFlags default_value;

  constexpr PspecTraits (Gio::Settings::BindFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_settings_bind_flags_get_type (),
                               static_cast<::GSettingsBindFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ Settings::BindFlags : std::underlying_type<::GSettingsBindFlags>::type
{
  DEFAULT = G_SETTINGS_BIND_DEFAULT,
  GET = G_SETTINGS_BIND_GET,
  SET = G_SETTINGS_BIND_SET,
  NO_SENSITIVITY = G_SETTINGS_BIND_NO_SENSITIVITY,
  GET_NO_CHANGES = G_SETTINGS_BIND_GET_NO_CHANGES,
  INVERT_BOOLEAN = G_SETTINGS_BIND_INVERT_BOOLEAN,
}; /* bitfield Settings::BindFlags */

static constexpr inline Settings::BindFlags
operator | (Settings::BindFlags lhs, Settings::BindFlags rhs)
{
  return Settings::BindFlags (static_cast<::GSettingsBindFlags> (lhs) | static_cast<::GSettingsBindFlags> (rhs));
}

static constexpr inline Settings::BindFlags
operator & (Settings::BindFlags lhs, Settings::BindFlags rhs)
{
  return Settings::BindFlags (static_cast<::GSettingsBindFlags> (lhs) & static_cast<::GSettingsBindFlags> (rhs));
}

static constexpr inline Settings::BindFlags
operator ^ (Settings::BindFlags lhs, Settings::BindFlags rhs)
{
  return Settings::BindFlags (static_cast<::GSettingsBindFlags> (lhs) ^ static_cast<::GSettingsBindFlags> (rhs));
}

static constexpr inline Settings::BindFlags
operator ~ (Settings::BindFlags lhs)
{
  return Settings::BindFlags (~static_cast<::GSettingsBindFlags> (lhs));
}

static inline Settings::BindFlags &
operator |= (Settings::BindFlags &lhs, Settings::BindFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Settings::BindFlags &
operator &= (Settings::BindFlags &lhs, Settings::BindFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Settings::BindFlags &
operator ^= (Settings::BindFlags &lhs, Settings::BindFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Settings::BindFlags lhs)
{
  return !static_cast<::GSettingsBindFlags> (lhs);
}

static constexpr inline bool
operator + (Settings::BindFlags lhs)
{
  return !!static_cast<::GSettingsBindFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
