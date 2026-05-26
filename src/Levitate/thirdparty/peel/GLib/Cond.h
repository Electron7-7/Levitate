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
struct Cond;
union Mutex;
struct TimeVal;
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::Cond>
{
  static void
  free (GLib::Cond *ptr)
  {
    g_cond_free (reinterpret_cast<::GCond *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
struct Cond
{
private:
  ::GCond inner peel_no_warn_unused;


public:
  void
  broadcast () noexcept
  {
    ::GCond *_peel_this = reinterpret_cast<::GCond *> (this);
    g_cond_broadcast (_peel_this);
  }

  void
  clear () noexcept
  {
    ::GCond *_peel_this = reinterpret_cast<::GCond *> (this);
    g_cond_clear (_peel_this);
  }

  /* free bound as UniqueTraits */

  void
  init () noexcept
  {
    ::GCond *_peel_this = reinterpret_cast<::GCond *> (this);
    g_cond_init (_peel_this);
  }

  void
  signal () noexcept
  {
    ::GCond *_peel_this = reinterpret_cast<::GCond *> (this);
    g_cond_signal (_peel_this);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  timed_wait (Mutex *mutex, TimeVal *abs_time) noexcept
  {
    ::GCond *_peel_this = reinterpret_cast<::GCond *> (this);
    ::GMutex *_peel_mutex = reinterpret_cast<::GMutex *> (mutex);
    ::GTimeVal *_peel_abs_time = reinterpret_cast<::GTimeVal *> (abs_time);
    gboolean _peel_return = g_cond_timed_wait (_peel_this, _peel_mutex, _peel_abs_time);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  wait (Mutex *mutex) noexcept
  {
    ::GCond *_peel_this = reinterpret_cast<::GCond *> (this);
    ::GMutex *_peel_mutex = reinterpret_cast<::GMutex *> (mutex);
    g_cond_wait (_peel_this, _peel_mutex);
  }

  peel_nonnull_args (2)
  bool
  wait_until (Mutex *mutex, int64_t end_time) noexcept
  {
    ::GCond *_peel_this = reinterpret_cast<::GCond *> (this);
    ::GMutex *_peel_mutex = reinterpret_cast<::GMutex *> (mutex);
    gboolean _peel_return = g_cond_wait_until (_peel_this, _peel_mutex, end_time);
    return !!_peel_return;
  }

  static peel::UniquePtr<Cond>
  new_ () noexcept
  {
    ::GCond *_peel_return = g_cond_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Cond>::adopt_ref (reinterpret_cast<Cond *> (_peel_return));
  }
}; /* record Cond */

static_assert (sizeof (Cond) == sizeof (::GCond),
               "Cond size mismatch");
static_assert (alignof (Cond) == alignof (::GCond),
               "Cond align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
