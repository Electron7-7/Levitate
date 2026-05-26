#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>

peel_begin_header

namespace peel
{
namespace Gio
{
struct OutputVector;
} /* namespace Gio */


namespace Gio
{
struct OutputVector
{
private:

public:
  const void *buffer;
  size_t size;
}; /* record OutputVector */

static_assert (sizeof (OutputVector) == sizeof (::GOutputVector),
               "OutputVector size mismatch");
static_assert (alignof (OutputVector) == alignof (::GOutputVector),
               "OutputVector align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
