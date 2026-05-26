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
enum class AskPasswordFlags : std::underlying_type<::GAskPasswordFlags>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::AskPasswordFlags>
{
  typedef Gio::AskPasswordFlags UnownedType;

  static Gio::AskPasswordFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::AskPasswordFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::AskPasswordFlags flags)
  {
    g_value_set_flags (value, static_cast<::GAskPasswordFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::AskPasswordFlags flags)
  {
    set (value, flags);
  }

  static Gio::AskPasswordFlags
  cast_for_create (Gio::AskPasswordFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::AskPasswordFlags> ()
{
  return g_ask_password_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::AskPasswordFlags>
{
  Gio::AskPasswordFlags default_value;

  constexpr PspecTraits (Gio::AskPasswordFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_ask_password_flags_get_type (),
                               static_cast<::GAskPasswordFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ AskPasswordFlags : std::underlying_type<::GAskPasswordFlags>::type
{
  NEED_PASSWORD = G_ASK_PASSWORD_NEED_PASSWORD,
  NEED_USERNAME = G_ASK_PASSWORD_NEED_USERNAME,
  NEED_DOMAIN = G_ASK_PASSWORD_NEED_DOMAIN,
  SAVING_SUPPORTED = G_ASK_PASSWORD_SAVING_SUPPORTED,
  ANONYMOUS_SUPPORTED = G_ASK_PASSWORD_ANONYMOUS_SUPPORTED,
  TCRYPT = G_ASK_PASSWORD_TCRYPT,
}; /* bitfield AskPasswordFlags */

static constexpr inline AskPasswordFlags
operator | (AskPasswordFlags lhs, AskPasswordFlags rhs)
{
  return AskPasswordFlags (static_cast<::GAskPasswordFlags> (lhs) | static_cast<::GAskPasswordFlags> (rhs));
}

static constexpr inline AskPasswordFlags
operator & (AskPasswordFlags lhs, AskPasswordFlags rhs)
{
  return AskPasswordFlags (static_cast<::GAskPasswordFlags> (lhs) & static_cast<::GAskPasswordFlags> (rhs));
}

static constexpr inline AskPasswordFlags
operator ^ (AskPasswordFlags lhs, AskPasswordFlags rhs)
{
  return AskPasswordFlags (static_cast<::GAskPasswordFlags> (lhs) ^ static_cast<::GAskPasswordFlags> (rhs));
}

static constexpr inline AskPasswordFlags
operator ~ (AskPasswordFlags lhs)
{
  return AskPasswordFlags (~static_cast<::GAskPasswordFlags> (lhs));
}

static inline AskPasswordFlags &
operator |= (AskPasswordFlags &lhs, AskPasswordFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline AskPasswordFlags &
operator &= (AskPasswordFlags &lhs, AskPasswordFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline AskPasswordFlags &
operator ^= (AskPasswordFlags &lhs, AskPasswordFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (AskPasswordFlags lhs)
{
  return !static_cast<::GAskPasswordFlags> (lhs);
}

static constexpr inline bool
operator + (AskPasswordFlags lhs)
{
  return !!static_cast<::GAskPasswordFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
