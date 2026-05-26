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
struct MarkupParser;
} /* namespace GLib */


namespace GLib
{
struct MarkupParser
{
private:
  ::GMarkupParser inner peel_no_warn_unused;

  MarkupParser () = delete;
  MarkupParser (const MarkupParser &) = delete;
  MarkupParser (MarkupParser &&) = delete;
  ~MarkupParser ();

  /* Some fields not yet supported */
public:
}; /* record MarkupParser */

static_assert (sizeof (MarkupParser) == sizeof (::GMarkupParser),
               "MarkupParser size mismatch");
static_assert (alignof (MarkupParser) == alignof (::GMarkupParser),
               "MarkupParser align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
