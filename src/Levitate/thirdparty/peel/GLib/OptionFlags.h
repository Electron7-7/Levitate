#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
enum class OptionFlags : std::underlying_type<::GOptionFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::OptionFlags>
{
  typedef GLib::OptionFlags UnownedType;

  static GLib::OptionFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::OptionFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::OptionFlags flags)
  {
    g_value_set_flags (value, static_cast<::GOptionFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::OptionFlags flags)
  {
    set (value, flags);
  }

  static GLib::OptionFlags
  cast_for_create (GLib::OptionFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ OptionFlags : std::underlying_type<::GOptionFlags>::type
{
  NONE = G_OPTION_FLAG_NONE,
  HIDDEN = G_OPTION_FLAG_HIDDEN,
  IN_MAIN = G_OPTION_FLAG_IN_MAIN,
  REVERSE = G_OPTION_FLAG_REVERSE,
  NO_ARG = G_OPTION_FLAG_NO_ARG,
  FILENAME = G_OPTION_FLAG_FILENAME,
  OPTIONAL_ARG = G_OPTION_FLAG_OPTIONAL_ARG,
  NOALIAS = G_OPTION_FLAG_NOALIAS,
  DEPRECATED = G_OPTION_FLAG_DEPRECATED,
}; /* bitfield OptionFlags */

static constexpr inline OptionFlags
operator | (OptionFlags lhs, OptionFlags rhs)
{
  return OptionFlags (static_cast<::GOptionFlags> (lhs) | static_cast<::GOptionFlags> (rhs));
}

static constexpr inline OptionFlags
operator & (OptionFlags lhs, OptionFlags rhs)
{
  return OptionFlags (static_cast<::GOptionFlags> (lhs) & static_cast<::GOptionFlags> (rhs));
}

static constexpr inline OptionFlags
operator ^ (OptionFlags lhs, OptionFlags rhs)
{
  return OptionFlags (static_cast<::GOptionFlags> (lhs) ^ static_cast<::GOptionFlags> (rhs));
}

static constexpr inline OptionFlags
operator ~ (OptionFlags lhs)
{
  return OptionFlags (~static_cast<::GOptionFlags> (lhs));
}

static inline OptionFlags &
operator |= (OptionFlags &lhs, OptionFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline OptionFlags &
operator &= (OptionFlags &lhs, OptionFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline OptionFlags &
operator ^= (OptionFlags &lhs, OptionFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (OptionFlags lhs)
{
  return !static_cast<::GOptionFlags> (lhs);
}

static constexpr inline bool
operator + (OptionFlags lhs)
{
  return !!static_cast<::GOptionFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
