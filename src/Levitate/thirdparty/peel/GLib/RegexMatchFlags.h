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
enum class RegexMatchFlags : std::underlying_type<::GRegexMatchFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::RegexMatchFlags>
{
  typedef GLib::RegexMatchFlags UnownedType;

  static GLib::RegexMatchFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::RegexMatchFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::RegexMatchFlags flags)
  {
    g_value_set_flags (value, static_cast<::GRegexMatchFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::RegexMatchFlags flags)
  {
    set (value, flags);
  }

  static GLib::RegexMatchFlags
  cast_for_create (GLib::RegexMatchFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ RegexMatchFlags : std::underlying_type<::GRegexMatchFlags>::type
{
  DEFAULT = G_REGEX_MATCH_DEFAULT,
  ANCHORED = G_REGEX_MATCH_ANCHORED,
  NOTBOL = G_REGEX_MATCH_NOTBOL,
  NOTEOL = G_REGEX_MATCH_NOTEOL,
  NOTEMPTY = G_REGEX_MATCH_NOTEMPTY,
  PARTIAL = G_REGEX_MATCH_PARTIAL,
  NEWLINE_CR = G_REGEX_MATCH_NEWLINE_CR,
  NEWLINE_LF = G_REGEX_MATCH_NEWLINE_LF,
  NEWLINE_CRLF = G_REGEX_MATCH_NEWLINE_CRLF,
  NEWLINE_ANY = G_REGEX_MATCH_NEWLINE_ANY,
  NEWLINE_ANYCRLF = G_REGEX_MATCH_NEWLINE_ANYCRLF,
  BSR_ANYCRLF = G_REGEX_MATCH_BSR_ANYCRLF,
  BSR_ANY = G_REGEX_MATCH_BSR_ANY,
  PARTIAL_SOFT = G_REGEX_MATCH_PARTIAL_SOFT,
  PARTIAL_HARD = G_REGEX_MATCH_PARTIAL_HARD,
  NOTEMPTY_ATSTART = G_REGEX_MATCH_NOTEMPTY_ATSTART,
}; /* bitfield RegexMatchFlags */

static constexpr inline RegexMatchFlags
operator | (RegexMatchFlags lhs, RegexMatchFlags rhs)
{
  return RegexMatchFlags (static_cast<::GRegexMatchFlags> (lhs) | static_cast<::GRegexMatchFlags> (rhs));
}

static constexpr inline RegexMatchFlags
operator & (RegexMatchFlags lhs, RegexMatchFlags rhs)
{
  return RegexMatchFlags (static_cast<::GRegexMatchFlags> (lhs) & static_cast<::GRegexMatchFlags> (rhs));
}

static constexpr inline RegexMatchFlags
operator ^ (RegexMatchFlags lhs, RegexMatchFlags rhs)
{
  return RegexMatchFlags (static_cast<::GRegexMatchFlags> (lhs) ^ static_cast<::GRegexMatchFlags> (rhs));
}

static constexpr inline RegexMatchFlags
operator ~ (RegexMatchFlags lhs)
{
  return RegexMatchFlags (~static_cast<::GRegexMatchFlags> (lhs));
}

static inline RegexMatchFlags &
operator |= (RegexMatchFlags &lhs, RegexMatchFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline RegexMatchFlags &
operator &= (RegexMatchFlags &lhs, RegexMatchFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline RegexMatchFlags &
operator ^= (RegexMatchFlags &lhs, RegexMatchFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (RegexMatchFlags lhs)
{
  return !static_cast<::GRegexMatchFlags> (lhs);
}

static constexpr inline bool
operator + (RegexMatchFlags lhs)
{
  return !!static_cast<::GRegexMatchFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
