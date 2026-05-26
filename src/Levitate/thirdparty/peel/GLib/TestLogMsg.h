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
struct TestLogMsg;
enum class TestLogType : std::underlying_type<::GTestLogType>::type;
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::TestLogMsg>
{
  static void
  free (GLib::TestLogMsg *ptr)
  {
    g_test_log_msg_free (reinterpret_cast<::GTestLogMsg *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
struct TestLogMsg
{
private:
  TestLogMsg () = delete;
  TestLogMsg (const TestLogMsg &) = delete;
  TestLogMsg (TestLogMsg &&) = delete;
  ~TestLogMsg ();

public:
  TestLogType log_type;
  unsigned n_strings;
  const char *strings;
  unsigned n_nums;
  long double *nums;

  /* free bound as UniqueTraits */
}; /* record TestLogMsg */

static_assert (sizeof (TestLogMsg) == sizeof (::GTestLogMsg),
               "TestLogMsg size mismatch");
static_assert (alignof (TestLogMsg) == alignof (::GTestLogMsg),
               "TestLogMsg align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
