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
#include <peel/Gio/Application.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::Application::Flags>
{
  typedef Gio::Application::Flags UnownedType;

  static Gio::Application::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::Application::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::Application::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GApplicationFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Application::Flags flags)
  {
    set (value, flags);
  }

  static Gio::Application::Flags
  cast_for_create (Gio::Application::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Application::Flags> ()
{
  return g_application_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Application::Flags>
{
  Gio::Application::Flags default_value;

  constexpr PspecTraits (Gio::Application::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_application_flags_get_type (),
                               static_cast<::GApplicationFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ Application::Flags : std::underlying_type<::GApplicationFlags>::type
{
  FLAGS_NONE = G_APPLICATION_FLAGS_NONE,
  DEFAULT_FLAGS = G_APPLICATION_DEFAULT_FLAGS,
  IS_SERVICE = G_APPLICATION_IS_SERVICE,
  IS_LAUNCHER = G_APPLICATION_IS_LAUNCHER,
  HANDLES_OPEN = G_APPLICATION_HANDLES_OPEN,
  HANDLES_COMMAND_LINE = G_APPLICATION_HANDLES_COMMAND_LINE,
  SEND_ENVIRONMENT = G_APPLICATION_SEND_ENVIRONMENT,
  NON_UNIQUE = G_APPLICATION_NON_UNIQUE,
  CAN_OVERRIDE_APP_ID = G_APPLICATION_CAN_OVERRIDE_APP_ID,
  ALLOW_REPLACEMENT = G_APPLICATION_ALLOW_REPLACEMENT,
  REPLACE = G_APPLICATION_REPLACE,
}; /* bitfield Application::Flags */

static constexpr inline Application::Flags
operator | (Application::Flags lhs, Application::Flags rhs)
{
  return Application::Flags (static_cast<::GApplicationFlags> (lhs) | static_cast<::GApplicationFlags> (rhs));
}

static constexpr inline Application::Flags
operator & (Application::Flags lhs, Application::Flags rhs)
{
  return Application::Flags (static_cast<::GApplicationFlags> (lhs) & static_cast<::GApplicationFlags> (rhs));
}

static constexpr inline Application::Flags
operator ^ (Application::Flags lhs, Application::Flags rhs)
{
  return Application::Flags (static_cast<::GApplicationFlags> (lhs) ^ static_cast<::GApplicationFlags> (rhs));
}

static constexpr inline Application::Flags
operator ~ (Application::Flags lhs)
{
  return Application::Flags (~static_cast<::GApplicationFlags> (lhs));
}

static inline Application::Flags &
operator |= (Application::Flags &lhs, Application::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Application::Flags &
operator &= (Application::Flags &lhs, Application::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Application::Flags &
operator ^= (Application::Flags &lhs, Application::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Application::Flags lhs)
{
  return !static_cast<::GApplicationFlags> (lhs);
}

static constexpr inline bool
operator + (Application::Flags lhs)
{
  return !!static_cast<::GApplicationFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
