#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct ClosureNotifyData;
} /* namespace GObject */


namespace GObject
{
struct ClosureNotifyData
{
private:
  ClosureNotifyData () = delete;
  ClosureNotifyData (const ClosureNotifyData &) = delete;
  ClosureNotifyData (ClosureNotifyData &&) = delete;
  ~ClosureNotifyData ();

public:
  void *data;
private:
  ::GClosureNotify notify;

public:
}; /* record ClosureNotifyData */

static_assert (sizeof (ClosureNotifyData) == sizeof (::GClosureNotifyData),
               "ClosureNotifyData size mismatch");
static_assert (alignof (ClosureNotifyData) == alignof (::GClosureNotifyData),
               "ClosureNotifyData align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
