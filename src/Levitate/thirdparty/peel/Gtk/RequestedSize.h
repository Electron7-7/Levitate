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
struct RequestedSize;
} /* namespace Gtk */


namespace Gtk
{
struct RequestedSize
{
private:

public:
  void *data;
  int minimum_size;
  int natural_size;
}; /* record RequestedSize */

static_assert (sizeof (RequestedSize) == sizeof (::GtkRequestedSize),
               "RequestedSize size mismatch");
static_assert (alignof (RequestedSize) == alignof (::GtkRequestedSize),
               "RequestedSize align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
