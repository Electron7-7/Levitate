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
#include <gdk/gdk.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
struct KeymapKey;
} /* namespace Gdk */


namespace Gdk
{
struct KeymapKey
{
private:

public:
  unsigned keycode;
  int group;
  int level;
}; /* record KeymapKey */

static_assert (sizeof (KeymapKey) == sizeof (::GdkKeymapKey),
               "KeymapKey size mismatch");
static_assert (alignof (KeymapKey) == alignof (::GdkKeymapKey),
               "KeymapKey align mismatch");

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
