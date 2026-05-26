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
enum class FileTest : std::underlying_type<::GFileTest>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::FileTest>
{
  typedef GLib::FileTest UnownedType;

  static GLib::FileTest
  get (const ::GValue *value)
  {
    return static_cast<GLib::FileTest> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::FileTest flags)
  {
    g_value_set_flags (value, static_cast<::GFileTest> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::FileTest flags)
  {
    set (value, flags);
  }

  static GLib::FileTest
  cast_for_create (GLib::FileTest flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ FileTest : std::underlying_type<::GFileTest>::type
{
  IS_REGULAR = G_FILE_TEST_IS_REGULAR,
  IS_SYMLINK = G_FILE_TEST_IS_SYMLINK,
  IS_DIR = G_FILE_TEST_IS_DIR,
  IS_EXECUTABLE = G_FILE_TEST_IS_EXECUTABLE,
  EXISTS = G_FILE_TEST_EXISTS,
}; /* bitfield FileTest */

static constexpr inline FileTest
operator | (FileTest lhs, FileTest rhs)
{
  return FileTest (static_cast<::GFileTest> (lhs) | static_cast<::GFileTest> (rhs));
}

static constexpr inline FileTest
operator & (FileTest lhs, FileTest rhs)
{
  return FileTest (static_cast<::GFileTest> (lhs) & static_cast<::GFileTest> (rhs));
}

static constexpr inline FileTest
operator ^ (FileTest lhs, FileTest rhs)
{
  return FileTest (static_cast<::GFileTest> (lhs) ^ static_cast<::GFileTest> (rhs));
}

static constexpr inline FileTest
operator ~ (FileTest lhs)
{
  return FileTest (~static_cast<::GFileTest> (lhs));
}

static inline FileTest &
operator |= (FileTest &lhs, FileTest rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline FileTest &
operator &= (FileTest &lhs, FileTest rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline FileTest &
operator ^= (FileTest &lhs, FileTest rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (FileTest lhs)
{
  return !static_cast<::GFileTest> (lhs);
}

static constexpr inline bool
operator + (FileTest lhs)
{
  return !!static_cast<::GFileTest> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
