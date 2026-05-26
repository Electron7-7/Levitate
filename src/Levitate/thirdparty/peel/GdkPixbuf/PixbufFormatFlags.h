#pragma once

/* Auto-generated, do not modify */
/* Package gdk-pixbuf-2.0 */

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
#include <gdk-pixbuf/gdk-pixbuf.h>

peel_begin_header

namespace peel
{
namespace GdkPixbuf
{
enum class PixbufFormatFlags : std::underlying_type<::GdkPixbufFormatFlags>::type;
} /* namespace GdkPixbuf */

template<>
struct GObject::Value::Traits<GdkPixbuf::PixbufFormatFlags>
{
  typedef GdkPixbuf::PixbufFormatFlags UnownedType;

  static GdkPixbuf::PixbufFormatFlags
  get (const ::GValue *value)
  {
    return static_cast<GdkPixbuf::PixbufFormatFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GdkPixbuf::PixbufFormatFlags flags)
  {
    g_value_set_flags (value, static_cast<::GdkPixbufFormatFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GdkPixbuf::PixbufFormatFlags flags)
  {
    set (value, flags);
  }

  static GdkPixbuf::PixbufFormatFlags
  cast_for_create (GdkPixbuf::PixbufFormatFlags flags) noexcept
  {
    return flags;
  }
};


namespace GdkPixbuf
{
enum class /* bitfield */ PixbufFormatFlags : std::underlying_type<::GdkPixbufFormatFlags>::type
{
  WRITABLE = GDK_PIXBUF_FORMAT_WRITABLE,
  SCALABLE = GDK_PIXBUF_FORMAT_SCALABLE,
  THREADSAFE = GDK_PIXBUF_FORMAT_THREADSAFE,
}; /* bitfield PixbufFormatFlags */

static constexpr inline PixbufFormatFlags
operator | (PixbufFormatFlags lhs, PixbufFormatFlags rhs)
{
  return PixbufFormatFlags (static_cast<::GdkPixbufFormatFlags> (lhs) | static_cast<::GdkPixbufFormatFlags> (rhs));
}

static constexpr inline PixbufFormatFlags
operator & (PixbufFormatFlags lhs, PixbufFormatFlags rhs)
{
  return PixbufFormatFlags (static_cast<::GdkPixbufFormatFlags> (lhs) & static_cast<::GdkPixbufFormatFlags> (rhs));
}

static constexpr inline PixbufFormatFlags
operator ^ (PixbufFormatFlags lhs, PixbufFormatFlags rhs)
{
  return PixbufFormatFlags (static_cast<::GdkPixbufFormatFlags> (lhs) ^ static_cast<::GdkPixbufFormatFlags> (rhs));
}

static constexpr inline PixbufFormatFlags
operator ~ (PixbufFormatFlags lhs)
{
  return PixbufFormatFlags (~static_cast<::GdkPixbufFormatFlags> (lhs));
}

static inline PixbufFormatFlags &
operator |= (PixbufFormatFlags &lhs, PixbufFormatFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline PixbufFormatFlags &
operator &= (PixbufFormatFlags &lhs, PixbufFormatFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline PixbufFormatFlags &
operator ^= (PixbufFormatFlags &lhs, PixbufFormatFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (PixbufFormatFlags lhs)
{
  return !static_cast<::GdkPixbufFormatFlags> (lhs);
}

static constexpr inline bool
operator + (PixbufFormatFlags lhs)
{
  return !!static_cast<::GdkPixbufFormatFlags> (lhs);
}


} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
