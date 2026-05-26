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
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::TestCase>
{
  static void
  free (GLib::TestCase *ptr)
  {
    g_test_case_free (reinterpret_cast<::GTestCase *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
class /* record */ TestCase
{
private:
  TestCase () = delete;
  TestCase (const TestCase &) = delete;
  TestCase (TestCase &&) = delete;
  ~TestCase ();

public:
  /* free bound as UniqueTraits */
}; /* record TestCase */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
