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
struct SourceCallbackFuncs;
} /* namespace GLib */


namespace GLib
{
struct SourceCallbackFuncs
{
private:
  ::GSourceCallbackFuncs inner peel_no_warn_unused;

  SourceCallbackFuncs () = delete;
  SourceCallbackFuncs (const SourceCallbackFuncs &) = delete;
  SourceCallbackFuncs (SourceCallbackFuncs &&) = delete;
  ~SourceCallbackFuncs ();

  /* Some fields not yet supported */
public:
}; /* record SourceCallbackFuncs */

static_assert (sizeof (SourceCallbackFuncs) == sizeof (::GSourceCallbackFuncs),
               "SourceCallbackFuncs size mismatch");
static_assert (alignof (SourceCallbackFuncs) == alignof (::GSourceCallbackFuncs),
               "SourceCallbackFuncs align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
