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
struct RecentData;
} /* namespace Gtk */


namespace Gtk
{
struct RecentData
{
private:
  RecentData () = delete;
  RecentData (const RecentData &) = delete;
  RecentData (RecentData &&) = delete;
  ~RecentData ();

public:
  const char *display_name;
  const char *description;
  const char *mime_type;
  const char *app_name;
  const char *app_exec;
private:
  char **groups;
public:
  gboolean is_private;
}; /* record RecentData */

static_assert (sizeof (RecentData) == sizeof (::GtkRecentData),
               "RecentData size mismatch");
static_assert (alignof (RecentData) == alignof (::GtkRecentData),
               "RecentData align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
