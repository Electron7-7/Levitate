#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct LogField;
} /* namespace GLib */


namespace GLib
{
struct LogField
{
private:

public:
  const char *key;
  const void *value;
  gssize length;
}; /* record LogField */

static_assert (sizeof (LogField) == sizeof (::GLogField),
               "LogField size mismatch");
static_assert (alignof (LogField) == alignof (::GLogField),
               "LogField align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
