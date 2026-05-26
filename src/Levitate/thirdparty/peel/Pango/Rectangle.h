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
struct Rectangle;
} /* namespace Pango */


namespace Pango
{
struct Rectangle
{
private:

public:
  int x;
  int y;
  int width;
  int height;
}; /* record Rectangle */

static_assert (sizeof (Rectangle) == sizeof (::PangoRectangle),
               "Rectangle size mismatch");
static_assert (alignof (Rectangle) == alignof (::PangoRectangle),
               "Rectangle align mismatch");

} /* namespace Pango */
} /* namespace peel */

peel_end_header
