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
#include <peel/Gtk/Buildable.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */


namespace Gtk
{
struct Buildable::Parser
{
private:
  ::GtkBuildableParser inner peel_no_warn_unused;


  /* Some fields not yet supported */
public:
}; /* record Buildable::Parser */

static_assert (sizeof (Buildable::Parser) == sizeof (::GtkBuildableParser),
               "Buildable::Parser size mismatch");
static_assert (alignof (Buildable::Parser) == alignof (::GtkBuildableParser),
               "Buildable::Parser align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
