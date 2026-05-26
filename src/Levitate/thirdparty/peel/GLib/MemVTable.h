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
struct MemVTable;
} /* namespace GLib */


namespace GLib
{
struct MemVTable
{
private:
  ::GMemVTable inner peel_no_warn_unused;

  MemVTable () = delete;
  MemVTable (const MemVTable &) = delete;
  MemVTable (MemVTable &&) = delete;
  ~MemVTable ();

  /* Some fields not yet supported */
public:
}; /* record MemVTable */

static_assert (sizeof (MemVTable) == sizeof (::GMemVTable),
               "MemVTable size mismatch");
static_assert (alignof (MemVTable) == alignof (::GMemVTable),
               "MemVTable align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
