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
enum class TestSubprocessFlags : std::underlying_type<::GTestSubprocessFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::TestSubprocessFlags>
{
  typedef GLib::TestSubprocessFlags UnownedType;

  static GLib::TestSubprocessFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::TestSubprocessFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::TestSubprocessFlags flags)
  {
    g_value_set_flags (value, static_cast<::GTestSubprocessFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::TestSubprocessFlags flags)
  {
    set (value, flags);
  }

  static GLib::TestSubprocessFlags
  cast_for_create (GLib::TestSubprocessFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ TestSubprocessFlags : std::underlying_type<::GTestSubprocessFlags>::type
{
  DEFAULT = G_TEST_SUBPROCESS_DEFAULT,
  INHERIT_STDIN = G_TEST_SUBPROCESS_INHERIT_STDIN,
  INHERIT_STDOUT = G_TEST_SUBPROCESS_INHERIT_STDOUT,
  INHERIT_STDERR = G_TEST_SUBPROCESS_INHERIT_STDERR,
  INHERIT_DESCRIPTORS = G_TEST_SUBPROCESS_INHERIT_DESCRIPTORS,
}; /* bitfield TestSubprocessFlags */

static constexpr inline TestSubprocessFlags
operator | (TestSubprocessFlags lhs, TestSubprocessFlags rhs)
{
  return TestSubprocessFlags (static_cast<::GTestSubprocessFlags> (lhs) | static_cast<::GTestSubprocessFlags> (rhs));
}

static constexpr inline TestSubprocessFlags
operator & (TestSubprocessFlags lhs, TestSubprocessFlags rhs)
{
  return TestSubprocessFlags (static_cast<::GTestSubprocessFlags> (lhs) & static_cast<::GTestSubprocessFlags> (rhs));
}

static constexpr inline TestSubprocessFlags
operator ^ (TestSubprocessFlags lhs, TestSubprocessFlags rhs)
{
  return TestSubprocessFlags (static_cast<::GTestSubprocessFlags> (lhs) ^ static_cast<::GTestSubprocessFlags> (rhs));
}

static constexpr inline TestSubprocessFlags
operator ~ (TestSubprocessFlags lhs)
{
  return TestSubprocessFlags (~static_cast<::GTestSubprocessFlags> (lhs));
}

static inline TestSubprocessFlags &
operator |= (TestSubprocessFlags &lhs, TestSubprocessFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TestSubprocessFlags &
operator &= (TestSubprocessFlags &lhs, TestSubprocessFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TestSubprocessFlags &
operator ^= (TestSubprocessFlags &lhs, TestSubprocessFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TestSubprocessFlags lhs)
{
  return !static_cast<::GTestSubprocessFlags> (lhs);
}

static constexpr inline bool
operator + (TestSubprocessFlags lhs)
{
  return !!static_cast<::GTestSubprocessFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
