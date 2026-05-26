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
#include <gsk/gsk.h>
#include <peel/Gdk/RGBA.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
struct RGBA;
} /* namespace Gdk */

namespace Gsk
{
struct Shadow;
} /* namespace Gsk */


namespace Gsk
{
struct Shadow
{
private:

public:
  Gdk::RGBA color;
  float dx;
  float dy;
  float radius;
}; /* record Shadow */

static_assert (sizeof (Shadow) == sizeof (::GskShadow),
               "Shadow size mismatch");
static_assert (alignof (Shadow) == alignof (::GskShadow),
               "Shadow align mismatch");

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
