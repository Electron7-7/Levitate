#pragma once

/* Auto-generated, do not modify */
/* Package graphene-gobject-1.0 */

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
#include <graphene-gobject.h>

peel_begin_header

namespace peel
{
namespace Graphene
{
struct Simd4X4F;
} /* namespace Graphene */


namespace Graphene
{
struct Simd4X4F
{
private:
  ::graphene_simd4x4f_t inner peel_no_warn_unused;


public:
}; /* record Simd4X4F */

static_assert (sizeof (Simd4X4F) == sizeof (::graphene_simd4x4f_t),
               "Simd4X4F size mismatch");
static_assert (alignof (Simd4X4F) == alignof (::graphene_simd4x4f_t),
               "Simd4X4F align mismatch");

} /* namespace Graphene */
} /* namespace peel */

peel_end_header
