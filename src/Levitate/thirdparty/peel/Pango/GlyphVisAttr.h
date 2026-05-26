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
struct GlyphVisAttr;
} /* namespace Pango */


namespace Pango
{
struct GlyphVisAttr
{
private:
  ::PangoGlyphVisAttr inner peel_no_warn_unused;


public:
}; /* record GlyphVisAttr */

static_assert (sizeof (GlyphVisAttr) == sizeof (::PangoGlyphVisAttr),
               "GlyphVisAttr size mismatch");
static_assert (alignof (GlyphVisAttr) == alignof (::PangoGlyphVisAttr),
               "GlyphVisAttr align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
