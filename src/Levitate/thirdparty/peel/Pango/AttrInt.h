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
struct AttrInt;
struct Attribute;
} /* namespace Pango */


namespace Pango
{
struct AttrInt
{
private:

public:
  Attribute attr;
  int value;
}; /* record AttrInt */

static_assert (sizeof (AttrInt) == sizeof (::PangoAttrInt),
               "AttrInt size mismatch");
static_assert (alignof (AttrInt) == alignof (::PangoAttrInt),
               "AttrInt align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
