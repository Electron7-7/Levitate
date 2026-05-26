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
enum class AsciiType : std::underlying_type<::GAsciiType>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::AsciiType>
{
  typedef GLib::AsciiType UnownedType;

  static GLib::AsciiType
  get (const ::GValue *value)
  {
    return static_cast<GLib::AsciiType> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::AsciiType flags)
  {
    g_value_set_flags (value, static_cast<::GAsciiType> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::AsciiType flags)
  {
    set (value, flags);
  }

  static GLib::AsciiType
  cast_for_create (GLib::AsciiType flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ AsciiType : std::underlying_type<::GAsciiType>::type
{
  ALNUM = G_ASCII_ALNUM,
  ALPHA = G_ASCII_ALPHA,
  CNTRL = G_ASCII_CNTRL,
  DIGIT = G_ASCII_DIGIT,
  GRAPH = G_ASCII_GRAPH,
  LOWER = G_ASCII_LOWER,
  PRINT = G_ASCII_PRINT,
  PUNCT = G_ASCII_PUNCT,
  SPACE = G_ASCII_SPACE,
  UPPER = G_ASCII_UPPER,
  XDIGIT = G_ASCII_XDIGIT,
}; /* bitfield AsciiType */

static constexpr inline AsciiType
operator | (AsciiType lhs, AsciiType rhs)
{
  return AsciiType (static_cast<::GAsciiType> (lhs) | static_cast<::GAsciiType> (rhs));
}

static constexpr inline AsciiType
operator & (AsciiType lhs, AsciiType rhs)
{
  return AsciiType (static_cast<::GAsciiType> (lhs) & static_cast<::GAsciiType> (rhs));
}

static constexpr inline AsciiType
operator ^ (AsciiType lhs, AsciiType rhs)
{
  return AsciiType (static_cast<::GAsciiType> (lhs) ^ static_cast<::GAsciiType> (rhs));
}

static constexpr inline AsciiType
operator ~ (AsciiType lhs)
{
  return AsciiType (~static_cast<::GAsciiType> (lhs));
}

static inline AsciiType &
operator |= (AsciiType &lhs, AsciiType rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline AsciiType &
operator &= (AsciiType &lhs, AsciiType rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline AsciiType &
operator ^= (AsciiType &lhs, AsciiType rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (AsciiType lhs)
{
  return !static_cast<::GAsciiType> (lhs);
}

static constexpr inline bool
operator + (AsciiType lhs)
{
  return !!static_cast<::GAsciiType> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
