#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct InterfaceInfo;
} /* namespace GObject */


namespace GObject
{
struct InterfaceInfo
{
private:
  InterfaceInfo () = delete;
  InterfaceInfo (const InterfaceInfo &) = delete;
  InterfaceInfo (InterfaceInfo &&) = delete;
  ~InterfaceInfo ();

  ::GInterfaceInitFunc interface_init;
  ::GInterfaceFinalizeFunc interface_finalize;
public:
  void *interface_data;
}; /* record InterfaceInfo */

static_assert (sizeof (InterfaceInfo) == sizeof (::GInterfaceInfo),
               "InterfaceInfo size mismatch");
static_assert (alignof (InterfaceInfo) == alignof (::GInterfaceInfo),
               "InterfaceInfo align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
