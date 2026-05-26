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

peel_begin_header

namespace peel
{
namespace GObject
{
struct TypeQuery;
} /* namespace GObject */


namespace GObject
{
struct TypeQuery
{
private:

public:
  GObject::Type type;
  const char *type_name;
  unsigned class_size;
  unsigned instance_size;
}; /* record TypeQuery */

static_assert (sizeof (TypeQuery) == sizeof (::GTypeQuery),
               "TypeQuery size mismatch");
static_assert (alignof (TypeQuery) == alignof (::GTypeQuery),
               "TypeQuery align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
