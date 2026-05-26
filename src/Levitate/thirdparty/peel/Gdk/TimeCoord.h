#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gdk/gdk.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class AxisFlags : std::underlying_type<::GdkAxisFlags>::type;
struct TimeCoord;
} /* namespace Gdk */


namespace Gdk
{
struct TimeCoord
{
private:

public:
  uint32_t time;
  AxisFlags flags;
  double axes[12];
}; /* record TimeCoord */

static_assert (sizeof (TimeCoord) == sizeof (::GdkTimeCoord),
               "TimeCoord size mismatch");
static_assert (alignof (TimeCoord) == alignof (::GdkTimeCoord),
               "TimeCoord align mismatch");

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
