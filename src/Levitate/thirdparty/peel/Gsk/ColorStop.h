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
struct ColorStop;
} /* namespace Gsk */


namespace Gsk
{
struct ColorStop
{
private:

public:
  float offset;
  Gdk::RGBA color;
}; /* record ColorStop */

static_assert (sizeof (ColorStop) == sizeof (::GskColorStop),
               "ColorStop size mismatch");
static_assert (alignof (ColorStop) == alignof (::GskColorStop),
               "ColorStop align mismatch");

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
