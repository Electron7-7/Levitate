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

peel_begin_header

namespace peel
{
namespace Gio
{
struct DBusSubtreeVTable;
} /* namespace Gio */


namespace Gio
{
struct DBusSubtreeVTable
{
private:
  ::GDBusSubtreeVTable inner peel_no_warn_unused;

  DBusSubtreeVTable () = delete;
  DBusSubtreeVTable (const DBusSubtreeVTable &) = delete;
  DBusSubtreeVTable (DBusSubtreeVTable &&) = delete;
  ~DBusSubtreeVTable ();

  /* Some fields not yet supported */
public:
}; /* record DBusSubtreeVTable */

static_assert (sizeof (DBusSubtreeVTable) == sizeof (::GDBusSubtreeVTable),
               "DBusSubtreeVTable size mismatch");
static_assert (alignof (DBusSubtreeVTable) == alignof (::GDBusSubtreeVTable),
               "DBusSubtreeVTable align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
