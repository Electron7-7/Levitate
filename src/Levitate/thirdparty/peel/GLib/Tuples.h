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
struct Tuples;
} /* namespace GLib */


namespace GLib
{
struct Tuples
{
private:
  Tuples () = delete;
  Tuples (const Tuples &) = delete;
  Tuples (Tuples &&) = delete;
  ~Tuples ();

public:
  unsigned len;

  void
  destroy () noexcept
  {
    ::GTuples *_peel_this = reinterpret_cast<::GTuples *> (this);
    g_tuples_destroy (_peel_this);
  }

  void *
  index (int index_, int field) noexcept
  {
    ::GTuples *_peel_this = reinterpret_cast<::GTuples *> (this);
    return g_tuples_index (_peel_this, index_, field);
  }
}; /* record Tuples */

static_assert (sizeof (Tuples) == sizeof (::GTuples),
               "Tuples size mismatch");
static_assert (alignof (Tuples) == alignof (::GTuples),
               "Tuples align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
