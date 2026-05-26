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
enum class RegexCompileFlags : std::underlying_type<::GRegexCompileFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::RegexCompileFlags>
{
  typedef GLib::RegexCompileFlags UnownedType;

  static GLib::RegexCompileFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::RegexCompileFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::RegexCompileFlags flags)
  {
    g_value_set_flags (value, static_cast<::GRegexCompileFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::RegexCompileFlags flags)
  {
    set (value, flags);
  }

  static GLib::RegexCompileFlags
  cast_for_create (GLib::RegexCompileFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ RegexCompileFlags : std::underlying_type<::GRegexCompileFlags>::type
{
  DEFAULT = G_REGEX_DEFAULT,
  CASELESS = G_REGEX_CASELESS,
  MULTILINE = G_REGEX_MULTILINE,
  DOTALL = G_REGEX_DOTALL,
  EXTENDED = G_REGEX_EXTENDED,
  ANCHORED = G_REGEX_ANCHORED,
  DOLLAR_ENDONLY = G_REGEX_DOLLAR_ENDONLY,
  UNGREEDY = G_REGEX_UNGREEDY,
  RAW = G_REGEX_RAW,
  NO_AUTO_CAPTURE = G_REGEX_NO_AUTO_CAPTURE,
  OPTIMIZE = G_REGEX_OPTIMIZE,
  FIRSTLINE = G_REGEX_FIRSTLINE,
  DUPNAMES = G_REGEX_DUPNAMES,
  NEWLINE_CR = G_REGEX_NEWLINE_CR,
  NEWLINE_LF = G_REGEX_NEWLINE_LF,
  NEWLINE_RESERVED1 = G_REGEX_NEWLINE_RESERVED1,
}; /* bitfield RegexCompileFlags */

static constexpr inline RegexCompileFlags
operator | (RegexCompileFlags lhs, RegexCompileFlags rhs)
{
  return RegexCompileFlags (static_cast<::GRegexCompileFlags> (lhs) | static_cast<::GRegexCompileFlags> (rhs));
}

static constexpr inline RegexCompileFlags
operator & (RegexCompileFlags lhs, RegexCompileFlags rhs)
{
  return RegexCompileFlags (static_cast<::GRegexCompileFlags> (lhs) & static_cast<::GRegexCompileFlags> (rhs));
}

static constexpr inline RegexCompileFlags
operator ^ (RegexCompileFlags lhs, RegexCompileFlags rhs)
{
  return RegexCompileFlags (static_cast<::GRegexCompileFlags> (lhs) ^ static_cast<::GRegexCompileFlags> (rhs));
}

static constexpr inline RegexCompileFlags
operator ~ (RegexCompileFlags lhs)
{
  return RegexCompileFlags (~static_cast<::GRegexCompileFlags> (lhs));
}

static inline RegexCompileFlags &
operator |= (RegexCompileFlags &lhs, RegexCompileFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline RegexCompileFlags &
operator &= (RegexCompileFlags &lhs, RegexCompileFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline RegexCompileFlags &
operator ^= (RegexCompileFlags &lhs, RegexCompileFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (RegexCompileFlags lhs)
{
  return !static_cast<::GRegexCompileFlags> (lhs);
}

static constexpr inline bool
operator + (RegexCompileFlags lhs)
{
  return !!static_cast<::GRegexCompileFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
