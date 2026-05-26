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
class /* record */ TestCase;
class /* record */ TestSuite;
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::TestSuite>
{
  static void
  free (GLib::TestSuite *ptr)
  {
    g_test_suite_free (reinterpret_cast<::GTestSuite *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
class /* record */ TestSuite
{
private:
  TestSuite () = delete;
  TestSuite (const TestSuite &) = delete;
  TestSuite (TestSuite &&) = delete;
  ~TestSuite ();

public:
  peel_arg_in (2) peel_nonnull_args (2)
  void
  add (TestCase *test_case) noexcept
  {
    ::GTestSuite *_peel_this = reinterpret_cast<::GTestSuite *> (this);
    ::GTestCase *_peel_test_case = reinterpret_cast<::GTestCase *> (test_case);
    g_test_suite_add (_peel_this, _peel_test_case);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  add_suite (TestSuite *nestedsuite) noexcept
  {
    ::GTestSuite *_peel_this = reinterpret_cast<::GTestSuite *> (this);
    ::GTestSuite *_peel_nestedsuite = reinterpret_cast<::GTestSuite *> (nestedsuite);
    g_test_suite_add_suite (_peel_this, _peel_nestedsuite);
  }

  /* free bound as UniqueTraits */
}; /* record TestSuite */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
