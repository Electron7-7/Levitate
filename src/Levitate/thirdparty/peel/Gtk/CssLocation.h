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
struct CssLocation;
} /* namespace Gtk */


namespace Gtk
{
struct CssLocation
{
private:
  CssLocation () = delete;
  CssLocation (const CssLocation &) = delete;
  CssLocation (CssLocation &&) = delete;
  ~CssLocation ();

public:
  size_t bytes;
  size_t chars;
  size_t lines;
  size_t line_bytes;
  size_t line_chars;
}; /* record CssLocation */

static_assert (sizeof (CssLocation) == sizeof (::GtkCssLocation),
               "CssLocation size mismatch");
static_assert (alignof (CssLocation) == alignof (::GtkCssLocation),
               "CssLocation align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
