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
enum class SignalFlags : std::underlying_type<::GSignalFlags>::type;
struct SignalQuery;
} /* namespace GObject */


namespace GObject
{
struct SignalQuery
{
private:

public:
  unsigned signal_id;
  const char *signal_name;
  GObject::Type itype;
  SignalFlags signal_flags;
  GObject::Type return_type;
  unsigned n_params;
private:
  const GType *param_types;

public:
}; /* record SignalQuery */

static_assert (sizeof (SignalQuery) == sizeof (::GSignalQuery),
               "SignalQuery size mismatch");
static_assert (alignof (SignalQuery) == alignof (::GSignalQuery),
               "SignalQuery align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
