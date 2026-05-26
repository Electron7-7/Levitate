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
struct GlyphGeometry;
} /* namespace Pango */


namespace Pango
{
struct GlyphGeometry
{
private:

public:
  int32_t width;
  int32_t x_offset;
  int32_t y_offset;
}; /* record GlyphGeometry */

static_assert (sizeof (GlyphGeometry) == sizeof (::PangoGlyphGeometry),
               "GlyphGeometry size mismatch");
static_assert (alignof (GlyphGeometry) == alignof (::PangoGlyphGeometry),
               "GlyphGeometry align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
