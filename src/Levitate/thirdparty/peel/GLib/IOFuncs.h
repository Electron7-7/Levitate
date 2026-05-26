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
struct IOFuncs;
} /* namespace GLib */


namespace GLib
{
struct IOFuncs
{
private:
  ::GIOFuncs inner peel_no_warn_unused;

  IOFuncs () = delete;
  IOFuncs (const IOFuncs &) = delete;
  IOFuncs (IOFuncs &&) = delete;
  ~IOFuncs ();

  /* Some fields not yet supported */
public:
}; /* record IOFuncs */

static_assert (sizeof (IOFuncs) == sizeof (::GIOFuncs),
               "IOFuncs size mismatch");
static_assert (alignof (IOFuncs) == alignof (::GIOFuncs),
               "IOFuncs align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
