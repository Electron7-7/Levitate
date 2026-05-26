#pragma once

/* Auto-generated, do not modify */
/* Package gdk-pixbuf-2.0 */

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
#include <gdk-pixbuf/gdk-pixbuf.h>

peel_begin_header

namespace peel
{
namespace GdkPixbuf
{
struct PixbufModulePattern;
} /* namespace GdkPixbuf */


namespace GdkPixbuf
{
struct PixbufModulePattern
{
private:
#ifdef GDK_PIXBUF_ENABLE_BACKEND
#endif /* GDK_PIXBUF_ENABLE_BACKEND */
  PixbufModulePattern () = delete;
  PixbufModulePattern (const PixbufModulePattern &) = delete;
  PixbufModulePattern (PixbufModulePattern &&) = delete;
  ~PixbufModulePattern ();

public:
  const char *prefix;
  const char *mask;
  int relevance;
}; /* record PixbufModulePattern */

#ifdef GDK_PIXBUF_ENABLE_BACKEND
static_assert (sizeof (PixbufModulePattern) == sizeof (::GdkPixbufModulePattern),
               "PixbufModulePattern size mismatch");
static_assert (alignof (PixbufModulePattern) == alignof (::GdkPixbufModulePattern),
               "PixbufModulePattern align mismatch");
#endif /* GDK_PIXBUF_ENABLE_BACKEND */

} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
