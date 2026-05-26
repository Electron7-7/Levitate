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
enum class TestLogType : std::underlying_type<::GTestLogType>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::TestLogType>
{
  typedef GLib::TestLogType UnownedType;

  static GLib::TestLogType
  get (const ::GValue *value)
  {
    return static_cast<GLib::TestLogType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::TestLogType m)
  {
    g_value_set_enum (value, static_cast<::GTestLogType> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::TestLogType m)
  {
    set (value, m);
  }

  static GLib::TestLogType
  cast_for_create (GLib::TestLogType m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class TestLogType : std::underlying_type<::GTestLogType>::type
{
  NONE = G_TEST_LOG_NONE,
  ERROR_ = G_TEST_LOG_ERROR,
  START_BINARY = G_TEST_LOG_START_BINARY,
  LIST_CASE = G_TEST_LOG_LIST_CASE,
  SKIP_CASE = G_TEST_LOG_SKIP_CASE,
  START_CASE = G_TEST_LOG_START_CASE,
  STOP_CASE = G_TEST_LOG_STOP_CASE,
  MIN_RESULT = G_TEST_LOG_MIN_RESULT,
  MAX_RESULT = G_TEST_LOG_MAX_RESULT,
  MESSAGE = G_TEST_LOG_MESSAGE,
  START_SUITE = G_TEST_LOG_START_SUITE,
  STOP_SUITE = G_TEST_LOG_STOP_SUITE,
}; /* enum TestLogType */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
