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
struct TestLogBuffer;
struct TestLogMsg;
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::TestLogBuffer>
{
  static void
  free (GLib::TestLogBuffer *ptr)
  {
    g_test_log_buffer_free (reinterpret_cast<::GTestLogBuffer *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
struct TestLogBuffer
{
private:
  ::GTestLogBuffer inner peel_no_warn_unused;

  TestLogBuffer () = delete;
  TestLogBuffer (const TestLogBuffer &) = delete;
  TestLogBuffer (TestLogBuffer &&) = delete;
  ~TestLogBuffer ();

public:
  /* free bound as UniqueTraits */

  peel_returns_nonnull
  TestLogMsg *
  pop () noexcept
  {
    ::GTestLogBuffer *_peel_this = reinterpret_cast<::GTestLogBuffer *> (this);
    ::GTestLogMsg *_peel_return = g_test_log_buffer_pop (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TestLogMsg *> (_peel_return);
  }

  /* Unsupported for now: push: explicitly skipped */

  peel_returns_nonnull
  static TestLogBuffer *
  new_ () noexcept
  {
    ::GTestLogBuffer *_peel_return = g_test_log_buffer_new ();
    peel_assume (_peel_return);
    return reinterpret_cast<TestLogBuffer *> (_peel_return);
  }
}; /* record TestLogBuffer */

static_assert (sizeof (TestLogBuffer) == sizeof (::GTestLogBuffer),
               "TestLogBuffer size mismatch");
static_assert (alignof (TestLogBuffer) == alignof (::GTestLogBuffer),
               "TestLogBuffer align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
