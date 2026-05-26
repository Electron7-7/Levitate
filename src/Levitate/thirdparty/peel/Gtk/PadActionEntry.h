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
struct PadActionEntry;
enum class PadActionType : std::underlying_type<::GtkPadActionType>::type;
} /* namespace Gtk */


namespace Gtk
{
struct PadActionEntry
{
private:

public:
  PadActionType type;
  int index;
  int mode;
  const char *label;
  const char *action_name;
}; /* record PadActionEntry */

static_assert (sizeof (PadActionEntry) == sizeof (::GtkPadActionEntry),
               "PadActionEntry size mismatch");
static_assert (alignof (PadActionEntry) == alignof (::GtkPadActionEntry),
               "PadActionEntry align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
