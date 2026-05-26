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
enum class FileSetContentsFlags : std::underlying_type<::GFileSetContentsFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::FileSetContentsFlags>
{
  typedef GLib::FileSetContentsFlags UnownedType;

  static GLib::FileSetContentsFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::FileSetContentsFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::FileSetContentsFlags flags)
  {
    g_value_set_flags (value, static_cast<::GFileSetContentsFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::FileSetContentsFlags flags)
  {
    set (value, flags);
  }

  static GLib::FileSetContentsFlags
  cast_for_create (GLib::FileSetContentsFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ FileSetContentsFlags : std::underlying_type<::GFileSetContentsFlags>::type
{
  NONE = G_FILE_SET_CONTENTS_NONE,
  CONSISTENT = G_FILE_SET_CONTENTS_CONSISTENT,
  DURABLE = G_FILE_SET_CONTENTS_DURABLE,
  ONLY_EXISTING = G_FILE_SET_CONTENTS_ONLY_EXISTING,
}; /* bitfield FileSetContentsFlags */

static constexpr inline FileSetContentsFlags
operator | (FileSetContentsFlags lhs, FileSetContentsFlags rhs)
{
  return FileSetContentsFlags (static_cast<::GFileSetContentsFlags> (lhs) | static_cast<::GFileSetContentsFlags> (rhs));
}

static constexpr inline FileSetContentsFlags
operator & (FileSetContentsFlags lhs, FileSetContentsFlags rhs)
{
  return FileSetContentsFlags (static_cast<::GFileSetContentsFlags> (lhs) & static_cast<::GFileSetContentsFlags> (rhs));
}

static constexpr inline FileSetContentsFlags
operator ^ (FileSetContentsFlags lhs, FileSetContentsFlags rhs)
{
  return FileSetContentsFlags (static_cast<::GFileSetContentsFlags> (lhs) ^ static_cast<::GFileSetContentsFlags> (rhs));
}

static constexpr inline FileSetContentsFlags
operator ~ (FileSetContentsFlags lhs)
{
  return FileSetContentsFlags (~static_cast<::GFileSetContentsFlags> (lhs));
}

static inline FileSetContentsFlags &
operator |= (FileSetContentsFlags &lhs, FileSetContentsFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline FileSetContentsFlags &
operator &= (FileSetContentsFlags &lhs, FileSetContentsFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline FileSetContentsFlags &
operator ^= (FileSetContentsFlags &lhs, FileSetContentsFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (FileSetContentsFlags lhs)
{
  return !static_cast<::GFileSetContentsFlags> (lhs);
}

static constexpr inline bool
operator + (FileSetContentsFlags lhs)
{
  return !!static_cast<::GFileSetContentsFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
