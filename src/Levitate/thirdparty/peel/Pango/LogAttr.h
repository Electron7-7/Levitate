#pragma once

/* Auto-generated, do not modify */
/* Package pango */

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
#include <pango/pango.h>

peel_begin_header

namespace peel
{
namespace Pango
{
struct LogAttr;
} /* namespace Pango */


namespace Pango
{
struct LogAttr
{
private:
  ::PangoLogAttr inner peel_no_warn_unused;


public:
}; /* record LogAttr */

static_assert (sizeof (LogAttr) == sizeof (::PangoLogAttr),
               "LogAttr size mismatch");
static_assert (alignof (LogAttr) == alignof (::PangoLogAttr),
               "LogAttr align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
