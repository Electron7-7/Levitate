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
enum class OptionArg : std::underlying_type<::GOptionArg>::type;
struct OptionEntry;
} /* namespace GLib */


namespace GLib
{
struct OptionEntry
{
private:

public:
  const char *long_name;
  char short_name;
  int flags;
  OptionArg arg;
  void *arg_data;
  const char *description;
  const char *arg_description;
}; /* record OptionEntry */

static_assert (sizeof (OptionEntry) == sizeof (::GOptionEntry),
               "OptionEntry size mismatch");
static_assert (alignof (OptionEntry) == alignof (::GOptionEntry),
               "OptionEntry align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
