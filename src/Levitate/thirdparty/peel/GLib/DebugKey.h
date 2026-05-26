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
struct DebugKey;
} /* namespace GLib */


namespace GLib
{
struct DebugKey
{
private:
  DebugKey () = delete;
  DebugKey (const DebugKey &) = delete;
  DebugKey (DebugKey &&) = delete;
  ~DebugKey ();

public:
  const char *key;
  unsigned value;
}; /* record DebugKey */

static_assert (sizeof (DebugKey) == sizeof (::GDebugKey),
               "DebugKey size mismatch");
static_assert (alignof (DebugKey) == alignof (::GDebugKey),
               "DebugKey align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
