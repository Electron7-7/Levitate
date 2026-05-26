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
#include <peel/GLib/KeyFile.h>

peel_begin_header

namespace peel
{
namespace GLib
{
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::KeyFile::Flags>
{
  typedef GLib::KeyFile::Flags UnownedType;

  static GLib::KeyFile::Flags
  get (const ::GValue *value)
  {
    return static_cast<GLib::KeyFile::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::KeyFile::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GKeyFileFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::KeyFile::Flags flags)
  {
    set (value, flags);
  }

  static GLib::KeyFile::Flags
  cast_for_create (GLib::KeyFile::Flags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ KeyFile::Flags : std::underlying_type<::GKeyFileFlags>::type
{
  NONE = G_KEY_FILE_NONE,
  KEEP_COMMENTS = G_KEY_FILE_KEEP_COMMENTS,
  KEEP_TRANSLATIONS = G_KEY_FILE_KEEP_TRANSLATIONS,
}; /* bitfield KeyFile::Flags */

static constexpr inline KeyFile::Flags
operator | (KeyFile::Flags lhs, KeyFile::Flags rhs)
{
  return KeyFile::Flags (static_cast<::GKeyFileFlags> (lhs) | static_cast<::GKeyFileFlags> (rhs));
}

static constexpr inline KeyFile::Flags
operator & (KeyFile::Flags lhs, KeyFile::Flags rhs)
{
  return KeyFile::Flags (static_cast<::GKeyFileFlags> (lhs) & static_cast<::GKeyFileFlags> (rhs));
}

static constexpr inline KeyFile::Flags
operator ^ (KeyFile::Flags lhs, KeyFile::Flags rhs)
{
  return KeyFile::Flags (static_cast<::GKeyFileFlags> (lhs) ^ static_cast<::GKeyFileFlags> (rhs));
}

static constexpr inline KeyFile::Flags
operator ~ (KeyFile::Flags lhs)
{
  return KeyFile::Flags (~static_cast<::GKeyFileFlags> (lhs));
}

static inline KeyFile::Flags &
operator |= (KeyFile::Flags &lhs, KeyFile::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline KeyFile::Flags &
operator &= (KeyFile::Flags &lhs, KeyFile::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline KeyFile::Flags &
operator ^= (KeyFile::Flags &lhs, KeyFile::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (KeyFile::Flags lhs)
{
  return !static_cast<::GKeyFileFlags> (lhs);
}

static constexpr inline bool
operator + (KeyFile::Flags lhs)
{
  return !!static_cast<::GKeyFileFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
