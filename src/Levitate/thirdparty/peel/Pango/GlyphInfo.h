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
#include <peel/Pango/GlyphGeometry.h>
#include <peel/Pango/GlyphVisAttr.h>

peel_begin_header

namespace peel
{
namespace Pango
{
struct GlyphGeometry;
struct GlyphInfo;
struct GlyphVisAttr;
} /* namespace Pango */


namespace Pango
{
struct GlyphInfo
{
private:

public:
  uint32_t glyph;
  GlyphGeometry geometry;
  GlyphVisAttr attr;
}; /* record GlyphInfo */

static_assert (sizeof (GlyphInfo) == sizeof (::PangoGlyphInfo),
               "GlyphInfo size mismatch");
static_assert (alignof (GlyphInfo) == alignof (::PangoGlyphInfo),
               "GlyphInfo align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
