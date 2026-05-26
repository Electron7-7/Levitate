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
struct SourceFuncs;
} /* namespace GLib */


namespace GLib
{
struct SourceFuncs
{
private:
  ::GSourceFuncs inner peel_no_warn_unused;

  SourceFuncs () = delete;
  SourceFuncs (const SourceFuncs &) = delete;
  SourceFuncs (SourceFuncs &&) = delete;
  ~SourceFuncs ();

  /* Some fields not yet supported */
public:
}; /* record SourceFuncs */

static_assert (sizeof (SourceFuncs) == sizeof (::GSourceFuncs),
               "SourceFuncs size mismatch");
static_assert (alignof (SourceFuncs) == alignof (::GSourceFuncs),
               "SourceFuncs align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
