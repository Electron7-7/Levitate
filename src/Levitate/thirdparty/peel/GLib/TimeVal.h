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
struct TimeVal;
} /* namespace GLib */


namespace GLib
{
struct TimeVal
{
private:

public:
  long tv_sec;
  long tv_usec;

  void
  add (long microseconds) noexcept
  {
    ::GTimeVal *_peel_this = reinterpret_cast<::GTimeVal *> (this);
    g_time_val_add (_peel_this, microseconds);
  }

  peel::String
  to_iso8601 () noexcept
  {
    ::GTimeVal *_peel_this = reinterpret_cast<::GTimeVal *> (this);
    gchar *_peel_return = g_time_val_to_iso8601 (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (1, 2)
  static bool
  from_iso8601 (const char *iso_date, TimeVal *time_) noexcept
  {
    ::GTimeVal *_peel_time_ = reinterpret_cast<::GTimeVal *> (time_);
    gboolean _peel_return = g_time_val_from_iso8601 (iso_date, _peel_time_);
    return !!_peel_return;
  }
}; /* record TimeVal */

static_assert (sizeof (TimeVal) == sizeof (::GTimeVal),
               "TimeVal size mismatch");
static_assert (alignof (TimeVal) == alignof (::GTimeVal),
               "TimeVal align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
