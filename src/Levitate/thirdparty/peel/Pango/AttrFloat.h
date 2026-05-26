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

peel_begin_header

namespace peel
{
namespace Pango
{
struct AttrFloat;
struct Attribute;
} /* namespace Pango */


namespace Pango
{
struct AttrFloat
{
private:

public:
  Attribute attr;
  double value;
}; /* record AttrFloat */

static_assert (sizeof (AttrFloat) == sizeof (::PangoAttrFloat),
               "AttrFloat size mismatch");
static_assert (alignof (AttrFloat) == alignof (::PangoAttrFloat),
               "AttrFloat align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
