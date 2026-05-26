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
#include <peel/GObject/Value.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct Parameter;
struct Value;
} /* namespace GObject */


namespace GObject
{
struct Parameter
{
private:
  Parameter () = delete;
  Parameter (const Parameter &) = delete;
  Parameter (Parameter &&) = delete;
  ~Parameter ();

public:
  const char *name;
  Value value;
}; /* record Parameter */

static_assert (sizeof (Parameter) == sizeof (::GParameter),
               "Parameter size mismatch");
static_assert (alignof (Parameter) == alignof (::GParameter),
               "Parameter align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
