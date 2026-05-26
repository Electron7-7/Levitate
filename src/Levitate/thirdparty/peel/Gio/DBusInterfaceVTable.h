#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/Gio/DBusInterface.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */


namespace Gio
{
struct DBusInterface::VTable
{
private:
  ::GDBusInterfaceVTable inner peel_no_warn_unused;

  VTable () = delete;
  VTable (const VTable &) = delete;
  VTable (VTable &&) = delete;
  ~VTable ();

  /* Some fields not yet supported */
public:
}; /* record DBusInterface::VTable */

static_assert (sizeof (DBusInterface::VTable) == sizeof (::GDBusInterfaceVTable),
               "DBusInterface::VTable size mismatch");
static_assert (alignof (DBusInterface::VTable) == alignof (::GDBusInterfaceVTable),
               "DBusInterface::VTable align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
