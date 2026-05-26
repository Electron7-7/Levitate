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
struct ThreadFunctions;
} /* namespace GLib */


namespace GLib
{
struct ThreadFunctions
{
private:
  ::GThreadFunctions inner peel_no_warn_unused;

  ThreadFunctions () = delete;
  ThreadFunctions (const ThreadFunctions &) = delete;
  ThreadFunctions (ThreadFunctions &&) = delete;
  ~ThreadFunctions ();

  /* Some fields not yet supported */
public:
}; /* record ThreadFunctions */

static_assert (sizeof (ThreadFunctions) == sizeof (::GThreadFunctions),
               "ThreadFunctions size mismatch");
static_assert (alignof (ThreadFunctions) == alignof (::GThreadFunctions),
               "ThreadFunctions align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
