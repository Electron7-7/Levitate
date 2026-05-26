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
struct SvgLocation;
} /* namespace Gtk */


namespace Gtk
{
struct SvgLocation
{
private:
  SvgLocation () = delete;
  SvgLocation (const SvgLocation &) = delete;
  SvgLocation (SvgLocation &&) = delete;
  ~SvgLocation ();

public:
  size_t bytes;
  size_t lines;
  size_t line_chars;
}; /* record SvgLocation */

static_assert (sizeof (SvgLocation) == sizeof (::GtkSvgLocation),
               "SvgLocation size mismatch");
static_assert (alignof (SvgLocation) == alignof (::GtkSvgLocation),
               "SvgLocation align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
