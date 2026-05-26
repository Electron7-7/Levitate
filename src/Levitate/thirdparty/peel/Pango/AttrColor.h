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
#include <peel/Pango/Attribute.h>
#include <peel/Pango/Color.h>

peel_begin_header

namespace peel
{
namespace Pango
{
struct AttrColor;
struct Attribute;
struct Color;
} /* namespace Pango */


namespace Pango
{
struct AttrColor
{
private:

public:
  Attribute attr;
  Color color;
}; /* record AttrColor */

static_assert (sizeof (AttrColor) == sizeof (::PangoAttrColor),
               "AttrColor size mismatch");
static_assert (alignof (AttrColor) == alignof (::PangoAttrColor),
               "AttrColor align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
