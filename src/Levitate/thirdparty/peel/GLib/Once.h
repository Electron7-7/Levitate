#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Once;
enum class OnceStatus : std::underlying_type<::GOnceStatus>::type;
} /* namespace GLib */


namespace GLib
{
struct Once
{
private:
  Once () = delete;
  Once (const Once &) = delete;
  Once (Once &&) = delete;
  ~Once ();

public:
  OnceStatus status;
  volatile gpointer *retval;

  void *
  impl (::GThreadFunc func, void *arg) noexcept
  {
    ::GOnce *_peel_this = reinterpret_cast<::GOnce *> (this);
    return g_once_impl (_peel_this, func, arg);
  }

  /* Unsupported for now: init_enter: explicitly skipped */

  /* Unsupported for now: init_enter_impl: explicitly skipped */

  /* Unsupported for now: init_enter_pointer: explicitly skipped */

  /* Unsupported for now: init_leave: explicitly skipped */

  /* Unsupported for now: init_leave_pointer: explicitly skipped */
}; /* record Once */

static_assert (sizeof (Once) == sizeof (::GOnce),
               "Once size mismatch");
static_assert (alignof (Once) == alignof (::GOnce),
               "Once align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
