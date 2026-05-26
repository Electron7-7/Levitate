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
struct TestConfig;
} /* namespace GLib */


namespace GLib
{
struct TestConfig
{
private:
  TestConfig () = delete;
  TestConfig (const TestConfig &) = delete;
  TestConfig (TestConfig &&) = delete;
  ~TestConfig ();

public:
  gboolean test_initialized;
  gboolean test_quick;
  gboolean test_perf;
  gboolean test_verbose;
  gboolean test_quiet;
  gboolean test_undefined;
}; /* record TestConfig */

static_assert (sizeof (TestConfig) == sizeof (::GTestConfig),
               "TestConfig size mismatch");
static_assert (alignof (TestConfig) == alignof (::GTestConfig),
               "TestConfig align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
