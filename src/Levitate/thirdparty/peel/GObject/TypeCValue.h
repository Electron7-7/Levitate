#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>
#include <gobject/gvaluecollector.h>

peel_begin_header

namespace peel
{
namespace GObject
{
union TypeCValue;
} /* namespace GObject */


namespace GObject
{
union TypeCValue
{
private:
  ::GTypeCValue inner peel_no_warn_unused;
  TypeCValue () = delete;
  TypeCValue (const TypeCValue &) = delete;
  TypeCValue (TypeCValue &&) = delete;
  ~TypeCValue () = delete;
public:
}; /* union TypeCValue */

static_assert (sizeof (TypeCValue) == sizeof (::GTypeCValue),
               "TypeCValue size mismatch");
static_assert (alignof (TypeCValue) == alignof (::GTypeCValue),
               "TypeCValue align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
