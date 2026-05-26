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
enum class TestTrapFlags : std::underlying_type<::GTestTrapFlags>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::TestTrapFlags>
{
  typedef GLib::TestTrapFlags UnownedType;

  static GLib::TestTrapFlags
  get (const ::GValue *value)
  {
    return static_cast<GLib::TestTrapFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, GLib::TestTrapFlags flags)
  {
    g_value_set_flags (value, static_cast<::GTestTrapFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, GLib::TestTrapFlags flags)
  {
    set (value, flags);
  }

  static GLib::TestTrapFlags
  cast_for_create (GLib::TestTrapFlags flags) noexcept
  {
    return flags;
  }
};


namespace GLib
{
enum class /* bitfield */ TestTrapFlags : std::underlying_type<::GTestTrapFlags>::type
{
  DEFAULT = G_TEST_TRAP_DEFAULT,
  SILENCE_STDOUT = G_TEST_TRAP_SILENCE_STDOUT,
  SILENCE_STDERR = G_TEST_TRAP_SILENCE_STDERR,
  INHERIT_STDIN = G_TEST_TRAP_INHERIT_STDIN,
}; /* bitfield TestTrapFlags */

static constexpr inline TestTrapFlags
operator | (TestTrapFlags lhs, TestTrapFlags rhs)
{
  return TestTrapFlags (static_cast<::GTestTrapFlags> (lhs) | static_cast<::GTestTrapFlags> (rhs));
}

static constexpr inline TestTrapFlags
operator & (TestTrapFlags lhs, TestTrapFlags rhs)
{
  return TestTrapFlags (static_cast<::GTestTrapFlags> (lhs) & static_cast<::GTestTrapFlags> (rhs));
}

static constexpr inline TestTrapFlags
operator ^ (TestTrapFlags lhs, TestTrapFlags rhs)
{
  return TestTrapFlags (static_cast<::GTestTrapFlags> (lhs) ^ static_cast<::GTestTrapFlags> (rhs));
}

static constexpr inline TestTrapFlags
operator ~ (TestTrapFlags lhs)
{
  return TestTrapFlags (~static_cast<::GTestTrapFlags> (lhs));
}

static inline TestTrapFlags &
operator |= (TestTrapFlags &lhs, TestTrapFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TestTrapFlags &
operator &= (TestTrapFlags &lhs, TestTrapFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TestTrapFlags &
operator ^= (TestTrapFlags &lhs, TestTrapFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TestTrapFlags lhs)
{
  return !static_cast<::GTestTrapFlags> (lhs);
}

static constexpr inline bool
operator + (TestTrapFlags lhs)
{
  return !!static_cast<::GTestTrapFlags> (lhs);
}


} /* namespace GLib */
} /* namespace peel */

peel_end_header
