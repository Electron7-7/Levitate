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
enum class TestResult : std::underlying_type<::GTestResult>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::TestResult>
{
  typedef GLib::TestResult UnownedType;

  static GLib::TestResult
  get (const ::GValue *value)
  {
    return static_cast<GLib::TestResult> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::TestResult m)
  {
    g_value_set_enum (value, static_cast<::GTestResult> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::TestResult m)
  {
    set (value, m);
  }

  static GLib::TestResult
  cast_for_create (GLib::TestResult m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class TestResult : std::underlying_type<::GTestResult>::type
{
  SUCCESS = G_TEST_RUN_SUCCESS,
  SKIPPED = G_TEST_RUN_SKIPPED,
  FAILURE = G_TEST_RUN_FAILURE,
  INCOMPLETE = G_TEST_RUN_INCOMPLETE,
}; /* enum TestResult */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
