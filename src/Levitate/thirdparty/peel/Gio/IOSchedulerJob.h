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
class /* record */ IOSchedulerJob;
} /* namespace Gio */


namespace Gio
{
class /* record */ IOSchedulerJob
{
private:
  IOSchedulerJob () = delete;
  IOSchedulerJob (const IOSchedulerJob &) = delete;
  IOSchedulerJob (IOSchedulerJob &&) = delete;
  ~IOSchedulerJob ();

public:
  template<typename SourceFunc>
  bool
  send_to_mainloop (SourceFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_notify;
    ::GIOSchedulerJob *_peel_this = reinterpret_cast<::GIOSchedulerJob *> (this);
    ::GSourceFunc _peel_func = peel::internals::CallbackHelper<gboolean>::wrap_notified_callback (
      static_cast<SourceFunc &&> (func),
      [] (gpointer user_data) -> gboolean
      {
        SourceFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<SourceFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_func ();
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_notify, peel::internals::is_const_invocable<SourceFunc, void>::value);
    gboolean _peel_return = g_io_scheduler_job_send_to_mainloop (_peel_this, _peel_func, _peel_user_data, _peel_notify);
    return !!_peel_return;
  }

  template<typename SourceFunc>
  void
  send_to_mainloop_async (SourceFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_notify;
    ::GIOSchedulerJob *_peel_this = reinterpret_cast<::GIOSchedulerJob *> (this);
    ::GSourceFunc _peel_func = peel::internals::CallbackHelper<gboolean>::wrap_notified_callback (
      static_cast<SourceFunc &&> (func),
      [] (gpointer user_data) -> gboolean
      {
        SourceFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<SourceFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_func ();
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_notify, peel::internals::is_const_invocable<SourceFunc, void>::value);
    g_io_scheduler_job_send_to_mainloop_async (_peel_this, _peel_func, _peel_user_data, _peel_notify);
  }
}; /* record IOSchedulerJob */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
