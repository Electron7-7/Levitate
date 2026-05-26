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
struct InputVector;
} /* namespace Gio */


namespace Gio
{
struct InputVector
{
private:

public:
  void *buffer;
  size_t size;
}; /* record InputVector */

static_assert (sizeof (InputVector) == sizeof (::GInputVector),
               "InputVector size mismatch");
static_assert (alignof (InputVector) == alignof (::GInputVector),
               "InputVector align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
