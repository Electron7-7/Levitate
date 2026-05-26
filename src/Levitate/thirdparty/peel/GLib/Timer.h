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
class /* record */ Timer;
} /* namespace GLib */


namespace GLib
{
class /* record */ Timer
{
private:
  Timer () = delete;
  Timer (const Timer &) = delete;
  Timer (Timer &&) = delete;
  ~Timer ();

public:
  void
  continue_ () noexcept
  {
    ::GTimer *_peel_this = reinterpret_cast<::GTimer *> (this);
    g_timer_continue (_peel_this);
  }

  void
  destroy () noexcept
  {
    ::GTimer *_peel_this = reinterpret_cast<::GTimer *> (this);
    g_timer_destroy (_peel_this);
  }

  /* Unsupported for now: elapsed: explicitly skipped */

  bool
  is_active () noexcept
  {
    ::GTimer *_peel_this = reinterpret_cast<::GTimer *> (this);
    gboolean _peel_return = g_timer_is_active (_peel_this);
    return !!_peel_return;
  }

  void
  reset () noexcept
  {
    ::GTimer *_peel_this = reinterpret_cast<::GTimer *> (this);
    g_timer_reset (_peel_this);
  }

  void
  start () noexcept
  {
    ::GTimer *_peel_this = reinterpret_cast<::GTimer *> (this);
    g_timer_start (_peel_this);
  }

  void
  stop () noexcept
  {
    ::GTimer *_peel_this = reinterpret_cast<::GTimer *> (this);
    g_timer_stop (_peel_this);
  }

  /* Unsupported for now: new: no idea about ownership semantics */
}; /* record Timer */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
