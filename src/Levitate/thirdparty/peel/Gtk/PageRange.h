#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gtk/gtk.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
struct PageRange;
} /* namespace Gtk */


namespace Gtk
{
struct PageRange
{
private:
  PageRange () = delete;
  PageRange (const PageRange &) = delete;
  PageRange (PageRange &&) = delete;
  ~PageRange ();

public:
  int start;
  int end;
}; /* record PageRange */

static_assert (sizeof (PageRange) == sizeof (::GtkPageRange),
               "PageRange size mismatch");
static_assert (alignof (PageRange) == alignof (::GtkPageRange),
               "PageRange align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
