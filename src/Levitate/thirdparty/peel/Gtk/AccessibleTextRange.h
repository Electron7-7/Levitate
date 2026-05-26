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
#include <peel/Gtk/AccessibleText.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */


namespace Gtk
{
struct AccessibleText::Range
{
private:

public:
  size_t start;
  size_t length;
}; /* record AccessibleText::Range */

static_assert (sizeof (AccessibleText::Range) == sizeof (::GtkAccessibleTextRange),
               "AccessibleText::Range size mismatch");
static_assert (alignof (AccessibleText::Range) == alignof (::GtkAccessibleTextRange),
               "AccessibleText::Range align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
